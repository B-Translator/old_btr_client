#!/bin/bash

### get config settings from etc/config.sh
set -a
.  $(dirname $0)/etc/config.sh
set +a

bcl=/var/www/bcl/profiles/btr_client/install

$bcl/config/domain.sh
$bcl/config/mysql_passwords.sh
$bcl/config/mysql_btrclient.sh
$bcl/config/gmailsmtp.sh
$bcl/config/drupalpass.sh
$bcl/config/oauth2_login.sh
$bcl/config/languages.sh

### drush may create some css/js files with wrong permissions
### clean them up
rm -rf /var/www/bcl/sites/default/files/*

$bcl/../dev/make-dev-clone.sh

$bcl/config/mysqld.sh stop
