<?php

function example_title_callback($arg) {
  return t('Example @arg', array(
    '@arg' => $arg
  ));
}

function menu_routing_example_menu($first,$second,$third){
  return 'h1';
}



function example_deliver_page($page_callback_result) {
  if (is_null(drupal_get_http_header('Content-Type'))) {
    drupal_add_http_header('Content-Type', 'text/html; charset=utf-8');
  }

  // Send appropriate HTTP-Header for browsers and search engines.
  global $language;
  drupal_add_http_header('Content-Language', $language->language);

  // Render page and content
  print '<html><head></head><body>';
  print render($page_callback_result);
  print '</body></html>';

  drupal_page_footer();
}


function example_acces_callback($first,$second){
  return $access_result;//bool
}
