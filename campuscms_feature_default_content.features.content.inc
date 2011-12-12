<?php
/**
 * @file
 * campuscms_feature_default_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function campuscms_feature_default_content_content_defaults() {
$content = array();
$content['sample-page'] = (object)array(
  'exported_path' => 'content/sample-page',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/sample-page',
    'router_path' => 'node/%',
    'link_title' => 'Sample page',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'identifier' => 'main-menu:node-name/sample-page',
  ),
  'title' => 'Sample Page',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323190706',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'sample-page',
  'field_page_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><img src="http://placehold.it/550x300.png"></p>
<h2>Header 2</h2>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Header 3</h3>
<p>Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h4>Header 4</h4>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. <em>Donec</em> risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<ol>
	<li>Apple</li>
	<li>Facebook</li>
	<li>Twitter</li>
	<li>Google</li>
	<li>Path</li>
</ol>
<p>This is a some <strong>text</strong>.</p>
<ul>
	<li>Casino</li>
	<li>Godfather</li>
	<li>Goodfellas</li>
	<li>The Dark Knight</li>
</ul>
<hr>
<p>&nbsp;</p>
<table style="width: 500px; height: 128px;" border="1" cellpadding="1" cellspacing="1">
	<thead>
		<tr>
			<th scope="col">Header</th>
			<th scope="col">Number</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				<p>One</p>
			</td>
			<td>1.01</td>
		</tr>
		<tr>
			<td>Three</td>
			<td>2.02</td>
		</tr>
	</tbody>
</table>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p><img src="http://placehold.it/550x300.png" /></p>
<h2>Header 2</h2>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Header 3</h3>
<p>Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h4>Header 4</h4>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. <em>Donec</em> risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<ol><li>Apple</li>
<li>Facebook</li>
<li>Twitter</li>
<li>Google</li>
<li>Path</li>
</ol><p>This is a some <strong>text</strong>.</p>
<ul><li>Casino</li>
<li>Godfather</li>
<li>Goodfellas</li>
<li>The Dark Knight</li>
</ul><p> </p>
<table border="1" cellpadding="1" cellspacing="1"><tr><th scope="col">Header</th>
<th scope="col">Number</th>
</tr><tbody><tr><td>
				One
			</td>
<td>1.01</td>
</tr><tr><td>Three</td>
<td>2.02</td>
</tr></tbody></table><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
      ),
    ),
  ),
);
$content['sample-web-form'] = (object)array(
  'exported_path' => 'form/sample-form',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/sample-web-form',
    'router_path' => 'node/%',
    'link_title' => 'Sample Form',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'identifier' => 'main-menu:node-name/sample-web-form',
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(
      0 => array(
        'pid' => '0',
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'page_num' => 1,
      ),
      1 => array(
        'pid' => '0',
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '1',
        'page_num' => 1,
      ),
      2 => array(
        'pid' => '0',
        'form_key' => 'birthdate',
        'name' => 'Birthdate',
        'type' => 'date',
        'value' => '',
        'extra' => array(
          'timezone' => 'user',
          'title_display' => 'before',
          'private' => 0,
          'datepicker' => 1,
          'year_textfield' => 0,
          'start_date' => '-2 years',
          'end_date' => '+2 years',
          'conditional_operator' => '=',
          'description' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '2',
        'page_num' => 1,
      ),
      3 => array(
        'pid' => '0',
        'form_key' => 'id_number',
        'name' => 'ID Number',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'Your last four digits of your social security number.',
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'field_prefix' => '#',
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => '4',
          'conditional_operator' => '=',
          'field_suffix' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '3',
        'page_num' => 1,
      ),
    ),
  ),
  'title' => 'Sample Form',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1323724455',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'sample-web-form',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This a sample web form.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This a sample web form.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $content;
}
