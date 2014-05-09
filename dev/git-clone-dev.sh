#!/bin/bash
### Clone the dev branch from
### /var/www/bcl_dev/profiles/btrclient/

### create a symlink /var/www/bcl to the git repo
cd /var/www/
test -h B-Translator || ln -s bcl_dev/profiles/btrclient/ B-Translator

### on the repo create a 'dev' branch
cd B-Translator/
git branch dev master

### clone the dev branch
cd /var/www/bcl/profiles/
rm -rf btrclient-bak
mv btrclient btrclient-bak
git clone -b dev /var/www/B-Translator btrclient

### copy contrib libraries and modules
cp -a btrclient-bak/libraries/ btrclient/
cp -a btrclient-bak/modules/contrib/ btrclient/modules/
cp -a btrclient-bak/modules/libraries/ btrclient/modules/
cp -a btrclient-bak/themes/contrib/ btrclient/themes/
