<?php
/**
 * @file
 * olms_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function olms_features_default_rules_configuration() {
  $items = array();
  $items['rules_testcomponent'] = entity_import('rules_config', '{ "rules_testcomponent" : {
      "LABEL" : "TestComponent",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "book_issued" : { "label" : "Book Issued", "type" : "node" },
        "return_date" : { "label" : "Return Date", "type" : "date" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "book-issued" ], "field" : "field_book_name" } },
        { "entity_has_field" : { "entity" : [ "book-issued" ], "field" : "field_return_date" } },
        { "entity_has_field" : {
            "entity" : [ "book-issued:field-book-name" ],
            "field" : "field_no_of_books"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "book-issued:field-return-date" ],
            "value" : [ "return-date" ]
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "book-issued:field-book-name:field-no-of-books" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result2" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "book-issued:field-book-name:field-no-of-books" ],
            "value" : [ "result2" ]
          }
        }
      ]
    }
  }');
  $items['rules_testrule'] = entity_import('rules_config', '{ "rules_testrule" : {
      "LABEL" : "testrule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--book_issue" : { "bundle" : "book_issue" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-book-name" ], "field" : "field_no_of_books" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-book-name:field-no-of-books" ],
              "op" : "-",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-book-name:field-no-of-books" ],
            "value" : [ "result" ]
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-expected-return-date" ],
              "op" : "+",
              "input_2" : 604800
            },
            "PROVIDE" : { "result" : { "result1" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-expected-return-date" ],
            "value" : [ "result1" ]
          }
        }
      ]
    }
  }');
  return $items;
}
