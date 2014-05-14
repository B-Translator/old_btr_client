#!/bin/bash

cwd=$(dirname $0)

$cwd/config/domain.sh
$cwd/config/mysql_passwords.sh
$cwd/config/mysql_btrclient.sh
$cwd/config/gmailsmtp.sh
$cwd/config/drupalpass.sh
$cwd/config/btr_server.sh
$cwd/config/languages.sh

### drush may create some css/js files with wrong permissions
### clean them up
rm -rf /var/www/bcl/sites/default/files/*

$cwd/../dev/make-dev-clone.sh

$cwd/config/mysqld.sh stop
