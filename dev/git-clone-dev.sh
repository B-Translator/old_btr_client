#!/bin/bash
### Clone the dev branch from
### /var/www/bcl_dev/profiles/btr_client/

### create a symlink /var/www/bcl to the git repo
cd /var/www/
test -h btr_client || ln -s bcl_dev/profiles/btr_client/ .

### on the repo create a 'dev' branch
cd btr_client/
git branch dev master

### clone the dev branch
cd /var/www/bcl/profiles/
rm -rf btr_client-bak
mv btr_client btr_client-bak
git clone -b dev /var/www/btr_client

### copy contrib libraries and modules
cp -a btr_client-bak/libraries/ btr_client/
cp -a btr_client-bak/modules/contrib/ btr_client/modules/
cp -a btr_client-bak/modules/libraries/ btr_client/modules/
cp -a btr_client-bak/themes/contrib/ btr_client/themes/
