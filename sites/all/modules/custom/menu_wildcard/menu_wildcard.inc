<?php
/**
 * 菜单项wildcard/%的回调函数.
 */
function menu_wildcard_callback_page($arg1 = '', $arg2 = '', $arg3 = '', $arg4 = '') {
	$render_array = array ();
	$render_array ['#markup'] = t ( '菜单通配符示例页面内容' );
	$render_array ['#markup'] .= '<div>' . t ( '参数1：@arg1', array (
			'@arg1' => $arg1 
	) ) . '</div>';
	$render_array ['#markup'] .= '<div>' . t ( '参数2：@arg2', array (
			'@arg2' => $arg2 
	) ) . '</div>';
	$render_array ['#markup'] .= '<div>' . t ( '参数3：@arg3', array (
			'@arg3' => $arg3 
	) ) . '</div>';
	$render_array ['#markup'] .= '<div>' . t ( '参数4：@arg4', array (
			'@arg4' => $arg4 
	) ) . '</div>';
	return $render_array;
}