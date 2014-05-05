#!/bin/bash
### Clone the dev branch from
### /var/www/btr_dev/profiles/btranslator/

### create a symlink /var/www/btr to the git repo
cd /var/www/
test -h Btranslator || ln -s btr_dev/profiles/btranslator/ Btranslator

### on the repo create a 'dev' branch
cd Btranslator/
git branch dev master

### clone the dev branch
cd /var/www/btr/profiles/
rm -rf btranslator-bak
mv btranslator btranslator-bak
git clone -b dev /var/www/Btranslator btranslator

### copy contrib libraries and modules
cp -a btranslator-bak/libraries/ btranslator/
cp -a btranslator-bak/modules/contrib/ btranslator/modules/
cp -a btranslator-bak/modules/libraries/ btranslator/modules/
cp -a btranslator-bak/themes/contrib/ btranslator/themes/
