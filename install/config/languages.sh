#!/bin/bash

### read $lng
echo "
===> Translation language of B-Translator Client

This is the code of the translation language
of your site (something like 'fr' or 'fr_FR').
"
lng='fr'
read -p "Enter the language code [$lng]: " input
lng=${input:-$lng}

### set drupal variable btrClient_translation_lng
$(dirname $0)/mysqld.sh start
drush @btr --yes --exact vset btrClient_translation_lng $lng

### add $lng as a drupal language
drush @btr language-add $lng
drush @btr --yes l10n-update
