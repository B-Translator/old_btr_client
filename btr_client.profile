<?php
/**
 * @file
 * Installation steps for the profile btr_client.
 */

// Use functions from the base profile.
require_once(drupal_get_path('profile', 'openatrium') . '/openatrium.profile');

/**
 * Implements hook_appstore_stores_info().
 */
function btr_client_apps_servers_info() {
  // Call the hook of the base profile.
  openatrium_apps_servers_info();
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form.
 *
 * Allows the profile to alter the site configuration form.
 */
function btr_client_form_install_configure_form_alter(&$form, $form_state) {
  // Call the hook of the base profile.
  openatrium_form_install_configure_form_alter($form, $form_state);

  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'B-Translator';
}

/**
 * Implements hook_form_FORM_ID_alter() for panopoly_theme_selection_form.
 */
function btr_client_form_panopoly_theme_selection_form_alter(&$form, &$form_state, $form_id) {
  // Call the hook of the base profile.
  openatrium_form_panopoly_theme_selection_form_alter($form, $form_state, $form_id);
}

/**
 * Implements hook_features_post_restore().
 */
function btr_client_features_post_restore($op, $items) {
  // Call the hook of the base profile.
  openatrium_features_post_restore($op, $items);
}

/**
 * Implements hook_menu_alter().
 */
function btr_client_menu_alter(&$items) {
  // Disable registration on the local site.
  unset($items['user/register']);
  //unset($items['user/password']);
}

