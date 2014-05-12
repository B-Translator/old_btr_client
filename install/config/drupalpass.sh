#!/bin/bash
### Set the admin password of Drupal.

base_url=$(drush @bcl eval 'print $GLOBALS["base_url"]')
echo "
===> Password for Drupal 'admin' on $base_url.
"
stty -echo
read -p "Enter the password: " passwd
stty echo
echo

$(dirname $0)/mysqld.sh start
drush @bcl user-password admin --password="$passwd"

### drush may create css/js files with wrong(root) permissions
rm -rf /var/www/bcl/sites/default/files/css/
rm -rf /var/www/bcl/sites/default/files/js/
