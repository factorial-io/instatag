<?php

/**
 * Page Callback of Instatag settings menu item.
 */
function instatag_settings() {
  $form = array();

  $form['instatag_snippet'] = array(
    '#type' => 'textarea',
    '#title' => t('Instatag snippet'),
    '#default_value' => variable_get('instatag_snippet', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
