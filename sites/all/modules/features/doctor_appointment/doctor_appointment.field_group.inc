<?php
/**
 * @file
 * doctor_appointment.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function doctor_appointment_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appointment_details|node|doctor_appointment|form';
  $field_group->group_name = 'group_appointment_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'doctor_appointment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_appointment';
  $field_group->data = array(
    'label' => 'Appointment Details',
    'weight' => '34',
    'children' => array(
      0 => 'field_date',
      1 => 'field_doctor_name',
      2 => 'field_details',
      3 => 'field_doctor_user',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_appointment_details|node|doctor_appointment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appointment|node|doctor_appointment|form';
  $field_group->group_name = 'group_appointment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'doctor_appointment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Appointment',
    'weight' => '3',
    'children' => array(
      0 => 'group_appointment_details',
      1 => 'group_personal_data',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_appointment|node|doctor_appointment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_data|node|doctor_appointment|form';
  $field_group->group_name = 'group_personal_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'doctor_appointment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_appointment';
  $field_group->data = array(
    'label' => 'Personal Data',
    'weight' => '35',
    'children' => array(
      0 => 'field_name',
      1 => 'field_age',
      2 => 'field_date_of_birth',
      3 => 'field_sex_option',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_personal_data|node|doctor_appointment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Appointment');
  t('Appointment Details');
  t('Personal Data');

  return $field_groups;
}
