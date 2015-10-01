#!/bin/bash -x
### Reinstall the Drupal profile 'btr_client' and its features.
### This script touches only the database of Drupal (bcl)
### and nothing else. Useful for testing the features.
###
### Usually, when features are un-installed, things are not undone
### properly. To leave out a feature, it should not be installed
### since the beginning. So, it is important to test them.

### get the alias of the site to be reinstalled
if [ "$1" = '' ]
then
    echo "Usage: $0 @alias"
    exit 1
fi
alias=$1

### start mysqld manually, if it is not running
if test -z "$(ps ax | grep [m]ysqld)"
then
    nohup mysqld --user mysql >/dev/null 2>/dev/null &
    sleep 5  # give time mysqld to start
fi

### go to the directory of the site to be reinstalled
drupal_dir=$(drush $alias drupal-directory)
cd $drupal_dir

### settings for the database and the drupal site
db_name=$(drush sql-connect | tr ' ' "\n" | grep -e '--database=' | cut -d= -f2)
db_user=$(drush sql-connect | tr ' ' "\n" | grep -e '--user=' | cut -d= -f2)
db_pass=$(drush sql-connect | tr ' ' "\n" | grep -e '--password=' | cut -d= -f2)
lng=$(drush vget btrClient_translation_lng --format=string)
site_name=$(drush vget site_name --format=string)
site_mail=$(drush vget site_mail --format=string)
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

### install btrProject and btrVocabulary
drush --yes pm-enable btrProject
drush --yes pm-enable btrVocabulary

## install features modules
drush --yes pm-enable bcl_btrClient
drush --yes features-revert bcl_btrClient

drush --yes pm-enable bcl_misc
drush --yes features-revert bcl_misc

drush --yes pm-enable bcl_layout
drush --yes features-revert bcl_layout

drush --yes pm-enable bcl_content

#drush --yes pm-enable bcl_captcha
#drush --yes features-revert bcl_captcha

drush --yes pm-enable bcl_permissions
drush --yes features-revert bcl_permissions

drush --yes pm-enable bcl_disqus
#drush --yes pm-enable bcl_invite
#drush --yes pm-enable bcl_simplenews
#drush --yes pm-enable bcl_mass_contact
#drush --yes pm-enable bcl_googleanalytics
#drush --yes pm-enable bcl_drupalchat
#drush --yes pm-enable bcl_fb

### configure oauth2 login
export oauth2_server_url='https://dev.btranslator.org'
export oauth2_client_id='client1'
export oauth2_client_secret='0123456789'
config=$drupal_dir/profiles/btr_client/install/config
$config/oauth2_login.sh $alias

#exit

### add language
drush --yes pm-enable l10n_update
drush language-add $lng
drush --yes l10n-update

### update to the latest version of core and modules
#drush --yes pm-update
