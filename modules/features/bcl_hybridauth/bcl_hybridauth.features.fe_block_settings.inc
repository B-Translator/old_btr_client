<?php
/**
 * @file
 * bcl_hybridauth.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bcl_hybridauth_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['hybridauth-hybridauth'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'hybridauth',
    'module' => 'hybridauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap1',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}