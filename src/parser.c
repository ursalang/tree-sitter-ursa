#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 1
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
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
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_COLON = 21,
  anon_sym_or = 22,
  anon_sym_and = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_STAR_STAR = 35,
  anon_sym_not = 36,
  sym_identifier = 37,
  sym_number = 38,
  anon_sym_false = 39,
  anon_sym_true = 40,
  sym_null = 41,
  anon_sym_DQUOTE = 42,
  sym__unescaped_string_fragment = 43,
  sym__escape_sequence = 44,
  sym_line_comment = 45,
  sym__automatic_semicolon = 46,
  sym_block_comment = 47,
  sym_module = 48,
  sym__shebang = 49,
  sym__sequence = 50,
  sym__statement = 51,
  sym_block = 52,
  sym_let = 53,
  sym_use = 54,
  sym__sc = 55,
  sym__exp = 56,
  sym_break = 57,
  sym_return = 58,
  sym_if = 59,
  sym__fn = 60,
  sym_named_fn = 61,
  sym_lambda = 62,
  sym_loop = 63,
  sym_list = 64,
  sym_object = 65,
  sym_map = 66,
  sym_assignment = 67,
  sym_binary_exp = 68,
  sym_unary_exp = 69,
  sym_index_exp = 70,
  sym_call = 71,
  sym_property_exp = 72,
  sym_bool = 73,
  sym_string = 74,
  aux_sym__sequence_repeat1 = 75,
  aux_sym_use_repeat1 = 76,
  aux_sym_lambda_repeat1 = 77,
  aux_sym_list_repeat1 = 78,
  aux_sym_object_repeat1 = 79,
  aux_sym_map_repeat1 = 80,
  aux_sym_property_exp_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
  alias_sym_property_identifier = 83,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
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
  [sym_module] = "module",
  [sym__shebang] = "_shebang",
  [sym__sequence] = "_sequence",
  [sym__statement] = "_statement",
  [sym_block] = "block",
  [sym_let] = "let",
  [sym_use] = "use",
  [sym__sc] = "_sc",
  [sym__exp] = "_exp",
  [sym_break] = "break",
  [sym_return] = "return",
  [sym_if] = "if",
  [sym__fn] = "_fn",
  [sym_named_fn] = "named_fn",
  [sym_lambda] = "lambda",
  [sym_loop] = "loop",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_module] = sym_module,
  [sym__shebang] = sym__shebang,
  [sym__sequence] = sym__sequence,
  [sym__statement] = sym__statement,
  [sym_block] = sym_block,
  [sym_let] = sym_let,
  [sym_use] = sym_use,
  [sym__sc] = sym__sc,
  [sym__exp] = sym__exp,
  [sym_break] = sym_break,
  [sym_return] = sym_return,
  [sym_if] = sym_if,
  [sym__fn] = sym__fn,
  [sym_named_fn] = sym_named_fn,
  [sym_lambda] = sym_lambda,
  [sym_loop] = sym_loop,
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
  [sym__statement] = {
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
  [sym_named_fn] = {
    .visible = true,
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
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_identifier, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 27,
  [30] = 23,
  [31] = 24,
  [32] = 25,
  [33] = 33,
  [34] = 20,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
  [44] = 19,
  [45] = 45,
  [46] = 26,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 50,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 51,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 52,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 53,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 56,
  [97] = 55,
  [98] = 54,
  [99] = 84,
  [100] = 91,
  [101] = 72,
  [102] = 77,
  [103] = 103,
  [104] = 86,
  [105] = 71,
  [106] = 95,
  [107] = 76,
  [108] = 70,
  [109] = 75,
  [110] = 57,
  [111] = 69,
  [112] = 62,
  [113] = 67,
  [114] = 66,
  [115] = 79,
  [116] = 87,
  [117] = 78,
  [118] = 85,
  [119] = 65,
  [120] = 83,
  [121] = 63,
  [122] = 94,
  [123] = 58,
  [124] = 103,
  [125] = 93,
  [126] = 92,
  [127] = 74,
  [128] = 61,
  [129] = 82,
  [130] = 80,
  [131] = 90,
  [132] = 88,
  [133] = 60,
  [134] = 89,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 139,
  [144] = 144,
  [145] = 140,
  [146] = 142,
  [147] = 144,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 150,
  [152] = 152,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 164,
  [171] = 166,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 177,
  [180] = 180,
  [181] = 178,
  [182] = 182,
  [183] = 173,
  [184] = 184,
  [185] = 184,
  [186] = 180,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 175,
  [191] = 172,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 196,
  [200] = 194,
  [201] = 201,
  [202] = 193,
  [203] = 192,
  [204] = 197,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 201,
  [209] = 206,
  [210] = 198,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 212,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 213,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 219,
  [227] = 227,
  [228] = 215,
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 23:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(112);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(46);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(55);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(40);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(85);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(42);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(48);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(101);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 27, .external_lex_state = 2},
  [2] = {.lex_state = 23, .external_lex_state = 1},
  [3] = {.lex_state = 23, .external_lex_state = 1},
  [4] = {.lex_state = 23, .external_lex_state = 2},
  [5] = {.lex_state = 23, .external_lex_state = 2},
  [6] = {.lex_state = 27, .external_lex_state = 2},
  [7] = {.lex_state = 27, .external_lex_state = 2},
  [8] = {.lex_state = 27, .external_lex_state = 2},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 27, .external_lex_state = 2},
  [13] = {.lex_state = 27, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 2, .external_lex_state = 2},
  [25] = {.lex_state = 2, .external_lex_state = 2},
  [26] = {.lex_state = 2, .external_lex_state = 2},
  [27] = {.lex_state = 2, .external_lex_state = 2},
  [28] = {.lex_state = 2, .external_lex_state = 2},
  [29] = {.lex_state = 2, .external_lex_state = 2},
  [30] = {.lex_state = 2, .external_lex_state = 2},
  [31] = {.lex_state = 2, .external_lex_state = 2},
  [32] = {.lex_state = 2, .external_lex_state = 2},
  [33] = {.lex_state = 2, .external_lex_state = 2},
  [34] = {.lex_state = 2, .external_lex_state = 2},
  [35] = {.lex_state = 2, .external_lex_state = 2},
  [36] = {.lex_state = 2, .external_lex_state = 2},
  [37] = {.lex_state = 2, .external_lex_state = 2},
  [38] = {.lex_state = 2, .external_lex_state = 2},
  [39] = {.lex_state = 2, .external_lex_state = 2},
  [40] = {.lex_state = 2, .external_lex_state = 2},
  [41] = {.lex_state = 2, .external_lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 2, .external_lex_state = 2},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 2, .external_lex_state = 2},
  [47] = {.lex_state = 2, .external_lex_state = 2},
  [48] = {.lex_state = 2, .external_lex_state = 2},
  [49] = {.lex_state = 25, .external_lex_state = 2},
  [50] = {.lex_state = 25, .external_lex_state = 2},
  [51] = {.lex_state = 25, .external_lex_state = 2},
  [52] = {.lex_state = 25, .external_lex_state = 2},
  [53] = {.lex_state = 25, .external_lex_state = 2},
  [54] = {.lex_state = 25, .external_lex_state = 2},
  [55] = {.lex_state = 25, .external_lex_state = 2},
  [56] = {.lex_state = 25, .external_lex_state = 2},
  [57] = {.lex_state = 25, .external_lex_state = 2},
  [58] = {.lex_state = 25, .external_lex_state = 2},
  [59] = {.lex_state = 25, .external_lex_state = 1},
  [60] = {.lex_state = 25, .external_lex_state = 2},
  [61] = {.lex_state = 25, .external_lex_state = 2},
  [62] = {.lex_state = 25, .external_lex_state = 2},
  [63] = {.lex_state = 25, .external_lex_state = 2},
  [64] = {.lex_state = 25, .external_lex_state = 1},
  [65] = {.lex_state = 25, .external_lex_state = 2},
  [66] = {.lex_state = 25, .external_lex_state = 2},
  [67] = {.lex_state = 25, .external_lex_state = 2},
  [68] = {.lex_state = 25, .external_lex_state = 1},
  [69] = {.lex_state = 25, .external_lex_state = 2},
  [70] = {.lex_state = 25, .external_lex_state = 2},
  [71] = {.lex_state = 25, .external_lex_state = 2},
  [72] = {.lex_state = 25, .external_lex_state = 2},
  [73] = {.lex_state = 25, .external_lex_state = 1},
  [74] = {.lex_state = 25, .external_lex_state = 2},
  [75] = {.lex_state = 25, .external_lex_state = 2},
  [76] = {.lex_state = 25, .external_lex_state = 2},
  [77] = {.lex_state = 25, .external_lex_state = 2},
  [78] = {.lex_state = 25, .external_lex_state = 2},
  [79] = {.lex_state = 25, .external_lex_state = 2},
  [80] = {.lex_state = 25, .external_lex_state = 2},
  [81] = {.lex_state = 25, .external_lex_state = 1},
  [82] = {.lex_state = 25, .external_lex_state = 2},
  [83] = {.lex_state = 25, .external_lex_state = 2},
  [84] = {.lex_state = 25, .external_lex_state = 2},
  [85] = {.lex_state = 25, .external_lex_state = 2},
  [86] = {.lex_state = 25, .external_lex_state = 2},
  [87] = {.lex_state = 25, .external_lex_state = 2},
  [88] = {.lex_state = 25, .external_lex_state = 2},
  [89] = {.lex_state = 25, .external_lex_state = 2},
  [90] = {.lex_state = 25, .external_lex_state = 2},
  [91] = {.lex_state = 25, .external_lex_state = 2},
  [92] = {.lex_state = 25, .external_lex_state = 2},
  [93] = {.lex_state = 25, .external_lex_state = 2},
  [94] = {.lex_state = 25, .external_lex_state = 2},
  [95] = {.lex_state = 25, .external_lex_state = 2},
  [96] = {.lex_state = 25, .external_lex_state = 1},
  [97] = {.lex_state = 25, .external_lex_state = 1},
  [98] = {.lex_state = 25, .external_lex_state = 1},
  [99] = {.lex_state = 25, .external_lex_state = 1},
  [100] = {.lex_state = 25, .external_lex_state = 1},
  [101] = {.lex_state = 25, .external_lex_state = 1},
  [102] = {.lex_state = 25, .external_lex_state = 1},
  [103] = {.lex_state = 25, .external_lex_state = 1},
  [104] = {.lex_state = 25, .external_lex_state = 1},
  [105] = {.lex_state = 25, .external_lex_state = 1},
  [106] = {.lex_state = 25, .external_lex_state = 1},
  [107] = {.lex_state = 25, .external_lex_state = 1},
  [108] = {.lex_state = 25, .external_lex_state = 1},
  [109] = {.lex_state = 25, .external_lex_state = 1},
  [110] = {.lex_state = 25, .external_lex_state = 1},
  [111] = {.lex_state = 25, .external_lex_state = 1},
  [112] = {.lex_state = 25, .external_lex_state = 1},
  [113] = {.lex_state = 25, .external_lex_state = 1},
  [114] = {.lex_state = 25, .external_lex_state = 1},
  [115] = {.lex_state = 25, .external_lex_state = 1},
  [116] = {.lex_state = 25, .external_lex_state = 1},
  [117] = {.lex_state = 25, .external_lex_state = 1},
  [118] = {.lex_state = 25, .external_lex_state = 1},
  [119] = {.lex_state = 25, .external_lex_state = 1},
  [120] = {.lex_state = 25, .external_lex_state = 1},
  [121] = {.lex_state = 25, .external_lex_state = 1},
  [122] = {.lex_state = 25, .external_lex_state = 1},
  [123] = {.lex_state = 25, .external_lex_state = 1},
  [124] = {.lex_state = 25, .external_lex_state = 1},
  [125] = {.lex_state = 25, .external_lex_state = 1},
  [126] = {.lex_state = 25, .external_lex_state = 1},
  [127] = {.lex_state = 25, .external_lex_state = 1},
  [128] = {.lex_state = 25, .external_lex_state = 1},
  [129] = {.lex_state = 25, .external_lex_state = 1},
  [130] = {.lex_state = 25, .external_lex_state = 1},
  [131] = {.lex_state = 25, .external_lex_state = 1},
  [132] = {.lex_state = 25, .external_lex_state = 1},
  [133] = {.lex_state = 25, .external_lex_state = 1},
  [134] = {.lex_state = 25, .external_lex_state = 1},
  [135] = {.lex_state = 25, .external_lex_state = 1},
  [136] = {.lex_state = 25, .external_lex_state = 1},
  [137] = {.lex_state = 25, .external_lex_state = 1},
  [138] = {.lex_state = 25, .external_lex_state = 1},
  [139] = {.lex_state = 25, .external_lex_state = 2},
  [140] = {.lex_state = 25, .external_lex_state = 2},
  [141] = {.lex_state = 25, .external_lex_state = 2},
  [142] = {.lex_state = 25, .external_lex_state = 2},
  [143] = {.lex_state = 25, .external_lex_state = 2},
  [144] = {.lex_state = 25, .external_lex_state = 2},
  [145] = {.lex_state = 25, .external_lex_state = 2},
  [146] = {.lex_state = 25, .external_lex_state = 2},
  [147] = {.lex_state = 25, .external_lex_state = 2},
  [148] = {.lex_state = 25, .external_lex_state = 2},
  [149] = {.lex_state = 25, .external_lex_state = 2},
  [150] = {.lex_state = 25, .external_lex_state = 2},
  [151] = {.lex_state = 25, .external_lex_state = 2},
  [152] = {.lex_state = 25, .external_lex_state = 2},
  [153] = {.lex_state = 25, .external_lex_state = 2},
  [154] = {.lex_state = 25, .external_lex_state = 2},
  [155] = {.lex_state = 25, .external_lex_state = 2},
  [156] = {.lex_state = 25, .external_lex_state = 2},
  [157] = {.lex_state = 25, .external_lex_state = 1},
  [158] = {.lex_state = 25, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 25, .external_lex_state = 1},
  [163] = {.lex_state = 25, .external_lex_state = 1},
  [164] = {.lex_state = 3, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 3, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 3, .external_lex_state = 2},
  [170] = {.lex_state = 3, .external_lex_state = 2},
  [171] = {.lex_state = 3, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 4, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 4, .external_lex_state = 2},
  [187] = {.lex_state = 6, .external_lex_state = 2},
  [188] = {.lex_state = 4, .external_lex_state = 2},
  [189] = {.lex_state = 4, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 4, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 4, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 4, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 4, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 4, .external_lex_state = 2},
  [216] = {.lex_state = 4, .external_lex_state = 2},
  [217] = {.lex_state = 4, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 4, .external_lex_state = 2},
  [220] = {.lex_state = 4, .external_lex_state = 2},
  [221] = {.lex_state = 4, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 4, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 4, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 4, .external_lex_state = 2},
};

enum {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token_block_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(227),
    [sym__shebang] = STATE(6),
    [sym__sequence] = STATE(214),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(136),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(125),
    [sym__exp] = STATE(125),
    [sym_break] = STATE(125),
    [sym_return] = STATE(125),
    [sym_if] = STATE(125),
    [sym__fn] = STATE(125),
    [sym_named_fn] = STATE(125),
    [sym_loop] = STATE(125),
    [sym_list] = STATE(125),
    [sym_object] = STATE(125),
    [sym_map] = STATE(125),
    [sym_assignment] = STATE(125),
    [sym_binary_exp] = STATE(125),
    [sym_unary_exp] = STATE(125),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(125),
    [sym_property_exp] = STATE(125),
    [sym_bool] = STATE(125),
    [sym_string] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(41),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_if] = STATE(126),
    [sym__fn] = STATE(126),
    [sym_named_fn] = STATE(126),
    [sym_loop] = STATE(126),
    [sym_list] = STATE(126),
    [sym_object] = STATE(126),
    [sym_map] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_binary_exp] = STATE(126),
    [sym_unary_exp] = STATE(126),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(51),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(47),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(93),
    [sym__exp] = STATE(93),
    [sym_break] = STATE(93),
    [sym_return] = STATE(93),
    [sym_if] = STATE(93),
    [sym__fn] = STATE(93),
    [sym_named_fn] = STATE(93),
    [sym_loop] = STATE(93),
    [sym_list] = STATE(93),
    [sym_object] = STATE(93),
    [sym_map] = STATE(93),
    [sym_assignment] = STATE(93),
    [sym_binary_exp] = STATE(93),
    [sym_unary_exp] = STATE(93),
    [sym_index_exp] = STATE(49),
    [sym_call] = STATE(93),
    [sym_property_exp] = STATE(93),
    [sym_bool] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_break] = ACTIONS(57),
    [sym_continue] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fn] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_loop] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(92),
    [sym__exp] = STATE(92),
    [sym_break] = STATE(92),
    [sym_return] = STATE(92),
    [sym_if] = STATE(92),
    [sym__fn] = STATE(92),
    [sym_named_fn] = STATE(92),
    [sym_loop] = STATE(92),
    [sym_list] = STATE(92),
    [sym_object] = STATE(92),
    [sym_map] = STATE(92),
    [sym_assignment] = STATE(92),
    [sym_binary_exp] = STATE(92),
    [sym_unary_exp] = STATE(92),
    [sym_index_exp] = STATE(49),
    [sym_call] = STATE(92),
    [sym_property_exp] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_break] = ACTIONS(57),
    [sym_continue] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_fn] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_loop] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [sym_null] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sequence] = STATE(224),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(136),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(83),
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sequence] = STATE(218),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(135),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(135),
    [sym_break] = STATE(135),
    [sym_return] = STATE(135),
    [sym_if] = STATE(135),
    [sym__fn] = STATE(135),
    [sym_named_fn] = STATE(135),
    [sym_loop] = STATE(135),
    [sym_list] = STATE(135),
    [sym_object] = STATE(135),
    [sym_map] = STATE(135),
    [sym_assignment] = STATE(135),
    [sym_binary_exp] = STATE(135),
    [sym_unary_exp] = STATE(135),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(89),
    [sym_number] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__statement] = STATE(168),
    [sym_block] = STATE(136),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__statement] = STATE(168),
    [sym_block] = STATE(136),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(218),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(136),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sequence] = STATE(212),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(138),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(138),
    [sym_break] = STATE(138),
    [sym_return] = STATE(138),
    [sym_if] = STATE(138),
    [sym__fn] = STATE(138),
    [sym_named_fn] = STATE(138),
    [sym_loop] = STATE(138),
    [sym_list] = STATE(138),
    [sym_object] = STATE(138),
    [sym_map] = STATE(138),
    [sym_assignment] = STATE(138),
    [sym_binary_exp] = STATE(138),
    [sym_unary_exp] = STATE(138),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(138),
    [sym_property_exp] = STATE(138),
    [sym_bool] = STATE(138),
    [sym_string] = STATE(138),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(101),
    [sym_number] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sequence] = STATE(212),
    [sym__statement] = STATE(159),
    [sym_block] = STATE(136),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__statement] = STATE(168),
    [sym_block] = STATE(136),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(136),
    [sym_break] = STATE(136),
    [sym_return] = STATE(136),
    [sym_if] = STATE(136),
    [sym__fn] = STATE(136),
    [sym_named_fn] = STATE(136),
    [sym_loop] = STATE(136),
    [sym_list] = STATE(136),
    [sym_object] = STATE(136),
    [sym_map] = STATE(136),
    [sym_assignment] = STATE(136),
    [sym_binary_exp] = STATE(136),
    [sym_unary_exp] = STATE(136),
    [sym_index_exp] = STATE(59),
    [sym_call] = STATE(136),
    [sym_property_exp] = STATE(136),
    [sym_bool] = STATE(136),
    [sym_string] = STATE(136),
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(107), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(147), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [77] = 18,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(109), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(139), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [154] = 18,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(115), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(144), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [231] = 18,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(143), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [308] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(121), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(75), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [382] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(123), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(146), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [456] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(125), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(152), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [530] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(127), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(110), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [604] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(129), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(109), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [678] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(131), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(107), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [752] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(133), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(102), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [826] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(135), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(117), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [900] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(137), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(153), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [974] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(139), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(145), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1048] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(57), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1122] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(143), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(140), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1196] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(145), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(76), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1270] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(147), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(77), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1344] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(149), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(78), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1418] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
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
    STATE(82), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1492] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(156), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1566] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(155), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(87), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1640] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
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
    STATE(88), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1714] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(159), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(116), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1788] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(161), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(132), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1862] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(163), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(151), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1936] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(165), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(148), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2010] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(167), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(149), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2084] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(169), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(155), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2158] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(171), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(129), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2232] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(173), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(142), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2306] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(175), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(137), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2380] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(177), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(154), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2454] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(179), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(150), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2528] = 17,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_break,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_index_exp,
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
    STATE(141), 18,
      sym_block,
      sym__exp,
      sym_break,
      sym_return,
      sym_if,
      sym__fn,
      sym_named_fn,
      sym_loop,
      sym_list,
      sym_object,
      sym_map,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2602] = 4,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(183), 19,
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
  [2637] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(189), 20,
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
  [2670] = 4,
    ACTIONS(195), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(193), 19,
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
  [2705] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(199), 20,
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
  [2738] = 5,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(207), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 18,
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
  [2775] = 4,
    STATE(56), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(211), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(209), 19,
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
  [2810] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(215), 5,
      anon_sym_EQ,
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
  [2843] = 5,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(217), 18,
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
  [2880] = 6,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 16,
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
  [2918] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 4,
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
  [2950] = 4,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(183), 18,
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
  [2984] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(240), 19,
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
  [3016] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 19,
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
  [3048] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 19,
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
  [3080] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 19,
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
  [3112] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(189), 19,
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
  [3144] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 19,
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
  [3176] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 19,
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
  [3208] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 19,
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
  [3240] = 4,
    ACTIONS(268), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(193), 18,
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
  [3274] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(270), 19,
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
  [3306] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 19,
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
  [3338] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(280), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(278), 19,
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
  [3370] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(282), 19,
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
  [3402] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(199), 19,
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
  [3434] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(286), 19,
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
  [3466] = 7,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 15,
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
  [3506] = 9,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 14,
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
  [3550] = 10,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(224), 12,
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
  [3596] = 11,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(224), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3644] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(304), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(302), 19,
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
  [3676] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(306), 19,
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
  [3708] = 5,
    ACTIONS(310), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(207), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 17,
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
  [3744] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(312), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3794] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(316), 19,
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
  [3826] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 19,
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
  [3858] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(324), 19,
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
  [3890] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(330), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(328), 19,
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
  [3922] = 6,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 16,
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
  [3960] = 6,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 16,
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
  [3998] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 19,
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
  [4030] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(340), 19,
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
  [4062] = 3,
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
  [4094] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4144] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4194] = 3,
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
  [4226] = 3,
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
  [4258] = 5,
    ACTIONS(360), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(217), 17,
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
  [4294] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(215), 5,
      anon_sym_EQ,
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
  [4326] = 4,
    STATE(96), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(211), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(209), 18,
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
  [4360] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 18,
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
  [4391] = 3,
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
  [4422] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(282), 18,
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
  [4453] = 10,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 11,
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
  [4498] = 5,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(183), 16,
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
  [4533] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(330), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(328), 18,
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
  [4564] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(280), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(278), 18,
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
  [4595] = 3,
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
  [4626] = 9,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 13,
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
  [4669] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 18,
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
  [4700] = 7,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 14,
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
  [4739] = 6,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(224), 15,
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
  [4776] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(270), 18,
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
  [4807] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 18,
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
  [4838] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 18,
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
  [4869] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 18,
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
  [4900] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(304), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(302), 18,
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
  [4931] = 6,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 15,
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
  [4968] = 11,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(224), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [5015] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(324), 18,
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
  [5046] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 18,
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
  [5077] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(316), 18,
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
  [5108] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 18,
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
  [5139] = 3,
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
  [5170] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 4,
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
  [5201] = 5,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(183), 16,
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
  [5236] = 12,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5285] = 12,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5334] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(286), 18,
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
  [5365] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 18,
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
  [5396] = 12,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(312), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5445] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(306), 18,
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
  [5476] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(340), 18,
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
  [5507] = 6,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 15,
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
  [5544] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(240), 18,
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
  [5575] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 18,
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
  [5606] = 13,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(387), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5656] = 12,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(387), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5704] = 12,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(391), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5752] = 13,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR,
    ACTIONS(393), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(387), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(379), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5802] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5853] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5904] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(403), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5951] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6002] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6053] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6104] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6155] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6206] = 14,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6257] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(419), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6303] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(421), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6349] = 13,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6397] = 13,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6445] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6490] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6535] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6580] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6625] = 12,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_STAR_STAR,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(298), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6670] = 4,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6687] = 4,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(157), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(441), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6704] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(161), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(445), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6723] = 5,
    STATE(13), 1,
      sym__sc,
    STATE(160), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(449), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6742] = 5,
    STATE(8), 1,
      sym__sc,
    STATE(160), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(452), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6761] = 4,
    ACTIONS(456), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(454), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6778] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(454), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6790] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      sym_line_comment,
    STATE(171), 1,
      aux_sym_string_repeat1,
    ACTIONS(461), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6807] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6818] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(463), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      aux_sym_string_repeat1,
    ACTIONS(469), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6835] = 4,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6850] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6861] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(463), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      aux_sym_string_repeat1,
    ACTIONS(476), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6878] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(463), 1,
      sym_line_comment,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat1,
    ACTIONS(481), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6895] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(463), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      aux_sym_string_repeat1,
    ACTIONS(469), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6912] = 4,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6926] = 4,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6940] = 4,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6954] = 4,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6968] = 4,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6982] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6996] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7010] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_object_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7024] = 4,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7038] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7052] = 4,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7066] = 4,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7080] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7094] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7108] = 4,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7122] = 4,
    ACTIONS(536), 1,
      anon_sym_fn,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(165), 1,
      sym_named_fn,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7136] = 4,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(100), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7150] = 4,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(91), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7164] = 4,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7178] = 4,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7192] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7203] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7214] = 3,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7225] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7234] = 3,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7245] = 3,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7256] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7267] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7278] = 3,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7289] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7300] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7311] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7322] = 3,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7333] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7344] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7355] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7366] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7377] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7388] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7399] = 2,
    ACTIONS(562), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7407] = 2,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7415] = 2,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7423] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7431] = 2,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7439] = 2,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7447] = 2,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7455] = 2,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7463] = 2,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7471] = 2,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7479] = 2,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7487] = 2,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7495] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7503] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7511] = 2,
    ACTIONS(580), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7519] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7527] = 2,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7535] = 2,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 77,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 604,
  [SMALL_STATE(23)] = 678,
  [SMALL_STATE(24)] = 752,
  [SMALL_STATE(25)] = 826,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 974,
  [SMALL_STATE(28)] = 1048,
  [SMALL_STATE(29)] = 1122,
  [SMALL_STATE(30)] = 1196,
  [SMALL_STATE(31)] = 1270,
  [SMALL_STATE(32)] = 1344,
  [SMALL_STATE(33)] = 1418,
  [SMALL_STATE(34)] = 1492,
  [SMALL_STATE(35)] = 1566,
  [SMALL_STATE(36)] = 1640,
  [SMALL_STATE(37)] = 1714,
  [SMALL_STATE(38)] = 1788,
  [SMALL_STATE(39)] = 1862,
  [SMALL_STATE(40)] = 1936,
  [SMALL_STATE(41)] = 2010,
  [SMALL_STATE(42)] = 2084,
  [SMALL_STATE(43)] = 2158,
  [SMALL_STATE(44)] = 2232,
  [SMALL_STATE(45)] = 2306,
  [SMALL_STATE(46)] = 2380,
  [SMALL_STATE(47)] = 2454,
  [SMALL_STATE(48)] = 2528,
  [SMALL_STATE(49)] = 2602,
  [SMALL_STATE(50)] = 2637,
  [SMALL_STATE(51)] = 2670,
  [SMALL_STATE(52)] = 2705,
  [SMALL_STATE(53)] = 2738,
  [SMALL_STATE(54)] = 2775,
  [SMALL_STATE(55)] = 2810,
  [SMALL_STATE(56)] = 2843,
  [SMALL_STATE(57)] = 2880,
  [SMALL_STATE(58)] = 2918,
  [SMALL_STATE(59)] = 2950,
  [SMALL_STATE(60)] = 2984,
  [SMALL_STATE(61)] = 3016,
  [SMALL_STATE(62)] = 3048,
  [SMALL_STATE(63)] = 3080,
  [SMALL_STATE(64)] = 3112,
  [SMALL_STATE(65)] = 3144,
  [SMALL_STATE(66)] = 3176,
  [SMALL_STATE(67)] = 3208,
  [SMALL_STATE(68)] = 3240,
  [SMALL_STATE(69)] = 3274,
  [SMALL_STATE(70)] = 3306,
  [SMALL_STATE(71)] = 3338,
  [SMALL_STATE(72)] = 3370,
  [SMALL_STATE(73)] = 3402,
  [SMALL_STATE(74)] = 3434,
  [SMALL_STATE(75)] = 3466,
  [SMALL_STATE(76)] = 3506,
  [SMALL_STATE(77)] = 3550,
  [SMALL_STATE(78)] = 3596,
  [SMALL_STATE(79)] = 3644,
  [SMALL_STATE(80)] = 3676,
  [SMALL_STATE(81)] = 3708,
  [SMALL_STATE(82)] = 3744,
  [SMALL_STATE(83)] = 3794,
  [SMALL_STATE(84)] = 3826,
  [SMALL_STATE(85)] = 3858,
  [SMALL_STATE(86)] = 3890,
  [SMALL_STATE(87)] = 3922,
  [SMALL_STATE(88)] = 3960,
  [SMALL_STATE(89)] = 3998,
  [SMALL_STATE(90)] = 4030,
  [SMALL_STATE(91)] = 4062,
  [SMALL_STATE(92)] = 4094,
  [SMALL_STATE(93)] = 4144,
  [SMALL_STATE(94)] = 4194,
  [SMALL_STATE(95)] = 4226,
  [SMALL_STATE(96)] = 4258,
  [SMALL_STATE(97)] = 4294,
  [SMALL_STATE(98)] = 4326,
  [SMALL_STATE(99)] = 4360,
  [SMALL_STATE(100)] = 4391,
  [SMALL_STATE(101)] = 4422,
  [SMALL_STATE(102)] = 4453,
  [SMALL_STATE(103)] = 4498,
  [SMALL_STATE(104)] = 4533,
  [SMALL_STATE(105)] = 4564,
  [SMALL_STATE(106)] = 4595,
  [SMALL_STATE(107)] = 4626,
  [SMALL_STATE(108)] = 4669,
  [SMALL_STATE(109)] = 4700,
  [SMALL_STATE(110)] = 4739,
  [SMALL_STATE(111)] = 4776,
  [SMALL_STATE(112)] = 4807,
  [SMALL_STATE(113)] = 4838,
  [SMALL_STATE(114)] = 4869,
  [SMALL_STATE(115)] = 4900,
  [SMALL_STATE(116)] = 4931,
  [SMALL_STATE(117)] = 4968,
  [SMALL_STATE(118)] = 5015,
  [SMALL_STATE(119)] = 5046,
  [SMALL_STATE(120)] = 5077,
  [SMALL_STATE(121)] = 5108,
  [SMALL_STATE(122)] = 5139,
  [SMALL_STATE(123)] = 5170,
  [SMALL_STATE(124)] = 5201,
  [SMALL_STATE(125)] = 5236,
  [SMALL_STATE(126)] = 5285,
  [SMALL_STATE(127)] = 5334,
  [SMALL_STATE(128)] = 5365,
  [SMALL_STATE(129)] = 5396,
  [SMALL_STATE(130)] = 5445,
  [SMALL_STATE(131)] = 5476,
  [SMALL_STATE(132)] = 5507,
  [SMALL_STATE(133)] = 5544,
  [SMALL_STATE(134)] = 5575,
  [SMALL_STATE(135)] = 5606,
  [SMALL_STATE(136)] = 5656,
  [SMALL_STATE(137)] = 5704,
  [SMALL_STATE(138)] = 5752,
  [SMALL_STATE(139)] = 5802,
  [SMALL_STATE(140)] = 5853,
  [SMALL_STATE(141)] = 5904,
  [SMALL_STATE(142)] = 5951,
  [SMALL_STATE(143)] = 6002,
  [SMALL_STATE(144)] = 6053,
  [SMALL_STATE(145)] = 6104,
  [SMALL_STATE(146)] = 6155,
  [SMALL_STATE(147)] = 6206,
  [SMALL_STATE(148)] = 6257,
  [SMALL_STATE(149)] = 6303,
  [SMALL_STATE(150)] = 6349,
  [SMALL_STATE(151)] = 6397,
  [SMALL_STATE(152)] = 6445,
  [SMALL_STATE(153)] = 6490,
  [SMALL_STATE(154)] = 6535,
  [SMALL_STATE(155)] = 6580,
  [SMALL_STATE(156)] = 6625,
  [SMALL_STATE(157)] = 6670,
  [SMALL_STATE(158)] = 6687,
  [SMALL_STATE(159)] = 6704,
  [SMALL_STATE(160)] = 6723,
  [SMALL_STATE(161)] = 6742,
  [SMALL_STATE(162)] = 6761,
  [SMALL_STATE(163)] = 6778,
  [SMALL_STATE(164)] = 6790,
  [SMALL_STATE(165)] = 6807,
  [SMALL_STATE(166)] = 6818,
  [SMALL_STATE(167)] = 6835,
  [SMALL_STATE(168)] = 6850,
  [SMALL_STATE(169)] = 6861,
  [SMALL_STATE(170)] = 6878,
  [SMALL_STATE(171)] = 6895,
  [SMALL_STATE(172)] = 6912,
  [SMALL_STATE(173)] = 6926,
  [SMALL_STATE(174)] = 6940,
  [SMALL_STATE(175)] = 6954,
  [SMALL_STATE(176)] = 6968,
  [SMALL_STATE(177)] = 6982,
  [SMALL_STATE(178)] = 6996,
  [SMALL_STATE(179)] = 7010,
  [SMALL_STATE(180)] = 7024,
  [SMALL_STATE(181)] = 7038,
  [SMALL_STATE(182)] = 7052,
  [SMALL_STATE(183)] = 7066,
  [SMALL_STATE(184)] = 7080,
  [SMALL_STATE(185)] = 7094,
  [SMALL_STATE(186)] = 7108,
  [SMALL_STATE(187)] = 7122,
  [SMALL_STATE(188)] = 7136,
  [SMALL_STATE(189)] = 7150,
  [SMALL_STATE(190)] = 7164,
  [SMALL_STATE(191)] = 7178,
  [SMALL_STATE(192)] = 7192,
  [SMALL_STATE(193)] = 7203,
  [SMALL_STATE(194)] = 7214,
  [SMALL_STATE(195)] = 7225,
  [SMALL_STATE(196)] = 7234,
  [SMALL_STATE(197)] = 7245,
  [SMALL_STATE(198)] = 7256,
  [SMALL_STATE(199)] = 7267,
  [SMALL_STATE(200)] = 7278,
  [SMALL_STATE(201)] = 7289,
  [SMALL_STATE(202)] = 7300,
  [SMALL_STATE(203)] = 7311,
  [SMALL_STATE(204)] = 7322,
  [SMALL_STATE(205)] = 7333,
  [SMALL_STATE(206)] = 7344,
  [SMALL_STATE(207)] = 7355,
  [SMALL_STATE(208)] = 7366,
  [SMALL_STATE(209)] = 7377,
  [SMALL_STATE(210)] = 7388,
  [SMALL_STATE(211)] = 7399,
  [SMALL_STATE(212)] = 7407,
  [SMALL_STATE(213)] = 7415,
  [SMALL_STATE(214)] = 7423,
  [SMALL_STATE(215)] = 7431,
  [SMALL_STATE(216)] = 7439,
  [SMALL_STATE(217)] = 7447,
  [SMALL_STATE(218)] = 7455,
  [SMALL_STATE(219)] = 7463,
  [SMALL_STATE(220)] = 7471,
  [SMALL_STATE(221)] = 7479,
  [SMALL_STATE(222)] = 7487,
  [SMALL_STATE(223)] = 7495,
  [SMALL_STATE(224)] = 7503,
  [SMALL_STATE(225)] = 7511,
  [SMALL_STATE(226)] = 7519,
  [SMALL_STATE(227)] = 7527,
  [SMALL_STATE(228)] = 7535,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_exp, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_exp, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(215),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_fn, 3, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_fn, 3, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(228),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(13),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(217),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(48),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(169),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(216),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(220),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
