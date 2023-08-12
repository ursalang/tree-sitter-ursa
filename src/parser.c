#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 225
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  anon_sym_use = 5,
  anon_sym_DOT = 6,
  anon_sym_SEMI = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_break = 10,
  sym_continue = 11,
  anon_sym_return = 12,
  anon_sym_if = 13,
  anon_sym_else = 14,
  anon_sym_fn = 15,
  anon_sym_COMMA = 16,
  anon_sym_loop = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_COLON = 20,
  anon_sym_or = 21,
  anon_sym_and = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_not = 35,
  sym_identifier = 36,
  sym_number = 37,
  anon_sym_false = 38,
  anon_sym_true = 39,
  sym_null = 40,
  anon_sym_DQUOTE = 41,
  sym__unescaped_string_fragment = 42,
  sym__escape_sequence = 43,
  sym_comment = 44,
  sym__automatic_semicolon = 45,
  sym_module = 46,
  sym__sequence = 47,
  sym__statement = 48,
  sym_block = 49,
  sym_let = 50,
  sym_use = 51,
  sym__sc = 52,
  sym__exp = 53,
  sym_break = 54,
  sym_return = 55,
  sym_if = 56,
  sym__fn = 57,
  sym_named_fn = 58,
  sym_lambda = 59,
  sym_loop = 60,
  sym_list = 61,
  sym_object = 62,
  sym_map = 63,
  sym_assignment = 64,
  sym_binary_exp = 65,
  sym_unary_exp = 66,
  sym_index_exp = 67,
  sym_call = 68,
  sym_property_exp = 69,
  sym_bool = 70,
  sym_string = 71,
  aux_sym__sequence_repeat1 = 72,
  aux_sym_use_repeat1 = 73,
  aux_sym_lambda_repeat1 = 74,
  aux_sym_list_repeat1 = 75,
  aux_sym_object_repeat1 = 76,
  aux_sym_map_repeat1 = 77,
  aux_sym_property_exp_repeat1 = 78,
  aux_sym_string_repeat1 = 79,
  alias_sym_property_identifier = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_comment] = "comment",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym_module] = "module",
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
  [sym_comment] = sym_comment,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym_module] = sym_module,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
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
  [9] = 6,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 22,
  [29] = 23,
  [30] = 24,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 18,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 25,
  [41] = 35,
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 37,
  [46] = 19,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 48,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 49,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 50,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 51,
  [79] = 79,
  [80] = 80,
  [81] = 81,
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
  [93] = 54,
  [94] = 53,
  [95] = 52,
  [96] = 60,
  [97] = 86,
  [98] = 70,
  [99] = 99,
  [100] = 89,
  [101] = 99,
  [102] = 69,
  [103] = 84,
  [104] = 92,
  [105] = 68,
  [106] = 74,
  [107] = 73,
  [108] = 67,
  [109] = 81,
  [110] = 65,
  [111] = 64,
  [112] = 72,
  [113] = 80,
  [114] = 79,
  [115] = 71,
  [116] = 63,
  [117] = 55,
  [118] = 61,
  [119] = 77,
  [120] = 88,
  [121] = 87,
  [122] = 90,
  [123] = 59,
  [124] = 76,
  [125] = 56,
  [126] = 82,
  [127] = 83,
  [128] = 85,
  [129] = 75,
  [130] = 58,
  [131] = 91,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 136,
  [142] = 137,
  [143] = 140,
  [144] = 139,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 147,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 150,
  [154] = 154,
  [155] = 155,
  [156] = 156,
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
  [167] = 161,
  [168] = 164,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 171,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 173,
  [181] = 177,
  [182] = 179,
  [183] = 174,
  [184] = 178,
  [185] = 176,
  [186] = 172,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 189,
  [194] = 194,
  [195] = 195,
  [196] = 192,
  [197] = 195,
  [198] = 194,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 203,
  [204] = 190,
  [205] = 203,
  [206] = 191,
  [207] = 201,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 208,
  [222] = 209,
  [223] = 223,
  [224] = 224,
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
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(44);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(71);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(46);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(30);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(99);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 21, .external_lex_state = 1},
  [3] = {.lex_state = 21, .external_lex_state = 1},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24, .external_lex_state = 1},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24, .external_lex_state = 1},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24, .external_lex_state = 1},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 24},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24, .external_lex_state = 1},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24, .external_lex_state = 1},
  [94] = {.lex_state = 24, .external_lex_state = 1},
  [95] = {.lex_state = 24, .external_lex_state = 1},
  [96] = {.lex_state = 24, .external_lex_state = 1},
  [97] = {.lex_state = 24, .external_lex_state = 1},
  [98] = {.lex_state = 24, .external_lex_state = 1},
  [99] = {.lex_state = 24, .external_lex_state = 1},
  [100] = {.lex_state = 24, .external_lex_state = 1},
  [101] = {.lex_state = 24, .external_lex_state = 1},
  [102] = {.lex_state = 24, .external_lex_state = 1},
  [103] = {.lex_state = 24, .external_lex_state = 1},
  [104] = {.lex_state = 24, .external_lex_state = 1},
  [105] = {.lex_state = 24, .external_lex_state = 1},
  [106] = {.lex_state = 24, .external_lex_state = 1},
  [107] = {.lex_state = 24, .external_lex_state = 1},
  [108] = {.lex_state = 24, .external_lex_state = 1},
  [109] = {.lex_state = 24, .external_lex_state = 1},
  [110] = {.lex_state = 24, .external_lex_state = 1},
  [111] = {.lex_state = 24, .external_lex_state = 1},
  [112] = {.lex_state = 24, .external_lex_state = 1},
  [113] = {.lex_state = 24, .external_lex_state = 1},
  [114] = {.lex_state = 24, .external_lex_state = 1},
  [115] = {.lex_state = 24, .external_lex_state = 1},
  [116] = {.lex_state = 24, .external_lex_state = 1},
  [117] = {.lex_state = 24, .external_lex_state = 1},
  [118] = {.lex_state = 24, .external_lex_state = 1},
  [119] = {.lex_state = 24, .external_lex_state = 1},
  [120] = {.lex_state = 24, .external_lex_state = 1},
  [121] = {.lex_state = 24, .external_lex_state = 1},
  [122] = {.lex_state = 24, .external_lex_state = 1},
  [123] = {.lex_state = 24, .external_lex_state = 1},
  [124] = {.lex_state = 24, .external_lex_state = 1},
  [125] = {.lex_state = 24, .external_lex_state = 1},
  [126] = {.lex_state = 24, .external_lex_state = 1},
  [127] = {.lex_state = 24, .external_lex_state = 1},
  [128] = {.lex_state = 24, .external_lex_state = 1},
  [129] = {.lex_state = 24, .external_lex_state = 1},
  [130] = {.lex_state = 24, .external_lex_state = 1},
  [131] = {.lex_state = 24, .external_lex_state = 1},
  [132] = {.lex_state = 24, .external_lex_state = 1},
  [133] = {.lex_state = 24, .external_lex_state = 1},
  [134] = {.lex_state = 24, .external_lex_state = 1},
  [135] = {.lex_state = 24, .external_lex_state = 1},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 24, .external_lex_state = 1},
  [156] = {.lex_state = 24, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 24, .external_lex_state = 1},
  [160] = {.lex_state = 24, .external_lex_state = 1},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
};

enum {
  ts_external_token__automatic_semicolon = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(224),
    [sym__sequence] = STATE(213),
    [sym__statement] = STATE(157),
    [sym_block] = STATE(133),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(122),
    [sym__exp] = STATE(122),
    [sym_break] = STATE(122),
    [sym_return] = STATE(122),
    [sym_if] = STATE(122),
    [sym__fn] = STATE(122),
    [sym_named_fn] = STATE(122),
    [sym_loop] = STATE(122),
    [sym_list] = STATE(122),
    [sym_object] = STATE(122),
    [sym_map] = STATE(122),
    [sym_assignment] = STATE(122),
    [sym_binary_exp] = STATE(122),
    [sym_unary_exp] = STATE(122),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(122),
    [sym_property_exp] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_string] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_STAR_STAR] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(39),
  },
  [3] = {
    [sym_block] = STATE(100),
    [sym__exp] = STATE(100),
    [sym_break] = STATE(100),
    [sym_return] = STATE(100),
    [sym_if] = STATE(100),
    [sym__fn] = STATE(100),
    [sym_named_fn] = STATE(100),
    [sym_loop] = STATE(100),
    [sym_list] = STATE(100),
    [sym_object] = STATE(100),
    [sym_map] = STATE(100),
    [sym_assignment] = STATE(100),
    [sym_binary_exp] = STATE(100),
    [sym_unary_exp] = STATE(100),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(100),
    [sym_property_exp] = STATE(100),
    [sym_bool] = STATE(100),
    [sym_string] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(45),
  },
  [4] = {
    [sym_block] = STATE(90),
    [sym__exp] = STATE(90),
    [sym_break] = STATE(90),
    [sym_return] = STATE(90),
    [sym_if] = STATE(90),
    [sym__fn] = STATE(90),
    [sym_named_fn] = STATE(90),
    [sym_loop] = STATE(90),
    [sym_list] = STATE(90),
    [sym_object] = STATE(90),
    [sym_map] = STATE(90),
    [sym_assignment] = STATE(90),
    [sym_binary_exp] = STATE(90),
    [sym_unary_exp] = STATE(90),
    [sym_index_exp] = STATE(48),
    [sym_call] = STATE(90),
    [sym_property_exp] = STATE(90),
    [sym_bool] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_STAR_STAR] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_number] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [sym_null] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(89),
    [sym__exp] = STATE(89),
    [sym_break] = STATE(89),
    [sym_return] = STATE(89),
    [sym_if] = STATE(89),
    [sym__fn] = STATE(89),
    [sym_named_fn] = STATE(89),
    [sym_loop] = STATE(89),
    [sym_list] = STATE(89),
    [sym_object] = STATE(89),
    [sym_map] = STATE(89),
    [sym_assignment] = STATE(89),
    [sym_binary_exp] = STATE(89),
    [sym_unary_exp] = STATE(89),
    [sym_index_exp] = STATE(48),
    [sym_call] = STATE(89),
    [sym_property_exp] = STATE(89),
    [sym_bool] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_loop] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_number] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [sym_null] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sequence] = STATE(211),
    [sym__statement] = STATE(157),
    [sym_block] = STATE(134),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(134),
    [sym_break] = STATE(134),
    [sym_return] = STATE(134),
    [sym_if] = STATE(134),
    [sym__fn] = STATE(134),
    [sym_named_fn] = STATE(134),
    [sym_loop] = STATE(134),
    [sym_list] = STATE(134),
    [sym_object] = STATE(134),
    [sym_map] = STATE(134),
    [sym_assignment] = STATE(134),
    [sym_binary_exp] = STATE(134),
    [sym_unary_exp] = STATE(134),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(134),
    [sym_property_exp] = STATE(134),
    [sym_bool] = STATE(134),
    [sym_string] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(85),
    [sym_number] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__statement] = STATE(165),
    [sym_block] = STATE(133),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__statement] = STATE(165),
    [sym_block] = STATE(133),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sequence] = STATE(210),
    [sym__statement] = STATE(157),
    [sym_block] = STATE(135),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
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
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(95),
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(211),
    [sym__statement] = STATE(157),
    [sym_block] = STATE(133),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sequence] = STATE(210),
    [sym__statement] = STATE(157),
    [sym_block] = STATE(133),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__statement] = STATE(165),
    [sym_block] = STATE(133),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(133),
    [sym_break] = STATE(133),
    [sym_return] = STATE(133),
    [sym_if] = STATE(133),
    [sym__fn] = STATE(133),
    [sym_named_fn] = STATE(133),
    [sym_loop] = STATE(133),
    [sym_list] = STATE(133),
    [sym_object] = STATE(133),
    [sym_map] = STATE(133),
    [sym_assignment] = STATE(133),
    [sym_binary_exp] = STATE(133),
    [sym_unary_exp] = STATE(133),
    [sym_index_exp] = STATE(57),
    [sym_call] = STATE(133),
    [sym_property_exp] = STATE(133),
    [sym_bool] = STATE(133),
    [sym_string] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [sym_continue] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(97), 3,
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
  [76] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 3,
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
  [152] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(105), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(136), 18,
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
  [228] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(111), 3,
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
  [304] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(113), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(72), 18,
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
  [377] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(115), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(128), 18,
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
  [450] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 3,
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
  [523] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(119), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(115), 18,
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
  [596] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(121), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(112), 18,
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
  [669] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(123), 3,
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
  [742] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(125), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(106), 18,
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
  [815] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(127), 3,
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
  [888] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(129), 3,
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
  [961] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(131), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(71), 18,
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
  [1034] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(133), 3,
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
  [1107] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(135), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(73), 18,
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
  [1180] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(137), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(74), 18,
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
  [1253] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(139), 3,
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
  [1326] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(79), 18,
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
  [1399] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(143), 3,
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
  [1472] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(145), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(84), 18,
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
  [1545] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(147), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(85), 18,
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
  [1618] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(149), 3,
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
  [1691] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(151), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(103), 18,
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
  [1764] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 3,
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
  [1837] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(155), 3,
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
  [1910] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(157), 3,
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
  [1983] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(159), 3,
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
  [2056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(161), 3,
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
  [2129] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(163), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(114), 18,
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
  [2202] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_break,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_index_exp,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(165), 3,
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
  [2275] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(167), 3,
      sym_continue,
      sym_number,
      sym_null,
    STATE(138), 18,
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
  [2348] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(169), 3,
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
  [2421] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(171), 3,
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
  [2494] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
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
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_index_exp,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(173), 3,
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
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(175), 19,
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
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 20,
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
  [2633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_else,
    ACTIONS(189), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 19,
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
  [2667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(191), 18,
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
  [2703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 19,
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
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(201), 19,
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
  [2769] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(210), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(205), 18,
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
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 19,
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
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(216), 19,
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
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(175), 18,
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
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 19,
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
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 19,
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
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 19,
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
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 19,
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
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 19,
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
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 19,
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
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(246), 19,
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
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_else,
    ACTIONS(189), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 18,
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
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 16,
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
  [3342] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 15,
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
  [3381] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 14,
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
  [3424] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(268), 12,
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
  [3469] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(268), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 19,
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
  [3547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 19,
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
  [3578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(191), 17,
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
  [3613] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(300), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 19,
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
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(308), 19,
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
  [3724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(312), 19,
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
  [3755] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 16,
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
  [3823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 16,
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
  [3860] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3891] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 19,
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
  [3953] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4082] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(210), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(205), 17,
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
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(201), 18,
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
  [4179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 18,
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
  [4212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 18,
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
  [4242] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4272] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(175), 16,
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
  [4336] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [4384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(175), 16,
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
  [4418] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 15,
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
  [4484] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 11,
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
  [4588] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 13,
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
  [4630] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(308), 18,
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
  [4690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(246), 18,
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
  [4720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 18,
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
  [4750] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 14,
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
  [4788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 18,
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
  [4818] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(300), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [4866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 15,
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
  [4902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 18,
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
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 18,
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
  [4962] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 18,
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
  [5022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(332), 18,
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
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5082] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 18,
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
  [5160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 18,
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
  [5190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(216), 18,
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
  [5220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(312), 18,
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
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 15,
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
  [5316] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(268), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [5362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 18,
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
  [5392] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5422] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(375), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5469] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(377), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5516] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(379), 1,
      anon_sym_COLON,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5565] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_PERCENT,
    ACTIONS(371), 1,
      anon_sym_STAR_STAR,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(359), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(361), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5614] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_list_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5664] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_list_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5714] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5760] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_map_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5810] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_object_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5860] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_list_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5910] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_list_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5960] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      aux_sym_object_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6010] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_map_repeat1,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6060] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6150] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6197] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6244] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6332] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6376] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6420] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(280), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym__sc,
    STATE(158), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(425), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym_use_repeat1,
    ACTIONS(427), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_use_repeat1,
    ACTIONS(431), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym__sc,
    STATE(154), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(435), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym__sc,
    STATE(158), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(439), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [6550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_use_repeat1,
    ACTIONS(442), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [6577] = 4,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_string_repeat1,
    ACTIONS(449), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_list_repeat1,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6615] = 4,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym_string_repeat1,
    ACTIONS(460), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6639] = 4,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat1,
    ACTIONS(464), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6653] = 4,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat1,
    ACTIONS(449), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6667] = 4,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(471), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [6681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_fn,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(162), 1,
      sym_named_fn,
  [6694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_lambda_repeat1,
  [6707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_lambda_repeat1,
  [6720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      aux_sym_list_repeat1,
  [6733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_list_repeat1,
  [6746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_lambda_repeat1,
  [6759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_lambda_repeat1,
  [6772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(120), 1,
      sym_lambda,
  [6785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      sym_identifier,
  [6798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym_map_repeat1,
  [6811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_object_repeat1,
  [6824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_list_repeat1,
  [6837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      sym_identifier,
  [6850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_object_repeat1,
  [6863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_lambda_repeat1,
  [6876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym_map_repeat1,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(88), 1,
      sym_lambda,
  [6902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      aux_sym_list_repeat1,
  [6915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_map_repeat1,
  [6928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_object_repeat1,
  [6941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_lambda,
  [6951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
  [6961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_block,
  [6971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_identifier,
  [6981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_lambda,
  [6991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
  [7001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [7011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_identifier,
  [7021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [7031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [7041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_block,
  [7051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_block,
  [7069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
  [7079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
  [7089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
  [7099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [7109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [7119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [7129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
  [7136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_identifier,
  [7143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
  [7150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [7157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_identifier,
  [7164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [7171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [7178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
  [7185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_identifier,
  [7192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_identifier,
  [7199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [7206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
  [7213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [7220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_identifier,
  [7227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
  [7234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 76,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 377,
  [SMALL_STATE(19)] = 450,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 596,
  [SMALL_STATE(22)] = 669,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 888,
  [SMALL_STATE(26)] = 961,
  [SMALL_STATE(27)] = 1034,
  [SMALL_STATE(28)] = 1107,
  [SMALL_STATE(29)] = 1180,
  [SMALL_STATE(30)] = 1253,
  [SMALL_STATE(31)] = 1326,
  [SMALL_STATE(32)] = 1399,
  [SMALL_STATE(33)] = 1472,
  [SMALL_STATE(34)] = 1545,
  [SMALL_STATE(35)] = 1618,
  [SMALL_STATE(36)] = 1691,
  [SMALL_STATE(37)] = 1764,
  [SMALL_STATE(38)] = 1837,
  [SMALL_STATE(39)] = 1910,
  [SMALL_STATE(40)] = 1983,
  [SMALL_STATE(41)] = 2056,
  [SMALL_STATE(42)] = 2129,
  [SMALL_STATE(43)] = 2202,
  [SMALL_STATE(44)] = 2275,
  [SMALL_STATE(45)] = 2348,
  [SMALL_STATE(46)] = 2421,
  [SMALL_STATE(47)] = 2494,
  [SMALL_STATE(48)] = 2567,
  [SMALL_STATE(49)] = 2601,
  [SMALL_STATE(50)] = 2633,
  [SMALL_STATE(51)] = 2667,
  [SMALL_STATE(52)] = 2703,
  [SMALL_STATE(53)] = 2737,
  [SMALL_STATE(54)] = 2769,
  [SMALL_STATE(55)] = 2805,
  [SMALL_STATE(56)] = 2836,
  [SMALL_STATE(57)] = 2867,
  [SMALL_STATE(58)] = 2900,
  [SMALL_STATE(59)] = 2931,
  [SMALL_STATE(60)] = 2962,
  [SMALL_STATE(61)] = 2993,
  [SMALL_STATE(62)] = 3024,
  [SMALL_STATE(63)] = 3055,
  [SMALL_STATE(64)] = 3086,
  [SMALL_STATE(65)] = 3117,
  [SMALL_STATE(66)] = 3148,
  [SMALL_STATE(67)] = 3181,
  [SMALL_STATE(68)] = 3212,
  [SMALL_STATE(69)] = 3243,
  [SMALL_STATE(70)] = 3274,
  [SMALL_STATE(71)] = 3305,
  [SMALL_STATE(72)] = 3342,
  [SMALL_STATE(73)] = 3381,
  [SMALL_STATE(74)] = 3424,
  [SMALL_STATE(75)] = 3469,
  [SMALL_STATE(76)] = 3516,
  [SMALL_STATE(77)] = 3547,
  [SMALL_STATE(78)] = 3578,
  [SMALL_STATE(79)] = 3613,
  [SMALL_STATE(80)] = 3662,
  [SMALL_STATE(81)] = 3693,
  [SMALL_STATE(82)] = 3724,
  [SMALL_STATE(83)] = 3755,
  [SMALL_STATE(84)] = 3786,
  [SMALL_STATE(85)] = 3823,
  [SMALL_STATE(86)] = 3860,
  [SMALL_STATE(87)] = 3891,
  [SMALL_STATE(88)] = 3922,
  [SMALL_STATE(89)] = 3953,
  [SMALL_STATE(90)] = 4002,
  [SMALL_STATE(91)] = 4051,
  [SMALL_STATE(92)] = 4082,
  [SMALL_STATE(93)] = 4113,
  [SMALL_STATE(94)] = 4148,
  [SMALL_STATE(95)] = 4179,
  [SMALL_STATE(96)] = 4212,
  [SMALL_STATE(97)] = 4242,
  [SMALL_STATE(98)] = 4272,
  [SMALL_STATE(99)] = 4302,
  [SMALL_STATE(100)] = 4336,
  [SMALL_STATE(101)] = 4384,
  [SMALL_STATE(102)] = 4418,
  [SMALL_STATE(103)] = 4448,
  [SMALL_STATE(104)] = 4484,
  [SMALL_STATE(105)] = 4514,
  [SMALL_STATE(106)] = 4544,
  [SMALL_STATE(107)] = 4588,
  [SMALL_STATE(108)] = 4630,
  [SMALL_STATE(109)] = 4660,
  [SMALL_STATE(110)] = 4690,
  [SMALL_STATE(111)] = 4720,
  [SMALL_STATE(112)] = 4750,
  [SMALL_STATE(113)] = 4788,
  [SMALL_STATE(114)] = 4818,
  [SMALL_STATE(115)] = 4866,
  [SMALL_STATE(116)] = 4902,
  [SMALL_STATE(117)] = 4932,
  [SMALL_STATE(118)] = 4962,
  [SMALL_STATE(119)] = 4992,
  [SMALL_STATE(120)] = 5022,
  [SMALL_STATE(121)] = 5052,
  [SMALL_STATE(122)] = 5082,
  [SMALL_STATE(123)] = 5130,
  [SMALL_STATE(124)] = 5160,
  [SMALL_STATE(125)] = 5190,
  [SMALL_STATE(126)] = 5220,
  [SMALL_STATE(127)] = 5250,
  [SMALL_STATE(128)] = 5280,
  [SMALL_STATE(129)] = 5316,
  [SMALL_STATE(130)] = 5362,
  [SMALL_STATE(131)] = 5392,
  [SMALL_STATE(132)] = 5422,
  [SMALL_STATE(133)] = 5469,
  [SMALL_STATE(134)] = 5516,
  [SMALL_STATE(135)] = 5565,
  [SMALL_STATE(136)] = 5614,
  [SMALL_STATE(137)] = 5664,
  [SMALL_STATE(138)] = 5714,
  [SMALL_STATE(139)] = 5760,
  [SMALL_STATE(140)] = 5810,
  [SMALL_STATE(141)] = 5860,
  [SMALL_STATE(142)] = 5910,
  [SMALL_STATE(143)] = 5960,
  [SMALL_STATE(144)] = 6010,
  [SMALL_STATE(145)] = 6060,
  [SMALL_STATE(146)] = 6105,
  [SMALL_STATE(147)] = 6150,
  [SMALL_STATE(148)] = 6197,
  [SMALL_STATE(149)] = 6244,
  [SMALL_STATE(150)] = 6288,
  [SMALL_STATE(151)] = 6332,
  [SMALL_STATE(152)] = 6376,
  [SMALL_STATE(153)] = 6420,
  [SMALL_STATE(154)] = 6464,
  [SMALL_STATE(155)] = 6482,
  [SMALL_STATE(156)] = 6498,
  [SMALL_STATE(157)] = 6514,
  [SMALL_STATE(158)] = 6532,
  [SMALL_STATE(159)] = 6550,
  [SMALL_STATE(160)] = 6566,
  [SMALL_STATE(161)] = 6577,
  [SMALL_STATE(162)] = 6591,
  [SMALL_STATE(163)] = 6601,
  [SMALL_STATE(164)] = 6615,
  [SMALL_STATE(165)] = 6629,
  [SMALL_STATE(166)] = 6639,
  [SMALL_STATE(167)] = 6653,
  [SMALL_STATE(168)] = 6667,
  [SMALL_STATE(169)] = 6681,
  [SMALL_STATE(170)] = 6694,
  [SMALL_STATE(171)] = 6707,
  [SMALL_STATE(172)] = 6720,
  [SMALL_STATE(173)] = 6733,
  [SMALL_STATE(174)] = 6746,
  [SMALL_STATE(175)] = 6759,
  [SMALL_STATE(176)] = 6772,
  [SMALL_STATE(177)] = 6785,
  [SMALL_STATE(178)] = 6798,
  [SMALL_STATE(179)] = 6811,
  [SMALL_STATE(180)] = 6824,
  [SMALL_STATE(181)] = 6837,
  [SMALL_STATE(182)] = 6850,
  [SMALL_STATE(183)] = 6863,
  [SMALL_STATE(184)] = 6876,
  [SMALL_STATE(185)] = 6889,
  [SMALL_STATE(186)] = 6902,
  [SMALL_STATE(187)] = 6915,
  [SMALL_STATE(188)] = 6928,
  [SMALL_STATE(189)] = 6941,
  [SMALL_STATE(190)] = 6951,
  [SMALL_STATE(191)] = 6961,
  [SMALL_STATE(192)] = 6971,
  [SMALL_STATE(193)] = 6981,
  [SMALL_STATE(194)] = 6991,
  [SMALL_STATE(195)] = 7001,
  [SMALL_STATE(196)] = 7011,
  [SMALL_STATE(197)] = 7021,
  [SMALL_STATE(198)] = 7031,
  [SMALL_STATE(199)] = 7041,
  [SMALL_STATE(200)] = 7051,
  [SMALL_STATE(201)] = 7059,
  [SMALL_STATE(202)] = 7069,
  [SMALL_STATE(203)] = 7079,
  [SMALL_STATE(204)] = 7089,
  [SMALL_STATE(205)] = 7099,
  [SMALL_STATE(206)] = 7109,
  [SMALL_STATE(207)] = 7119,
  [SMALL_STATE(208)] = 7129,
  [SMALL_STATE(209)] = 7136,
  [SMALL_STATE(210)] = 7143,
  [SMALL_STATE(211)] = 7150,
  [SMALL_STATE(212)] = 7157,
  [SMALL_STATE(213)] = 7164,
  [SMALL_STATE(214)] = 7171,
  [SMALL_STATE(215)] = 7178,
  [SMALL_STATE(216)] = 7185,
  [SMALL_STATE(217)] = 7192,
  [SMALL_STATE(218)] = 7199,
  [SMALL_STATE(219)] = 7206,
  [SMALL_STATE(220)] = 7213,
  [SMALL_STATE(221)] = 7220,
  [SMALL_STATE(222)] = 7227,
  [SMALL_STATE(223)] = 7234,
  [SMALL_STATE(224)] = 7241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_exp, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_exp, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(208),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_fn, 3, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_fn, 3, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(221),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(12),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(216),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(44),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(166),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(215),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(47),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(212),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [574] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
