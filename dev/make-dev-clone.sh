#!/bin/bash -x

### make a clone of /var/www/bcl to /var/www/bcl_dev
/usr/local/src/btr_client/dev/clone.sh bcl bcl_dev

### add a test user
drush @bcl_dev user-create user1 --password=pass1 \
      --mail='user1@example.org' > /dev/null 2>&1
