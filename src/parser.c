#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 270
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym__shebang_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_let = 4,
  anon_sym_EQ = 5,
  anon_sym_use = 6,
  anon_sym_DOT = 7,
  anon_sym_SEMI = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_break = 11,
  sym_continue = 12,
  anon_sym_return = 13,
  anon_sym_if = 14,
  anon_sym_else = 15,
  anon_sym_fn = 16,
  anon_sym_COMMA = 17,
  anon_sym_loop = 18,
  anon_sym_for = 19,
  anon_sym_of = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_COLON = 23,
  anon_sym_LF = 24,
  anon_sym_COLON_EQ = 25,
  anon_sym_or = 26,
  anon_sym_and = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_PERCENT = 38,
  anon_sym_STAR_STAR = 39,
  anon_sym_not = 40,
  sym_identifier = 41,
  sym_number = 42,
  anon_sym_false = 43,
  anon_sym_true = 44,
  sym_null = 45,
  anon_sym_DQUOTE = 46,
  sym__unescaped_string_fragment = 47,
  sym__escape_sequence = 48,
  sym_line_comment = 49,
  sym__automatic_semicolon = 50,
  sym_block_comment = 51,
  sym_raw_string_literal = 52,
  sym_module = 53,
  sym__shebang = 54,
  sym__sequence = 55,
  sym_block = 56,
  sym_let = 57,
  sym_use = 58,
  sym__sc = 59,
  sym__exp = 60,
  sym_break = 61,
  sym_return = 62,
  sym_if = 63,
  sym__fn = 64,
  sym_lambda = 65,
  sym_loop = 66,
  sym_for = 67,
  sym_list = 68,
  sym_map = 69,
  sym_object = 70,
  sym_assignment = 71,
  sym_binary_exp = 72,
  sym_unary_exp = 73,
  sym_index_exp = 74,
  sym_call = 75,
  sym_property_exp = 76,
  sym_bool = 77,
  sym_string = 78,
  aux_sym__sequence_repeat1 = 79,
  aux_sym_use_repeat1 = 80,
  aux_sym_lambda_repeat1 = 81,
  aux_sym_list_repeat1 = 82,
  aux_sym_map_repeat1 = 83,
  aux_sym_object_repeat1 = 84,
  aux_sym_property_exp_repeat1 = 85,
  aux_sym_string_repeat1 = 86,
  alias_sym_property_identifier = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_use] = "use",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_fn] = "fn",
  [anon_sym_COMMA] = ",",
  [anon_sym_loop] = "loop",
  [anon_sym_for] = "for",
  [anon_sym_of] = "of",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_not] = "not",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_string_fragment] = "_unescaped_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_line_comment] = "line_comment",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym_block_comment] = "block_comment",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_module] = "module",
  [sym__shebang] = "_shebang",
  [sym__sequence] = "_sequence",
  [sym_block] = "block",
  [sym_let] = "let",
  [sym_use] = "use",
  [sym__sc] = "_sc",
  [sym__exp] = "_exp",
  [sym_break] = "break",
  [sym_return] = "return",
  [sym_if] = "if",
  [sym__fn] = "_fn",
  [sym_lambda] = "lambda",
  [sym_loop] = "loop",
  [sym_for] = "for",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_object] = "object",
  [sym_assignment] = "assignment",
  [sym_binary_exp] = "binary_exp",
  [sym_unary_exp] = "unary_exp",
  [sym_index_exp] = "index_exp",
  [sym_call] = "call",
  [sym_property_exp] = "property_exp",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym__sequence_repeat1] = "_sequence_repeat1",
  [aux_sym_use_repeat1] = "use_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_property_exp_repeat1] = "property_exp_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_property_identifier] = "property_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__shebang_token1] = sym_line_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_break] = anon_sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_not] = anon_sym_not,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_string_fragment] = sym__unescaped_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_line_comment] = sym_line_comment,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym_block_comment] = sym_block_comment,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_module] = sym_module,
  [sym__shebang] = sym__shebang,
  [sym__sequence] = sym__sequence,
  [sym_block] = sym_block,
  [sym_let] = sym_let,
  [sym_use] = sym_use,
  [sym__sc] = sym__sc,
  [sym__exp] = sym__exp,
  [sym_break] = sym_break,
  [sym_return] = sym_return,
  [sym_if] = sym_if,
  [sym__fn] = sym__fn,
  [sym_lambda] = sym_lambda,
  [sym_loop] = sym_loop,
  [sym_for] = sym_for,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_object] = sym_object,
  [sym_assignment] = sym_assignment,
  [sym_binary_exp] = sym_binary_exp,
  [sym_unary_exp] = sym_unary_exp,
  [sym_index_exp] = sym_index_exp,
  [sym_call] = sym_call,
  [sym_property_exp] = sym_property_exp,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym__sequence_repeat1] = aux_sym__sequence_repeat1,
  [aux_sym_use_repeat1] = aux_sym_use_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_property_exp_repeat1] = aux_sym_property_exp_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_property_identifier] = alias_sym_property_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__shebang_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__shebang] = {
    .visible = false,
    .named = true,
  },
  [sym__sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__sc] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym__fn] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_index_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_property_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_exp_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_function = 1,
  field_identifier = 2,
  field_iterator = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_iterator] = "iterator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_identifier, 1},
    {field_value, 3},
  [3] =
    {field_identifier, 1},
    {field_iterator, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_property_identifier,
  },
  [5] = {
    [1] = alias_sym_property_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 17,
  [21] = 21,
  [22] = 21,
  [23] = 15,
  [24] = 16,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 36,
  [49] = 49,
  [50] = 42,
  [51] = 28,
  [52] = 45,
  [53] = 47,
  [54] = 26,
  [55] = 49,
  [56] = 56,
  [57] = 56,
  [58] = 25,
  [59] = 27,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 66,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 80,
  [81] = 81,
  [82] = 70,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 65,
  [87] = 87,
  [88] = 88,
  [89] = 63,
  [90] = 90,
  [91] = 64,
  [92] = 60,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 68,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 61,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 62,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 69,
  [124] = 117,
  [125] = 87,
  [126] = 126,
  [127] = 88,
  [128] = 107,
  [129] = 113,
  [130] = 114,
  [131] = 102,
  [132] = 73,
  [133] = 93,
  [134] = 118,
  [135] = 103,
  [136] = 101,
  [137] = 116,
  [138] = 119,
  [139] = 104,
  [140] = 115,
  [141] = 105,
  [142] = 120,
  [143] = 106,
  [144] = 100,
  [145] = 121,
  [146] = 85,
  [147] = 122,
  [148] = 98,
  [149] = 84,
  [150] = 83,
  [151] = 110,
  [152] = 81,
  [153] = 99,
  [154] = 72,
  [155] = 80,
  [156] = 97,
  [157] = 78,
  [158] = 77,
  [159] = 71,
  [160] = 95,
  [161] = 76,
  [162] = 90,
  [163] = 75,
  [164] = 94,
  [165] = 111,
  [166] = 109,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 170,
  [174] = 174,
  [175] = 172,
  [176] = 174,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 183,
  [186] = 184,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 195,
  [197] = 197,
  [198] = 192,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 200,
  [204] = 204,
  [205] = 205,
  [206] = 201,
  [207] = 207,
  [208] = 208,
  [209] = 207,
  [210] = 210,
  [211] = 211,
  [212] = 205,
  [213] = 208,
  [214] = 210,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 216,
  [220] = 220,
  [221] = 217,
  [222] = 218,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 220,
  [228] = 228,
  [229] = 228,
  [230] = 224,
  [231] = 231,
  [232] = 232,
  [233] = 232,
  [234] = 231,
  [235] = 223,
  [236] = 226,
  [237] = 225,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 241,
  [247] = 247,
  [248] = 248,
  [249] = 245,
  [250] = 240,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 239,
  [257] = 253,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 260,
  [263] = 244,
  [264] = 238,
  [265] = 261,
  [266] = 243,
  [267] = 247,
  [268] = 259,
  [269] = 242,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'd'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2748
        ? (c < 2048
          ? (c < 1155
            ? (c < 736
              ? (c < 183
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)))))))
            : (c <= 1159 || (c < 1552
              ? (c < 1471
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)))))
              : (c <= 1562 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || (c < 2045
                    ? c == 2042
                    : c <= 2045)))))))))
          : (c <= 2093 || (c < 2561
            ? (c < 2474
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)))
                : (c <= 2403 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))
              : (c <= 2480 || (c < 2519
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)))
                : (c <= 2519 || (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))))))
            : (c <= 2563 || (c < 2641
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))))
              : (c <= 2641 || (c < 2703
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))))
        : (c <= 2757 || (c < 3165
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 58:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 59:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 60:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(157);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(144);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(131);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(157);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(133);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(147);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 62, .external_lex_state = 2},
  [2] = {.lex_state = 58, .external_lex_state = 2},
  [3] = {.lex_state = 58, .external_lex_state = 2},
  [4] = {.lex_state = 58, .external_lex_state = 3},
  [5] = {.lex_state = 58, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 62, .external_lex_state = 2},
  [9] = {.lex_state = 62, .external_lex_state = 2},
  [10] = {.lex_state = 62, .external_lex_state = 2},
  [11] = {.lex_state = 62, .external_lex_state = 2},
  [12] = {.lex_state = 62, .external_lex_state = 2},
  [13] = {.lex_state = 62, .external_lex_state = 2},
  [14] = {.lex_state = 62, .external_lex_state = 2},
  [15] = {.lex_state = 62, .external_lex_state = 2},
  [16] = {.lex_state = 62, .external_lex_state = 2},
  [17] = {.lex_state = 62, .external_lex_state = 2},
  [18] = {.lex_state = 62, .external_lex_state = 2},
  [19] = {.lex_state = 62, .external_lex_state = 2},
  [20] = {.lex_state = 62, .external_lex_state = 2},
  [21] = {.lex_state = 62, .external_lex_state = 2},
  [22] = {.lex_state = 62, .external_lex_state = 2},
  [23] = {.lex_state = 62, .external_lex_state = 2},
  [24] = {.lex_state = 62, .external_lex_state = 2},
  [25] = {.lex_state = 62, .external_lex_state = 2},
  [26] = {.lex_state = 62, .external_lex_state = 2},
  [27] = {.lex_state = 62, .external_lex_state = 2},
  [28] = {.lex_state = 62, .external_lex_state = 2},
  [29] = {.lex_state = 62, .external_lex_state = 2},
  [30] = {.lex_state = 62, .external_lex_state = 2},
  [31] = {.lex_state = 62, .external_lex_state = 2},
  [32] = {.lex_state = 62, .external_lex_state = 2},
  [33] = {.lex_state = 62, .external_lex_state = 2},
  [34] = {.lex_state = 62, .external_lex_state = 2},
  [35] = {.lex_state = 62, .external_lex_state = 2},
  [36] = {.lex_state = 62, .external_lex_state = 2},
  [37] = {.lex_state = 62, .external_lex_state = 2},
  [38] = {.lex_state = 62, .external_lex_state = 2},
  [39] = {.lex_state = 62, .external_lex_state = 2},
  [40] = {.lex_state = 62, .external_lex_state = 2},
  [41] = {.lex_state = 62, .external_lex_state = 2},
  [42] = {.lex_state = 62, .external_lex_state = 2},
  [43] = {.lex_state = 62, .external_lex_state = 2},
  [44] = {.lex_state = 62, .external_lex_state = 2},
  [45] = {.lex_state = 62, .external_lex_state = 2},
  [46] = {.lex_state = 62, .external_lex_state = 2},
  [47] = {.lex_state = 62, .external_lex_state = 2},
  [48] = {.lex_state = 62, .external_lex_state = 2},
  [49] = {.lex_state = 62, .external_lex_state = 2},
  [50] = {.lex_state = 62, .external_lex_state = 2},
  [51] = {.lex_state = 62, .external_lex_state = 2},
  [52] = {.lex_state = 62, .external_lex_state = 2},
  [53] = {.lex_state = 62, .external_lex_state = 2},
  [54] = {.lex_state = 62, .external_lex_state = 2},
  [55] = {.lex_state = 62, .external_lex_state = 2},
  [56] = {.lex_state = 62, .external_lex_state = 2},
  [57] = {.lex_state = 62, .external_lex_state = 2},
  [58] = {.lex_state = 62, .external_lex_state = 2},
  [59] = {.lex_state = 62, .external_lex_state = 2},
  [60] = {.lex_state = 60, .external_lex_state = 2},
  [61] = {.lex_state = 60, .external_lex_state = 2},
  [62] = {.lex_state = 60, .external_lex_state = 2},
  [63] = {.lex_state = 60, .external_lex_state = 2},
  [64] = {.lex_state = 60, .external_lex_state = 2},
  [65] = {.lex_state = 60, .external_lex_state = 2},
  [66] = {.lex_state = 60, .external_lex_state = 2},
  [67] = {.lex_state = 60, .external_lex_state = 2},
  [68] = {.lex_state = 60, .external_lex_state = 2},
  [69] = {.lex_state = 60, .external_lex_state = 2},
  [70] = {.lex_state = 60, .external_lex_state = 2},
  [71] = {.lex_state = 60, .external_lex_state = 2},
  [72] = {.lex_state = 60, .external_lex_state = 2},
  [73] = {.lex_state = 60, .external_lex_state = 2},
  [74] = {.lex_state = 60, .external_lex_state = 3},
  [75] = {.lex_state = 60, .external_lex_state = 2},
  [76] = {.lex_state = 60, .external_lex_state = 2},
  [77] = {.lex_state = 60, .external_lex_state = 2},
  [78] = {.lex_state = 60, .external_lex_state = 2},
  [79] = {.lex_state = 60, .external_lex_state = 3},
  [80] = {.lex_state = 60, .external_lex_state = 2},
  [81] = {.lex_state = 60, .external_lex_state = 2},
  [82] = {.lex_state = 60, .external_lex_state = 3},
  [83] = {.lex_state = 60, .external_lex_state = 2},
  [84] = {.lex_state = 60, .external_lex_state = 2},
  [85] = {.lex_state = 60, .external_lex_state = 2},
  [86] = {.lex_state = 60, .external_lex_state = 3},
  [87] = {.lex_state = 60, .external_lex_state = 3},
  [88] = {.lex_state = 60, .external_lex_state = 2},
  [89] = {.lex_state = 60, .external_lex_state = 3},
  [90] = {.lex_state = 60, .external_lex_state = 2},
  [91] = {.lex_state = 60, .external_lex_state = 3},
  [92] = {.lex_state = 60, .external_lex_state = 3},
  [93] = {.lex_state = 60, .external_lex_state = 2},
  [94] = {.lex_state = 60, .external_lex_state = 2},
  [95] = {.lex_state = 60, .external_lex_state = 2},
  [96] = {.lex_state = 60, .external_lex_state = 3},
  [97] = {.lex_state = 60, .external_lex_state = 2},
  [98] = {.lex_state = 60, .external_lex_state = 2},
  [99] = {.lex_state = 60, .external_lex_state = 2},
  [100] = {.lex_state = 60, .external_lex_state = 2},
  [101] = {.lex_state = 60, .external_lex_state = 2},
  [102] = {.lex_state = 60, .external_lex_state = 2},
  [103] = {.lex_state = 60, .external_lex_state = 2},
  [104] = {.lex_state = 60, .external_lex_state = 2},
  [105] = {.lex_state = 60, .external_lex_state = 2},
  [106] = {.lex_state = 60, .external_lex_state = 2},
  [107] = {.lex_state = 60, .external_lex_state = 2},
  [108] = {.lex_state = 60, .external_lex_state = 3},
  [109] = {.lex_state = 60, .external_lex_state = 2},
  [110] = {.lex_state = 60, .external_lex_state = 2},
  [111] = {.lex_state = 60, .external_lex_state = 2},
  [112] = {.lex_state = 60, .external_lex_state = 3},
  [113] = {.lex_state = 60, .external_lex_state = 2},
  [114] = {.lex_state = 60, .external_lex_state = 2},
  [115] = {.lex_state = 60, .external_lex_state = 2},
  [116] = {.lex_state = 60, .external_lex_state = 2},
  [117] = {.lex_state = 60, .external_lex_state = 3},
  [118] = {.lex_state = 60, .external_lex_state = 2},
  [119] = {.lex_state = 60, .external_lex_state = 2},
  [120] = {.lex_state = 60, .external_lex_state = 2},
  [121] = {.lex_state = 60, .external_lex_state = 2},
  [122] = {.lex_state = 60, .external_lex_state = 2},
  [123] = {.lex_state = 60, .external_lex_state = 3},
  [124] = {.lex_state = 60, .external_lex_state = 3},
  [125] = {.lex_state = 60, .external_lex_state = 3},
  [126] = {.lex_state = 60, .external_lex_state = 3},
  [127] = {.lex_state = 60, .external_lex_state = 3},
  [128] = {.lex_state = 60, .external_lex_state = 3},
  [129] = {.lex_state = 60, .external_lex_state = 3},
  [130] = {.lex_state = 60, .external_lex_state = 3},
  [131] = {.lex_state = 60, .external_lex_state = 3},
  [132] = {.lex_state = 60, .external_lex_state = 3},
  [133] = {.lex_state = 60, .external_lex_state = 3},
  [134] = {.lex_state = 60, .external_lex_state = 3},
  [135] = {.lex_state = 60, .external_lex_state = 3},
  [136] = {.lex_state = 60, .external_lex_state = 3},
  [137] = {.lex_state = 60, .external_lex_state = 3},
  [138] = {.lex_state = 60, .external_lex_state = 3},
  [139] = {.lex_state = 60, .external_lex_state = 3},
  [140] = {.lex_state = 60, .external_lex_state = 3},
  [141] = {.lex_state = 60, .external_lex_state = 3},
  [142] = {.lex_state = 60, .external_lex_state = 3},
  [143] = {.lex_state = 60, .external_lex_state = 3},
  [144] = {.lex_state = 60, .external_lex_state = 3},
  [145] = {.lex_state = 60, .external_lex_state = 3},
  [146] = {.lex_state = 60, .external_lex_state = 3},
  [147] = {.lex_state = 60, .external_lex_state = 3},
  [148] = {.lex_state = 60, .external_lex_state = 3},
  [149] = {.lex_state = 60, .external_lex_state = 3},
  [150] = {.lex_state = 60, .external_lex_state = 3},
  [151] = {.lex_state = 60, .external_lex_state = 3},
  [152] = {.lex_state = 60, .external_lex_state = 3},
  [153] = {.lex_state = 60, .external_lex_state = 3},
  [154] = {.lex_state = 60, .external_lex_state = 3},
  [155] = {.lex_state = 60, .external_lex_state = 3},
  [156] = {.lex_state = 60, .external_lex_state = 3},
  [157] = {.lex_state = 60, .external_lex_state = 3},
  [158] = {.lex_state = 60, .external_lex_state = 3},
  [159] = {.lex_state = 60, .external_lex_state = 3},
  [160] = {.lex_state = 60, .external_lex_state = 3},
  [161] = {.lex_state = 60, .external_lex_state = 3},
  [162] = {.lex_state = 60, .external_lex_state = 3},
  [163] = {.lex_state = 60, .external_lex_state = 3},
  [164] = {.lex_state = 60, .external_lex_state = 3},
  [165] = {.lex_state = 60, .external_lex_state = 3},
  [166] = {.lex_state = 60, .external_lex_state = 3},
  [167] = {.lex_state = 60, .external_lex_state = 3},
  [168] = {.lex_state = 60, .external_lex_state = 3},
  [169] = {.lex_state = 60, .external_lex_state = 3},
  [170] = {.lex_state = 60, .external_lex_state = 2},
  [171] = {.lex_state = 60, .external_lex_state = 2},
  [172] = {.lex_state = 60, .external_lex_state = 2},
  [173] = {.lex_state = 60, .external_lex_state = 2},
  [174] = {.lex_state = 60, .external_lex_state = 2},
  [175] = {.lex_state = 60, .external_lex_state = 2},
  [176] = {.lex_state = 60, .external_lex_state = 2},
  [177] = {.lex_state = 60, .external_lex_state = 2},
  [178] = {.lex_state = 60, .external_lex_state = 2},
  [179] = {.lex_state = 60, .external_lex_state = 2},
  [180] = {.lex_state = 60, .external_lex_state = 2},
  [181] = {.lex_state = 60, .external_lex_state = 3},
  [182] = {.lex_state = 60, .external_lex_state = 2},
  [183] = {.lex_state = 60, .external_lex_state = 2},
  [184] = {.lex_state = 60, .external_lex_state = 2},
  [185] = {.lex_state = 60, .external_lex_state = 2},
  [186] = {.lex_state = 60, .external_lex_state = 2},
  [187] = {.lex_state = 60, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 3, .external_lex_state = 2},
  [192] = {.lex_state = 3, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 3, .external_lex_state = 2},
  [196] = {.lex_state = 3, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 3},
  [198] = {.lex_state = 3, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 4, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 4, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 3},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 4, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 4, .external_lex_state = 2},
  [224] = {.lex_state = 4, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 4, .external_lex_state = 2},
  [227] = {.lex_state = 4, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 4, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 4, .external_lex_state = 2},
  [236] = {.lex_state = 4, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 4, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 4, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 4, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 4, .external_lex_state = 2},
  [249] = {.lex_state = 4, .external_lex_state = 2},
  [250] = {.lex_state = 4, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 4, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 4, .external_lex_state = 2},
  [260] = {.lex_state = 4, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 4, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 4, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 4, .external_lex_state = 2},
  [269] = {.lex_state = 4, .external_lex_state = 2},
};

enum {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token_block_comment = 1,
  ts_external_token_raw_string_literal = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_raw_string_literal] = sym_raw_string_literal,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_raw_string_literal] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__shebang_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(252),
    [sym__shebang] = STATE(14),
    [sym__sequence] = STATE(251),
    [sym_block] = STATE(126),
    [sym_let] = STATE(126),
    [sym_use] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_if] = STATE(126),
    [sym__fn] = STATE(126),
    [sym_loop] = STATE(126),
    [sym_for] = STATE(126),
    [sym_list] = STATE(126),
    [sym_map] = STATE(126),
    [sym_object] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_binary_exp] = STATE(126),
    [sym_unary_exp] = STATE(126),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__shebang_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(111),
    [sym_let] = STATE(111),
    [sym_use] = STATE(111),
    [sym__exp] = STATE(111),
    [sym_break] = STATE(111),
    [sym_return] = STATE(111),
    [sym_if] = STATE(111),
    [sym__fn] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_for] = STATE(111),
    [sym_list] = STATE(111),
    [sym_map] = STATE(111),
    [sym_object] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_binary_exp] = STATE(111),
    [sym_unary_exp] = STATE(111),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(111),
    [sym_property_exp] = STATE(111),
    [sym_bool] = STATE(111),
    [sym_string] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(109),
    [sym_let] = STATE(109),
    [sym_use] = STATE(109),
    [sym__exp] = STATE(109),
    [sym_break] = STATE(109),
    [sym_return] = STATE(109),
    [sym_if] = STATE(109),
    [sym__fn] = STATE(109),
    [sym_loop] = STATE(109),
    [sym_for] = STATE(109),
    [sym_list] = STATE(109),
    [sym_map] = STATE(109),
    [sym_object] = STATE(109),
    [sym_assignment] = STATE(109),
    [sym_binary_exp] = STATE(109),
    [sym_unary_exp] = STATE(109),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(109),
    [sym_property_exp] = STATE(109),
    [sym_bool] = STATE(109),
    [sym_string] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_STAR_STAR] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(165),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(165),
    [sym_return] = STATE(165),
    [sym_if] = STATE(165),
    [sym__fn] = STATE(165),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(165),
    [sym_map] = STATE(165),
    [sym_object] = STATE(165),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(165),
    [sym_property_exp] = STATE(165),
    [sym_bool] = STATE(165),
    [sym_string] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(45),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(166),
    [sym_let] = STATE(166),
    [sym_use] = STATE(166),
    [sym__exp] = STATE(166),
    [sym_break] = STATE(166),
    [sym_return] = STATE(166),
    [sym_if] = STATE(166),
    [sym__fn] = STATE(166),
    [sym_loop] = STATE(166),
    [sym_for] = STATE(166),
    [sym_list] = STATE(166),
    [sym_map] = STATE(166),
    [sym_object] = STATE(166),
    [sym_assignment] = STATE(166),
    [sym_binary_exp] = STATE(166),
    [sym_unary_exp] = STATE(166),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(166),
    [sym_property_exp] = STATE(166),
    [sym_bool] = STATE(166),
    [sym_string] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_STAR_STAR] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(81),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sequence] = STATE(247),
    [sym_block] = STATE(124),
    [sym_let] = STATE(124),
    [sym_use] = STATE(124),
    [sym__exp] = STATE(124),
    [sym_break] = STATE(124),
    [sym_return] = STATE(124),
    [sym_if] = STATE(124),
    [sym__fn] = STATE(124),
    [sym_loop] = STATE(124),
    [sym_for] = STATE(124),
    [sym_list] = STATE(124),
    [sym_map] = STATE(124),
    [sym_object] = STATE(124),
    [sym_assignment] = STATE(124),
    [sym_binary_exp] = STATE(124),
    [sym_unary_exp] = STATE(124),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(124),
    [sym_property_exp] = STATE(124),
    [sym_bool] = STATE(124),
    [sym_string] = STATE(124),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(109),
    [sym_number] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_line_comment] = ACTIONS(113),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sequence] = STATE(267),
    [sym_block] = STATE(117),
    [sym_let] = STATE(117),
    [sym_use] = STATE(117),
    [sym__exp] = STATE(117),
    [sym_break] = STATE(117),
    [sym_return] = STATE(117),
    [sym_if] = STATE(117),
    [sym__fn] = STATE(117),
    [sym_loop] = STATE(117),
    [sym_for] = STATE(117),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_object] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_binary_exp] = STATE(117),
    [sym_unary_exp] = STATE(117),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(117),
    [sym_property_exp] = STATE(117),
    [sym_bool] = STATE(117),
    [sym_string] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(125),
    [sym_number] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_line_comment] = ACTIONS(113),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(172),
    [sym_let] = STATE(172),
    [sym_use] = STATE(172),
    [sym__exp] = STATE(172),
    [sym_break] = STATE(172),
    [sym_return] = STATE(172),
    [sym_if] = STATE(172),
    [sym__fn] = STATE(172),
    [sym_loop] = STATE(172),
    [sym_for] = STATE(172),
    [sym_list] = STATE(172),
    [sym_map] = STATE(172),
    [sym_object] = STATE(172),
    [sym_assignment] = STATE(172),
    [sym_binary_exp] = STATE(172),
    [sym_unary_exp] = STATE(172),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(172),
    [sym_property_exp] = STATE(172),
    [sym_bool] = STATE(172),
    [sym_string] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_block] = STATE(167),
    [sym_let] = STATE(167),
    [sym_use] = STATE(167),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(167),
    [sym_return] = STATE(167),
    [sym_if] = STATE(167),
    [sym__fn] = STATE(167),
    [sym_loop] = STATE(167),
    [sym_for] = STATE(167),
    [sym_list] = STATE(167),
    [sym_map] = STATE(167),
    [sym_object] = STATE(167),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(167),
    [sym_property_exp] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_string] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_block] = STATE(167),
    [sym_let] = STATE(167),
    [sym_use] = STATE(167),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(167),
    [sym_return] = STATE(167),
    [sym_if] = STATE(167),
    [sym__fn] = STATE(167),
    [sym_loop] = STATE(167),
    [sym_for] = STATE(167),
    [sym_list] = STATE(167),
    [sym_map] = STATE(167),
    [sym_object] = STATE(167),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(167),
    [sym_property_exp] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_string] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sequence] = STATE(247),
    [sym_block] = STATE(126),
    [sym_let] = STATE(126),
    [sym_use] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_if] = STATE(126),
    [sym__fn] = STATE(126),
    [sym_loop] = STATE(126),
    [sym_for] = STATE(126),
    [sym_list] = STATE(126),
    [sym_map] = STATE(126),
    [sym_object] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_binary_exp] = STATE(126),
    [sym_unary_exp] = STATE(126),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sequence] = STATE(267),
    [sym_block] = STATE(126),
    [sym_let] = STATE(126),
    [sym_use] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_if] = STATE(126),
    [sym__fn] = STATE(126),
    [sym_loop] = STATE(126),
    [sym_for] = STATE(126),
    [sym_list] = STATE(126),
    [sym_map] = STATE(126),
    [sym_object] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_binary_exp] = STATE(126),
    [sym_unary_exp] = STATE(126),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_block] = STATE(175),
    [sym_let] = STATE(175),
    [sym_use] = STATE(175),
    [sym__exp] = STATE(175),
    [sym_break] = STATE(175),
    [sym_return] = STATE(175),
    [sym_if] = STATE(175),
    [sym__fn] = STATE(175),
    [sym_loop] = STATE(175),
    [sym_for] = STATE(175),
    [sym_list] = STATE(175),
    [sym_map] = STATE(175),
    [sym_object] = STATE(175),
    [sym_assignment] = STATE(175),
    [sym_binary_exp] = STATE(175),
    [sym_unary_exp] = STATE(175),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(175),
    [sym_property_exp] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_string] = STATE(175),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sequence] = STATE(258),
    [sym_block] = STATE(126),
    [sym_let] = STATE(126),
    [sym_use] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_if] = STATE(126),
    [sym__fn] = STATE(126),
    [sym_loop] = STATE(126),
    [sym_for] = STATE(126),
    [sym_list] = STATE(126),
    [sym_map] = STATE(126),
    [sym_object] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_binary_exp] = STATE(126),
    [sym_unary_exp] = STATE(126),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_if] = STATE(171),
    [sym__fn] = STATE(171),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(171),
    [sym_map] = STATE(171),
    [sym_object] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_if] = STATE(171),
    [sym__fn] = STATE(171),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(171),
    [sym_map] = STATE(171),
    [sym_object] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_block] = STATE(174),
    [sym_let] = STATE(174),
    [sym_use] = STATE(174),
    [sym__exp] = STATE(174),
    [sym_break] = STATE(174),
    [sym_return] = STATE(174),
    [sym_if] = STATE(174),
    [sym__fn] = STATE(174),
    [sym_loop] = STATE(174),
    [sym_for] = STATE(174),
    [sym_list] = STATE(174),
    [sym_map] = STATE(174),
    [sym_object] = STATE(174),
    [sym_assignment] = STATE(174),
    [sym_binary_exp] = STATE(174),
    [sym_unary_exp] = STATE(174),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(174),
    [sym_property_exp] = STATE(174),
    [sym_bool] = STATE(174),
    [sym_string] = STATE(174),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_block] = STATE(176),
    [sym_let] = STATE(176),
    [sym_use] = STATE(176),
    [sym__exp] = STATE(176),
    [sym_break] = STATE(176),
    [sym_return] = STATE(176),
    [sym_if] = STATE(176),
    [sym__fn] = STATE(176),
    [sym_loop] = STATE(176),
    [sym_for] = STATE(176),
    [sym_list] = STATE(176),
    [sym_map] = STATE(176),
    [sym_object] = STATE(176),
    [sym_assignment] = STATE(176),
    [sym_binary_exp] = STATE(176),
    [sym_unary_exp] = STATE(176),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_if] = STATE(171),
    [sym__fn] = STATE(171),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(171),
    [sym_map] = STATE(171),
    [sym_object] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_if] = STATE(171),
    [sym__fn] = STATE(171),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(171),
    [sym_map] = STATE(171),
    [sym_object] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_block] = STATE(132),
    [sym_let] = STATE(132),
    [sym_use] = STATE(132),
    [sym__exp] = STATE(132),
    [sym_break] = STATE(132),
    [sym_return] = STATE(132),
    [sym_if] = STATE(132),
    [sym__fn] = STATE(132),
    [sym_loop] = STATE(132),
    [sym_for] = STATE(132),
    [sym_list] = STATE(132),
    [sym_map] = STATE(132),
    [sym_object] = STATE(132),
    [sym_assignment] = STATE(132),
    [sym_binary_exp] = STATE(132),
    [sym_unary_exp] = STATE(132),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(132),
    [sym_property_exp] = STATE(132),
    [sym_bool] = STATE(132),
    [sym_string] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_block] = STATE(77),
    [sym_let] = STATE(77),
    [sym_use] = STATE(77),
    [sym__exp] = STATE(77),
    [sym_break] = STATE(77),
    [sym_return] = STATE(77),
    [sym_if] = STATE(77),
    [sym__fn] = STATE(77),
    [sym_loop] = STATE(77),
    [sym_for] = STATE(77),
    [sym_list] = STATE(77),
    [sym_map] = STATE(77),
    [sym_object] = STATE(77),
    [sym_assignment] = STATE(77),
    [sym_binary_exp] = STATE(77),
    [sym_unary_exp] = STATE(77),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(77),
    [sym_property_exp] = STATE(77),
    [sym_bool] = STATE(77),
    [sym_string] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_block] = STATE(169),
    [sym_let] = STATE(169),
    [sym_use] = STATE(169),
    [sym__exp] = STATE(169),
    [sym_break] = STATE(169),
    [sym_return] = STATE(169),
    [sym_if] = STATE(169),
    [sym__fn] = STATE(169),
    [sym_loop] = STATE(169),
    [sym_for] = STATE(169),
    [sym_list] = STATE(169),
    [sym_map] = STATE(169),
    [sym_object] = STATE(169),
    [sym_assignment] = STATE(169),
    [sym_binary_exp] = STATE(169),
    [sym_unary_exp] = STATE(169),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(169),
    [sym_property_exp] = STATE(169),
    [sym_bool] = STATE(169),
    [sym_string] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_block] = STATE(185),
    [sym_let] = STATE(185),
    [sym_use] = STATE(185),
    [sym__exp] = STATE(185),
    [sym_break] = STATE(185),
    [sym_return] = STATE(185),
    [sym_if] = STATE(185),
    [sym__fn] = STATE(185),
    [sym_loop] = STATE(185),
    [sym_for] = STATE(185),
    [sym_list] = STATE(185),
    [sym_map] = STATE(185),
    [sym_object] = STATE(185),
    [sym_assignment] = STATE(185),
    [sym_binary_exp] = STATE(185),
    [sym_unary_exp] = STATE(185),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(185),
    [sym_property_exp] = STATE(185),
    [sym_bool] = STATE(185),
    [sym_string] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_block] = STATE(180),
    [sym_let] = STATE(180),
    [sym_use] = STATE(180),
    [sym__exp] = STATE(180),
    [sym_break] = STATE(180),
    [sym_return] = STATE(180),
    [sym_if] = STATE(180),
    [sym__fn] = STATE(180),
    [sym_loop] = STATE(180),
    [sym_for] = STATE(180),
    [sym_list] = STATE(180),
    [sym_map] = STATE(180),
    [sym_object] = STATE(180),
    [sym_assignment] = STATE(180),
    [sym_binary_exp] = STATE(180),
    [sym_unary_exp] = STATE(180),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(180),
    [sym_property_exp] = STATE(180),
    [sym_bool] = STATE(180),
    [sym_string] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_block] = STATE(184),
    [sym_let] = STATE(184),
    [sym_use] = STATE(184),
    [sym__exp] = STATE(184),
    [sym_break] = STATE(184),
    [sym_return] = STATE(184),
    [sym_if] = STATE(184),
    [sym__fn] = STATE(184),
    [sym_loop] = STATE(184),
    [sym_for] = STATE(184),
    [sym_list] = STATE(184),
    [sym_map] = STATE(184),
    [sym_object] = STATE(184),
    [sym_assignment] = STATE(184),
    [sym_binary_exp] = STATE(184),
    [sym_unary_exp] = STATE(184),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(184),
    [sym_property_exp] = STATE(184),
    [sym_bool] = STATE(184),
    [sym_string] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_block] = STATE(181),
    [sym_let] = STATE(181),
    [sym_use] = STATE(181),
    [sym__exp] = STATE(181),
    [sym_break] = STATE(181),
    [sym_return] = STATE(181),
    [sym_if] = STATE(181),
    [sym__fn] = STATE(181),
    [sym_loop] = STATE(181),
    [sym_for] = STATE(181),
    [sym_list] = STATE(181),
    [sym_map] = STATE(181),
    [sym_object] = STATE(181),
    [sym_assignment] = STATE(181),
    [sym_binary_exp] = STATE(181),
    [sym_unary_exp] = STATE(181),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_block] = STATE(182),
    [sym_let] = STATE(182),
    [sym_use] = STATE(182),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(182),
    [sym_return] = STATE(182),
    [sym_if] = STATE(182),
    [sym__fn] = STATE(182),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_list] = STATE(182),
    [sym_map] = STATE(182),
    [sym_object] = STATE(182),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(182),
    [sym_property_exp] = STATE(182),
    [sym_bool] = STATE(182),
    [sym_string] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_block] = STATE(186),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(186),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
    [sym_if] = STATE(186),
    [sym__fn] = STATE(186),
    [sym_loop] = STATE(186),
    [sym_for] = STATE(186),
    [sym_list] = STATE(186),
    [sym_map] = STATE(186),
    [sym_object] = STATE(186),
    [sym_assignment] = STATE(186),
    [sym_binary_exp] = STATE(186),
    [sym_unary_exp] = STATE(186),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(186),
    [sym_property_exp] = STATE(186),
    [sym_bool] = STATE(186),
    [sym_string] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_block] = STATE(179),
    [sym_let] = STATE(179),
    [sym_use] = STATE(179),
    [sym__exp] = STATE(179),
    [sym_break] = STATE(179),
    [sym_return] = STATE(179),
    [sym_if] = STATE(179),
    [sym__fn] = STATE(179),
    [sym_loop] = STATE(179),
    [sym_for] = STATE(179),
    [sym_list] = STATE(179),
    [sym_map] = STATE(179),
    [sym_object] = STATE(179),
    [sym_assignment] = STATE(179),
    [sym_binary_exp] = STATE(179),
    [sym_unary_exp] = STATE(179),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(179),
    [sym_property_exp] = STATE(179),
    [sym_bool] = STATE(179),
    [sym_string] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(197),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_block] = STATE(103),
    [sym_let] = STATE(103),
    [sym_use] = STATE(103),
    [sym__exp] = STATE(103),
    [sym_break] = STATE(103),
    [sym_return] = STATE(103),
    [sym_if] = STATE(103),
    [sym__fn] = STATE(103),
    [sym_loop] = STATE(103),
    [sym_for] = STATE(103),
    [sym_list] = STATE(103),
    [sym_map] = STATE(103),
    [sym_object] = STATE(103),
    [sym_assignment] = STATE(103),
    [sym_binary_exp] = STATE(103),
    [sym_unary_exp] = STATE(103),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(103),
    [sym_property_exp] = STATE(103),
    [sym_bool] = STATE(103),
    [sym_string] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_block] = STATE(102),
    [sym_let] = STATE(102),
    [sym_use] = STATE(102),
    [sym__exp] = STATE(102),
    [sym_break] = STATE(102),
    [sym_return] = STATE(102),
    [sym_if] = STATE(102),
    [sym__fn] = STATE(102),
    [sym_loop] = STATE(102),
    [sym_for] = STATE(102),
    [sym_list] = STATE(102),
    [sym_map] = STATE(102),
    [sym_object] = STATE(102),
    [sym_assignment] = STATE(102),
    [sym_binary_exp] = STATE(102),
    [sym_unary_exp] = STATE(102),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(102),
    [sym_property_exp] = STATE(102),
    [sym_bool] = STATE(102),
    [sym_string] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_block] = STATE(131),
    [sym_let] = STATE(131),
    [sym_use] = STATE(131),
    [sym__exp] = STATE(131),
    [sym_break] = STATE(131),
    [sym_return] = STATE(131),
    [sym_if] = STATE(131),
    [sym__fn] = STATE(131),
    [sym_loop] = STATE(131),
    [sym_for] = STATE(131),
    [sym_list] = STATE(131),
    [sym_map] = STATE(131),
    [sym_object] = STATE(131),
    [sym_assignment] = STATE(131),
    [sym_binary_exp] = STATE(131),
    [sym_unary_exp] = STATE(131),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(131),
    [sym_property_exp] = STATE(131),
    [sym_bool] = STATE(131),
    [sym_string] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(205),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_block] = STATE(167),
    [sym_let] = STATE(167),
    [sym_use] = STATE(167),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(167),
    [sym_return] = STATE(167),
    [sym_if] = STATE(167),
    [sym__fn] = STATE(167),
    [sym_loop] = STATE(167),
    [sym_for] = STATE(167),
    [sym_list] = STATE(167),
    [sym_map] = STATE(167),
    [sym_object] = STATE(167),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(167),
    [sym_property_exp] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_string] = STATE(167),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_if] = STATE(171),
    [sym__fn] = STATE(171),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(171),
    [sym_map] = STATE(171),
    [sym_object] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_block] = STATE(170),
    [sym_let] = STATE(170),
    [sym_use] = STATE(170),
    [sym__exp] = STATE(170),
    [sym_break] = STATE(170),
    [sym_return] = STATE(170),
    [sym_if] = STATE(170),
    [sym__fn] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_for] = STATE(170),
    [sym_list] = STATE(170),
    [sym_map] = STATE(170),
    [sym_object] = STATE(170),
    [sym_assignment] = STATE(170),
    [sym_binary_exp] = STATE(170),
    [sym_unary_exp] = STATE(170),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(170),
    [sym_property_exp] = STATE(170),
    [sym_bool] = STATE(170),
    [sym_string] = STATE(170),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_block] = STATE(177),
    [sym_let] = STATE(177),
    [sym_use] = STATE(177),
    [sym__exp] = STATE(177),
    [sym_break] = STATE(177),
    [sym_return] = STATE(177),
    [sym_if] = STATE(177),
    [sym__fn] = STATE(177),
    [sym_loop] = STATE(177),
    [sym_for] = STATE(177),
    [sym_list] = STATE(177),
    [sym_map] = STATE(177),
    [sym_object] = STATE(177),
    [sym_assignment] = STATE(177),
    [sym_binary_exp] = STATE(177),
    [sym_unary_exp] = STATE(177),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(177),
    [sym_property_exp] = STATE(177),
    [sym_bool] = STATE(177),
    [sym_string] = STATE(177),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(209),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_block] = STATE(84),
    [sym_let] = STATE(84),
    [sym_use] = STATE(84),
    [sym__exp] = STATE(84),
    [sym_break] = STATE(84),
    [sym_return] = STATE(84),
    [sym_if] = STATE(84),
    [sym__fn] = STATE(84),
    [sym_loop] = STATE(84),
    [sym_for] = STATE(84),
    [sym_list] = STATE(84),
    [sym_map] = STATE(84),
    [sym_object] = STATE(84),
    [sym_assignment] = STATE(84),
    [sym_binary_exp] = STATE(84),
    [sym_unary_exp] = STATE(84),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(84),
    [sym_property_exp] = STATE(84),
    [sym_bool] = STATE(84),
    [sym_string] = STATE(84),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_block] = STATE(80),
    [sym_let] = STATE(80),
    [sym_use] = STATE(80),
    [sym__exp] = STATE(80),
    [sym_break] = STATE(80),
    [sym_return] = STATE(80),
    [sym_if] = STATE(80),
    [sym__fn] = STATE(80),
    [sym_loop] = STATE(80),
    [sym_for] = STATE(80),
    [sym_list] = STATE(80),
    [sym_map] = STATE(80),
    [sym_object] = STATE(80),
    [sym_assignment] = STATE(80),
    [sym_binary_exp] = STATE(80),
    [sym_unary_exp] = STATE(80),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(80),
    [sym_property_exp] = STATE(80),
    [sym_bool] = STATE(80),
    [sym_string] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_block] = STATE(149),
    [sym_let] = STATE(149),
    [sym_use] = STATE(149),
    [sym__exp] = STATE(149),
    [sym_break] = STATE(149),
    [sym_return] = STATE(149),
    [sym_if] = STATE(149),
    [sym__fn] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_for] = STATE(149),
    [sym_list] = STATE(149),
    [sym_map] = STATE(149),
    [sym_object] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_binary_exp] = STATE(149),
    [sym_unary_exp] = STATE(149),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(149),
    [sym_property_exp] = STATE(149),
    [sym_bool] = STATE(149),
    [sym_string] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_block] = STATE(78),
    [sym_let] = STATE(78),
    [sym_use] = STATE(78),
    [sym__exp] = STATE(78),
    [sym_break] = STATE(78),
    [sym_return] = STATE(78),
    [sym_if] = STATE(78),
    [sym__fn] = STATE(78),
    [sym_loop] = STATE(78),
    [sym_for] = STATE(78),
    [sym_list] = STATE(78),
    [sym_map] = STATE(78),
    [sym_object] = STATE(78),
    [sym_assignment] = STATE(78),
    [sym_binary_exp] = STATE(78),
    [sym_unary_exp] = STATE(78),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(78),
    [sym_property_exp] = STATE(78),
    [sym_bool] = STATE(78),
    [sym_string] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(217),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_block] = STATE(135),
    [sym_let] = STATE(135),
    [sym_use] = STATE(135),
    [sym__exp] = STATE(135),
    [sym_break] = STATE(135),
    [sym_return] = STATE(135),
    [sym_if] = STATE(135),
    [sym__fn] = STATE(135),
    [sym_loop] = STATE(135),
    [sym_for] = STATE(135),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(135),
    [sym_binary_exp] = STATE(135),
    [sym_unary_exp] = STATE(135),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(219),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_block] = STATE(71),
    [sym_let] = STATE(71),
    [sym_use] = STATE(71),
    [sym__exp] = STATE(71),
    [sym_break] = STATE(71),
    [sym_return] = STATE(71),
    [sym_if] = STATE(71),
    [sym__fn] = STATE(71),
    [sym_loop] = STATE(71),
    [sym_for] = STATE(71),
    [sym_list] = STATE(71),
    [sym_map] = STATE(71),
    [sym_object] = STATE(71),
    [sym_assignment] = STATE(71),
    [sym_binary_exp] = STATE(71),
    [sym_unary_exp] = STATE(71),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(71),
    [sym_property_exp] = STATE(71),
    [sym_bool] = STATE(71),
    [sym_string] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_block] = STATE(173),
    [sym_let] = STATE(173),
    [sym_use] = STATE(173),
    [sym__exp] = STATE(173),
    [sym_break] = STATE(173),
    [sym_return] = STATE(173),
    [sym_if] = STATE(173),
    [sym__fn] = STATE(173),
    [sym_loop] = STATE(173),
    [sym_for] = STATE(173),
    [sym_list] = STATE(173),
    [sym_map] = STATE(173),
    [sym_object] = STATE(173),
    [sym_assignment] = STATE(173),
    [sym_binary_exp] = STATE(173),
    [sym_unary_exp] = STATE(173),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(173),
    [sym_property_exp] = STATE(173),
    [sym_bool] = STATE(173),
    [sym_string] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(223),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_block] = STATE(183),
    [sym_let] = STATE(183),
    [sym_use] = STATE(183),
    [sym__exp] = STATE(183),
    [sym_break] = STATE(183),
    [sym_return] = STATE(183),
    [sym_if] = STATE(183),
    [sym__fn] = STATE(183),
    [sym_loop] = STATE(183),
    [sym_for] = STATE(183),
    [sym_list] = STATE(183),
    [sym_map] = STATE(183),
    [sym_object] = STATE(183),
    [sym_assignment] = STATE(183),
    [sym_binary_exp] = STATE(183),
    [sym_unary_exp] = STATE(183),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(183),
    [sym_property_exp] = STATE(183),
    [sym_bool] = STATE(183),
    [sym_string] = STATE(183),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(225),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_block] = STATE(155),
    [sym_let] = STATE(155),
    [sym_use] = STATE(155),
    [sym__exp] = STATE(155),
    [sym_break] = STATE(155),
    [sym_return] = STATE(155),
    [sym_if] = STATE(155),
    [sym__fn] = STATE(155),
    [sym_loop] = STATE(155),
    [sym_for] = STATE(155),
    [sym_list] = STATE(155),
    [sym_map] = STATE(155),
    [sym_object] = STATE(155),
    [sym_assignment] = STATE(155),
    [sym_binary_exp] = STATE(155),
    [sym_unary_exp] = STATE(155),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(155),
    [sym_property_exp] = STATE(155),
    [sym_bool] = STATE(155),
    [sym_string] = STATE(155),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_block] = STATE(157),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(157),
    [sym_break] = STATE(157),
    [sym_return] = STATE(157),
    [sym_if] = STATE(157),
    [sym__fn] = STATE(157),
    [sym_loop] = STATE(157),
    [sym_for] = STATE(157),
    [sym_list] = STATE(157),
    [sym_map] = STATE(157),
    [sym_object] = STATE(157),
    [sym_assignment] = STATE(157),
    [sym_binary_exp] = STATE(157),
    [sym_unary_exp] = STATE(157),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(157),
    [sym_property_exp] = STATE(157),
    [sym_bool] = STATE(157),
    [sym_string] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(229),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(229),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_block] = STATE(158),
    [sym_let] = STATE(158),
    [sym_use] = STATE(158),
    [sym__exp] = STATE(158),
    [sym_break] = STATE(158),
    [sym_return] = STATE(158),
    [sym_if] = STATE(158),
    [sym__fn] = STATE(158),
    [sym_loop] = STATE(158),
    [sym_for] = STATE(158),
    [sym_list] = STATE(158),
    [sym_map] = STATE(158),
    [sym_object] = STATE(158),
    [sym_assignment] = STATE(158),
    [sym_binary_exp] = STATE(158),
    [sym_unary_exp] = STATE(158),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(158),
    [sym_property_exp] = STATE(158),
    [sym_bool] = STATE(158),
    [sym_string] = STATE(158),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(231),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_block] = STATE(159),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(159),
    [sym_break] = STATE(159),
    [sym_return] = STATE(159),
    [sym_if] = STATE(159),
    [sym__fn] = STATE(159),
    [sym_loop] = STATE(159),
    [sym_for] = STATE(159),
    [sym_list] = STATE(159),
    [sym_map] = STATE(159),
    [sym_object] = STATE(159),
    [sym_assignment] = STATE(159),
    [sym_binary_exp] = STATE(159),
    [sym_unary_exp] = STATE(159),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(159),
    [sym_property_exp] = STATE(159),
    [sym_bool] = STATE(159),
    [sym_string] = STATE(159),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(233),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_block] = STATE(161),
    [sym_let] = STATE(161),
    [sym_use] = STATE(161),
    [sym__exp] = STATE(161),
    [sym_break] = STATE(161),
    [sym_return] = STATE(161),
    [sym_if] = STATE(161),
    [sym__fn] = STATE(161),
    [sym_loop] = STATE(161),
    [sym_for] = STATE(161),
    [sym_list] = STATE(161),
    [sym_map] = STATE(161),
    [sym_object] = STATE(161),
    [sym_assignment] = STATE(161),
    [sym_binary_exp] = STATE(161),
    [sym_unary_exp] = STATE(161),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(161),
    [sym_property_exp] = STATE(161),
    [sym_bool] = STATE(161),
    [sym_string] = STATE(161),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(235),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_block] = STATE(76),
    [sym_let] = STATE(76),
    [sym_use] = STATE(76),
    [sym__exp] = STATE(76),
    [sym_break] = STATE(76),
    [sym_return] = STATE(76),
    [sym_if] = STATE(76),
    [sym__fn] = STATE(76),
    [sym_loop] = STATE(76),
    [sym_for] = STATE(76),
    [sym_list] = STATE(76),
    [sym_map] = STATE(76),
    [sym_object] = STATE(76),
    [sym_assignment] = STATE(76),
    [sym_binary_exp] = STATE(76),
    [sym_unary_exp] = STATE(76),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(76),
    [sym_property_exp] = STATE(76),
    [sym_bool] = STATE(76),
    [sym_string] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(237),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_block] = STATE(73),
    [sym_let] = STATE(73),
    [sym_use] = STATE(73),
    [sym__exp] = STATE(73),
    [sym_break] = STATE(73),
    [sym_return] = STATE(73),
    [sym_if] = STATE(73),
    [sym__fn] = STATE(73),
    [sym_loop] = STATE(73),
    [sym_for] = STATE(73),
    [sym_list] = STATE(73),
    [sym_map] = STATE(73),
    [sym_object] = STATE(73),
    [sym_assignment] = STATE(73),
    [sym_binary_exp] = STATE(73),
    [sym_unary_exp] = STATE(73),
    [sym_index_exp] = STATE(70),
    [sym_call] = STATE(73),
    [sym_property_exp] = STATE(73),
    [sym_bool] = STATE(73),
    [sym_string] = STATE(73),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(239),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_block] = STATE(168),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(168),
    [sym_break] = STATE(168),
    [sym_return] = STATE(168),
    [sym_if] = STATE(168),
    [sym__fn] = STATE(168),
    [sym_loop] = STATE(168),
    [sym_for] = STATE(168),
    [sym_list] = STATE(168),
    [sym_map] = STATE(168),
    [sym_object] = STATE(168),
    [sym_assignment] = STATE(168),
    [sym_binary_exp] = STATE(168),
    [sym_unary_exp] = STATE(168),
    [sym_index_exp] = STATE(82),
    [sym_call] = STATE(168),
    [sym_property_exp] = STATE(168),
    [sym_bool] = STATE(168),
    [sym_string] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(241),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 20,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [33] = 4,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(247), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [68] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [101] = 5,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [138] = 5,
    ACTIONS(263), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [175] = 4,
    ACTIONS(270), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [210] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 20,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [243] = 5,
    ACTIONS(280), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(278), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [280] = 5,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [317] = 5,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [354] = 4,
    ACTIONS(299), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [389] = 7,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 15,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [429] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [461] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [511] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 19,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [543] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [575] = 6,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [613] = 9,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [657] = 10,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [703] = 5,
    ACTIONS(335), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(278), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [739] = 11,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [787] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(337), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [819] = 4,
    ACTIONS(341), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [853] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(343), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [885] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(347), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [935] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(349), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [967] = 4,
    ACTIONS(353), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1001] = 5,
    ACTIONS(341), 1,
      anon_sym_COLON_EQ,
    ACTIONS(355), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 16,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1037] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1069] = 5,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1105] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1137] = 5,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1173] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 19,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1205] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(370), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1237] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1301] = 5,
    ACTIONS(382), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1337] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(385), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1369] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1401] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(389), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1433] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(393), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1465] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1497] = 6,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1535] = 6,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1573] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1605] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1637] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1669] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(417), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1701] = 4,
    STATE(91), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(247), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1735] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(421), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1785] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1817] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(427), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1867] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1899] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(431), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(429), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1931] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(433), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1963] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(437), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1995] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(441), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2027] = 16,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    STATE(10), 1,
      sym__sc,
    STATE(189), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2085] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(471), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2117] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(475), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2149] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(481), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(479), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2181] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2213] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(487), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2245] = 5,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2281] = 16,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(491), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym__sc,
    STATE(189), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2339] = 5,
    ACTIONS(341), 1,
      anon_sym_COLON_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 16,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2375] = 15,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    STATE(10), 1,
      sym__sc,
    STATE(189), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(449), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2431] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2462] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(417), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2493] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(431), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(429), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2524] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(433), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2555] = 6,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2592] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2641] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(370), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2672] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(471), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2703] = 6,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2740] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2771] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(441), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2802] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(475), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2833] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2864] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(437), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2895] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2926] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(481), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(479), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2957] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2988] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(393), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3019] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3050] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(349), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3081] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(487), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3112] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3143] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(347), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3192] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(343), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3223] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3254] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(337), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3285] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(389), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3316] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3347] = 11,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3394] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(385), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3425] = 10,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 11,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3470] = 9,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 13,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3513] = 7,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 14,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [3552] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3583] = 6,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3651] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3682] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3713] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(427), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3762] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(421), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3811] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(495), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3859] = 14,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    STATE(194), 1,
      aux_sym_object_repeat1,
    STATE(226), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(497), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3911] = 14,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    STATE(193), 1,
      aux_sym_object_repeat1,
    STATE(236), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(499), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3963] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4014] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(505), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4061] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4112] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4163] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4214] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4265] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4316] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4364] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4412] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4460] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4508] = 12,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      anon_sym_PERCENT,
    ACTIONS(469), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(529), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(459), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4554] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(531), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4600] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4645] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4690] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4735] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4780] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_STAR_STAR,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4825] = 5,
    STATE(40), 1,
      sym__sc,
    STATE(188), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(543), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4844] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(188), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(546), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4863] = 4,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4878] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(553), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4895] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(558), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4912] = 4,
    STATE(197), 1,
      aux_sym_object_repeat1,
    STATE(230), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4927] = 4,
    STATE(197), 1,
      aux_sym_object_repeat1,
    STATE(224), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(562), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4942] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    ACTIONS(566), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4959] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    ACTIONS(570), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4976] = 4,
    STATE(197), 1,
      aux_sym_object_repeat1,
    STATE(248), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(572), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4991] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(558), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [5008] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5022] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5036] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5050] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5064] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5078] = 4,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5092] = 4,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5106] = 4,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5120] = 3,
    STATE(256), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(610), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [5132] = 4,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5146] = 3,
    STATE(239), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [5158] = 4,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5172] = 4,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5186] = 4,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5200] = 4,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5214] = 4,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5228] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5237] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5248] = 3,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5259] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5270] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5281] = 3,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5292] = 3,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5303] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5314] = 3,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5325] = 3,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5336] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5347] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5358] = 3,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5369] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5380] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5391] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5402] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5413] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5424] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5435] = 3,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5446] = 3,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5457] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5468] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5479] = 2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5487] = 2,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5495] = 2,
    ACTIONS(655), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5503] = 2,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5511] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5519] = 2,
    ACTIONS(661), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5527] = 2,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5535] = 2,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5543] = 2,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5551] = 2,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5559] = 2,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5567] = 2,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5575] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5583] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5591] = 2,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5599] = 2,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5607] = 2,
    ACTIONS(675), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5615] = 2,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5623] = 2,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5631] = 2,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5639] = 2,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5647] = 2,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5655] = 2,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5663] = 2,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5671] = 2,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5679] = 2,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5687] = 2,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5695] = 2,
    ACTIONS(691), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5703] = 2,
    ACTIONS(693), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5711] = 2,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5719] = 2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5727] = 2,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 33,
  [SMALL_STATE(62)] = 68,
  [SMALL_STATE(63)] = 101,
  [SMALL_STATE(64)] = 138,
  [SMALL_STATE(65)] = 175,
  [SMALL_STATE(66)] = 210,
  [SMALL_STATE(67)] = 243,
  [SMALL_STATE(68)] = 280,
  [SMALL_STATE(69)] = 317,
  [SMALL_STATE(70)] = 354,
  [SMALL_STATE(71)] = 389,
  [SMALL_STATE(72)] = 429,
  [SMALL_STATE(73)] = 461,
  [SMALL_STATE(74)] = 511,
  [SMALL_STATE(75)] = 543,
  [SMALL_STATE(76)] = 575,
  [SMALL_STATE(77)] = 613,
  [SMALL_STATE(78)] = 657,
  [SMALL_STATE(79)] = 703,
  [SMALL_STATE(80)] = 739,
  [SMALL_STATE(81)] = 787,
  [SMALL_STATE(82)] = 819,
  [SMALL_STATE(83)] = 853,
  [SMALL_STATE(84)] = 885,
  [SMALL_STATE(85)] = 935,
  [SMALL_STATE(86)] = 967,
  [SMALL_STATE(87)] = 1001,
  [SMALL_STATE(88)] = 1037,
  [SMALL_STATE(89)] = 1069,
  [SMALL_STATE(90)] = 1105,
  [SMALL_STATE(91)] = 1137,
  [SMALL_STATE(92)] = 1173,
  [SMALL_STATE(93)] = 1205,
  [SMALL_STATE(94)] = 1237,
  [SMALL_STATE(95)] = 1269,
  [SMALL_STATE(96)] = 1301,
  [SMALL_STATE(97)] = 1337,
  [SMALL_STATE(98)] = 1369,
  [SMALL_STATE(99)] = 1401,
  [SMALL_STATE(100)] = 1433,
  [SMALL_STATE(101)] = 1465,
  [SMALL_STATE(102)] = 1497,
  [SMALL_STATE(103)] = 1535,
  [SMALL_STATE(104)] = 1573,
  [SMALL_STATE(105)] = 1605,
  [SMALL_STATE(106)] = 1637,
  [SMALL_STATE(107)] = 1669,
  [SMALL_STATE(108)] = 1701,
  [SMALL_STATE(109)] = 1735,
  [SMALL_STATE(110)] = 1785,
  [SMALL_STATE(111)] = 1817,
  [SMALL_STATE(112)] = 1867,
  [SMALL_STATE(113)] = 1899,
  [SMALL_STATE(114)] = 1931,
  [SMALL_STATE(115)] = 1963,
  [SMALL_STATE(116)] = 1995,
  [SMALL_STATE(117)] = 2027,
  [SMALL_STATE(118)] = 2085,
  [SMALL_STATE(119)] = 2117,
  [SMALL_STATE(120)] = 2149,
  [SMALL_STATE(121)] = 2181,
  [SMALL_STATE(122)] = 2213,
  [SMALL_STATE(123)] = 2245,
  [SMALL_STATE(124)] = 2281,
  [SMALL_STATE(125)] = 2339,
  [SMALL_STATE(126)] = 2375,
  [SMALL_STATE(127)] = 2431,
  [SMALL_STATE(128)] = 2462,
  [SMALL_STATE(129)] = 2493,
  [SMALL_STATE(130)] = 2524,
  [SMALL_STATE(131)] = 2555,
  [SMALL_STATE(132)] = 2592,
  [SMALL_STATE(133)] = 2641,
  [SMALL_STATE(134)] = 2672,
  [SMALL_STATE(135)] = 2703,
  [SMALL_STATE(136)] = 2740,
  [SMALL_STATE(137)] = 2771,
  [SMALL_STATE(138)] = 2802,
  [SMALL_STATE(139)] = 2833,
  [SMALL_STATE(140)] = 2864,
  [SMALL_STATE(141)] = 2895,
  [SMALL_STATE(142)] = 2926,
  [SMALL_STATE(143)] = 2957,
  [SMALL_STATE(144)] = 2988,
  [SMALL_STATE(145)] = 3019,
  [SMALL_STATE(146)] = 3050,
  [SMALL_STATE(147)] = 3081,
  [SMALL_STATE(148)] = 3112,
  [SMALL_STATE(149)] = 3143,
  [SMALL_STATE(150)] = 3192,
  [SMALL_STATE(151)] = 3223,
  [SMALL_STATE(152)] = 3254,
  [SMALL_STATE(153)] = 3285,
  [SMALL_STATE(154)] = 3316,
  [SMALL_STATE(155)] = 3347,
  [SMALL_STATE(156)] = 3394,
  [SMALL_STATE(157)] = 3425,
  [SMALL_STATE(158)] = 3470,
  [SMALL_STATE(159)] = 3513,
  [SMALL_STATE(160)] = 3552,
  [SMALL_STATE(161)] = 3583,
  [SMALL_STATE(162)] = 3620,
  [SMALL_STATE(163)] = 3651,
  [SMALL_STATE(164)] = 3682,
  [SMALL_STATE(165)] = 3713,
  [SMALL_STATE(166)] = 3762,
  [SMALL_STATE(167)] = 3811,
  [SMALL_STATE(168)] = 3859,
  [SMALL_STATE(169)] = 3911,
  [SMALL_STATE(170)] = 3963,
  [SMALL_STATE(171)] = 4014,
  [SMALL_STATE(172)] = 4061,
  [SMALL_STATE(173)] = 4112,
  [SMALL_STATE(174)] = 4163,
  [SMALL_STATE(175)] = 4214,
  [SMALL_STATE(176)] = 4265,
  [SMALL_STATE(177)] = 4316,
  [SMALL_STATE(178)] = 4364,
  [SMALL_STATE(179)] = 4412,
  [SMALL_STATE(180)] = 4460,
  [SMALL_STATE(181)] = 4508,
  [SMALL_STATE(182)] = 4554,
  [SMALL_STATE(183)] = 4600,
  [SMALL_STATE(184)] = 4645,
  [SMALL_STATE(185)] = 4690,
  [SMALL_STATE(186)] = 4735,
  [SMALL_STATE(187)] = 4780,
  [SMALL_STATE(188)] = 4825,
  [SMALL_STATE(189)] = 4844,
  [SMALL_STATE(190)] = 4863,
  [SMALL_STATE(191)] = 4878,
  [SMALL_STATE(192)] = 4895,
  [SMALL_STATE(193)] = 4912,
  [SMALL_STATE(194)] = 4927,
  [SMALL_STATE(195)] = 4942,
  [SMALL_STATE(196)] = 4959,
  [SMALL_STATE(197)] = 4976,
  [SMALL_STATE(198)] = 4991,
  [SMALL_STATE(199)] = 5008,
  [SMALL_STATE(200)] = 5022,
  [SMALL_STATE(201)] = 5036,
  [SMALL_STATE(202)] = 5050,
  [SMALL_STATE(203)] = 5064,
  [SMALL_STATE(204)] = 5078,
  [SMALL_STATE(205)] = 5092,
  [SMALL_STATE(206)] = 5106,
  [SMALL_STATE(207)] = 5120,
  [SMALL_STATE(208)] = 5132,
  [SMALL_STATE(209)] = 5146,
  [SMALL_STATE(210)] = 5158,
  [SMALL_STATE(211)] = 5172,
  [SMALL_STATE(212)] = 5186,
  [SMALL_STATE(213)] = 5200,
  [SMALL_STATE(214)] = 5214,
  [SMALL_STATE(215)] = 5228,
  [SMALL_STATE(216)] = 5237,
  [SMALL_STATE(217)] = 5248,
  [SMALL_STATE(218)] = 5259,
  [SMALL_STATE(219)] = 5270,
  [SMALL_STATE(220)] = 5281,
  [SMALL_STATE(221)] = 5292,
  [SMALL_STATE(222)] = 5303,
  [SMALL_STATE(223)] = 5314,
  [SMALL_STATE(224)] = 5325,
  [SMALL_STATE(225)] = 5336,
  [SMALL_STATE(226)] = 5347,
  [SMALL_STATE(227)] = 5358,
  [SMALL_STATE(228)] = 5369,
  [SMALL_STATE(229)] = 5380,
  [SMALL_STATE(230)] = 5391,
  [SMALL_STATE(231)] = 5402,
  [SMALL_STATE(232)] = 5413,
  [SMALL_STATE(233)] = 5424,
  [SMALL_STATE(234)] = 5435,
  [SMALL_STATE(235)] = 5446,
  [SMALL_STATE(236)] = 5457,
  [SMALL_STATE(237)] = 5468,
  [SMALL_STATE(238)] = 5479,
  [SMALL_STATE(239)] = 5487,
  [SMALL_STATE(240)] = 5495,
  [SMALL_STATE(241)] = 5503,
  [SMALL_STATE(242)] = 5511,
  [SMALL_STATE(243)] = 5519,
  [SMALL_STATE(244)] = 5527,
  [SMALL_STATE(245)] = 5535,
  [SMALL_STATE(246)] = 5543,
  [SMALL_STATE(247)] = 5551,
  [SMALL_STATE(248)] = 5559,
  [SMALL_STATE(249)] = 5567,
  [SMALL_STATE(250)] = 5575,
  [SMALL_STATE(251)] = 5583,
  [SMALL_STATE(252)] = 5591,
  [SMALL_STATE(253)] = 5599,
  [SMALL_STATE(254)] = 5607,
  [SMALL_STATE(255)] = 5615,
  [SMALL_STATE(256)] = 5623,
  [SMALL_STATE(257)] = 5631,
  [SMALL_STATE(258)] = 5639,
  [SMALL_STATE(259)] = 5647,
  [SMALL_STATE(260)] = 5655,
  [SMALL_STATE(261)] = 5663,
  [SMALL_STATE(262)] = 5671,
  [SMALL_STATE(263)] = 5679,
  [SMALL_STATE(264)] = 5687,
  [SMALL_STATE(265)] = 5695,
  [SMALL_STATE(266)] = 5703,
  [SMALL_STATE(267)] = 5711,
  [SMALL_STATE(268)] = 5719,
  [SMALL_STATE(269)] = 5727,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_exp, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_exp, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(238),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(249),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(264),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(245),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(40),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(191),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(248),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(33),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(255),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ursa_external_scanner_create(void);
void tree_sitter_ursa_external_scanner_destroy(void *);
bool tree_sitter_ursa_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ursa_external_scanner_serialize(void *, char *);
void tree_sitter_ursa_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ursa(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ursa_external_scanner_create,
      tree_sitter_ursa_external_scanner_destroy,
      tree_sitter_ursa_external_scanner_scan,
      tree_sitter_ursa_external_scanner_serialize,
      tree_sitter_ursa_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
