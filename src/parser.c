#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 86
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
  sym_call = 74,
  sym_property_exp = 75,
  sym_bool = 76,
  sym_string = 77,
  aux_sym__sequence_repeat1 = 78,
  aux_sym_use_repeat1 = 79,
  aux_sym_lambda_repeat1 = 80,
  aux_sym_list_repeat1 = 81,
  aux_sym_map_repeat1 = 82,
  aux_sym_object_repeat1 = 83,
  aux_sym_property_exp_repeat1 = 84,
  aux_sym_string_repeat1 = 85,
  alias_sym_property_identifier = 86,
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 18,
  [22] = 17,
  [23] = 15,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 25,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 37,
  [45] = 35,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 42,
  [50] = 38,
  [51] = 39,
  [52] = 40,
  [53] = 41,
  [54] = 26,
  [55] = 27,
  [56] = 30,
  [57] = 43,
  [58] = 58,
  [59] = 59,
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
  [71] = 59,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 67,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 65,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 63,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 61,
  [95] = 64,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 66,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 58,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 62,
  [118] = 118,
  [119] = 70,
  [120] = 120,
  [121] = 60,
  [122] = 118,
  [123] = 86,
  [124] = 116,
  [125] = 69,
  [126] = 98,
  [127] = 103,
  [128] = 97,
  [129] = 109,
  [130] = 90,
  [131] = 108,
  [132] = 99,
  [133] = 92,
  [134] = 112,
  [135] = 110,
  [136] = 100,
  [137] = 111,
  [138] = 101,
  [139] = 114,
  [140] = 85,
  [141] = 102,
  [142] = 115,
  [143] = 93,
  [144] = 72,
  [145] = 84,
  [146] = 83,
  [147] = 81,
  [148] = 80,
  [149] = 68,
  [150] = 88,
  [151] = 79,
  [152] = 87,
  [153] = 78,
  [154] = 76,
  [155] = 74,
  [156] = 77,
  [157] = 104,
  [158] = 73,
  [159] = 96,
  [160] = 91,
  [161] = 107,
  [162] = 105,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 166,
  [170] = 168,
  [171] = 171,
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 173,
  [178] = 176,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 186,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 185,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 194,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 197,
  [204] = 193,
  [205] = 198,
  [206] = 206,
  [207] = 201,
  [208] = 200,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 214,
  [216] = 216,
  [217] = 217,
  [218] = 211,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 220,
  [225] = 217,
  [226] = 222,
  [227] = 221,
  [228] = 219,
  [229] = 223,
  [230] = 216,
  [231] = 210,
  [232] = 232,
  [233] = 233,
  [234] = 232,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 239,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 240,
  [251] = 248,
  [252] = 242,
  [253] = 253,
  [254] = 244,
  [255] = 255,
  [256] = 256,
  [257] = 255,
  [258] = 249,
  [259] = 241,
  [260] = 237,
  [261] = 236,
  [262] = 253,
  [263] = 238,
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
  [58] = {.lex_state = 60, .external_lex_state = 2},
  [59] = {.lex_state = 60, .external_lex_state = 2},
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
  [70] = {.lex_state = 60, .external_lex_state = 3},
  [71] = {.lex_state = 60, .external_lex_state = 3},
  [72] = {.lex_state = 60, .external_lex_state = 2},
  [73] = {.lex_state = 60, .external_lex_state = 2},
  [74] = {.lex_state = 60, .external_lex_state = 2},
  [75] = {.lex_state = 60, .external_lex_state = 3},
  [76] = {.lex_state = 60, .external_lex_state = 2},
  [77] = {.lex_state = 60, .external_lex_state = 2},
  [78] = {.lex_state = 60, .external_lex_state = 2},
  [79] = {.lex_state = 60, .external_lex_state = 2},
  [80] = {.lex_state = 60, .external_lex_state = 2},
  [81] = {.lex_state = 60, .external_lex_state = 2},
  [82] = {.lex_state = 60, .external_lex_state = 3},
  [83] = {.lex_state = 60, .external_lex_state = 2},
  [84] = {.lex_state = 60, .external_lex_state = 2},
  [85] = {.lex_state = 60, .external_lex_state = 2},
  [86] = {.lex_state = 60, .external_lex_state = 2},
  [87] = {.lex_state = 60, .external_lex_state = 2},
  [88] = {.lex_state = 60, .external_lex_state = 2},
  [89] = {.lex_state = 60, .external_lex_state = 3},
  [90] = {.lex_state = 60, .external_lex_state = 2},
  [91] = {.lex_state = 60, .external_lex_state = 2},
  [92] = {.lex_state = 60, .external_lex_state = 2},
  [93] = {.lex_state = 60, .external_lex_state = 2},
  [94] = {.lex_state = 60, .external_lex_state = 3},
  [95] = {.lex_state = 60, .external_lex_state = 3},
  [96] = {.lex_state = 60, .external_lex_state = 2},
  [97] = {.lex_state = 60, .external_lex_state = 2},
  [98] = {.lex_state = 60, .external_lex_state = 2},
  [99] = {.lex_state = 60, .external_lex_state = 2},
  [100] = {.lex_state = 60, .external_lex_state = 2},
  [101] = {.lex_state = 60, .external_lex_state = 2},
  [102] = {.lex_state = 60, .external_lex_state = 2},
  [103] = {.lex_state = 60, .external_lex_state = 2},
  [104] = {.lex_state = 60, .external_lex_state = 2},
  [105] = {.lex_state = 60, .external_lex_state = 2},
  [106] = {.lex_state = 60, .external_lex_state = 3},
  [107] = {.lex_state = 60, .external_lex_state = 2},
  [108] = {.lex_state = 60, .external_lex_state = 2},
  [109] = {.lex_state = 60, .external_lex_state = 2},
  [110] = {.lex_state = 60, .external_lex_state = 2},
  [111] = {.lex_state = 60, .external_lex_state = 2},
  [112] = {.lex_state = 60, .external_lex_state = 2},
  [113] = {.lex_state = 60, .external_lex_state = 3},
  [114] = {.lex_state = 60, .external_lex_state = 2},
  [115] = {.lex_state = 60, .external_lex_state = 2},
  [116] = {.lex_state = 60, .external_lex_state = 2},
  [117] = {.lex_state = 60, .external_lex_state = 3},
  [118] = {.lex_state = 60, .external_lex_state = 3},
  [119] = {.lex_state = 60, .external_lex_state = 3},
  [120] = {.lex_state = 60, .external_lex_state = 3},
  [121] = {.lex_state = 60, .external_lex_state = 3},
  [122] = {.lex_state = 60, .external_lex_state = 3},
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
  [166] = {.lex_state = 60, .external_lex_state = 2},
  [167] = {.lex_state = 60, .external_lex_state = 2},
  [168] = {.lex_state = 60, .external_lex_state = 2},
  [169] = {.lex_state = 60, .external_lex_state = 2},
  [170] = {.lex_state = 60, .external_lex_state = 2},
  [171] = {.lex_state = 60, .external_lex_state = 2},
  [172] = {.lex_state = 60, .external_lex_state = 2},
  [173] = {.lex_state = 60, .external_lex_state = 2},
  [174] = {.lex_state = 60, .external_lex_state = 2},
  [175] = {.lex_state = 60, .external_lex_state = 3},
  [176] = {.lex_state = 60, .external_lex_state = 2},
  [177] = {.lex_state = 60, .external_lex_state = 2},
  [178] = {.lex_state = 60, .external_lex_state = 2},
  [179] = {.lex_state = 60, .external_lex_state = 2},
  [180] = {.lex_state = 60, .external_lex_state = 2},
  [181] = {.lex_state = 60, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 3, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 3, .external_lex_state = 2},
  [189] = {.lex_state = 3, .external_lex_state = 2},
  [190] = {.lex_state = 3, .external_lex_state = 2},
  [191] = {.lex_state = 3, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 4, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 4, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 4, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 4, .external_lex_state = 2},
  [217] = {.lex_state = 4, .external_lex_state = 2},
  [218] = {.lex_state = 4, .external_lex_state = 2},
  [219] = {.lex_state = 4, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 4, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 4, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 4, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 4, .external_lex_state = 2},
  [233] = {.lex_state = 4, .external_lex_state = 2},
  [234] = {.lex_state = 4, .external_lex_state = 2},
  [235] = {.lex_state = 4, .external_lex_state = 2},
  [236] = {.lex_state = 4, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 4, .external_lex_state = 2},
  [239] = {.lex_state = 4, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 4, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 4, .external_lex_state = 2},
  [253] = {.lex_state = 4, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 4, .external_lex_state = 2},
  [262] = {.lex_state = 4, .external_lex_state = 2},
  [263] = {.lex_state = 4, .external_lex_state = 2},
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
    [sym_module] = STATE(246),
    [sym__shebang] = STATE(13),
    [sym__sequence] = STATE(243),
    [sym_block] = STATE(120),
    [sym_let] = STATE(120),
    [sym_use] = STATE(120),
    [sym__exp] = STATE(120),
    [sym_break] = STATE(120),
    [sym_return] = STATE(120),
    [sym_if] = STATE(120),
    [sym__fn] = STATE(120),
    [sym_loop] = STATE(120),
    [sym_for] = STATE(120),
    [sym_list] = STATE(120),
    [sym_map] = STATE(120),
    [sym_object] = STATE(120),
    [sym_assignment] = STATE(120),
    [sym_binary_exp] = STATE(120),
    [sym_unary_exp] = STATE(120),
    [sym_call] = STATE(120),
    [sym_property_exp] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_string] = STATE(120),
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
    [sym_block] = STATE(105),
    [sym_let] = STATE(105),
    [sym_use] = STATE(105),
    [sym__exp] = STATE(105),
    [sym_break] = STATE(105),
    [sym_return] = STATE(105),
    [sym_if] = STATE(105),
    [sym__fn] = STATE(105),
    [sym_loop] = STATE(105),
    [sym_for] = STATE(105),
    [sym_list] = STATE(105),
    [sym_map] = STATE(105),
    [sym_object] = STATE(105),
    [sym_assignment] = STATE(105),
    [sym_binary_exp] = STATE(105),
    [sym_unary_exp] = STATE(105),
    [sym_call] = STATE(105),
    [sym_property_exp] = STATE(105),
    [sym_bool] = STATE(105),
    [sym_string] = STATE(105),
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
    [sym_block] = STATE(107),
    [sym_let] = STATE(107),
    [sym_use] = STATE(107),
    [sym__exp] = STATE(107),
    [sym_break] = STATE(107),
    [sym_return] = STATE(107),
    [sym_if] = STATE(107),
    [sym__fn] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_for] = STATE(107),
    [sym_list] = STATE(107),
    [sym_map] = STATE(107),
    [sym_object] = STATE(107),
    [sym_assignment] = STATE(107),
    [sym_binary_exp] = STATE(107),
    [sym_unary_exp] = STATE(107),
    [sym_call] = STATE(107),
    [sym_property_exp] = STATE(107),
    [sym_bool] = STATE(107),
    [sym_string] = STATE(107),
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
    [sym_call] = STATE(161),
    [sym_property_exp] = STATE(161),
    [sym_bool] = STATE(161),
    [sym_string] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(87),
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
    [sym_number] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(81),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(162),
    [sym_let] = STATE(162),
    [sym_use] = STATE(162),
    [sym__exp] = STATE(162),
    [sym_break] = STATE(162),
    [sym_return] = STATE(162),
    [sym_if] = STATE(162),
    [sym__fn] = STATE(162),
    [sym_loop] = STATE(162),
    [sym_for] = STATE(162),
    [sym_list] = STATE(162),
    [sym_map] = STATE(162),
    [sym_object] = STATE(162),
    [sym_assignment] = STATE(162),
    [sym_binary_exp] = STATE(162),
    [sym_unary_exp] = STATE(162),
    [sym_call] = STATE(162),
    [sym_property_exp] = STATE(162),
    [sym_bool] = STATE(162),
    [sym_string] = STATE(162),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(89),
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
    [sym_number] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(45),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sequence] = STATE(249),
    [sym_block] = STATE(118),
    [sym_let] = STATE(118),
    [sym_use] = STATE(118),
    [sym__exp] = STATE(118),
    [sym_break] = STATE(118),
    [sym_return] = STATE(118),
    [sym_if] = STATE(118),
    [sym__fn] = STATE(118),
    [sym_loop] = STATE(118),
    [sym_for] = STATE(118),
    [sym_list] = STATE(118),
    [sym_map] = STATE(118),
    [sym_object] = STATE(118),
    [sym_assignment] = STATE(118),
    [sym_binary_exp] = STATE(118),
    [sym_unary_exp] = STATE(118),
    [sym_call] = STATE(118),
    [sym_property_exp] = STATE(118),
    [sym_bool] = STATE(118),
    [sym_string] = STATE(118),
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
    [sym__sequence] = STATE(258),
    [sym_block] = STATE(122),
    [sym_let] = STATE(122),
    [sym_use] = STATE(122),
    [sym__exp] = STATE(122),
    [sym_break] = STATE(122),
    [sym_return] = STATE(122),
    [sym_if] = STATE(122),
    [sym__fn] = STATE(122),
    [sym_loop] = STATE(122),
    [sym_for] = STATE(122),
    [sym_list] = STATE(122),
    [sym_map] = STATE(122),
    [sym_object] = STATE(122),
    [sym_assignment] = STATE(122),
    [sym_binary_exp] = STATE(122),
    [sym_unary_exp] = STATE(122),
    [sym_call] = STATE(122),
    [sym_property_exp] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_string] = STATE(122),
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
    [sym_call] = STATE(168),
    [sym_property_exp] = STATE(168),
    [sym_bool] = STATE(168),
    [sym_string] = STATE(168),
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
    [sym_block] = STATE(164),
    [sym_let] = STATE(164),
    [sym_use] = STATE(164),
    [sym__exp] = STATE(164),
    [sym_break] = STATE(164),
    [sym_return] = STATE(164),
    [sym_if] = STATE(164),
    [sym__fn] = STATE(164),
    [sym_loop] = STATE(164),
    [sym_for] = STATE(164),
    [sym_list] = STATE(164),
    [sym_map] = STATE(164),
    [sym_object] = STATE(164),
    [sym_assignment] = STATE(164),
    [sym_binary_exp] = STATE(164),
    [sym_unary_exp] = STATE(164),
    [sym_call] = STATE(164),
    [sym_property_exp] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_string] = STATE(164),
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
    [sym__sequence] = STATE(249),
    [sym_block] = STATE(120),
    [sym_let] = STATE(120),
    [sym_use] = STATE(120),
    [sym__exp] = STATE(120),
    [sym_break] = STATE(120),
    [sym_return] = STATE(120),
    [sym_if] = STATE(120),
    [sym__fn] = STATE(120),
    [sym_loop] = STATE(120),
    [sym_for] = STATE(120),
    [sym_list] = STATE(120),
    [sym_map] = STATE(120),
    [sym_object] = STATE(120),
    [sym_assignment] = STATE(120),
    [sym_binary_exp] = STATE(120),
    [sym_unary_exp] = STATE(120),
    [sym_call] = STATE(120),
    [sym_property_exp] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_string] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(137),
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
  [11] = {
    [sym__sequence] = STATE(258),
    [sym_block] = STATE(120),
    [sym_let] = STATE(120),
    [sym_use] = STATE(120),
    [sym__exp] = STATE(120),
    [sym_break] = STATE(120),
    [sym_return] = STATE(120),
    [sym_if] = STATE(120),
    [sym__fn] = STATE(120),
    [sym_loop] = STATE(120),
    [sym_for] = STATE(120),
    [sym_list] = STATE(120),
    [sym_map] = STATE(120),
    [sym_object] = STATE(120),
    [sym_assignment] = STATE(120),
    [sym_binary_exp] = STATE(120),
    [sym_unary_exp] = STATE(120),
    [sym_call] = STATE(120),
    [sym_property_exp] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_string] = STATE(120),
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
    [sym_block] = STATE(164),
    [sym_let] = STATE(164),
    [sym_use] = STATE(164),
    [sym__exp] = STATE(164),
    [sym_break] = STATE(164),
    [sym_return] = STATE(164),
    [sym_if] = STATE(164),
    [sym__fn] = STATE(164),
    [sym_loop] = STATE(164),
    [sym_for] = STATE(164),
    [sym_list] = STATE(164),
    [sym_map] = STATE(164),
    [sym_object] = STATE(164),
    [sym_assignment] = STATE(164),
    [sym_binary_exp] = STATE(164),
    [sym_unary_exp] = STATE(164),
    [sym_call] = STATE(164),
    [sym_property_exp] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_string] = STATE(164),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(141),
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
  [13] = {
    [sym__sequence] = STATE(247),
    [sym_block] = STATE(120),
    [sym_let] = STATE(120),
    [sym_use] = STATE(120),
    [sym__exp] = STATE(120),
    [sym_break] = STATE(120),
    [sym_return] = STATE(120),
    [sym_if] = STATE(120),
    [sym__fn] = STATE(120),
    [sym_loop] = STATE(120),
    [sym_for] = STATE(120),
    [sym_list] = STATE(120),
    [sym_map] = STATE(120),
    [sym_object] = STATE(120),
    [sym_assignment] = STATE(120),
    [sym_binary_exp] = STATE(120),
    [sym_unary_exp] = STATE(120),
    [sym_call] = STATE(120),
    [sym_property_exp] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_string] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(143),
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
  [14] = {
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
    [sym_call] = STATE(170),
    [sym_property_exp] = STATE(170),
    [sym_bool] = STATE(170),
    [sym_string] = STATE(170),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(79),
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
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(157),
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
    [sym_number] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
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
    [anon_sym_RBRACK] = ACTIONS(159),
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
  [18] = {
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
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(157),
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
    [sym_number] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
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
    [sym_call] = STATE(172),
    [sym_property_exp] = STATE(172),
    [sym_bool] = STATE(172),
    [sym_string] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(165),
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
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
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
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(157),
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
    [sym_number] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
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
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(157),
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
    [sym_number] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
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
    [anon_sym_RBRACK] = ACTIONS(171),
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
    [anon_sym_RBRACK] = ACTIONS(173),
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
    [sym_call] = STATE(167),
    [sym_property_exp] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_string] = STATE(167),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(177),
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
    [sym_number] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(179), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(132), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [82] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(181), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(74), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [164] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(183), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(180), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [246] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(157), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(181), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [328] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(185), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(100), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [410] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(187), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(165), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [492] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(189), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(99), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [574] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(191), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(174), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [656] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(135), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(164), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [738] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(151), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(171), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [820] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(193), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(169), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [902] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(195), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(136), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [984] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(197), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(84), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1066] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(199), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(80), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1148] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(201), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(79), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1230] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(203), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(78), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1312] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(205), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(76), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1394] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(207), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(173), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1476] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(209), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(72), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1558] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(211), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(145), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1640] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(213), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(166), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1722] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(215), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(178), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1804] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(217), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(176), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1886] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(219), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(175), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1968] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(221), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(177), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2050] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(223), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(148), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2132] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(225), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(151), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2214] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(227), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(153), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2296] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(229), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(154), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2378] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(231), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(155), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2460] = 19,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(59), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_loop,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(233), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(179), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2542] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(235), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(163), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2624] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_break,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_loop,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(237), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(144), 20,
      sym_block,
      sym_let,
      sym_use,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_loop,
      sym_for,
      sym_list,
      sym_map,
      sym_object,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2706] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(241), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(239), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
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
  [2738] = 4,
    ACTIONS(245), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(247), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [2772] = 4,
    ACTIONS(253), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2806] = 5,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
  [2842] = 5,
    ACTIONS(264), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(262), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
  [2878] = 5,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
  [2914] = 5,
    ACTIONS(264), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
  [2950] = 5,
    ACTIONS(281), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(283), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
  [2986] = 4,
    STATE(63), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(287), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3020] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
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
  [3052] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3083] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(297), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3114] = 5,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [3149] = 4,
    ACTIONS(305), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(247), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [3182] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3229] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(327), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3260] = 5,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 16,
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
  [3295] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
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
  [3326] = 6,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 15,
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
  [3363] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3394] = 8,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 14,
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
  [3435] = 9,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 12,
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
  [3478] = 10,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(331), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3523] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(339), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3554] = 5,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(283), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [3589] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(347), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(345), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3620] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(349), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3667] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(353), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(351), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3698] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(355), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3729] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(359), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3760] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3791] = 5,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [3826] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(370), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3857] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3888] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3919] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(382), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [3950] = 5,
    ACTIONS(386), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [3985] = 5,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [4020] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(391), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4051] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(397), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4082] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(401), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(399), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4113] = 5,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(403), 16,
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
  [4148] = 5,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(403), 16,
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
  [4183] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4214] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4245] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(417), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(415), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4276] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4307] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(423), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4354] = 4,
    STATE(89), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(287), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [4387] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(425), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4434] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(427), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4465] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4496] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(431), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4527] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(435), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4558] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(441), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(439), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4589] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(241), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(239), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
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
  [4620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(443), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4651] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4682] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
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
  [4713] = 5,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(262), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [4748] = 15,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(183), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4803] = 5,
    ACTIONS(303), 1,
      anon_sym_COLON_EQ,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [4838] = 14,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(183), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(459), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4891] = 4,
    ACTIONS(303), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [4924] = 15,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(481), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym__sc,
    STATE(183), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4979] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(355), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5009] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5039] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(297), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5069] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(401), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(399), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5099] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(417), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(415), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5129] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(397), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5159] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5189] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(370), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5219] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(427), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5249] = 5,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(403), 15,
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
  [5283] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5313] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(441), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(439), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5343] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(431), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5373] = 5,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(403), 15,
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
  [5407] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(435), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5437] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5467] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(443), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5497] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(353), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(351), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5527] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5557] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5587] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(382), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5617] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5663] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(349), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5709] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(347), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(345), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5739] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(339), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5769] = 10,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(331), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [5813] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5843] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5873] = 9,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 11,
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
  [5915] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(359), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [5945] = 8,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 13,
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
  [5985] = 6,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 14,
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
  [6021] = 5,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 15,
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
  [6055] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [6085] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [6115] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(327), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [6145] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(391), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [6175] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [6205] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(425), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6251] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(423), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6297] = 13,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    STATE(186), 1,
      aux_sym_object_repeat1,
    STATE(219), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(483), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6346] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(485), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6391] = 13,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    STATE(187), 1,
      aux_sym_object_repeat1,
    STATE(228), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(487), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6440] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6488] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6536] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6584] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6632] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6680] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(509), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6724] = 13,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6772] = 12,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6817] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(515), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6860] = 11,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    ACTIONS(477), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(517), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(467), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6903] = 12,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6948] = 12,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6993] = 12,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7038] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7080] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7122] = 11,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      anon_sym_STAR_STAR,
    ACTIONS(525), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7164] = 5,
    STATE(33), 1,
      sym__sc,
    STATE(182), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(527), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7183] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(182), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(530), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7202] = 4,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(509), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7217] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      aux_sym_string_repeat1,
    ACTIONS(537), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7234] = 4,
    STATE(192), 1,
      aux_sym_object_repeat1,
    STATE(217), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(539), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7249] = 4,
    STATE(192), 1,
      aux_sym_object_repeat1,
    STATE(225), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(541), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7264] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    ACTIONS(545), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7281] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    ACTIONS(550), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7298] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    ACTIONS(550), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7315] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      aux_sym_string_repeat1,
    ACTIONS(556), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7332] = 4,
    STATE(192), 1,
      aux_sym_object_repeat1,
    STATE(235), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(558), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7347] = 4,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7361] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7375] = 4,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7389] = 4,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7403] = 4,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7417] = 4,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7431] = 3,
    STATE(244), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(586), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7443] = 4,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7457] = 4,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7471] = 3,
    STATE(254), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(592), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7483] = 4,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7497] = 4,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7511] = 4,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7525] = 4,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7539] = 4,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7553] = 4,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7567] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(606), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7576] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7587] = 3,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7598] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7609] = 3,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7620] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7631] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7642] = 3,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7653] = 3,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7664] = 3,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7675] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7686] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7697] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7708] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7719] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7730] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7741] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7752] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7763] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7774] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7785] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7796] = 3,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7807] = 3,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7818] = 2,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7826] = 2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7834] = 2,
    ACTIONS(637), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7842] = 2,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7850] = 2,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7858] = 2,
    ACTIONS(641), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7866] = 2,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7874] = 2,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7882] = 2,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7890] = 2,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7898] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7906] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7914] = 2,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7922] = 2,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7930] = 2,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7938] = 2,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7946] = 2,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7954] = 2,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7962] = 2,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7970] = 2,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7978] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7986] = 2,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7994] = 2,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8002] = 2,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8010] = 2,
    ACTIONS(669), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8018] = 2,
    ACTIONS(671), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8026] = 2,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8034] = 2,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8042] = 2,
    ACTIONS(677), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8050] = 2,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8058] = 2,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8066] = 2,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 82,
  [SMALL_STATE(27)] = 164,
  [SMALL_STATE(28)] = 246,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 820,
  [SMALL_STATE(36)] = 902,
  [SMALL_STATE(37)] = 984,
  [SMALL_STATE(38)] = 1066,
  [SMALL_STATE(39)] = 1148,
  [SMALL_STATE(40)] = 1230,
  [SMALL_STATE(41)] = 1312,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1476,
  [SMALL_STATE(44)] = 1558,
  [SMALL_STATE(45)] = 1640,
  [SMALL_STATE(46)] = 1722,
  [SMALL_STATE(47)] = 1804,
  [SMALL_STATE(48)] = 1886,
  [SMALL_STATE(49)] = 1968,
  [SMALL_STATE(50)] = 2050,
  [SMALL_STATE(51)] = 2132,
  [SMALL_STATE(52)] = 2214,
  [SMALL_STATE(53)] = 2296,
  [SMALL_STATE(54)] = 2378,
  [SMALL_STATE(55)] = 2460,
  [SMALL_STATE(56)] = 2542,
  [SMALL_STATE(57)] = 2624,
  [SMALL_STATE(58)] = 2706,
  [SMALL_STATE(59)] = 2738,
  [SMALL_STATE(60)] = 2772,
  [SMALL_STATE(61)] = 2806,
  [SMALL_STATE(62)] = 2842,
  [SMALL_STATE(63)] = 2878,
  [SMALL_STATE(64)] = 2914,
  [SMALL_STATE(65)] = 2950,
  [SMALL_STATE(66)] = 2986,
  [SMALL_STATE(67)] = 3020,
  [SMALL_STATE(68)] = 3052,
  [SMALL_STATE(69)] = 3083,
  [SMALL_STATE(70)] = 3114,
  [SMALL_STATE(71)] = 3149,
  [SMALL_STATE(72)] = 3182,
  [SMALL_STATE(73)] = 3229,
  [SMALL_STATE(74)] = 3260,
  [SMALL_STATE(75)] = 3295,
  [SMALL_STATE(76)] = 3326,
  [SMALL_STATE(77)] = 3363,
  [SMALL_STATE(78)] = 3394,
  [SMALL_STATE(79)] = 3435,
  [SMALL_STATE(80)] = 3478,
  [SMALL_STATE(81)] = 3523,
  [SMALL_STATE(82)] = 3554,
  [SMALL_STATE(83)] = 3589,
  [SMALL_STATE(84)] = 3620,
  [SMALL_STATE(85)] = 3667,
  [SMALL_STATE(86)] = 3698,
  [SMALL_STATE(87)] = 3729,
  [SMALL_STATE(88)] = 3760,
  [SMALL_STATE(89)] = 3791,
  [SMALL_STATE(90)] = 3826,
  [SMALL_STATE(91)] = 3857,
  [SMALL_STATE(92)] = 3888,
  [SMALL_STATE(93)] = 3919,
  [SMALL_STATE(94)] = 3950,
  [SMALL_STATE(95)] = 3985,
  [SMALL_STATE(96)] = 4020,
  [SMALL_STATE(97)] = 4051,
  [SMALL_STATE(98)] = 4082,
  [SMALL_STATE(99)] = 4113,
  [SMALL_STATE(100)] = 4148,
  [SMALL_STATE(101)] = 4183,
  [SMALL_STATE(102)] = 4214,
  [SMALL_STATE(103)] = 4245,
  [SMALL_STATE(104)] = 4276,
  [SMALL_STATE(105)] = 4307,
  [SMALL_STATE(106)] = 4354,
  [SMALL_STATE(107)] = 4387,
  [SMALL_STATE(108)] = 4434,
  [SMALL_STATE(109)] = 4465,
  [SMALL_STATE(110)] = 4496,
  [SMALL_STATE(111)] = 4527,
  [SMALL_STATE(112)] = 4558,
  [SMALL_STATE(113)] = 4589,
  [SMALL_STATE(114)] = 4620,
  [SMALL_STATE(115)] = 4651,
  [SMALL_STATE(116)] = 4682,
  [SMALL_STATE(117)] = 4713,
  [SMALL_STATE(118)] = 4748,
  [SMALL_STATE(119)] = 4803,
  [SMALL_STATE(120)] = 4838,
  [SMALL_STATE(121)] = 4891,
  [SMALL_STATE(122)] = 4924,
  [SMALL_STATE(123)] = 4979,
  [SMALL_STATE(124)] = 5009,
  [SMALL_STATE(125)] = 5039,
  [SMALL_STATE(126)] = 5069,
  [SMALL_STATE(127)] = 5099,
  [SMALL_STATE(128)] = 5129,
  [SMALL_STATE(129)] = 5159,
  [SMALL_STATE(130)] = 5189,
  [SMALL_STATE(131)] = 5219,
  [SMALL_STATE(132)] = 5249,
  [SMALL_STATE(133)] = 5283,
  [SMALL_STATE(134)] = 5313,
  [SMALL_STATE(135)] = 5343,
  [SMALL_STATE(136)] = 5373,
  [SMALL_STATE(137)] = 5407,
  [SMALL_STATE(138)] = 5437,
  [SMALL_STATE(139)] = 5467,
  [SMALL_STATE(140)] = 5497,
  [SMALL_STATE(141)] = 5527,
  [SMALL_STATE(142)] = 5557,
  [SMALL_STATE(143)] = 5587,
  [SMALL_STATE(144)] = 5617,
  [SMALL_STATE(145)] = 5663,
  [SMALL_STATE(146)] = 5709,
  [SMALL_STATE(147)] = 5739,
  [SMALL_STATE(148)] = 5769,
  [SMALL_STATE(149)] = 5813,
  [SMALL_STATE(150)] = 5843,
  [SMALL_STATE(151)] = 5873,
  [SMALL_STATE(152)] = 5915,
  [SMALL_STATE(153)] = 5945,
  [SMALL_STATE(154)] = 5985,
  [SMALL_STATE(155)] = 6021,
  [SMALL_STATE(156)] = 6055,
  [SMALL_STATE(157)] = 6085,
  [SMALL_STATE(158)] = 6115,
  [SMALL_STATE(159)] = 6145,
  [SMALL_STATE(160)] = 6175,
  [SMALL_STATE(161)] = 6205,
  [SMALL_STATE(162)] = 6251,
  [SMALL_STATE(163)] = 6297,
  [SMALL_STATE(164)] = 6346,
  [SMALL_STATE(165)] = 6391,
  [SMALL_STATE(166)] = 6440,
  [SMALL_STATE(167)] = 6488,
  [SMALL_STATE(168)] = 6536,
  [SMALL_STATE(169)] = 6584,
  [SMALL_STATE(170)] = 6632,
  [SMALL_STATE(171)] = 6680,
  [SMALL_STATE(172)] = 6724,
  [SMALL_STATE(173)] = 6772,
  [SMALL_STATE(174)] = 6817,
  [SMALL_STATE(175)] = 6860,
  [SMALL_STATE(176)] = 6903,
  [SMALL_STATE(177)] = 6948,
  [SMALL_STATE(178)] = 6993,
  [SMALL_STATE(179)] = 7038,
  [SMALL_STATE(180)] = 7080,
  [SMALL_STATE(181)] = 7122,
  [SMALL_STATE(182)] = 7164,
  [SMALL_STATE(183)] = 7183,
  [SMALL_STATE(184)] = 7202,
  [SMALL_STATE(185)] = 7217,
  [SMALL_STATE(186)] = 7234,
  [SMALL_STATE(187)] = 7249,
  [SMALL_STATE(188)] = 7264,
  [SMALL_STATE(189)] = 7281,
  [SMALL_STATE(190)] = 7298,
  [SMALL_STATE(191)] = 7315,
  [SMALL_STATE(192)] = 7332,
  [SMALL_STATE(193)] = 7347,
  [SMALL_STATE(194)] = 7361,
  [SMALL_STATE(195)] = 7375,
  [SMALL_STATE(196)] = 7389,
  [SMALL_STATE(197)] = 7403,
  [SMALL_STATE(198)] = 7417,
  [SMALL_STATE(199)] = 7431,
  [SMALL_STATE(200)] = 7443,
  [SMALL_STATE(201)] = 7457,
  [SMALL_STATE(202)] = 7471,
  [SMALL_STATE(203)] = 7483,
  [SMALL_STATE(204)] = 7497,
  [SMALL_STATE(205)] = 7511,
  [SMALL_STATE(206)] = 7525,
  [SMALL_STATE(207)] = 7539,
  [SMALL_STATE(208)] = 7553,
  [SMALL_STATE(209)] = 7567,
  [SMALL_STATE(210)] = 7576,
  [SMALL_STATE(211)] = 7587,
  [SMALL_STATE(212)] = 7598,
  [SMALL_STATE(213)] = 7609,
  [SMALL_STATE(214)] = 7620,
  [SMALL_STATE(215)] = 7631,
  [SMALL_STATE(216)] = 7642,
  [SMALL_STATE(217)] = 7653,
  [SMALL_STATE(218)] = 7664,
  [SMALL_STATE(219)] = 7675,
  [SMALL_STATE(220)] = 7686,
  [SMALL_STATE(221)] = 7697,
  [SMALL_STATE(222)] = 7708,
  [SMALL_STATE(223)] = 7719,
  [SMALL_STATE(224)] = 7730,
  [SMALL_STATE(225)] = 7741,
  [SMALL_STATE(226)] = 7752,
  [SMALL_STATE(227)] = 7763,
  [SMALL_STATE(228)] = 7774,
  [SMALL_STATE(229)] = 7785,
  [SMALL_STATE(230)] = 7796,
  [SMALL_STATE(231)] = 7807,
  [SMALL_STATE(232)] = 7818,
  [SMALL_STATE(233)] = 7826,
  [SMALL_STATE(234)] = 7834,
  [SMALL_STATE(235)] = 7842,
  [SMALL_STATE(236)] = 7850,
  [SMALL_STATE(237)] = 7858,
  [SMALL_STATE(238)] = 7866,
  [SMALL_STATE(239)] = 7874,
  [SMALL_STATE(240)] = 7882,
  [SMALL_STATE(241)] = 7890,
  [SMALL_STATE(242)] = 7898,
  [SMALL_STATE(243)] = 7906,
  [SMALL_STATE(244)] = 7914,
  [SMALL_STATE(245)] = 7922,
  [SMALL_STATE(246)] = 7930,
  [SMALL_STATE(247)] = 7938,
  [SMALL_STATE(248)] = 7946,
  [SMALL_STATE(249)] = 7954,
  [SMALL_STATE(250)] = 7962,
  [SMALL_STATE(251)] = 7970,
  [SMALL_STATE(252)] = 7978,
  [SMALL_STATE(253)] = 7986,
  [SMALL_STATE(254)] = 7994,
  [SMALL_STATE(255)] = 8002,
  [SMALL_STATE(256)] = 8010,
  [SMALL_STATE(257)] = 8018,
  [SMALL_STATE(258)] = 8026,
  [SMALL_STATE(259)] = 8034,
  [SMALL_STATE(260)] = 8042,
  [SMALL_STATE(261)] = 8050,
  [SMALL_STATE(262)] = 8058,
  [SMALL_STATE(263)] = 8066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(242),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(236),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(261),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(252),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(33),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(188),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(235),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(28),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(233),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [655] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
