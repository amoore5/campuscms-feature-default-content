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
