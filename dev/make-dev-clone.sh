#!/bin/bash -x

### make a clone of /var/www/bcl to /var/www/bcl_dev
/var/www/code/btr_client/dev/clone.sh bcl bcl_dev

### add a test user
drush @btr_dev user-create user1 --password=user1 \
      --mail='user1@example.org' > /dev/null 2>&1
