#!/bin/bash

### read $lng
echo "
===> Translation language of B-Translator Client

This is the code of the translation language
of your client site (something like 'fr' or 'fr_FR').
"
lng='fr'
read -p "Enter the language code [$lng]: " input
lng=${input:-$lng}

### set drupal variable btrClient_translation_lng
$(dirname $0)/mysqld.sh start
drush @bcl --yes --exact vset btrClient_translation_lng $lng

### add $lng as a drupal language
drush @bcl language-add $lng
drush @bcl --yes l10n-update
