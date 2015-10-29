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
  $strongarm->name = 'btrClient_translation_lng';
  $strongarm->value = 'sq';
  $export['btrClient_translation_lng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'btrTranslations_topcontrib_period';
  $strongarm->value = 'week';
  $export['btrTranslations_topcontrib_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'btrTranslations_topcontrib_size';
  $strongarm->value = '5';
  $export['btrTranslations_topcontrib_size'] = $strongarm;

  return $export;
}
