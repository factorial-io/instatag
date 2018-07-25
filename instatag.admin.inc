<?php

/**
 * Page Callback of Instatag settings menu item.
 */
function instatag_settings() {
  $form = array();

  $form['instatag_snippet_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Instatag snippet url'),
    '#default_value' => variable_get('instatag_snippet_url', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
