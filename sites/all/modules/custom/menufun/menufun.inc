<?php
function menufun_hello($firstname, $lastname) {
	return t ( '<p>menufun say hello 2 @firstname  &nbsp;  @lastname . </p>', array (
			'@firstname' => $firstname,
			'@lastname' => $lastname 
	) );
}
function menu_farewell() {
	return 'goodbye';
}