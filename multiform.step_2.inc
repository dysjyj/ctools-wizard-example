<?php

/**
 * @file
 *   A form that does nothing
 */

function multiform_step_2_form($form, &$form_state) {
  $form['box_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Box Two'),
    '#description' => t('Enter something here'),
    '#default_value' => !empty($form_state['object']->box_two) ? $form_state['object']->box_two : NULL,
    '#markup' => $intro,
  );

  return $form;
}

function multiform_step_2_form_validate($form, &$form_state) {
}

function multiform_step_3_form_submit($form, &$form_state) {
  $form_state['object']->box_two = !empty($form_state['values']['box_two']) ? $form_state['values']['box_two'] : NULL;
}
