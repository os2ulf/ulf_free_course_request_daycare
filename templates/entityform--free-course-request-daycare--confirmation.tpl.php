<?php

/**
 * @file
 * A basic template for entityform entities
 *
 * Available variables:
 * - $content: An array of field items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The name of the entityform
 * - $url: The standard URL for viewing a entityform entity
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - entityform-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php drupal_add_css(drupal_get_path('module', 'ulf_free_course_request') . '/css/styling.css');?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <?php if (!empty($url)): ?>
        <a href="<?php print $url; ?>"><?php print $title; ?></a>
      <?php else: ?>
        <?php print $title; ?>
      <?php endif; ?>
    </h2>
  <?php endif; ?>

  <div class="fcr-content fcr-receipt"<?php print $content_attributes; ?>>
    <?php print variable_get('ufcrd_receipt', array('value' => '', 'format' => NULL))['value']?>
  </div>

  <div class="content fcr-receipt"<?php print $content_attributes; ?>>
    <div class="content--main block--field-text">
      <h2><?php print t('School'); ?></h2>
      <div><?php print render($content['field_rfcd_school']); ?></div>
      <div><?php print render($content['field_rfcd_grade']); ?></div>
      <div><?php print render($content['field_rfcd_name']); ?></div>
      <div><?php print render($content['field_rfcd_phone']); ?></div>
      <div><?php print render($content['field_rfcd_mail']); ?></div>
    </div>

    <div class="content--main block--field-text">
      <h2><?php print t('Course'); ?></h2>
      <div><?php print render($content['field_rfcd_provider']); ?></div>
      <div><?php print render($content['field_rfcd_course']); ?></div>
      <div><?php print render($content['field_rfcd_requested_amount']); ?></div>
      <div><?php print render($content['field_rfcd_date']); ?></div>
    </div>
  </div>
</div>
