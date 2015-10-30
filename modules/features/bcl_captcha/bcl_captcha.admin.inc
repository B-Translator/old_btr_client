<?php
/**
 * @file
 * Configuration of reCaptcha (custom/private settings).
 */

/**
 * Implements hook_menu().
 */
function bcl_captcha_menu() {
  $items = array();
  $items['admin/config/bcl/captcha'] = array(
    'title'            => 'reCaptcha',
    'description'      => 'Private reCaptcha settings.',
    'page callback'    => 'drupal_get_form',
    'page arguments'   => array('bcl_captcha_config'),
    'access callback'  => TRUE,
  );

  return $items;
}


/**
 * Custom settings for Captcha.
 *
 * @return
 *   An array containing form items to place on the module settings page.
 */
function bcl_captcha_config() {
  $form['recaptcha_site_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Site key'),
    '#default_value' => variable_get('recaptcha_site_key', ''),
    '#maxlength' => 40,
    '#description' => t('The site key given to you when you <a href="@url">register for reCAPTCHA</a>.', array('@url' => 'http://www.\
google.com/recaptcha/admin')),
    '#required' => TRUE,
  );

  $form['recaptcha_secret_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret key'),
    '#default_value' => variable_get('recaptcha_secret_key', ''),
    '#maxlength' => 40,
    '#description' => t('The secret key given to you when you <a href="@url">register for reCAPTCHA</a>.', array('@url' => 'http://ww\
w.google.com/recaptcha/admin')),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
