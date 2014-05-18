#!/bin/bash -x

### retrieve all the projects/modules and build the application directory
makefile="/var/www/code/btr_client/build-btrclient.make"
rm -rf $drupal_dir
drush make --prepare-install --force-complete \
           --contrib-destination=profiles/btr_client \
           $makefile $drupal_dir
cp -a $drupal_dir/profiles/btr_client/{libraries/bootstrap,themes/contrib/bootstrap/}
cp $drupal_dir/profiles/btr_client/libraries/hybridauth/{additional-providers/hybridauth-drupaloauth2/Providers/DrupalOAuth2.php,hybridauth/Hybrid/Providers/}

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

### set propper directory permissions
mkdir -p sites/default/files/
chown -R www-data: sites/default/files/
mkdir -p cache/
chown -R www-data: cache/
