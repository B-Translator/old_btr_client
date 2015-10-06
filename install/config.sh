#!/bin/bash

### get config settings from a file
if [ "$1" != '' ]
then
    settings=$1
    set -a
    source  $settings
    set +a
fi

bcl=/usr/local/src/btr_client/install

test -d /var/www/bcl_dev && $bcl/../dev/clone_rm.sh bcl_dev

$bcl/config/domain.sh
$bcl/config/mysql_passwords.sh
$bcl/config/mysql_btrclient.sh
$bcl/config/gmailsmtp.sh
$bcl/config/drupalpass.sh
$bcl/config/oauth2_login.sh
$bcl/config/translation_lng.sh
$bcl/config/ssh_keys.sh

if [ "$development" = 'true' ]
then
    $bcl/../dev/make-dev-clone.sh
fi

### drush may create some css/js files with wrong permissions
$bcl/config/fix_file_permissions.sh
