<?php
function annotate_mlogm_action_form($content) {
	$form ['beeps'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'Number of beeps' ),
			'#description' => t ( 'Enter the number of times to beep when action executes' ),
			'#default_value' => isset ( $content ['beeps'] ) ? $content ['beeps'] : '1',
			'#required' => TRUE 
	);
	return $form;
}
function annotate_mlogm_action_submit($form, $form_state) {
	return array (
			'beeps' => ( int ) $form_state ['values'] ['beeps'] 
	);
}
function annotate_mlogm_action_validate($form, $form_state) {
	$beeps = $form_state ['values'] ['beeps'];
	$sss = is_numeric ( $beeps );
	if (! is_numeric ( $beeps )) {
		form_set_error ( 'beeps', t ( 'Please enter a whole number between 0 and 10.' ) );
	} else if (( int ) $beeps > 10) {
		form_set_error ( 'beeps', t ( 'That would be too abboying. Please choose fewer than 10 beeps.' ) );
	} else if (( int ) $beeps < 0) {
		fomr_set_error ( 'beeps', t ( 'That would likely create a block hole! Beeps must a positive integer.' ) );
	}
}