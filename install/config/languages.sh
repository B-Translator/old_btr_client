#!/bin/bash

### read $translation_lng
echo "
===> Translation language of B-Translator Client

This is the code of the translation language
of your client site (something like 'fr' or 'fr_FR').
"
if [ -z "${translation_lng+xxx}" -o "$translation_lng" = '' ]
then
    translation_lng='fr'
    read -p "Enter the language code [$translation_lng]: " input
    translation_lng=${input:-$translation_lng}
fi

### set drupal variable btrClient_translation_lng
$(dirname $0)/mysqld.sh start
drush @bcl --yes --exact vset btrClient_translation_lng $translation_lng

### add $translation_lng as a drupal language
drush @bcl language-add $translation_lng
drush @bcl --yes l10n-update
