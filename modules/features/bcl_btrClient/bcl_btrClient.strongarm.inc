<?php
/**
 * @file
 * bcl_btrClient.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bcl_btrClient_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'btrClient_topcontrib_period';
  $strongarm->value = 'week';
  $export['btrClient_topcontrib_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'btrClient_topcontrib_size';
  $strongarm->value = '5';
  $export['btrClient_topcontrib_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bcl_export_notify_admin';
  $strongarm->value = 1;
  $export['bcl_export_notify_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bcl_export_path';
  $strongarm->value = '/var/www/exports';
  $export['bcl_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bcl_preferred_projects';
  $strongarm->value = 'test';
  $export['bcl_preferred_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bcl_translation_lng';
  $strongarm->value = 'sq';
  $export['bcl_translation_lng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bcl_voting_mode';
  $strongarm->value = 'single';
  $export['bcl_voting_mode'] = $strongarm;

  return $export;
}
