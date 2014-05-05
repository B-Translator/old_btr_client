<?php
/*
  For more info see:
    drush help site-alias
    drush topic docs-aliases

  See also:
    drush help rsync
    drush help sql-sync
 */

$aliases['btr'] = array (
  'root' => '/var/www/btr',
  'uri' => 'http://example.org',
  'path-aliases' => array (
    '%profile' => 'profiles/btranslator',
    '%downloads' => '/var/www/downloads',
  ),
);

$aliases['dev'] = array (
  'parent' => '@main',
  'root' => '/var/www/btr_dev',
  'uri' => 'http://dev.example.org',
);
