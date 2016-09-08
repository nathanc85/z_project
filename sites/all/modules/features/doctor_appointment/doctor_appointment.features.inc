<?php
/**
 * @file
 * doctor_appointment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function doctor_appointment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function doctor_appointment_node_info() {
  $items = array(
    'doctor_appointment' => array(
      'name' => t('Doctor Appointment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
