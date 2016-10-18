<?php
/**
 * @file
 * reports_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function reports_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-reports.
  $menus['menu-reports'] = array(
    'menu_name' => 'menu-reports',
    'title' => 'Reports',
    'description' => 'A list of links to all the reports.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A list of links to all the reports.');
  t('Reports');

  return $menus;
}
