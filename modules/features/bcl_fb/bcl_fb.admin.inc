<?php
/**
 * @file
 * Configuration of fb.
 */

/**
 * Implements hook_menu().
 */
function bcl_fb_menu() {
  $items = array();
  $items['admin/config/btr/fb'] = array(
    'title'            => 'FB',
    'description'      => 'Private FB settings.',
    'page callback'    => 'drupal_get_form',
    'page arguments'   => array('bcl_fb_config'),
    'access callback'  => TRUE,
  );

  return $items;
}


/**
 * Custom settings for FB.
 *
 * @return
 *   An array containing form items to placed on the module settings page.
 */
function bcl_fb_config() {
  $form = array();

  return system_settings_form($form);
}
