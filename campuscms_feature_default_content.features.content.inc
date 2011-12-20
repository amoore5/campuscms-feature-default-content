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
$content['event'] = (object)array(
  'exported_path' => 'content/dead-days',
  'title' => 'Dead Days',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'event',
  'language' => 'und',
  'created' => '1324423562',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'event',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>For easier theme development, the theme registry is being rebuilt on every page request. It is <em>extremely</em> important to <a href="admin/appearance/settings/inception">turn off this feature</a> on production websites.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>For easier theme development, the theme registry is being rebuilt on every page request. It is <em>extremely</em> important to <a href="admin/appearance/settings/inception">turn off this feature</a> on production websites.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_contact_address' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'CA',
        'sub_administrative_area' => NULL,
        'locality' => 'Merced',
        'dependent_locality' => NULL,
        'postal_code' => '95343',
        'thoroughfare' => '5200 North Lake Rd.',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_contact_department' => array(
    'und' => array(
      0 => array(
        'value' => 'Communications',
        'format' => NULL,
        'safe_value' => 'Communications',
      ),
    ),
  ),
  'field_event_contact_email' => array(
    'und' => array(
      0 => array(
        'email' => 'jasonmelgoza@gmail.com',
      ),
    ),
  ),
  'field_event_contact_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Jason Melgoza',
        'format' => NULL,
        'safe_value' => 'Jason Melgoza',
      ),
    ),
  ),
  'field_event_contact_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Web designer',
        'format' => NULL,
        'safe_value' => 'Web designer',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-20 15:30:00',
        'value2' => '2011-12-22 15:30:00',
        'timezone' => 'America/Los_Angeles',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Quad',
        'format' => NULL,
        'safe_value' => 'Quad',
      ),
    ),
  ),
);
$content['news-story'] = (object)array(
  'exported_path' => 'content/whispers-are-true',
  'title' => 'The Whispers Are True',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'news',
  'language' => 'und',
  'created' => '1324417704',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'news story',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.The burning of sugarcane fields prior to.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
',
        'summary' => 'Donec vitae felis nec ligula blandit rhoncus. Ut a pede ac neque mattis facilisis. Nulla nunc ipsum, sodales vitae, hendrerit non, imperdiet ac, ante. Morbi sit amet mi. Ut magna. Curabitur id est. Nulla velit. Sed consectetuer sodales justo. Aliquam dictum gravida libero. Sed eu turpis. Nunc id lorem. Aenean consequat tempor mi. Phasellus in neque. Nunc fermentum convallis ligula.',
        'format' => 'full_html',
        'safe_value' => '<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.The burning of sugarcane fields prior to.</p>
<p>The burning of sugarcane fields prior to harvest for ethanol production can create air pollution that detracts from the biofuel’s overall sustainability, according to research published recently by a team of researchers led by scientists at the University of California, Merced.</p>
',
        'safe_summary' => '<p>Donec vitae felis nec ligula blandit rhoncus. Ut a pede ac neque mattis facilisis. Nulla nunc ipsum, sodales vitae, hendrerit non, imperdiet ac, ante. Morbi sit amet mi. Ut magna. Curabitur id est. Nulla velit. Sed consectetuer sodales justo. Aliquam dictum gravida libero. Sed eu turpis. Nunc id lorem. Aenean consequat tempor mi. Phasellus in neque. Nunc fermentum convallis ligula.</p>
',
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-20 00:00:00',
        'timezone' => 'America/Los_Angeles',
        'timezone_db' => 'America/Los_Angeles',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_news_sub_head' => array(
    'und' => array(
      0 => array(
        'value' => 'Ut a pede ac neque mattis facilisis. Nulla nunc ipsum, sodales vitae, hendrerit non, imperdiet ac, ante.',
        'format' => NULL,
        'safe_value' => 'Ut a pede ac neque mattis facilisis. Nulla nunc ipsum, sodales vitae, hendrerit non, imperdiet ac, ante.',
      ),
    ),
  ),
);
$content['sample-form'] = (object)array(
  'exported_path' => 'content/sample-form-page',
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
    'weight' => '4',
    'identifier' => 'main-menu:node-name/sample-form',
  ),
  'title' => 'Sample Form Page',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1324423211',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'sample-form',
  'field_page_body' => array(
    'und' => array(
      0 => array(
        'value' => '<form accept-charset="UTF-8" id="webform-client-form-1" method="post" action="/campuscms/form/sample-form" enctype="multipart/form-data" class="webform-client-form"><div><div id="webform-component-first-name" class="form-item webform-component webform-component-textfield"><label for="edit-submitted-first-name">First Name <span title="This field is required." class="form-required">*</span></label><input type="text" class="form-text required" maxlength="128" size="25" value="" name="submitted[first_name]" id="edit-submitted-first-name"></div><div id="webform-component-last-name" class="form-item webform-component webform-component-textfield"><label for="edit-submitted-last-name">Last Name <span title="This field is required." class="form-required">*</span></label><input type="text" class="form-text required" maxlength="128" size="25" value="" name="submitted[last_name]" id="edit-submitted-last-name"></div><div id="webform-component-email" class="form-item webform-component webform-component-email"><label for="edit-submitted-email">Email </label><div class="description">Your personal email</div> <input type="text" maxlength="128" size="35" value="" name="submitted[email]" id="edit-submitted-email" class="email form-text"> </div> <div id="webform-component-birthdate" class="form-item webform-component webform-component-date"> <label for="edit-submitted-birthdate">Birthdate </label> <div class="webform-container-inline webform-datepicker"><div class="form-item form-type-select form-item-submitted-birthdate-month"> <label for="edit-submitted-birthdate-month" class="element-invisible">Month </label> <select name="submitted[birthdate][month]" id="edit-submitted-birthdate-month" class="month form-select"><option selected="selected" value="">Month</option><option value="1">Jan</option><option value="2">Feb</option><option value="3">Mar</option><option value="4">Apr</option><option value="5">May</option><option value="6">Jun</option><option value="7">Jul</option><option value="8">Aug</option><option value="9">Sep</option><option value="10">Oct</option><option value="11">Nov</option><option value="12">Dec</option></select> </div> <div class="form-item form-type-select form-item-submitted-birthdate-day"> <label for="edit-submitted-birthdate-day" class="element-invisible">Day </label> <select name="submitted[birthdate][day]" id="edit-submitted-birthdate-day" class="day form-select"><option selected="selected" value="">Day</option><option value="1">1</option><option value="2">2</option><option value="3">3</option><option value="4">4</option><option value="5">5</option><option value="6">6</option><option value="7">7</option><option value="8">8</option><option value="9">9</option><option value="10">10</option><option value="11">11</option><option value="12">12</option><option value="13">13</option><option value="14">14</option><option value="15">15</option><option value="16">16</option><option value="17">17</option><option value="18">18</option><option value="19">19</option><option value="20">20</option><option value="21">21</option><option value="22">22</option><option value="23">23</option><option value="24">24</option><option value="25">25</option><option value="26">26</option><option value="27">27</option><option value="28">28</option><option value="29">29</option><option value="30">30</option><option value="31">31</option></select> </div> <div class="form-item form-type-select form-item-submitted-birthdate-year"> <label for="edit-submitted-birthdate-year" class="element-invisible">Year </label> <select name="submitted[birthdate][year]" id="edit-submitted-birthdate-year" class="year form-select"><option selected="selected" value="">Year</option><option value="2009">2009</option><option value="2010">2010</option><option value="2011">2011</option><option value="2012">2012</option><option value="2013">2013</option></select> </div> <input type="image" title="Open popup calendar" alt="Open popup calendar" class="webform-calendar webform-calendar-start-2009-12-20 webform-calendar-end-2013-12-20 webform-calendar-day-0 hasDatepicker" src="/campuscms/profiles/campuscms_profile/modules/webform/images/calendar.png" id="dp1324423123654"> </div> </div> <div id="webform-component-bio" class="form-item webform-component webform-component-textarea"> <label for="edit-submitted-bio">Bio </label> <div class="description">Just give us a couple of lines about your self.</div> <div class="form-textarea-wrapper resizable textarea-processed resizable-textarea"><textarea class="form-textarea" rows="5" cols="75" name="submitted[bio]" id="edit-submitted-bio"></textarea><div class="grippie"></div></div> </div> <div id="webform-component-day" class="form-item webform-component webform-component-radios"> <label for="edit-submitted-day">Day </label> <div class="form-radios" id="edit-submitted-day"><div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="sunday" name="submitted[day]" id="edit-submitted-day-1">  <label for="edit-submitted-day-1" class="option">Sunday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="monday" name="submitted[day]" id="edit-submitted-day-2">  <label for="edit-submitted-day-2" class="option">Monday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="tuesday" name="submitted[day]" id="edit-submitted-day-3">  <label for="edit-submitted-day-3" class="option">Tuesday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="wednesday" name="submitted[day]" id="edit-submitted-day-4">  <label for="edit-submitted-day-4" class="option">Wednesday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="thursday" name="submitted[day]" id="edit-submitted-day-5">  <label for="edit-submitted-day-5" class="option">Thursday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="friday" name="submitted[day]" id="edit-submitted-day-6">  <label for="edit-submitted-day-6" class="option">Friday </label></div> <div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="saturday" name="submitted[day]" id="edit-submitted-day-7">  <label for="edit-submitted-day-7" class="option">Saturday </label></div> </div> </div> <input type="hidden" value="" name="details[sid]"> <input type="hidden" value="1" name="details[page_num]"> <input type="hidden" value="1" name="details[page_count]"> <input type="hidden" value="0" name="details[finished]"> <input type="hidden" value="form-eGPRo6JChuHeuVnc0vW20qu-43A84D-tVMsU_ARpU38" name="form_build_id"> <input type="hidden" value="PbcshoOHSbl84cZrLhJTmzUE7aqHCTk91VJ5ibAggbU" name="form_token"> <input type="hidden" value="webform_client_form_1" name="form_id"> <div id="edit-actions" class="form-actions form-wrapper"><input type="submit" class="form-submit" value="Submit" name="op" id="edit-submit"></div></div></form>',
        'format' => 'full_html',
        'safe_value' => '<form accept-charset="UTF-8" id="webform-client-form-1" method="post" action="/campuscms/form/sample-form" enctype="multipart/form-data" class="webform-client-form">
<div>
<div id="webform-component-first-name" class="form-item webform-component webform-component-textfield"><label for="edit-submitted-first-name">First Name <span title="This field is required." class="form-required">*</span></label><input type="text" class="form-text required" maxlength="128" size="25" value="" name="submitted[first_name]" id="edit-submitted-first-name" /></div>
<div id="webform-component-last-name" class="form-item webform-component webform-component-textfield"><label for="edit-submitted-last-name">Last Name <span title="This field is required." class="form-required">*</span></label><input type="text" class="form-text required" maxlength="128" size="25" value="" name="submitted[last_name]" id="edit-submitted-last-name" /></div>
<div id="webform-component-email" class="form-item webform-component webform-component-email"><label for="edit-submitted-email">Email </label><br /><div class="description">Your personal email</div>
<p> <input type="text" maxlength="128" size="35" value="" name="submitted[email]" id="edit-submitted-email" class="email form-text" /></p></div>
<div id="webform-component-birthdate" class="form-item webform-component webform-component-date"> <label for="edit-submitted-birthdate">Birthdate </label><br /><div class="webform-container-inline webform-datepicker">
<div class="form-item form-type-select form-item-submitted-birthdate-month"> <label for="edit-submitted-birthdate-month" class="element-invisible">Month </label><br /><select name="submitted[birthdate][month]" id="edit-submitted-birthdate-month" class="month form-select"><option selected="selected" value="">Month</option><option value="1">Jan</option><option value="2">Feb</option><option value="3">Mar</option><option value="4">Apr</option><option value="5">May</option><option value="6">Jun</option><option value="7">Jul</option><option value="8">Aug</option><option value="9">Sep</option><option value="10">Oct</option><option value="11">Nov</option><option value="12">Dec</option></select></div>
<div class="form-item form-type-select form-item-submitted-birthdate-day"> <label for="edit-submitted-birthdate-day" class="element-invisible">Day </label><br /><select name="submitted[birthdate][day]" id="edit-submitted-birthdate-day" class="day form-select"><option selected="selected" value="">Day</option><option value="1">1</option><option value="2">2</option><option value="3">3</option><option value="4">4</option><option value="5">5</option><option value="6">6</option><option value="7">7</option><option value="8">8</option><option value="9">9</option><option value="10">10</option><option value="11">11</option><option value="12">12</option><option value="13">13</option><option value="14">14</option><option value="15">15</option><option value="16">16</option><option value="17">17</option><option value="18">18</option><option value="19">19</option><option value="20">20</option><option value="21">21</option><option value="22">22</option><option value="23">23</option><option value="24">24</option><option value="25">25</option><option value="26">26</option><option value="27">27</option><option value="28">28</option><option value="29">29</option><option value="30">30</option><option value="31">31</option></select></div>
<div class="form-item form-type-select form-item-submitted-birthdate-year"> <label for="edit-submitted-birthdate-year" class="element-invisible">Year </label><br /><select name="submitted[birthdate][year]" id="edit-submitted-birthdate-year" class="year form-select"><option selected="selected" value="">Year</option><option value="2009">2009</option><option value="2010">2010</option><option value="2011">2011</option><option value="2012">2012</option><option value="2013">2013</option></select></div>
<p> <input type="image" title="Open popup calendar" alt="Open popup calendar" class="webform-calendar webform-calendar-start-2009-12-20 webform-calendar-end-2013-12-20 webform-calendar-day-0 hasDatepicker" src="/campuscms/profiles/campuscms_profile/modules/webform/images/calendar.png" id="dp1324423123654" /></p></div>
</div>
<div id="webform-component-bio" class="form-item webform-component webform-component-textarea"> <label for="edit-submitted-bio">Bio </label><br /><div class="description">Just give us a couple of lines about your self.</div>
<div class="form-textarea-wrapper resizable textarea-processed resizable-textarea"><textarea class="form-textarea" rows="5" cols="75" name="submitted[bio]" id="edit-submitted-bio"></textarea><br /><div class="grippie"></div>
</div>
</div>
<div id="webform-component-day" class="form-item webform-component webform-component-radios"> <label for="edit-submitted-day">Day </label><br /><div class="form-radios" id="edit-submitted-day">
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="sunday" name="submitted[day]" id="edit-submitted-day-1" /><label for="edit-submitted-day-1" class="option">Sunday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="monday" name="submitted[day]" id="edit-submitted-day-2" /><label for="edit-submitted-day-2" class="option">Monday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="tuesday" name="submitted[day]" id="edit-submitted-day-3" /><label for="edit-submitted-day-3" class="option">Tuesday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="wednesday" name="submitted[day]" id="edit-submitted-day-4" /><label for="edit-submitted-day-4" class="option">Wednesday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="thursday" name="submitted[day]" id="edit-submitted-day-5" /><label for="edit-submitted-day-5" class="option">Thursday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="friday" name="submitted[day]" id="edit-submitted-day-6" /><label for="edit-submitted-day-6" class="option">Friday </label></div>
<div class="form-item form-type-radio form-item-submitted-day"> <input type="radio" class="form-radio" value="saturday" name="submitted[day]" id="edit-submitted-day-7" /><label for="edit-submitted-day-7" class="option">Saturday </label></div>
</div>
</div>
<p> <input type="hidden" value="" name="details[sid]" /><input type="hidden" value="1" name="details[page_num]" /><input type="hidden" value="1" name="details[page_count]" /><input type="hidden" value="0" name="details[finished]" /><input type="hidden" value="form-eGPRo6JChuHeuVnc0vW20qu-43A84D-tVMsU_ARpU38" name="form_build_id" /><input type="hidden" value="PbcshoOHSbl84cZrLhJTmzUE7aqHCTk91VJ5ibAggbU" name="form_token" /><input type="hidden" value="webform_client_form_1" name="form_id" /><br /></p><div id="edit-actions" class="form-actions form-wrapper"><input type="submit" class="form-submit" value="Submit" name="op" id="edit-submit" /></div>
</div>
</form>
',
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
return $content;
}
