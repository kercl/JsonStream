#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE JSON_TEST_SUITE_STRING_FAILURES
#include <boost/test/unit_test.hpp>

#include "TestParser.h"

JSON_PARSER_EXPECT_FAILURE(n_string_1_surrogate_then_escape,              R"json(  ["\uD800\"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_1_surrogate_then_escape_u1,           R"json(  ["\uD800\u1"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_1_surrogate_then_escape_u1x,          R"json(  ["\uD800\u1x"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_1_surrogate_then_escape_u,            R"json(  ["\uD800\u"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_accentuated_char_no_quotes,           R"json(  [é]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_backslash_00,                         R"json(  ["\"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_escaped_backslash_bad,                R"json(  ["\\\"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_escaped_ctrl_char_tab,                R"json(  ["\	"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_escaped_emoji,                        R"json(  ["\🌀"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_escape_x,                             R"json(  ["\x00"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_incomplete_escaped_character,         R"json(  ["\u00A"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_incomplete_escape,                    R"json(  ["\"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_incomplete_surrogate_escape_invalid,  R"json(  ["\uD800\uD800\x"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_incomplete_surrogate,                 R"json(  ["\uD834\uDd"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_invalid_backslash_esc,                R"json(  ["\a"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_invalid_unicode_escape,               R"json(  ["\uqqqq"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_invalid_utf8_after_escape,            R"json(  ["\�"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_invalid_utf_8_in_escape,              R"json(  ["\u�"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_leading_uescaped_thinspace,           R"json(  [\u0020"asd"]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_no_quotes_with_bad_escape,            R"json(  [\n]  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_single_doublequote,                   R"json(  "  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_single_quote,                         R"json(  ['single quote']  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_single_string_no_double_quotes,       R"json(  abc  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_start_escape_unclosed,                R"json(  ["\  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_unescaped_ctrl_char,                  "[\"a\aa\"]")
JSON_PARSER_EXPECT_FAILURE(n_string_unescaped_newline,                    "[\"new\nline\"]")
JSON_PARSER_EXPECT_FAILURE(n_string_unescaped_tab,                        "[\"\t\"]")
JSON_PARSER_EXPECT_FAILURE(n_string_unicode_CapitalU,                     R"json(  "\UA66D"  )json")
JSON_PARSER_EXPECT_FAILURE(n_string_with_trailing_garbage,                R"json(  ""x  )json")
