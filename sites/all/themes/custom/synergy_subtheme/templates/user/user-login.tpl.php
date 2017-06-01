<?php
  /**
   * @file
   * A custom template file for user login content.
   */
?>
<div class="user-login">
  <?php print drupal_render($form['name']); ?>
  <?php print drupal_render($form['pass']); ?>
  <?php print drupal_render($form['actions']); ?>
  <div class="request-pass">
    <?php print drupal_render($form['links']['reset_password']); ?>
  </div>
  <div class="create-account">
    <?php print drupal_render($form['links']['register']); ?>
  </div>
</div>
<?php print drupal_render_children($form); ?>