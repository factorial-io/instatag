# Drupal instatag integration module

This module will integrate the instatag with drupal 7. It will remove the datalayer-js and inject the script. The script will only injected for approbiate pages.

## Installation

* Install the module as usual.
* Print the `$instatag` variable in your `html.tpl.php` / `html.tpl.twig` template, before you close the head-tag:

        <html>
        <head>
           ....
           {{ instatag }}
        </head>
        <body...

## Important 

You need to print the `instatag`-variable in your theme, otherwise instatag will not work!

## FAQ

* Why not using `drupal_add_js()`?

    There are a lot of modules/themers who are messing with Drupals javascript. But these "optimizations" must not affect where instatag gets included.

* Why not use `drupal_add_html_head()`?

    The same as above. The instatag-include should be the last one before the closing head-tag. 