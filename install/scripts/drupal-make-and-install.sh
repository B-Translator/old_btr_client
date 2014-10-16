#!/bin/bash -x

### make sure that we have the right git branch on the make file
makefile="$code_dir/build-btrclient.make"
sed -i $makefile \
    -e "/btr_client..download..branch/ c projects[btr_client][download][branch] = $git_branch"

### retrieve all the projects/modules and build the application directory
rm -rf $drupal_dir
drush make --prepare-install --force-complete \
           --contrib-destination=profiles/btr_client \
           $makefile $drupal_dir

### copy hybriauth provider DrupalOAuth2.php to the right place
cd $drupal_dir/profiles/btr_client/libraries/
cp hybridauth-drupaloauth2/DrupalOAuth2.php \
   hybridauth/hybridauth/Hybrid/Providers/

### copy libraries from the profile openatrium
cd $drupal_dir/profiles/
cp -a openatrium/libraries/* btr_client/libraries/

### Replace the profile btr_client with a version
### that is a git clone, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).
cd $drupal_dir/profiles/
mv btr_client btr_client-bak
cp -a $code_dir .
### copy contrib libraries and modules
cp -a btr_client-bak/libraries/ btr_client/
cp -a btr_client-bak/modules/contrib/ btr_client/modules/
cp -a btr_client-bak/themes/contrib/ btr_client/themes/
### cleanup
rm -rf btr_client-bak/

### get a clone of btrclient from github
if [ "$development" = 'true' ]
then
    cd $drupal_dir/profiles/btr_client/modules/contrib/btrclient
    git clone https://github.com/B-Translator/btrclient.git
    cp -a btrclient/.git .
    rm -rf btrclient/
fi

### create the downloads dir
mkdir -p /var/www/downloads/
chown www-data /var/www/downloads/

### start mysqld manually, if it is not running
if test -z "$(ps ax | grep [m]ysqld)"
then
    nohup mysqld --user mysql >/dev/null 2>/dev/null &
    sleep 5  # give time mysqld to start
fi

### settings for the database and the drupal site
db_name=bcl
db_user=bcl
db_pass=bcl
site_name="B-Translator"
site_mail="admin@example.org"
account_name=admin
account_pass=admin
account_mail="admin@example.org"

### create the database and user
mysql='mysql --defaults-file=/etc/mysql/debian.cnf'
$mysql -e "
    DROP DATABASE IF EXISTS $db_name;
    CREATE DATABASE $db_name;
    GRANT ALL ON $db_name.* TO $db_user@localhost IDENTIFIED BY '$db_pass';
"

### start site installation
sed -e '/memory_limit/ c memory_limit = -1' -i /etc/php5/cli/php.ini
cd $drupal_dir
drush site-install --verbose --yes btr_client \
      --db-url="mysql://$db_user:$db_pass@localhost/$db_name" \
      --site-name="$site_name" --site-mail="$site_mail" \
      --account-name="$account_name" --account-pass="$account_pass" --account-mail="$account_mail"

### set drupal variable btrClient_translation_lng
drush --root=$drupal_dir --yes --exact vset btrClient_translation_lng $translation_lng

### install also multi-language support
mkdir -p $drupal_dir/sites/all/translations
chown -R www-data: $drupal_dir/sites/all/translations

### add $translation_lng as a drupal language
drush --root=$drupal_dir language-add $translation_lng

### set propper directory permissions
mkdir -p sites/default/files/
chown -R www-data: sites/default/files/
mkdir -p cache/
chown -R www-data: cache/
