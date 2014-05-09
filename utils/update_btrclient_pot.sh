#/bin/bash
### Extract translatable strings of btr_client
### and update the file 'btrclient.pot'.
###
### Run it on a copy of btr_client that is just
### cloned from git, don't run it on an installed
### copy of btr_client, otherwise 'potx-cli.php'
### will scan also the other modules that are on
### the directory 'modules/'.

### go to the btr_client directory
cd $(dirname $0)
cd ..

### extract translatable strings
utils/potx-cli.php

### concatenate files 'general.pot' and 'installer.pot' into 'btrclient.pot'
msgcat --output-file=btrclient.pot general.pot installer.pot
rm -f general.pot installer.pot
mv -f btrclient.pot l10n/

### merge/update with previous translations
for po_file in $(ls l10n/btrclient.*.po)
do
    msgmerge --update --previous $po_file l10n/btrclient.pot
done

