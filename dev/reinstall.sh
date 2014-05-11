#!/bin/bash
### Reinstall btr_client from scratch.
### Useful for testing installation scripts.

export drupal_dir=/var/www/bcl
export drush="drush --root=$drupal_dir"

mv $drupal_dir $drupal_dir-bak

cd $(dirname $0)
cd ../install/install-scripts/

./20-make-and-install.sh
./30-git-clone.sh
./40-configure.sh

../config.sh
