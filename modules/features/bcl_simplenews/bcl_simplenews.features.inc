<?php
/**
 * @file
 * bcl_simplenews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcl_simplenews_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
