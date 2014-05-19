#!/bin/bash -x

export DEBIAN_FRONTEND=noninteractive

export drupal_dir=/var/www/bcl
export drush="drush --root=$drupal_dir"

cd $code_dir/btr_client/install/install-scripts/

./10-additional-packages.sh
./20-make-and-install.sh
./30-git-clone.sh
./40-configure.sh

### copy overlay files over to the system
cp -TdR ../overlay/ /

./50-misc-config.sh
