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
$content['sample-form'] = (object)array(
  'exported_path' => 'form/sample-form',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/sample-form',
    'router_path' => 'node/%',
    'link_title' => 'Sample Form',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'identifier' => 'main-menu:node-name/sample-form',
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
        'mandatory' => '1',
        'weight' => '2',
        'page_num' => 1,
      ),
      3 => array(
        'pid' => '0',
        'form_key' => 'bio',
        'name' => 'Bio',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Add some quick information about yourself.',
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
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
  'created' => '1325632136',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'sample-form',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A quick and dirty webform sample.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>A quick and dirty webform sample.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
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
<h3>Example: Ordered List</h3>
<ol>
	<li>Apple</li>
	<li>Facebook</li>
	<li>Twitter</li>
	<li>Google</li>
	<li>Path</li>
</ol>
<p>This is a some <strong>text</strong>.</p>
<h3>Example: Un-ordered List</h3>
<ul>
	<li>Goodfellas</li>
	<li>The Godfather</li>
	<li>Back to the Future</li>
	<li>Ferris Bueller\'s Day Off</li>
	<li>The Dark Knight</li>
</ul>
<h3>Example: Default table styles</h3>
<p>All tables will be automatically styled with only the essential borders to ensure readability and maintain structure. No need to add extra classes or attributes.</p>
<table>
	<thead>
		<tr>
			<th>#</th>
			<th>First Name</th>
			<th>Last Name</th>
			<th>Language</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1</td>
			<td>Some</td>
			<td>One</td>
			<td>English</td>
		</tr>
		<tr>
			<td>2</td>
			<td>Joe</td>
			<td>Sixpack</td>
			<td>English</td>
		</tr>
		<tr>
			<td>3</td>
			<td>Stu</td>
			<td>Dent</td>
			<td>Code</td>
		</tr>
	</tbody>
</table>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><img src="http://placehold.it/550x300.png" /></p>
<h2>Header 2</h2>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Header 3</h3>
<p>Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h4>Header 4</h4>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. <em>Donec</em> risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Example: Ordered List</h3>
<ol><li>Apple</li>
<li>Facebook</li>
<li>Twitter</li>
<li>Google</li>
<li>Path</li>
</ol><p>This is a some <strong>text</strong>.</p>
<h3>Example: Un-ordered List</h3>
<ul><li>Goodfellas</li>
<li>The Godfather</li>
<li>Back to the Future</li>
<li>Ferris Bueller\'s Day Off</li>
<li>The Dark Knight</li>
</ul><h3>Example: Default table styles</h3>
<p>All tables will be automatically styled with only the essential borders to ensure readability and maintain structure. No need to add extra classes or attributes.</p>
<table><thead><tr><th>#</th>
<th>First Name</th>
<th>Last Name</th>
<th>Language</th>
</tr></thead><tbody><tr><td>1</td>
<td>Some</td>
<td>One</td>
<td>English</td>
</tr><tr><td>2</td>
<td>Joe</td>
<td>Sixpack</td>
<td>English</td>
</tr><tr><td>3</td>
<td>Stu</td>
<td>Dent</td>
<td>Code</td>
</tr></tbody></table><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
      ),
    ),
  ),
);
return $content;
}
