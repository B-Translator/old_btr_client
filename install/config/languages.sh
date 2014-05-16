#!/bin/bash

### read $bcl_translation_lng
echo "
===> Translation language of B-Translator Client

This is the code of the translation language
of your client site (something like 'fr' or 'fr_FR').
"
if [ -z "${bcl_translation_lng+xxx}" -o "$bcl_translation_lng" = '' ]
then
    bcl_translation_lng='fr'
    read -p "Enter the language code [$bcl_translation_lng]: " input
    bcl_translation_lng=${input:-$bcl_translation_lng}
fi

### set drupal variable btrClient_translation_lng
$(dirname $0)/mysqld.sh start
drush @bcl --yes --exact vset btrClient_translation_lng $bcl_translation_lng

### add $bcl_translation_lng as a drupal language
drush @bcl language-add $bcl_translation_lng
drush @bcl --yes l10n-update
