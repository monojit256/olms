<?php
function olms_custom_admin_settings() {
	// Get an array of node types with internal names as keys and
	// "friendly names" as values. E.g.,
	// array('page' => ’Basic Page, 'article' => 'Articles')
	$types = node_type_get_types();
	foreach($types as $node_type) {
	$options[$node_type->type] = $node_type->name;
	}
	$form['annotate_node_types'] = array(
	'#type' => 'checkboxes',
	'#title' => t('Users may annotate these content types'),
	'#options' => $options,
	'#default_value' => variable_get('annotate_node_types', array('page')),
	'#description' => t('A text field will be available on these content types to
	make user-specific notes.'),
	);
	$form['#submit'][] = 'olms_admin_settings_submit';
	return system_settings_form($form);
}
function olms_admin_settings_submit($form,&$form_state)
{
	foreach ($form_state['values']['annotate_node_types'] as $key => $value) {
		if (!$value) {
			$instance = field_info_instance('node', 'olms', $key);
			if (!empty($instance)) {
				field_delete_instance($instance);
				watchdog("olms", 'Deleted annotation field from content type:
				%key', array('%key' => $key));
			}
		}
		else {
				// If the check box for a content type is checked, look to see whether
				// the field is associated with that content type. If not then add the
				// annotation field to the content type.
				$instance = field_info_instance('node', 'olms', $key);
				if (empty($instance)) {
				$instance = array(
				'field_name' => 'olms',
				'entity_type' => 'node',
				'bundle' => $key,
				'label' => t('olms'),
				'widget_type' => 'text_textarea_with_summary',
				'settings' => array('display_summary' => TRUE),
				'display' => array(
				'default' => array(
				'type' => 'text_default',
				),
				'teaser' => array(
				'type' => 'text_summary_or_trimmed',
				),
				),
				);
				$instance = field_create_instance($instance);
				watchdog('olms', 'Added annotation field to content type: %key',
				array('%key' => $key));
			}
		}
	} // End foreach loop.
			

}
