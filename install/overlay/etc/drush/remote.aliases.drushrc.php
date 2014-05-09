<?php

/* uncomment and modify properly

$aliases['live'] = array (
  'root' => '/var/www/bcl',
  'uri' => 'http://example.org',

  'remote-host' => 'example.org',
  'remote-user' => 'root',
  'ssh-options' => '-p 2201 -i /root/.ssh/id_rsa',

  'path-aliases' => array (
    '%profile' => 'profiles/btr_client',
    '%exports' => '/var/www/exports',
    '%downloads' => '/var/www/downloads',
  ),

  'command-specific' => array (
    'sql-sync' => array (
      'simulate' => '1',
    ),
    'rsync' => array (
      'simulate' => '1',
    ),
  ),
);

$aliases['test'] = array (
  'parent' => '@live',
  'root' => '/var/www/bcl_test',
  'uri' => 'http://test.example.org',

  'command-specific' => array (
    'sql-sync' => array (
      'simulate' => '0',
    ),
    'rsync' => array (
      'simulate' => '0',
    ),
  ),
);

*/