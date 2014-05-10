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
  $strongarm->name = 'btrClient_translation_lng';
  $strongarm->value = 'sq';
  $export['btrClient_translation_lng'] = $strongarm;

  return $export;
}
