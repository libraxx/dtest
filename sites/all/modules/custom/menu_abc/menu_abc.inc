<?php
/**
 * 菜单项menu_abc的回调函数.
 */
function menu_abc_callback_page() {
	// $render_array = array ();
	$render_array ['#markup'] = t ( '菜单ABC页面内容' );
	return $render_array;
}
function menu_abc_my_title() {
	global $user;
	$title = $user->name . t ( '的主页' );
	return $title;
}
function menu_abc_sub_callback_page($arg1 = '', $arg2 = '', $arg3 = '', $arg4 = '') {
	$render_array = array ();
	$render_array ['#markup'] = t ( '菜单ABC子页面内容 @arg1 @arg2 @arg3 @arg4', array (
			'@arg1' => $arg1,
			'@arg2' => $arg2,
			'@arg3' => $arg3,
			'@arg4' => $arg4 
	) );
	return $render_array;
}