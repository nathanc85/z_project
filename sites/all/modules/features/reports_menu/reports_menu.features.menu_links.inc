<?php
/**
 * @file
 * reports_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reports_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-reports_august-earnings:node/2.
  $menu_links['menu-reports_august-earnings:node/2'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'August Earnings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-reports_august-earnings:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_contact-us:node/6.
  $menu_links['menu-reports_contact-us:node/6'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-reports_contact-us:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_july-earnings:node/3.
  $menu_links['menu-reports_july-earnings:node/3'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'July Earnings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-reports_july-earnings:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_september-earnings:node/1.
  $menu_links['menu-reports_september-earnings:node/1'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'September Earnings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-reports_september-earnings:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('August Earnings');
  t('Contact Us');
  t('July Earnings');
  t('September Earnings');

  return $menu_links;
}
