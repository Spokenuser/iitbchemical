<?php

/**
 * @file
 * Lists available colors and color schemes for the AZ Bootstrap theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'primary' => t('Primary Button'),
    'secondary' => t('Secondary Button'),
    'hover' => t('Button Hover'),
    'secondaryHover' => t('Secondary Button Hover'),
    'navbarBG' => t('Navigation Bar Background'),
    'navbarBGText' => t('Navigation Bar text'),
    'mainnav' => t('Main Navigation'),
    'menuhover' => t('Menu Item Hover'),
    'dropdowntext' => t('Navigation Dropdown Text'),
    'backgroundone' => t('Block Background Color 1'),
    'backgroundtwo' => t('Block Background Color 2'),
    'well' => t('Featured Background'),
    'footer' => t('Footer Background'),
    'prefooter_1' => t('Featured Bottom first'),
    'prefooter_2' => t('Featured Bottom second'),
    'prefooter_3' => t('Featured Bottom third'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('AZ Red + Yellow (Default)'),
      'colors' => [
        'primary' => '#c44727',
        'secondary' => '#dca654',
        'hover' => '#a0390e',
        'secondaryHover' => '#d49f4e',
        'navbarBG' => '#fffff1',
        'navbarBGText' => '#000001',
        'mainnav' => '#fbf6e7',
        'menuhover' => '#dca655',
        'dropdowntext' => '#000000',
        'backgroundone' => '#e9f1f4',
        'backgroundtwo' => '#002c54',
        'well' => '#fcf6ec',
        'footer' => '#0d2c51',
        'prefooter_1' => '#0d2c52',
        'prefooter_2' => '#dca653',
        'prefooter_3' => '#0d2c53',
      ],
    ],
    'green' => [
      'title' => t('AZ Green + Grey'),
      'colors' => [
        'primary' => '#859555',
        'secondary' => '#dfdad5',
        'hover' => '#607521',
        'secondaryHover' => '#c4b5a6',
        'navbarBG' => '#ffffff',
        'navbarBGText' => '#000000',
        'mainnav' => '#efece9',
        'menuhover' => '#dfdad6',
        'dropdowntext' => '#000000',
        'backgroundone' => '#dfdad5',
        'backgroundtwo' => '#002c54',
        'well' => '#ece9e5',
        'footer' => '#0d2c51',
        'prefooter_1' => '#0d2c52',
        'prefooter_2' => '#dfdad4',
        'prefooter_3' => '#0d2c53',
      ],
    ],
    'yellow' => [
      'title' => t('AZ Yellow + Blue'),
      'colors' => [
        'primary' => '#caa451',
        'secondary' => '#0d2c51',
        'hover' => '#a97e21',
        'secondaryHover' => '#0f3e76',
        'navbarBG' => '#ffffff',
        'navbarBGText' => '#000000',
        'mainnav' => '#e7eaef',
        'menuhover' => '#0d2c52',
        'dropdowntext' => '#000000',
        'backgroundone' => '#e6f0fd',
        'backgroundtwo' => '#002c54',
        'well' => '#fcf6e5',
        'footer' => '#0d2c51',
        'prefooter_1' => '#0d2c56',
        'prefooter_2' => '#0d2c50',
        'prefooter_3' => '#0d2c53',
      ],
    ],
  ],


  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],


  // Preview files.
  'preview_library' => 'az_bootstrap/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'az_bootstrap'),
      ],
    ],
  ],
];
