#!/bin/bash
### Set the admin password of Drupal.

### get a password for the Drupal user 'admin'
if [ -z "${bcl_admin_passwd+xxx}" -o "$bcl_admin_passwd" = '' ]
then
    base_url=$(drush @bcl eval 'print $GLOBALS["base_url"]')
    echo
    echo "===> Password for Drupal 'admin' on $base_url."
    echo
    stty -echo
    read -p "Enter the password: " bcl_admin_passwd
    stty echo
    echo
fi

### set the password
drush @bcl user-password admin --password="$bcl_admin_passwd"
