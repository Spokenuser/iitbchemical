/**
 * https://www.drupal.org/node/2815083
 * @preserve
 **/

(function ($, Drupal, drupalSettings) {
    Drupal.color = {
        logoChanged: false,
        bgChanged: false,
        callback: function callback(context, settings, $form) {

            var $colorPreview = $form.find('.color-preview');
            var $colorPalette = $form.find('.js-color-palette');

            $colorPreview.find('.color-preview-main-menu .navbar-nav .nav-item .dropdown-menu .dropdown-item.active, .color-preview-searchicon img').css('background', $colorPalette.find('input[name="palette[secondary]"]').val());
            $colorPreview.find('.color-preview-main-menu .navbar-nav .nav-item .dropdown-menu').css('background', $colorPalette.find('input[name="palette[mainnav]"]').val());
            $colorPreview.find('.color-preview-site-name, .color-preview-node .preview-content a').css('color', $colorPalette.find('input[name="palette[primary]"]').val());
            $colorPreview.find('.color-preview-node .preview-content .btn-primary').css('background', $colorPalette.find('input[name="palette[primary]"]').val());
            $colorPreview.find('.color-preview-announcements').css('background', $colorPalette.find('input[name="palette[announcements]"]').val());
            $colorPreview.find('.color-preview-footer-wrapper').css('background-color', $colorPalette.find('input[name="palette[footer]"]').val());
            $colorPreview.find('.color-preview-main-menu .navbar-nav .nav-item .dropdown-menu .is-active').css('color', $colorPalette.find('input[name="palette[dropdowntext]"]').val());
            $colorPreview.find('.color-preview-node .preview-content .btn-primary').mouseenter(function(){
                $(this).css('background', $colorPalette.find('input[name="palette[hover]"]').val());
            });
            $colorPreview.find('.color-preview-node .preview-content .btn-primary').mouseleave(function(){
                $(this).css('background', $colorPalette.find('input[name="palette[primary]"]').val());
            });
        }
    };
})(jQuery, Drupal, drupalSettings);
