#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 52
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_COLON_EQ = 24,
  anon_sym_or = 25,
  anon_sym_and = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  anon_sym_STAR_STAR = 38,
  anon_sym_not = 39,
  sym_identifier = 40,
  sym_number = 41,
  anon_sym_false = 42,
  anon_sym_true = 43,
  sym_null = 44,
  anon_sym_DQUOTE = 45,
  sym__unescaped_string_fragment = 46,
  sym__escape_sequence = 47,
  sym_line_comment = 48,
  sym__automatic_semicolon = 49,
  sym_block_comment = 50,
  sym_raw_string_literal = 51,
  sym_module = 52,
  sym__shebang = 53,
  sym__sequence = 54,
  sym_block = 55,
  sym_let = 56,
  sym_use = 57,
  sym__sc = 58,
  sym__exp = 59,
  sym_break = 60,
  sym_return = 61,
  sym_if = 62,
  sym__fn = 63,
  sym_lambda = 64,
  sym_loop = 65,
  sym_for = 66,
  sym_list = 67,
  sym_object = 68,
  sym_map = 69,
  sym_assignment = 70,
  sym_binary_exp = 71,
  sym_unary_exp = 72,
  sym_index_exp = 73,
  sym_call = 74,
  sym_property_exp = 75,
  sym_bool = 76,
  sym_string = 77,
  aux_sym__sequence_repeat1 = 78,
  aux_sym_use_repeat1 = 79,
  aux_sym_lambda_repeat1 = 80,
  aux_sym_list_repeat1 = 81,
  aux_sym_object_repeat1 = 82,
  aux_sym_map_repeat1 = 83,
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
  [sym_object] = "object",
  [sym_map] = "map",
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
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
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
  [sym_object] = sym_object,
  [sym_map] = sym_map,
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
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
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
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
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
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 21,
  [31] = 22,
  [32] = 32,
  [33] = 33,
  [34] = 17,
  [35] = 35,
  [36] = 19,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 35,
  [44] = 20,
  [45] = 42,
  [46] = 18,
  [47] = 25,
  [48] = 24,
  [49] = 37,
  [50] = 38,
  [51] = 39,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
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
  [68] = 60,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 61,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 54,
  [81] = 81,
  [82] = 53,
  [83] = 57,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 56,
  [89] = 89,
  [90] = 59,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 52,
  [102] = 102,
  [103] = 103,
  [104] = 55,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 58,
  [111] = 79,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 81,
  [116] = 66,
  [117] = 103,
  [118] = 100,
  [119] = 91,
  [120] = 93,
  [121] = 102,
  [122] = 99,
  [123] = 105,
  [124] = 98,
  [125] = 97,
  [126] = 107,
  [127] = 96,
  [128] = 108,
  [129] = 106,
  [130] = 95,
  [131] = 94,
  [132] = 92,
  [133] = 109,
  [134] = 78,
  [135] = 77,
  [136] = 89,
  [137] = 64,
  [138] = 76,
  [139] = 63,
  [140] = 73,
  [141] = 72,
  [142] = 87,
  [143] = 71,
  [144] = 86,
  [145] = 70,
  [146] = 69,
  [147] = 85,
  [148] = 67,
  [149] = 65,
  [150] = 84,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 155,
  [158] = 158,
  [159] = 154,
  [160] = 152,
  [161] = 161,
  [162] = 162,
  [163] = 162,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 169,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 174,
  [178] = 175,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 180,
  [185] = 185,
  [186] = 181,
  [187] = 182,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 188,
  [193] = 193,
  [194] = 193,
  [195] = 190,
  [196] = 191,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 204,
  [207] = 201,
  [208] = 199,
  [209] = 209,
  [210] = 210,
  [211] = 202,
  [212] = 200,
  [213] = 197,
  [214] = 209,
  [215] = 198,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 217,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 218,
  [233] = 233,
  [234] = 223,
  [235] = 216,
  [236] = 236,
  [237] = 229,
  [238] = 233,
  [239] = 224,
  [240] = 220,
  [241] = 231,
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
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 57:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 58:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(172);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(142);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(138);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(77);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(131);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(133);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 61, .external_lex_state = 2},
  [2] = {.lex_state = 57, .external_lex_state = 2},
  [3] = {.lex_state = 57, .external_lex_state = 2},
  [4] = {.lex_state = 57, .external_lex_state = 3},
  [5] = {.lex_state = 57, .external_lex_state = 3},
  [6] = {.lex_state = 61, .external_lex_state = 2},
  [7] = {.lex_state = 61, .external_lex_state = 2},
  [8] = {.lex_state = 61, .external_lex_state = 2},
  [9] = {.lex_state = 61, .external_lex_state = 2},
  [10] = {.lex_state = 61, .external_lex_state = 2},
  [11] = {.lex_state = 61, .external_lex_state = 2},
  [12] = {.lex_state = 61, .external_lex_state = 2},
  [13] = {.lex_state = 61, .external_lex_state = 2},
  [14] = {.lex_state = 61, .external_lex_state = 2},
  [15] = {.lex_state = 61, .external_lex_state = 2},
  [16] = {.lex_state = 61, .external_lex_state = 2},
  [17] = {.lex_state = 61, .external_lex_state = 2},
  [18] = {.lex_state = 61, .external_lex_state = 2},
  [19] = {.lex_state = 61, .external_lex_state = 2},
  [20] = {.lex_state = 61, .external_lex_state = 2},
  [21] = {.lex_state = 61, .external_lex_state = 2},
  [22] = {.lex_state = 61, .external_lex_state = 2},
  [23] = {.lex_state = 61, .external_lex_state = 2},
  [24] = {.lex_state = 61, .external_lex_state = 2},
  [25] = {.lex_state = 61, .external_lex_state = 2},
  [26] = {.lex_state = 61, .external_lex_state = 2},
  [27] = {.lex_state = 61, .external_lex_state = 2},
  [28] = {.lex_state = 61, .external_lex_state = 2},
  [29] = {.lex_state = 61, .external_lex_state = 2},
  [30] = {.lex_state = 61, .external_lex_state = 2},
  [31] = {.lex_state = 61, .external_lex_state = 2},
  [32] = {.lex_state = 61, .external_lex_state = 2},
  [33] = {.lex_state = 61, .external_lex_state = 2},
  [34] = {.lex_state = 61, .external_lex_state = 2},
  [35] = {.lex_state = 61, .external_lex_state = 2},
  [36] = {.lex_state = 61, .external_lex_state = 2},
  [37] = {.lex_state = 61, .external_lex_state = 2},
  [38] = {.lex_state = 61, .external_lex_state = 2},
  [39] = {.lex_state = 61, .external_lex_state = 2},
  [40] = {.lex_state = 61, .external_lex_state = 2},
  [41] = {.lex_state = 61, .external_lex_state = 2},
  [42] = {.lex_state = 61, .external_lex_state = 2},
  [43] = {.lex_state = 61, .external_lex_state = 2},
  [44] = {.lex_state = 61, .external_lex_state = 2},
  [45] = {.lex_state = 61, .external_lex_state = 2},
  [46] = {.lex_state = 61, .external_lex_state = 2},
  [47] = {.lex_state = 61, .external_lex_state = 2},
  [48] = {.lex_state = 61, .external_lex_state = 2},
  [49] = {.lex_state = 61, .external_lex_state = 2},
  [50] = {.lex_state = 61, .external_lex_state = 2},
  [51] = {.lex_state = 61, .external_lex_state = 2},
  [52] = {.lex_state = 59, .external_lex_state = 2},
  [53] = {.lex_state = 59, .external_lex_state = 2},
  [54] = {.lex_state = 59, .external_lex_state = 2},
  [55] = {.lex_state = 59, .external_lex_state = 2},
  [56] = {.lex_state = 59, .external_lex_state = 2},
  [57] = {.lex_state = 59, .external_lex_state = 2},
  [58] = {.lex_state = 59, .external_lex_state = 2},
  [59] = {.lex_state = 59, .external_lex_state = 2},
  [60] = {.lex_state = 59, .external_lex_state = 2},
  [61] = {.lex_state = 59, .external_lex_state = 2},
  [62] = {.lex_state = 59, .external_lex_state = 2},
  [63] = {.lex_state = 59, .external_lex_state = 2},
  [64] = {.lex_state = 59, .external_lex_state = 2},
  [65] = {.lex_state = 59, .external_lex_state = 2},
  [66] = {.lex_state = 59, .external_lex_state = 2},
  [67] = {.lex_state = 59, .external_lex_state = 2},
  [68] = {.lex_state = 59, .external_lex_state = 3},
  [69] = {.lex_state = 59, .external_lex_state = 2},
  [70] = {.lex_state = 59, .external_lex_state = 2},
  [71] = {.lex_state = 59, .external_lex_state = 2},
  [72] = {.lex_state = 59, .external_lex_state = 2},
  [73] = {.lex_state = 59, .external_lex_state = 2},
  [74] = {.lex_state = 59, .external_lex_state = 3},
  [75] = {.lex_state = 59, .external_lex_state = 3},
  [76] = {.lex_state = 59, .external_lex_state = 2},
  [77] = {.lex_state = 59, .external_lex_state = 2},
  [78] = {.lex_state = 59, .external_lex_state = 2},
  [79] = {.lex_state = 59, .external_lex_state = 3},
  [80] = {.lex_state = 59, .external_lex_state = 3},
  [81] = {.lex_state = 59, .external_lex_state = 2},
  [82] = {.lex_state = 59, .external_lex_state = 3},
  [83] = {.lex_state = 59, .external_lex_state = 3},
  [84] = {.lex_state = 59, .external_lex_state = 2},
  [85] = {.lex_state = 59, .external_lex_state = 2},
  [86] = {.lex_state = 59, .external_lex_state = 2},
  [87] = {.lex_state = 59, .external_lex_state = 2},
  [88] = {.lex_state = 59, .external_lex_state = 3},
  [89] = {.lex_state = 59, .external_lex_state = 2},
  [90] = {.lex_state = 59, .external_lex_state = 3},
  [91] = {.lex_state = 59, .external_lex_state = 2},
  [92] = {.lex_state = 59, .external_lex_state = 2},
  [93] = {.lex_state = 59, .external_lex_state = 2},
  [94] = {.lex_state = 59, .external_lex_state = 2},
  [95] = {.lex_state = 59, .external_lex_state = 2},
  [96] = {.lex_state = 59, .external_lex_state = 2},
  [97] = {.lex_state = 59, .external_lex_state = 2},
  [98] = {.lex_state = 59, .external_lex_state = 2},
  [99] = {.lex_state = 59, .external_lex_state = 2},
  [100] = {.lex_state = 59, .external_lex_state = 2},
  [101] = {.lex_state = 59, .external_lex_state = 3},
  [102] = {.lex_state = 59, .external_lex_state = 2},
  [103] = {.lex_state = 59, .external_lex_state = 2},
  [104] = {.lex_state = 59, .external_lex_state = 3},
  [105] = {.lex_state = 59, .external_lex_state = 2},
  [106] = {.lex_state = 59, .external_lex_state = 2},
  [107] = {.lex_state = 59, .external_lex_state = 2},
  [108] = {.lex_state = 59, .external_lex_state = 2},
  [109] = {.lex_state = 59, .external_lex_state = 2},
  [110] = {.lex_state = 59, .external_lex_state = 3},
  [111] = {.lex_state = 59, .external_lex_state = 3},
  [112] = {.lex_state = 59, .external_lex_state = 3},
  [113] = {.lex_state = 59, .external_lex_state = 3},
  [114] = {.lex_state = 59, .external_lex_state = 3},
  [115] = {.lex_state = 59, .external_lex_state = 3},
  [116] = {.lex_state = 59, .external_lex_state = 3},
  [117] = {.lex_state = 59, .external_lex_state = 3},
  [118] = {.lex_state = 59, .external_lex_state = 3},
  [119] = {.lex_state = 59, .external_lex_state = 3},
  [120] = {.lex_state = 59, .external_lex_state = 3},
  [121] = {.lex_state = 59, .external_lex_state = 3},
  [122] = {.lex_state = 59, .external_lex_state = 3},
  [123] = {.lex_state = 59, .external_lex_state = 3},
  [124] = {.lex_state = 59, .external_lex_state = 3},
  [125] = {.lex_state = 59, .external_lex_state = 3},
  [126] = {.lex_state = 59, .external_lex_state = 3},
  [127] = {.lex_state = 59, .external_lex_state = 3},
  [128] = {.lex_state = 59, .external_lex_state = 3},
  [129] = {.lex_state = 59, .external_lex_state = 3},
  [130] = {.lex_state = 59, .external_lex_state = 3},
  [131] = {.lex_state = 59, .external_lex_state = 3},
  [132] = {.lex_state = 59, .external_lex_state = 3},
  [133] = {.lex_state = 59, .external_lex_state = 3},
  [134] = {.lex_state = 59, .external_lex_state = 3},
  [135] = {.lex_state = 59, .external_lex_state = 3},
  [136] = {.lex_state = 59, .external_lex_state = 3},
  [137] = {.lex_state = 59, .external_lex_state = 3},
  [138] = {.lex_state = 59, .external_lex_state = 3},
  [139] = {.lex_state = 59, .external_lex_state = 3},
  [140] = {.lex_state = 59, .external_lex_state = 3},
  [141] = {.lex_state = 59, .external_lex_state = 3},
  [142] = {.lex_state = 59, .external_lex_state = 3},
  [143] = {.lex_state = 59, .external_lex_state = 3},
  [144] = {.lex_state = 59, .external_lex_state = 3},
  [145] = {.lex_state = 59, .external_lex_state = 3},
  [146] = {.lex_state = 59, .external_lex_state = 3},
  [147] = {.lex_state = 59, .external_lex_state = 3},
  [148] = {.lex_state = 59, .external_lex_state = 3},
  [149] = {.lex_state = 59, .external_lex_state = 3},
  [150] = {.lex_state = 59, .external_lex_state = 3},
  [151] = {.lex_state = 59, .external_lex_state = 3},
  [152] = {.lex_state = 59, .external_lex_state = 2},
  [153] = {.lex_state = 59, .external_lex_state = 2},
  [154] = {.lex_state = 59, .external_lex_state = 2},
  [155] = {.lex_state = 59, .external_lex_state = 2},
  [156] = {.lex_state = 59, .external_lex_state = 2},
  [157] = {.lex_state = 59, .external_lex_state = 2},
  [158] = {.lex_state = 59, .external_lex_state = 2},
  [159] = {.lex_state = 59, .external_lex_state = 2},
  [160] = {.lex_state = 59, .external_lex_state = 2},
  [161] = {.lex_state = 59, .external_lex_state = 2},
  [162] = {.lex_state = 59, .external_lex_state = 2},
  [163] = {.lex_state = 59, .external_lex_state = 2},
  [164] = {.lex_state = 59, .external_lex_state = 2},
  [165] = {.lex_state = 59, .external_lex_state = 2},
  [166] = {.lex_state = 59, .external_lex_state = 2},
  [167] = {.lex_state = 59, .external_lex_state = 2},
  [168] = {.lex_state = 59, .external_lex_state = 2},
  [169] = {.lex_state = 59, .external_lex_state = 2},
  [170] = {.lex_state = 59, .external_lex_state = 2},
  [171] = {.lex_state = 59, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 2, .external_lex_state = 2},
  [175] = {.lex_state = 2, .external_lex_state = 2},
  [176] = {.lex_state = 2, .external_lex_state = 2},
  [177] = {.lex_state = 2, .external_lex_state = 2},
  [178] = {.lex_state = 2, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 3, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 3, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 3, .external_lex_state = 2},
  [201] = {.lex_state = 3, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 3, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 3, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 3, .external_lex_state = 2},
  [217] = {.lex_state = 3, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 3, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 3, .external_lex_state = 2},
  [222] = {.lex_state = 3, .external_lex_state = 2},
  [223] = {.lex_state = 3, .external_lex_state = 2},
  [224] = {.lex_state = 3, .external_lex_state = 2},
  [225] = {.lex_state = 3, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 3, .external_lex_state = 2},
  [231] = {.lex_state = 3, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 3, .external_lex_state = 2},
  [235] = {.lex_state = 3, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 3, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 3, .external_lex_state = 2},
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
    [sym_module] = STATE(227),
    [sym__shebang] = STATE(10),
    [sym__sequence] = STATE(226),
    [sym_block] = STATE(114),
    [sym_let] = STATE(114),
    [sym_use] = STATE(114),
    [sym__exp] = STATE(114),
    [sym_break] = STATE(114),
    [sym_return] = STATE(114),
    [sym_if] = STATE(114),
    [sym__fn] = STATE(114),
    [sym_loop] = STATE(114),
    [sym_for] = STATE(114),
    [sym_list] = STATE(114),
    [sym_object] = STATE(114),
    [sym_map] = STATE(114),
    [sym_assignment] = STATE(114),
    [sym_binary_exp] = STATE(114),
    [sym_unary_exp] = STATE(114),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
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
    [sym_block] = STATE(100),
    [sym_let] = STATE(100),
    [sym_use] = STATE(100),
    [sym__exp] = STATE(100),
    [sym_break] = STATE(100),
    [sym_return] = STATE(100),
    [sym_if] = STATE(100),
    [sym__fn] = STATE(100),
    [sym_loop] = STATE(100),
    [sym_for] = STATE(100),
    [sym_list] = STATE(100),
    [sym_object] = STATE(100),
    [sym_map] = STATE(100),
    [sym_assignment] = STATE(100),
    [sym_binary_exp] = STATE(100),
    [sym_unary_exp] = STATE(100),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(100),
    [sym_property_exp] = STATE(100),
    [sym_bool] = STATE(100),
    [sym_string] = STATE(100),
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
    [sym_block] = STATE(99),
    [sym_let] = STATE(99),
    [sym_use] = STATE(99),
    [sym__exp] = STATE(99),
    [sym_break] = STATE(99),
    [sym_return] = STATE(99),
    [sym_if] = STATE(99),
    [sym__fn] = STATE(99),
    [sym_loop] = STATE(99),
    [sym_for] = STATE(99),
    [sym_list] = STATE(99),
    [sym_object] = STATE(99),
    [sym_map] = STATE(99),
    [sym_assignment] = STATE(99),
    [sym_binary_exp] = STATE(99),
    [sym_unary_exp] = STATE(99),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(99),
    [sym_property_exp] = STATE(99),
    [sym_bool] = STATE(99),
    [sym_string] = STATE(99),
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
    [sym_object] = STATE(118),
    [sym_map] = STATE(118),
    [sym_assignment] = STATE(118),
    [sym_binary_exp] = STATE(118),
    [sym_unary_exp] = STATE(118),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(118),
    [sym_property_exp] = STATE(118),
    [sym_bool] = STATE(118),
    [sym_string] = STATE(118),
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
    [sym_object] = STATE(122),
    [sym_map] = STATE(122),
    [sym_assignment] = STATE(122),
    [sym_binary_exp] = STATE(122),
    [sym_unary_exp] = STATE(122),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(122),
    [sym_property_exp] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_string] = STATE(122),
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
    [sym_block] = STATE(151),
    [sym_let] = STATE(151),
    [sym_use] = STATE(151),
    [sym__exp] = STATE(151),
    [sym_break] = STATE(151),
    [sym_return] = STATE(151),
    [sym_if] = STATE(151),
    [sym__fn] = STATE(151),
    [sym_loop] = STATE(151),
    [sym_for] = STATE(151),
    [sym_list] = STATE(151),
    [sym_object] = STATE(151),
    [sym_map] = STATE(151),
    [sym_assignment] = STATE(151),
    [sym_binary_exp] = STATE(151),
    [sym_unary_exp] = STATE(151),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(151),
    [sym_property_exp] = STATE(151),
    [sym_bool] = STATE(151),
    [sym_string] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(93),
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
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sequence] = STATE(233),
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
    [sym_object] = STATE(111),
    [sym_map] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_binary_exp] = STATE(111),
    [sym_unary_exp] = STATE(111),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(111),
    [sym_property_exp] = STATE(111),
    [sym_bool] = STATE(111),
    [sym_string] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(99),
    [sym_number] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(151),
    [sym_let] = STATE(151),
    [sym_use] = STATE(151),
    [sym__exp] = STATE(151),
    [sym_break] = STATE(151),
    [sym_return] = STATE(151),
    [sym_if] = STATE(151),
    [sym__fn] = STATE(151),
    [sym_loop] = STATE(151),
    [sym_for] = STATE(151),
    [sym_list] = STATE(151),
    [sym_object] = STATE(151),
    [sym_map] = STATE(151),
    [sym_assignment] = STATE(151),
    [sym_binary_exp] = STATE(151),
    [sym_unary_exp] = STATE(151),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(151),
    [sym_property_exp] = STATE(151),
    [sym_bool] = STATE(151),
    [sym_string] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(93),
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
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sequence] = STATE(238),
    [sym_block] = STATE(79),
    [sym_let] = STATE(79),
    [sym_use] = STATE(79),
    [sym__exp] = STATE(79),
    [sym_break] = STATE(79),
    [sym_return] = STATE(79),
    [sym_if] = STATE(79),
    [sym__fn] = STATE(79),
    [sym_loop] = STATE(79),
    [sym_for] = STATE(79),
    [sym_list] = STATE(79),
    [sym_object] = STATE(79),
    [sym_map] = STATE(79),
    [sym_assignment] = STATE(79),
    [sym_binary_exp] = STATE(79),
    [sym_unary_exp] = STATE(79),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(79),
    [sym_property_exp] = STATE(79),
    [sym_bool] = STATE(79),
    [sym_string] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [sym_identifier] = ACTIONS(107),
    [sym_number] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(228),
    [sym_block] = STATE(114),
    [sym_let] = STATE(114),
    [sym_use] = STATE(114),
    [sym__exp] = STATE(114),
    [sym_break] = STATE(114),
    [sym_return] = STATE(114),
    [sym_if] = STATE(114),
    [sym__fn] = STATE(114),
    [sym_loop] = STATE(114),
    [sym_for] = STATE(114),
    [sym_list] = STATE(114),
    [sym_object] = STATE(114),
    [sym_map] = STATE(114),
    [sym_assignment] = STATE(114),
    [sym_binary_exp] = STATE(114),
    [sym_unary_exp] = STATE(114),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(109),
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
  [11] = {
    [sym__sequence] = STATE(238),
    [sym_block] = STATE(114),
    [sym_let] = STATE(114),
    [sym_use] = STATE(114),
    [sym__exp] = STATE(114),
    [sym_break] = STATE(114),
    [sym_return] = STATE(114),
    [sym_if] = STATE(114),
    [sym__fn] = STATE(114),
    [sym_loop] = STATE(114),
    [sym_for] = STATE(114),
    [sym_list] = STATE(114),
    [sym_object] = STATE(114),
    [sym_map] = STATE(114),
    [sym_assignment] = STATE(114),
    [sym_binary_exp] = STATE(114),
    [sym_unary_exp] = STATE(114),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(111),
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
    [sym__sequence] = STATE(233),
    [sym_block] = STATE(114),
    [sym_let] = STATE(114),
    [sym_use] = STATE(114),
    [sym__exp] = STATE(114),
    [sym_break] = STATE(114),
    [sym_return] = STATE(114),
    [sym_if] = STATE(114),
    [sym__fn] = STATE(114),
    [sym_loop] = STATE(114),
    [sym_for] = STATE(114),
    [sym_list] = STATE(114),
    [sym_object] = STATE(114),
    [sym_map] = STATE(114),
    [sym_assignment] = STATE(114),
    [sym_binary_exp] = STATE(114),
    [sym_unary_exp] = STATE(114),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(113),
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
    [sym_block] = STATE(160),
    [sym_let] = STATE(160),
    [sym_use] = STATE(160),
    [sym__exp] = STATE(160),
    [sym_break] = STATE(160),
    [sym_return] = STATE(160),
    [sym_if] = STATE(160),
    [sym__fn] = STATE(160),
    [sym_loop] = STATE(160),
    [sym_for] = STATE(160),
    [sym_list] = STATE(160),
    [sym_object] = STATE(160),
    [sym_map] = STATE(160),
    [sym_assignment] = STATE(160),
    [sym_binary_exp] = STATE(160),
    [sym_unary_exp] = STATE(160),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(160),
    [sym_property_exp] = STATE(160),
    [sym_bool] = STATE(160),
    [sym_string] = STATE(160),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(117),
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
    [sym_number] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
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
    [sym_object] = STATE(159),
    [sym_map] = STATE(159),
    [sym_assignment] = STATE(159),
    [sym_binary_exp] = STATE(159),
    [sym_unary_exp] = STATE(159),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(159),
    [sym_property_exp] = STATE(159),
    [sym_bool] = STATE(159),
    [sym_string] = STATE(159),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_block] = STATE(152),
    [sym_let] = STATE(152),
    [sym_use] = STATE(152),
    [sym__exp] = STATE(152),
    [sym_break] = STATE(152),
    [sym_return] = STATE(152),
    [sym_if] = STATE(152),
    [sym__fn] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_for] = STATE(152),
    [sym_list] = STATE(152),
    [sym_object] = STATE(152),
    [sym_map] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_binary_exp] = STATE(152),
    [sym_unary_exp] = STATE(152),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(152),
    [sym_property_exp] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_string] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(125),
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
    [sym_number] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_block] = STATE(154),
    [sym_let] = STATE(154),
    [sym_use] = STATE(154),
    [sym__exp] = STATE(154),
    [sym_break] = STATE(154),
    [sym_return] = STATE(154),
    [sym_if] = STATE(154),
    [sym__fn] = STATE(154),
    [sym_loop] = STATE(154),
    [sym_for] = STATE(154),
    [sym_list] = STATE(154),
    [sym_object] = STATE(154),
    [sym_map] = STATE(154),
    [sym_assignment] = STATE(154),
    [sym_binary_exp] = STATE(154),
    [sym_unary_exp] = STATE(154),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(154),
    [sym_property_exp] = STATE(154),
    [sym_bool] = STATE(154),
    [sym_string] = STATE(154),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(129),
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
  [17] = {
    [sym_block] = STATE(66),
    [sym_let] = STATE(66),
    [sym_use] = STATE(66),
    [sym__exp] = STATE(66),
    [sym_break] = STATE(66),
    [sym_return] = STATE(66),
    [sym_if] = STATE(66),
    [sym__fn] = STATE(66),
    [sym_loop] = STATE(66),
    [sym_for] = STATE(66),
    [sym_list] = STATE(66),
    [sym_object] = STATE(66),
    [sym_map] = STATE(66),
    [sym_assignment] = STATE(66),
    [sym_binary_exp] = STATE(66),
    [sym_unary_exp] = STATE(66),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(66),
    [sym_property_exp] = STATE(66),
    [sym_bool] = STATE(66),
    [sym_string] = STATE(66),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(131),
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
    [sym_number] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_block] = STATE(69),
    [sym_let] = STATE(69),
    [sym_use] = STATE(69),
    [sym__exp] = STATE(69),
    [sym_break] = STATE(69),
    [sym_return] = STATE(69),
    [sym_if] = STATE(69),
    [sym__fn] = STATE(69),
    [sym_loop] = STATE(69),
    [sym_for] = STATE(69),
    [sym_list] = STATE(69),
    [sym_object] = STATE(69),
    [sym_map] = STATE(69),
    [sym_assignment] = STATE(69),
    [sym_binary_exp] = STATE(69),
    [sym_unary_exp] = STATE(69),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(69),
    [sym_property_exp] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_string] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(133),
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
    [sym_number] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_block] = STATE(153),
    [sym_let] = STATE(153),
    [sym_use] = STATE(153),
    [sym__exp] = STATE(153),
    [sym_break] = STATE(153),
    [sym_return] = STATE(153),
    [sym_if] = STATE(153),
    [sym__fn] = STATE(153),
    [sym_loop] = STATE(153),
    [sym_for] = STATE(153),
    [sym_list] = STATE(153),
    [sym_object] = STATE(153),
    [sym_map] = STATE(153),
    [sym_assignment] = STATE(153),
    [sym_binary_exp] = STATE(153),
    [sym_unary_exp] = STATE(153),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(153),
    [sym_property_exp] = STATE(153),
    [sym_bool] = STATE(153),
    [sym_string] = STATE(153),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(135),
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
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
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
    [sym_object] = STATE(155),
    [sym_map] = STATE(155),
    [sym_assignment] = STATE(155),
    [sym_binary_exp] = STATE(155),
    [sym_unary_exp] = STATE(155),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(155),
    [sym_property_exp] = STATE(155),
    [sym_bool] = STATE(155),
    [sym_string] = STATE(155),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(137),
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
    [sym_number] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_block] = STATE(130),
    [sym_let] = STATE(130),
    [sym_use] = STATE(130),
    [sym__exp] = STATE(130),
    [sym_break] = STATE(130),
    [sym_return] = STATE(130),
    [sym_if] = STATE(130),
    [sym__fn] = STATE(130),
    [sym_loop] = STATE(130),
    [sym_for] = STATE(130),
    [sym_list] = STATE(130),
    [sym_object] = STATE(130),
    [sym_map] = STATE(130),
    [sym_assignment] = STATE(130),
    [sym_binary_exp] = STATE(130),
    [sym_unary_exp] = STATE(130),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(130),
    [sym_property_exp] = STATE(130),
    [sym_bool] = STATE(130),
    [sym_string] = STATE(130),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(139),
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
    [sym_number] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
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
    [sym_object] = STATE(131),
    [sym_map] = STATE(131),
    [sym_assignment] = STATE(131),
    [sym_binary_exp] = STATE(131),
    [sym_unary_exp] = STATE(131),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(131),
    [sym_property_exp] = STATE(131),
    [sym_bool] = STATE(131),
    [sym_string] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(141),
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
    [sym_number] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
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
    [sym_object] = STATE(165),
    [sym_map] = STATE(165),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(165),
    [sym_property_exp] = STATE(165),
    [sym_bool] = STATE(165),
    [sym_string] = STATE(165),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(143),
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
    [sym_number] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
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
    [sym_object] = STATE(170),
    [sym_map] = STATE(170),
    [sym_assignment] = STATE(170),
    [sym_binary_exp] = STATE(170),
    [sym_unary_exp] = STATE(170),
    [sym_index_exp] = STATE(62),
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
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
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
  [25] = {
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
    [sym_object] = STATE(162),
    [sym_map] = STATE(162),
    [sym_assignment] = STATE(162),
    [sym_binary_exp] = STATE(162),
    [sym_unary_exp] = STATE(162),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(162),
    [sym_property_exp] = STATE(162),
    [sym_bool] = STATE(162),
    [sym_string] = STATE(162),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(147),
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
    [sym_number] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
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
    [sym_object] = STATE(169),
    [sym_map] = STATE(169),
    [sym_assignment] = STATE(169),
    [sym_binary_exp] = STATE(169),
    [sym_unary_exp] = STATE(169),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(169),
    [sym_property_exp] = STATE(169),
    [sym_bool] = STATE(169),
    [sym_string] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(149),
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
    [sym_number] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
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
    [sym_object] = STATE(166),
    [sym_map] = STATE(166),
    [sym_assignment] = STATE(166),
    [sym_binary_exp] = STATE(166),
    [sym_unary_exp] = STATE(166),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(166),
    [sym_property_exp] = STATE(166),
    [sym_bool] = STATE(166),
    [sym_string] = STATE(166),
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
  [28] = {
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
    [sym_object] = STATE(171),
    [sym_map] = STATE(171),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(171),
    [sym_property_exp] = STATE(171),
    [sym_bool] = STATE(171),
    [sym_string] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(153),
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
    [sym_number] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
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
    [sym_object] = STATE(167),
    [sym_map] = STATE(167),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(167),
    [sym_property_exp] = STATE(167),
    [sym_bool] = STATE(167),
    [sym_string] = STATE(167),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(155),
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
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_block] = STATE(95),
    [sym_let] = STATE(95),
    [sym_use] = STATE(95),
    [sym__exp] = STATE(95),
    [sym_break] = STATE(95),
    [sym_return] = STATE(95),
    [sym_if] = STATE(95),
    [sym__fn] = STATE(95),
    [sym_loop] = STATE(95),
    [sym_for] = STATE(95),
    [sym_list] = STATE(95),
    [sym_object] = STATE(95),
    [sym_map] = STATE(95),
    [sym_assignment] = STATE(95),
    [sym_binary_exp] = STATE(95),
    [sym_unary_exp] = STATE(95),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(95),
    [sym_property_exp] = STATE(95),
    [sym_bool] = STATE(95),
    [sym_string] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(43),
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
  [31] = {
    [sym_block] = STATE(94),
    [sym_let] = STATE(94),
    [sym_use] = STATE(94),
    [sym__exp] = STATE(94),
    [sym_break] = STATE(94),
    [sym_return] = STATE(94),
    [sym_if] = STATE(94),
    [sym__fn] = STATE(94),
    [sym_loop] = STATE(94),
    [sym_for] = STATE(94),
    [sym_list] = STATE(94),
    [sym_object] = STATE(94),
    [sym_map] = STATE(94),
    [sym_assignment] = STATE(94),
    [sym_binary_exp] = STATE(94),
    [sym_unary_exp] = STATE(94),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(94),
    [sym_property_exp] = STATE(94),
    [sym_bool] = STATE(94),
    [sym_string] = STATE(94),
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
  [32] = {
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
    [sym_object] = STATE(158),
    [sym_map] = STATE(158),
    [sym_assignment] = STATE(158),
    [sym_binary_exp] = STATE(158),
    [sym_unary_exp] = STATE(158),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(158),
    [sym_property_exp] = STATE(158),
    [sym_bool] = STATE(158),
    [sym_string] = STATE(158),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(161),
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
    [sym_number] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_block] = STATE(151),
    [sym_let] = STATE(151),
    [sym_use] = STATE(151),
    [sym__exp] = STATE(151),
    [sym_break] = STATE(151),
    [sym_return] = STATE(151),
    [sym_if] = STATE(151),
    [sym__fn] = STATE(151),
    [sym_loop] = STATE(151),
    [sym_for] = STATE(151),
    [sym_list] = STATE(151),
    [sym_object] = STATE(151),
    [sym_map] = STATE(151),
    [sym_assignment] = STATE(151),
    [sym_binary_exp] = STATE(151),
    [sym_unary_exp] = STATE(151),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(151),
    [sym_property_exp] = STATE(151),
    [sym_bool] = STATE(151),
    [sym_string] = STATE(151),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(93),
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
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_block] = STATE(116),
    [sym_let] = STATE(116),
    [sym_use] = STATE(116),
    [sym__exp] = STATE(116),
    [sym_break] = STATE(116),
    [sym_return] = STATE(116),
    [sym_if] = STATE(116),
    [sym__fn] = STATE(116),
    [sym_loop] = STATE(116),
    [sym_for] = STATE(116),
    [sym_list] = STATE(116),
    [sym_object] = STATE(116),
    [sym_map] = STATE(116),
    [sym_assignment] = STATE(116),
    [sym_binary_exp] = STATE(116),
    [sym_unary_exp] = STATE(116),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(116),
    [sym_property_exp] = STATE(116),
    [sym_bool] = STATE(116),
    [sym_string] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(163),
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
    [sym_number] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [35] = {
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
    [sym_object] = STATE(77),
    [sym_map] = STATE(77),
    [sym_assignment] = STATE(77),
    [sym_binary_exp] = STATE(77),
    [sym_unary_exp] = STATE(77),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(77),
    [sym_property_exp] = STATE(77),
    [sym_bool] = STATE(77),
    [sym_string] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
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
  [36] = {
    [sym_block] = STATE(156),
    [sym_let] = STATE(156),
    [sym_use] = STATE(156),
    [sym__exp] = STATE(156),
    [sym_break] = STATE(156),
    [sym_return] = STATE(156),
    [sym_if] = STATE(156),
    [sym__fn] = STATE(156),
    [sym_loop] = STATE(156),
    [sym_for] = STATE(156),
    [sym_list] = STATE(156),
    [sym_object] = STATE(156),
    [sym_map] = STATE(156),
    [sym_assignment] = STATE(156),
    [sym_binary_exp] = STATE(156),
    [sym_unary_exp] = STATE(156),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(156),
    [sym_property_exp] = STATE(156),
    [sym_bool] = STATE(156),
    [sym_string] = STATE(156),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
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
  [37] = {
    [sym_block] = STATE(72),
    [sym_let] = STATE(72),
    [sym_use] = STATE(72),
    [sym__exp] = STATE(72),
    [sym_break] = STATE(72),
    [sym_return] = STATE(72),
    [sym_if] = STATE(72),
    [sym__fn] = STATE(72),
    [sym_loop] = STATE(72),
    [sym_for] = STATE(72),
    [sym_list] = STATE(72),
    [sym_object] = STATE(72),
    [sym_map] = STATE(72),
    [sym_assignment] = STATE(72),
    [sym_binary_exp] = STATE(72),
    [sym_unary_exp] = STATE(72),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(72),
    [sym_property_exp] = STATE(72),
    [sym_bool] = STATE(72),
    [sym_string] = STATE(72),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(169),
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
    [sym_number] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [38] = {
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
    [sym_object] = STATE(71),
    [sym_map] = STATE(71),
    [sym_assignment] = STATE(71),
    [sym_binary_exp] = STATE(71),
    [sym_unary_exp] = STATE(71),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(71),
    [sym_property_exp] = STATE(71),
    [sym_bool] = STATE(71),
    [sym_string] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(171),
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
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_block] = STATE(70),
    [sym_let] = STATE(70),
    [sym_use] = STATE(70),
    [sym__exp] = STATE(70),
    [sym_break] = STATE(70),
    [sym_return] = STATE(70),
    [sym_if] = STATE(70),
    [sym__fn] = STATE(70),
    [sym_loop] = STATE(70),
    [sym_for] = STATE(70),
    [sym_list] = STATE(70),
    [sym_object] = STATE(70),
    [sym_map] = STATE(70),
    [sym_assignment] = STATE(70),
    [sym_binary_exp] = STATE(70),
    [sym_unary_exp] = STATE(70),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(70),
    [sym_property_exp] = STATE(70),
    [sym_bool] = STATE(70),
    [sym_string] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(173),
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
    [sym_number] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [40] = {
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
    [sym_object] = STATE(161),
    [sym_map] = STATE(161),
    [sym_assignment] = STATE(161),
    [sym_binary_exp] = STATE(161),
    [sym_unary_exp] = STATE(161),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(161),
    [sym_property_exp] = STATE(161),
    [sym_bool] = STATE(161),
    [sym_string] = STATE(161),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(175),
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
    [sym_number] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [41] = {
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
    [sym_object] = STATE(164),
    [sym_map] = STATE(164),
    [sym_assignment] = STATE(164),
    [sym_binary_exp] = STATE(164),
    [sym_unary_exp] = STATE(164),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(164),
    [sym_property_exp] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_string] = STATE(164),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
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
  [42] = {
    [sym_block] = STATE(67),
    [sym_let] = STATE(67),
    [sym_use] = STATE(67),
    [sym__exp] = STATE(67),
    [sym_break] = STATE(67),
    [sym_return] = STATE(67),
    [sym_if] = STATE(67),
    [sym__fn] = STATE(67),
    [sym_loop] = STATE(67),
    [sym_for] = STATE(67),
    [sym_list] = STATE(67),
    [sym_object] = STATE(67),
    [sym_map] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_binary_exp] = STATE(67),
    [sym_unary_exp] = STATE(67),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(67),
    [sym_property_exp] = STATE(67),
    [sym_bool] = STATE(67),
    [sym_string] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(179),
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
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [43] = {
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
    [sym_object] = STATE(135),
    [sym_map] = STATE(135),
    [sym_assignment] = STATE(135),
    [sym_binary_exp] = STATE(135),
    [sym_unary_exp] = STATE(135),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(181),
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
    [sym_number] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [44] = {
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
    [sym_object] = STATE(157),
    [sym_map] = STATE(157),
    [sym_assignment] = STATE(157),
    [sym_binary_exp] = STATE(157),
    [sym_unary_exp] = STATE(157),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(157),
    [sym_property_exp] = STATE(157),
    [sym_bool] = STATE(157),
    [sym_string] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(183),
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
    [sym_number] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_block] = STATE(148),
    [sym_let] = STATE(148),
    [sym_use] = STATE(148),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(148),
    [sym_return] = STATE(148),
    [sym_if] = STATE(148),
    [sym__fn] = STATE(148),
    [sym_loop] = STATE(148),
    [sym_for] = STATE(148),
    [sym_list] = STATE(148),
    [sym_object] = STATE(148),
    [sym_map] = STATE(148),
    [sym_assignment] = STATE(148),
    [sym_binary_exp] = STATE(148),
    [sym_unary_exp] = STATE(148),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(148),
    [sym_property_exp] = STATE(148),
    [sym_bool] = STATE(148),
    [sym_string] = STATE(148),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(185),
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
    [sym_number] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_block] = STATE(146),
    [sym_let] = STATE(146),
    [sym_use] = STATE(146),
    [sym__exp] = STATE(146),
    [sym_break] = STATE(146),
    [sym_return] = STATE(146),
    [sym_if] = STATE(146),
    [sym__fn] = STATE(146),
    [sym_loop] = STATE(146),
    [sym_for] = STATE(146),
    [sym_list] = STATE(146),
    [sym_object] = STATE(146),
    [sym_map] = STATE(146),
    [sym_assignment] = STATE(146),
    [sym_binary_exp] = STATE(146),
    [sym_unary_exp] = STATE(146),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(146),
    [sym_property_exp] = STATE(146),
    [sym_bool] = STATE(146),
    [sym_string] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(187),
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
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_block] = STATE(163),
    [sym_let] = STATE(163),
    [sym_use] = STATE(163),
    [sym__exp] = STATE(163),
    [sym_break] = STATE(163),
    [sym_return] = STATE(163),
    [sym_if] = STATE(163),
    [sym__fn] = STATE(163),
    [sym_loop] = STATE(163),
    [sym_for] = STATE(163),
    [sym_list] = STATE(163),
    [sym_object] = STATE(163),
    [sym_map] = STATE(163),
    [sym_assignment] = STATE(163),
    [sym_binary_exp] = STATE(163),
    [sym_unary_exp] = STATE(163),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(163),
    [sym_property_exp] = STATE(163),
    [sym_bool] = STATE(163),
    [sym_string] = STATE(163),
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
  [48] = {
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
    [sym_object] = STATE(168),
    [sym_map] = STATE(168),
    [sym_assignment] = STATE(168),
    [sym_binary_exp] = STATE(168),
    [sym_unary_exp] = STATE(168),
    [sym_index_exp] = STATE(62),
    [sym_call] = STATE(168),
    [sym_property_exp] = STATE(168),
    [sym_bool] = STATE(168),
    [sym_string] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(191),
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
    [sym_number] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_block] = STATE(141),
    [sym_let] = STATE(141),
    [sym_use] = STATE(141),
    [sym__exp] = STATE(141),
    [sym_break] = STATE(141),
    [sym_return] = STATE(141),
    [sym_if] = STATE(141),
    [sym__fn] = STATE(141),
    [sym_loop] = STATE(141),
    [sym_for] = STATE(141),
    [sym_list] = STATE(141),
    [sym_object] = STATE(141),
    [sym_map] = STATE(141),
    [sym_assignment] = STATE(141),
    [sym_binary_exp] = STATE(141),
    [sym_unary_exp] = STATE(141),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(141),
    [sym_property_exp] = STATE(141),
    [sym_bool] = STATE(141),
    [sym_string] = STATE(141),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(193),
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
    [sym_number] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_block] = STATE(143),
    [sym_let] = STATE(143),
    [sym_use] = STATE(143),
    [sym__exp] = STATE(143),
    [sym_break] = STATE(143),
    [sym_return] = STATE(143),
    [sym_if] = STATE(143),
    [sym__fn] = STATE(143),
    [sym_loop] = STATE(143),
    [sym_for] = STATE(143),
    [sym_list] = STATE(143),
    [sym_object] = STATE(143),
    [sym_map] = STATE(143),
    [sym_assignment] = STATE(143),
    [sym_binary_exp] = STATE(143),
    [sym_unary_exp] = STATE(143),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(143),
    [sym_property_exp] = STATE(143),
    [sym_bool] = STATE(143),
    [sym_string] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(195),
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
    [sym_number] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_block] = STATE(145),
    [sym_let] = STATE(145),
    [sym_use] = STATE(145),
    [sym__exp] = STATE(145),
    [sym_break] = STATE(145),
    [sym_return] = STATE(145),
    [sym_if] = STATE(145),
    [sym__fn] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_for] = STATE(145),
    [sym_list] = STATE(145),
    [sym_object] = STATE(145),
    [sym_map] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_binary_exp] = STATE(145),
    [sym_unary_exp] = STATE(145),
    [sym_index_exp] = STATE(75),
    [sym_call] = STATE(145),
    [sym_property_exp] = STATE(145),
    [sym_bool] = STATE(145),
    [sym_string] = STATE(145),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(197),
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
    [sym_number] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_null] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(57), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(199), 19,
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
  [35] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 20,
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
  [68] = 5,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(211), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(207), 18,
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
  [105] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(215), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(213), 19,
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
  [138] = 4,
    ACTIONS(219), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(217), 19,
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
  [173] = 5,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(223), 18,
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
  [210] = 5,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 18,
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
  [247] = 5,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 18,
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
  [284] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(241), 20,
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
  [317] = 5,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(245), 18,
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
    ACTIONS(255), 1,
      anon_sym_COLON_EQ,
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
  [389] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 19,
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
  [421] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(263), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 19,
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
  [453] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 19,
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
  [485] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(265), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [535] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 16,
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
  [573] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(241), 19,
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
  [605] = 7,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 15,
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
  [645] = 9,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 14,
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
  [689] = 10,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 12,
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
  [735] = 11,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(287), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [783] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 19,
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
  [815] = 5,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(101), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(245), 17,
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
  [851] = 4,
    ACTIONS(297), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 17,
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
  [885] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 19,
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
  [917] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(303), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [967] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 19,
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
  [999] = 16,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    STATE(6), 1,
      sym__sc,
    STATE(173), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1057] = 5,
    ACTIONS(335), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(211), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(207), 17,
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
  [1093] = 3,
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
  [1125] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 19,
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
  [1157] = 5,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(223), 17,
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
  [1193] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(346), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(344), 19,
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
  [1225] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 19,
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
  [1257] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 19,
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
  [1289] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 19,
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
  [1321] = 4,
    ACTIONS(360), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(217), 18,
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
  [1355] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 19,
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
  [1387] = 5,
    ACTIONS(366), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 17,
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
  [1423] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 19,
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
  [1455] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 19,
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
  [1487] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 19,
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
  [1519] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 16,
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
  [1557] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 16,
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
  [1595] = 3,
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
  [1627] = 3,
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
  [1659] = 3,
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
  [1691] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1741] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(399), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1791] = 4,
    STATE(83), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(199), 18,
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
  [1825] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 19,
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
  [1857] = 3,
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
  [1889] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(215), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(213), 18,
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
  [1921] = 3,
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
  [1953] = 3,
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
  [1985] = 3,
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
  [2017] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(421), 19,
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
  [2049] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(427), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(425), 19,
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
  [2081] = 5,
    ACTIONS(335), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 17,
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
  [2117] = 16,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(6), 1,
      sym__sc,
    STATE(173), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2175] = 5,
    ACTIONS(297), 1,
      anon_sym_COLON_EQ,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 16,
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
  [2211] = 5,
    ACTIONS(297), 1,
      anon_sym_COLON_EQ,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 16,
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
  [2247] = 15,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    STATE(6), 1,
      sym__sc,
    STATE(173), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(313), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2303] = 3,
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
  [2334] = 12,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(265), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2383] = 3,
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
  [2414] = 12,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(399), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2463] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 18,
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
  [2494] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 18,
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
  [2525] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 18,
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
  [2556] = 12,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2605] = 3,
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
  [2636] = 3,
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
  [2667] = 3,
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
  [2698] = 3,
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
  [2729] = 3,
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
  [2760] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(421), 18,
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
  [2791] = 3,
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
  [2822] = 6,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 15,
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
  [2859] = 6,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 15,
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
  [2896] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 18,
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
  [2927] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(427), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(425), 18,
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
  [2958] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 18,
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
  [2989] = 12,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(303), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3038] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 18,
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
  [3069] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(263), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 18,
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
  [3100] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 18,
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
  [3131] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 18,
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
  [3162] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 18,
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
  [3193] = 11,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(287), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3240] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 18,
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
  [3271] = 10,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 11,
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
  [3316] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 18,
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
  [3347] = 9,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 13,
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
  [3390] = 7,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 14,
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
  [3429] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 18,
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
  [3460] = 6,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 15,
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
  [3497] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 18,
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
  [3528] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(346), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(344), 18,
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
  [3559] = 12,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(435), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3607] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3658] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3709] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3760] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3811] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3862] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3913] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3960] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4011] = 14,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4062] = 13,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4110] = 13,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4158] = 13,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4206] = 13,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4254] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4300] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(467), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4346] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4391] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4436] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4481] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4526] = 12,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4571] = 5,
    STATE(33), 1,
      sym__sc,
    STATE(172), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(479), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4590] = 5,
    STATE(8), 1,
      sym__sc,
    STATE(172), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(482), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4609] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      sym_line_comment,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(486), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4626] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_repeat1,
    ACTIONS(492), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4643] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_repeat1,
    ACTIONS(496), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4660] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      sym_line_comment,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_string_repeat1,
    ACTIONS(501), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4677] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_repeat1,
    ACTIONS(492), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4694] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4709] = 4,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4723] = 4,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4737] = 4,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4751] = 4,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4765] = 4,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4779] = 4,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4793] = 4,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4807] = 4,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4821] = 4,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4835] = 4,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4849] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4863] = 4,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4877] = 4,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4891] = 4,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4905] = 4,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4919] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4933] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4947] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4958] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4969] = 3,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4980] = 3,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4991] = 3,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5002] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5013] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5024] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5035] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5046] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5057] = 3,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5068] = 3,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5079] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5090] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(542), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5099] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5110] = 3,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5121] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5132] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5143] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5154] = 2,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5162] = 2,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5170] = 2,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5178] = 2,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5186] = 2,
    ACTIONS(583), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5194] = 2,
    ACTIONS(585), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5202] = 2,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5210] = 2,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5218] = 2,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5226] = 2,
    ACTIONS(593), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5234] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5242] = 2,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5250] = 2,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5258] = 2,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5266] = 2,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5274] = 2,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5282] = 2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5290] = 2,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5298] = 2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5306] = 2,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5314] = 2,
    ACTIONS(609), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5322] = 2,
    ACTIONS(611), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5330] = 2,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5338] = 2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5346] = 2,
    ACTIONS(617), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5354] = 2,
    ACTIONS(619), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 35,
  [SMALL_STATE(54)] = 68,
  [SMALL_STATE(55)] = 105,
  [SMALL_STATE(56)] = 138,
  [SMALL_STATE(57)] = 173,
  [SMALL_STATE(58)] = 210,
  [SMALL_STATE(59)] = 247,
  [SMALL_STATE(60)] = 284,
  [SMALL_STATE(61)] = 317,
  [SMALL_STATE(62)] = 354,
  [SMALL_STATE(63)] = 389,
  [SMALL_STATE(64)] = 421,
  [SMALL_STATE(65)] = 453,
  [SMALL_STATE(66)] = 485,
  [SMALL_STATE(67)] = 535,
  [SMALL_STATE(68)] = 573,
  [SMALL_STATE(69)] = 605,
  [SMALL_STATE(70)] = 645,
  [SMALL_STATE(71)] = 689,
  [SMALL_STATE(72)] = 735,
  [SMALL_STATE(73)] = 783,
  [SMALL_STATE(74)] = 815,
  [SMALL_STATE(75)] = 851,
  [SMALL_STATE(76)] = 885,
  [SMALL_STATE(77)] = 917,
  [SMALL_STATE(78)] = 967,
  [SMALL_STATE(79)] = 999,
  [SMALL_STATE(80)] = 1057,
  [SMALL_STATE(81)] = 1093,
  [SMALL_STATE(82)] = 1125,
  [SMALL_STATE(83)] = 1157,
  [SMALL_STATE(84)] = 1193,
  [SMALL_STATE(85)] = 1225,
  [SMALL_STATE(86)] = 1257,
  [SMALL_STATE(87)] = 1289,
  [SMALL_STATE(88)] = 1321,
  [SMALL_STATE(89)] = 1355,
  [SMALL_STATE(90)] = 1387,
  [SMALL_STATE(91)] = 1423,
  [SMALL_STATE(92)] = 1455,
  [SMALL_STATE(93)] = 1487,
  [SMALL_STATE(94)] = 1519,
  [SMALL_STATE(95)] = 1557,
  [SMALL_STATE(96)] = 1595,
  [SMALL_STATE(97)] = 1627,
  [SMALL_STATE(98)] = 1659,
  [SMALL_STATE(99)] = 1691,
  [SMALL_STATE(100)] = 1741,
  [SMALL_STATE(101)] = 1791,
  [SMALL_STATE(102)] = 1825,
  [SMALL_STATE(103)] = 1857,
  [SMALL_STATE(104)] = 1889,
  [SMALL_STATE(105)] = 1921,
  [SMALL_STATE(106)] = 1953,
  [SMALL_STATE(107)] = 1985,
  [SMALL_STATE(108)] = 2017,
  [SMALL_STATE(109)] = 2049,
  [SMALL_STATE(110)] = 2081,
  [SMALL_STATE(111)] = 2117,
  [SMALL_STATE(112)] = 2175,
  [SMALL_STATE(113)] = 2211,
  [SMALL_STATE(114)] = 2247,
  [SMALL_STATE(115)] = 2303,
  [SMALL_STATE(116)] = 2334,
  [SMALL_STATE(117)] = 2383,
  [SMALL_STATE(118)] = 2414,
  [SMALL_STATE(119)] = 2463,
  [SMALL_STATE(120)] = 2494,
  [SMALL_STATE(121)] = 2525,
  [SMALL_STATE(122)] = 2556,
  [SMALL_STATE(123)] = 2605,
  [SMALL_STATE(124)] = 2636,
  [SMALL_STATE(125)] = 2667,
  [SMALL_STATE(126)] = 2698,
  [SMALL_STATE(127)] = 2729,
  [SMALL_STATE(128)] = 2760,
  [SMALL_STATE(129)] = 2791,
  [SMALL_STATE(130)] = 2822,
  [SMALL_STATE(131)] = 2859,
  [SMALL_STATE(132)] = 2896,
  [SMALL_STATE(133)] = 2927,
  [SMALL_STATE(134)] = 2958,
  [SMALL_STATE(135)] = 2989,
  [SMALL_STATE(136)] = 3038,
  [SMALL_STATE(137)] = 3069,
  [SMALL_STATE(138)] = 3100,
  [SMALL_STATE(139)] = 3131,
  [SMALL_STATE(140)] = 3162,
  [SMALL_STATE(141)] = 3193,
  [SMALL_STATE(142)] = 3240,
  [SMALL_STATE(143)] = 3271,
  [SMALL_STATE(144)] = 3316,
  [SMALL_STATE(145)] = 3347,
  [SMALL_STATE(146)] = 3390,
  [SMALL_STATE(147)] = 3429,
  [SMALL_STATE(148)] = 3460,
  [SMALL_STATE(149)] = 3497,
  [SMALL_STATE(150)] = 3528,
  [SMALL_STATE(151)] = 3559,
  [SMALL_STATE(152)] = 3607,
  [SMALL_STATE(153)] = 3658,
  [SMALL_STATE(154)] = 3709,
  [SMALL_STATE(155)] = 3760,
  [SMALL_STATE(156)] = 3811,
  [SMALL_STATE(157)] = 3862,
  [SMALL_STATE(158)] = 3913,
  [SMALL_STATE(159)] = 3960,
  [SMALL_STATE(160)] = 4011,
  [SMALL_STATE(161)] = 4062,
  [SMALL_STATE(162)] = 4110,
  [SMALL_STATE(163)] = 4158,
  [SMALL_STATE(164)] = 4206,
  [SMALL_STATE(165)] = 4254,
  [SMALL_STATE(166)] = 4300,
  [SMALL_STATE(167)] = 4346,
  [SMALL_STATE(168)] = 4391,
  [SMALL_STATE(169)] = 4436,
  [SMALL_STATE(170)] = 4481,
  [SMALL_STATE(171)] = 4526,
  [SMALL_STATE(172)] = 4571,
  [SMALL_STATE(173)] = 4590,
  [SMALL_STATE(174)] = 4609,
  [SMALL_STATE(175)] = 4626,
  [SMALL_STATE(176)] = 4643,
  [SMALL_STATE(177)] = 4660,
  [SMALL_STATE(178)] = 4677,
  [SMALL_STATE(179)] = 4694,
  [SMALL_STATE(180)] = 4709,
  [SMALL_STATE(181)] = 4723,
  [SMALL_STATE(182)] = 4737,
  [SMALL_STATE(183)] = 4751,
  [SMALL_STATE(184)] = 4765,
  [SMALL_STATE(185)] = 4779,
  [SMALL_STATE(186)] = 4793,
  [SMALL_STATE(187)] = 4807,
  [SMALL_STATE(188)] = 4821,
  [SMALL_STATE(189)] = 4835,
  [SMALL_STATE(190)] = 4849,
  [SMALL_STATE(191)] = 4863,
  [SMALL_STATE(192)] = 4877,
  [SMALL_STATE(193)] = 4891,
  [SMALL_STATE(194)] = 4905,
  [SMALL_STATE(195)] = 4919,
  [SMALL_STATE(196)] = 4933,
  [SMALL_STATE(197)] = 4947,
  [SMALL_STATE(198)] = 4958,
  [SMALL_STATE(199)] = 4969,
  [SMALL_STATE(200)] = 4980,
  [SMALL_STATE(201)] = 4991,
  [SMALL_STATE(202)] = 5002,
  [SMALL_STATE(203)] = 5013,
  [SMALL_STATE(204)] = 5024,
  [SMALL_STATE(205)] = 5035,
  [SMALL_STATE(206)] = 5046,
  [SMALL_STATE(207)] = 5057,
  [SMALL_STATE(208)] = 5068,
  [SMALL_STATE(209)] = 5079,
  [SMALL_STATE(210)] = 5090,
  [SMALL_STATE(211)] = 5099,
  [SMALL_STATE(212)] = 5110,
  [SMALL_STATE(213)] = 5121,
  [SMALL_STATE(214)] = 5132,
  [SMALL_STATE(215)] = 5143,
  [SMALL_STATE(216)] = 5154,
  [SMALL_STATE(217)] = 5162,
  [SMALL_STATE(218)] = 5170,
  [SMALL_STATE(219)] = 5178,
  [SMALL_STATE(220)] = 5186,
  [SMALL_STATE(221)] = 5194,
  [SMALL_STATE(222)] = 5202,
  [SMALL_STATE(223)] = 5210,
  [SMALL_STATE(224)] = 5218,
  [SMALL_STATE(225)] = 5226,
  [SMALL_STATE(226)] = 5234,
  [SMALL_STATE(227)] = 5242,
  [SMALL_STATE(228)] = 5250,
  [SMALL_STATE(229)] = 5258,
  [SMALL_STATE(230)] = 5266,
  [SMALL_STATE(231)] = 5274,
  [SMALL_STATE(232)] = 5282,
  [SMALL_STATE(233)] = 5290,
  [SMALL_STATE(234)] = 5298,
  [SMALL_STATE(235)] = 5306,
  [SMALL_STATE(236)] = 5314,
  [SMALL_STATE(237)] = 5322,
  [SMALL_STATE(238)] = 5330,
  [SMALL_STATE(239)] = 5338,
  [SMALL_STATE(240)] = 5346,
  [SMALL_STATE(241)] = 5354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_exp, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_exp, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(219),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(216),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(221),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(235),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(33),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(176),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(32),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(29),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(222),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(230),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [595] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
