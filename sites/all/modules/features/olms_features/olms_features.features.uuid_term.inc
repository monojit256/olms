<?php
/**
 * @file
 * olms_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function olms_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Fiction',
    'description' => 'Fictions Books Catagory',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2276ca3b-463c-41b9-a8d7-11ec73462877',
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'Non-Ficition',
    'description' => 'Non-Fiction Books Catagory',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dbd30bf9-e975-4caf-a1fb-3cf5e5eb93a9',
    'vocabulary_machine_name' => 'category',
  );
  return $terms;
}
