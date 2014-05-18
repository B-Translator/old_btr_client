#!/bin/bash -x
### Replace the profile btr_client with a version
### that is cloned from github, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).

### clone btr_client from github
cd $drupal_dir/profiles/
mv btr_client btr_client-bak
git clone --branch master https://github.com/B-Translator/btr_client.git

### copy contrib libraries and modules
cp -a btr_client-bak/libraries/ btr_client/
cp -a btr_client-bak/modules/contrib/ btr_client/modules/
cp -a btr_client-bak/themes/contrib/ btr_client/themes/

### cleanup
rm -rf btr_client-bak/