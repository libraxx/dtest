<?php

/**
 * @file
 * my的各种回调函数,
 */

/**
 * 菜单项my的回调函数.
 */
function my_home_page() {
	global $user;
	$render_array = array ();
	$render_array ['#markup'] = t ( '我的主页页面内容' );
	// 逻辑代码，比如
	// $render_array['#markup'] .= views_embed_view('my_home', 'block', $user->uid);
	return $render_array;
}

/**
 * 菜单项my/orders的回调函数.
 */
function my_orders_page() {
	global $user;
	$render_array = array ();
	$render_array ['#markup'] = t ( '我的订单页面内容' );
	// 逻辑代码，比如
	// $render_array['#markup'] .= views_embed_view('my_orders', 'block', $user->uid);
	return $render_array;
}

/**
 * 菜单项my/comments的回调函数.
 */
function my_comments_page() {
	global $user;
	$render_array = array ();
	$render_array ['#markup'] = t ( '我的评论页面内容' );
	// 逻辑代码，比如
	// $render_array['#markup'] .= views_embed_view('my_comments', 'block', $user->uid);
	return $render_array;
}

/**
 * 菜单项my/favorites的回调函数.
 */
function my_favorites_page() {
	global $user;
	$render_array = array ();
	$render_array ['#markup'] = t ( '我的收藏页面内容' );
	// 逻辑代码，比如
	// $render_array['#markup'] .= views_embed_view('my_favorites', 'block', $user->uid);
	return $render_array;
}
function my_user_page() {
	global $user;
	if ($user->uid > 0) {
		drupal_goto ( 'my' );
	} else {
		// drupal_goto('user/login');
		return drupal_get_form ( 'user_login' );
	}
}