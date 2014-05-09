#!/bin/bash -x
### Replace the profile btrclient with a version
### that is cloned from github, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).

### clone btrclient from github
cd $drupal_dir/profiles/
mv btrclient btrclient-bak
git clone https://github.com/B-Translator/client btrclient

### copy contrib libraries and modules
cp -a btrclient-bak/libraries/ btrclient/
cp -a btrclient-bak/modules/contrib/ btrclient/modules/
cp -a btrclient-bak/themes/contrib/ btrclient/themes/

### cleanup
rm -rf btrclient-bak/