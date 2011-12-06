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
    'link_title' => 'This is a page',
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
        'value' => '<h2><img alt="Test" src="http://localhost:8888/campuscms/sites/default/files/page/images/ffffff.png" title="test" height="250" width="500"></h2>
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
        'safe_value' => '<h2><img alt="Test" src="http://localhost:8888/campuscms/sites/default/files/page/images/ffffff.png" title="test" height="250" width="500" /></h2>
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
</ul><p>Â </p>
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
  'field_page_image' => array(
    'und' => array(
      0 => array(
        'alt' => 'Test',
        'title' => 'test',
        'width' => '500',
        'height' => '250',
        'filename' => 'ffffff.png',
        'uri' => 'public://ffffff.png',
        'filemime' => 'image/png',
        'filesize' => '1418',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => '‰PNG

' . "\0" . '' . "\0" . '' . "\0" . 'IHDR' . "\0" . '' . "\0" . 'ô' . "\0" . '' . "\0" . '' . "\0" . 'ú' . "\0" . '' . "\0" . '' . "\0" . '¥…¨}' . "\0" . '' . "\0" . '' . "\0" . 'PLTE333ÿÿÿåååLLLfff™™™ÌÌÌ²²²áIÊy' . "\0" . '' . "\0" . '*IDATxœíšËsG‡£w%ƒÚXûF±s„è’£(Ç*EWa\'U9";*åÏÎt÷ììò’*’È÷•Kô²ŞßÎôcfI' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '€‹z*%I.¯™½ùşCúü´â¤çöÍxÿûĞ–Ï>àb¿,5•ş$IôÕ®ë5¥“wÍ{ÿ{ÿg»Ş/Èé¯ÍÌÎ‚“÷Ìï°ôFnfzœì¸_Ú;*ıeZ†İGbî=Dz=*é¡»šS7 ú:LüŒ^8<	ÁßI½ÿ½8‰IºéYåU‡õº’WÇ¶îD}i:üSšQKmÏÜkkMúS±&;,İiËúv¼"ıP¬ÙK¿*Rûštíwò–î´]ú÷W¤ËéFº]úÉİÉ/jéÍ¢Šm>Õ¤¿Ÿ§/Ôªë¹fŞÓ£æMşÍŸÅçnÒìÚÛ‹üÛ¨¥ï…ŞåíÛrpå’s™í4+üÖO|¥7Ø—WZícj´ïø8fé­°†©"Ò¯d3H«EĞŠHï5}×3¶÷U¯Ù–5[E·ğŸ	»›eémŸÉ—]cIîOY	
]Ú¾´DØô³¤´åö·$béõ°D«""²€™§ûe:T¾Íq•AîM½¢°°å^6ÒÇ ı`İG¤×äª]î‘KË\'ËxísÓ?dïê~vú.W…Îî¾ùÁ’‡øËûQº…‘ğËªßK›#:³»É«¾N†g‰Ú#]NÕßÅF\'féµ­Òİ¸-Ü¥OÍo¢[5-[Æ).ÔF•Ş´ˆŸi£0Ñïº¸Õ|¯¾Œ\\²‹Ö#7vgæ7Ó±l–ùÌ’£/*½eSÂnÒLÛ„Ø¥ou7ŸNœ0ó»ÒÑm˜9}¤?~=W[¾j ¢¯tì£–¾=ÖİÀuİ?ï7—Õıph9¬Y|‡ÔÆP œ}à\\š
çÅ,y”Ò\'ioî¢ÁüŠÚº_s¬~<Ô9	!MyJù×[ëº;•ån^›_ºYz5^jUéiŒÒm<4loíælojq§ô%W¥ŸÅ(}šØUõoëá­„í’ô¹m8ú«Ú¾rÓ›”%k±Ş_‰õ ½ŒõıH\'¼•í4“ÛÖëêyX‘¾zg„•4W¶Q¦9k6$È‹¨Í»4EGŠÛhåt’¬·à’ÇXÜÆ685Ÿß¶îÍ©Ë“¤li¦+§…N%KvªÅÂÂ*2ékÀÆ^òdÛ¬jYÒgÕç‘¥¢j–lU‹ÅLû½È¤×UKÃ¯?·ïÃk
Ò\'æŞù\\.,ÉıP3’¿äÏXı#“.ù­Û—eµÆ¸n<oxú’ˆê¤ÒúÊFœÎŠ"K¯õîå:3Ì¨;.éåşÉHçáxù™Û°Ÿ|zÑÉûı»™ÍZpïôt«Â‚¢÷æôC×?II~‘[˜y¥>H·>iÕ;áû”²°‡M)ûx(æ£e»¼Á:¦¯FÛ_“/Â[Ÿ¯/KŸx¯Eå½¤ÜŠìUìò‰Ué…Öb·üªbEú^)±*½Øy½\\µuF¶9ç·È?†cû-ÍçÒa“t{¡Å}Iº=vè®Ù:ìÙ÷‘IO^}HŸ_WÜô*Û‡©ÄuøU{)†›7yö[İn\\äÙ´W¬' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'üŸø&ç¾ïX‹a' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'IEND®B`‚',
      ),
    ),
  ),
);
return $content;
}
