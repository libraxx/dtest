<?php
function block_morelink_label_settings() {
	$form ['block_morelink_label'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'More Link lable' ),
			'#maxlength' => 40,
			'#description' => t ( 'The More Link lable of the block as shown to the user.' ),
			'#default_value' => variable_get ( 'block_morelink_label', t ( 'More' ) ),
			'#weight' => - 17 
	);
	
	return system_settings_form ( $form, TRUE );
}