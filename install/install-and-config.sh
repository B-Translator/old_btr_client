#!/bin/bash -x

### set a temporary hostname
sed -i /etc/hosts \
    -e "/^127.0.0.1/c 127.0.0.1 example.org localhost"
hostname example.org

### go to the directory of scripts
cd $code_dir/install/scripts/

### additional packages and software
./packages-and-software.sh

### make and install the drupal profile 'btr_client'
export drupal_dir=/var/www/bcl
export drush="drush --root=$drupal_dir"
./drupal-make-and-install.sh

### additional configurations related to drupal
./drupal-config.sh

### system level configuration (services etc.)
./system-config.sh

### btr_client configuration
$code_dir/install/config.sh
