<?php
/**
 * @file
 * monthly_earning.features.inc
 */

/**
 * Implements hook_views_api().
 */
function monthly_earning_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function monthly_earning_node_info() {
  $items = array(
    'monthly_earning' => array(
      'name' => t('Monthly earning'),
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
