<?php
/**
 * @file
 * olms_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function olms_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-master-menu.
  $menus['menu-master-menu'] = array(
    'menu_name' => 'menu-master-menu',
    'title' => 'Master Menu',
    'description' => '',
  );
  // Exported menu: menu-reports.
  $menus['menu-reports'] = array(
    'menu_name' => 'menu-reports',
    'title' => 'Reports',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Master Menu');
  t('Reports');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
