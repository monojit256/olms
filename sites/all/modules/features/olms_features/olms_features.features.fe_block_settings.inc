<?php
/**
 * @file
 * olms_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function olms_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-master-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-master-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'book-master',
    'roles' => array(
      'administrator' => 3,
      'librarian' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-reports'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-reports',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'book-master',
    'roles' => array(
      'administrator' => 3,
      'librarian' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-category_of_books-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'category_of_books-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'book-display',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
