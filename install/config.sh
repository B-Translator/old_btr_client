#!/bin/bash

### get config settings from a file
if [ "$1" != '' ]
then
    settings=$1
    set -a
    source  $settings
    set +a
fi

bcl=/var/www/code/btr_client/install

$bcl/config/domain.sh
$bcl/config/mysql_passwords.sh
$bcl/config/mysql_btrclient.sh
$bcl/config/gmailsmtp.sh
$bcl/config/drupalpass.sh
$bcl/config/oauth2_login.sh
#$bcl/config/languages.sh

### drush may create some css/js files with wrong permissions
### clean them up
rm -rf /var/www/bcl/sites/default/files/*

$bcl/../dev/make-dev-clone.sh

$bcl/config/mysqld.sh stop
