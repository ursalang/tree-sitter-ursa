#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
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
  anon_sym_await = 14,
  anon_sym_launch = 15,
  anon_sym_yield = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_fn = 19,
  anon_sym_gen = 20,
  anon_sym_COMMA = 21,
  anon_sym_loop = 22,
  anon_sym_for = 23,
  anon_sym_of = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_COLON = 27,
  anon_sym_COLON_EQ = 28,
  anon_sym_or = 29,
  anon_sym_and = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_STAR_STAR = 42,
  anon_sym_not = 43,
  sym_identifier = 44,
  sym_number = 45,
  anon_sym_false = 46,
  anon_sym_true = 47,
  sym_null = 48,
  anon_sym_DQUOTE = 49,
  sym__unescaped_string_fragment = 50,
  sym__escape_sequence = 51,
  sym_line_comment = 52,
  sym__automatic_semicolon = 53,
  sym_block_comment = 54,
  sym_raw_string_literal = 55,
  sym_module = 56,
  sym__shebang = 57,
  sym__sequence = 58,
  sym_block = 59,
  sym_let = 60,
  sym_use = 61,
  sym__sc = 62,
  sym__exp = 63,
  sym_break = 64,
  sym_return = 65,
  sym_await = 66,
  sym_launch = 67,
  sym_yield = 68,
  sym_if = 69,
  sym__fn = 70,
  sym_lambda = 71,
  sym_loop = 72,
  sym_for = 73,
  sym_list = 74,
  sym_map = 75,
  sym_object = 76,
  sym_assignment = 77,
  sym_binary_exp = 78,
  sym_unary_exp = 79,
  sym_call = 80,
  sym_property_exp = 81,
  sym_bool = 82,
  sym_string = 83,
  aux_sym__sequence_repeat1 = 84,
  aux_sym_use_repeat1 = 85,
  aux_sym_lambda_repeat1 = 86,
  aux_sym_list_repeat1 = 87,
  aux_sym_map_repeat1 = 88,
  aux_sym_object_repeat1 = 89,
  aux_sym_property_exp_repeat1 = 90,
  aux_sym_string_repeat1 = 91,
  alias_sym_property_identifier = 92,
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
  [anon_sym_await] = "await",
  [anon_sym_launch] = "launch",
  [anon_sym_yield] = "yield",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_fn] = "fn",
  [anon_sym_gen] = "gen",
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
  [sym_await] = "await",
  [sym_launch] = "launch",
  [sym_yield] = "yield",
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
  [anon_sym_await] = anon_sym_await,
  [anon_sym_launch] = anon_sym_launch,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_gen] = anon_sym_gen,
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
  [sym_await] = sym_await,
  [sym_launch] = sym_launch,
  [sym_yield] = sym_yield,
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
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_launch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
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
  [anon_sym_gen] = {
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
  [sym_await] = {
    .visible = true,
    .named = true,
  },
  [sym_launch] = {
    .visible = true,
    .named = true,
  },
  [sym_yield] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 19,
  [25] = 22,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 28,
  [44] = 44,
  [45] = 42,
  [46] = 46,
  [47] = 30,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 49,
  [53] = 51,
  [54] = 54,
  [55] = 48,
  [56] = 41,
  [57] = 40,
  [58] = 39,
  [59] = 38,
  [60] = 36,
  [61] = 29,
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
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 68,
  [78] = 78,
  [79] = 69,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 70,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 71,
  [90] = 90,
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
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 76,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 73,
  [115] = 115,
  [116] = 80,
  [117] = 65,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 66,
  [123] = 123,
  [124] = 67,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 64,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 126,
  [133] = 118,
  [134] = 108,
  [135] = 100,
  [136] = 91,
  [137] = 98,
  [138] = 86,
  [139] = 78,
  [140] = 88,
  [141] = 109,
  [142] = 106,
  [143] = 84,
  [144] = 85,
  [145] = 111,
  [146] = 112,
  [147] = 82,
  [148] = 113,
  [149] = 81,
  [150] = 74,
  [151] = 87,
  [152] = 90,
  [153] = 92,
  [154] = 93,
  [155] = 107,
  [156] = 115,
  [157] = 120,
  [158] = 125,
  [159] = 102,
  [160] = 101,
  [161] = 99,
  [162] = 129,
  [163] = 130,
  [164] = 131,
  [165] = 103,
  [166] = 127,
  [167] = 105,
  [168] = 123,
  [169] = 94,
  [170] = 95,
  [171] = 96,
  [172] = 121,
  [173] = 119,
  [174] = 97,
  [175] = 175,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 179,
  [184] = 182,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 187,
  [189] = 189,
  [190] = 185,
  [191] = 191,
  [192] = 191,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 197,
  [202] = 198,
  [203] = 196,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 208,
  [211] = 206,
  [212] = 212,
  [213] = 212,
  [214] = 207,
  [215] = 215,
  [216] = 209,
  [217] = 217,
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 220,
  [227] = 227,
  [228] = 227,
  [229] = 221,
  [230] = 222,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 224,
  [235] = 235,
  [236] = 232,
  [237] = 235,
  [238] = 223,
  [239] = 231,
  [240] = 233,
  [241] = 225,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 249,
  [255] = 255,
  [256] = 256,
  [257] = 256,
  [258] = 258,
  [259] = 255,
  [260] = 252,
  [261] = 261,
  [262] = 247,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 264,
  [267] = 263,
  [268] = 248,
  [269] = 261,
  [270] = 242,
  [271] = 243,
  [272] = 258,
  [273] = 265,
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
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 71:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(191);
      END_STATE();
    case 72:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(191);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(191);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(191);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(174);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(191);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(171);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(191);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(99);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(168);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(162);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(111);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(146);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(148);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(147);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(191);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75, .external_lex_state = 2},
  [2] = {.lex_state = 71, .external_lex_state = 2},
  [3] = {.lex_state = 71, .external_lex_state = 3},
  [4] = {.lex_state = 71, .external_lex_state = 3},
  [5] = {.lex_state = 71, .external_lex_state = 2},
  [6] = {.lex_state = 71, .external_lex_state = 2},
  [7] = {.lex_state = 71, .external_lex_state = 3},
  [8] = {.lex_state = 75, .external_lex_state = 2},
  [9] = {.lex_state = 75, .external_lex_state = 2},
  [10] = {.lex_state = 75, .external_lex_state = 2},
  [11] = {.lex_state = 75, .external_lex_state = 2},
  [12] = {.lex_state = 75, .external_lex_state = 2},
  [13] = {.lex_state = 75, .external_lex_state = 2},
  [14] = {.lex_state = 75, .external_lex_state = 2},
  [15] = {.lex_state = 75, .external_lex_state = 2},
  [16] = {.lex_state = 75, .external_lex_state = 2},
  [17] = {.lex_state = 75, .external_lex_state = 2},
  [18] = {.lex_state = 75, .external_lex_state = 2},
  [19] = {.lex_state = 75, .external_lex_state = 2},
  [20] = {.lex_state = 75, .external_lex_state = 2},
  [21] = {.lex_state = 75, .external_lex_state = 2},
  [22] = {.lex_state = 75, .external_lex_state = 2},
  [23] = {.lex_state = 75, .external_lex_state = 2},
  [24] = {.lex_state = 75, .external_lex_state = 2},
  [25] = {.lex_state = 75, .external_lex_state = 2},
  [26] = {.lex_state = 75, .external_lex_state = 2},
  [27] = {.lex_state = 75, .external_lex_state = 2},
  [28] = {.lex_state = 75, .external_lex_state = 2},
  [29] = {.lex_state = 75, .external_lex_state = 2},
  [30] = {.lex_state = 75, .external_lex_state = 2},
  [31] = {.lex_state = 75, .external_lex_state = 2},
  [32] = {.lex_state = 75, .external_lex_state = 2},
  [33] = {.lex_state = 75, .external_lex_state = 2},
  [34] = {.lex_state = 75, .external_lex_state = 2},
  [35] = {.lex_state = 75, .external_lex_state = 2},
  [36] = {.lex_state = 75, .external_lex_state = 2},
  [37] = {.lex_state = 75, .external_lex_state = 2},
  [38] = {.lex_state = 75, .external_lex_state = 2},
  [39] = {.lex_state = 75, .external_lex_state = 2},
  [40] = {.lex_state = 75, .external_lex_state = 2},
  [41] = {.lex_state = 75, .external_lex_state = 2},
  [42] = {.lex_state = 75, .external_lex_state = 2},
  [43] = {.lex_state = 75, .external_lex_state = 2},
  [44] = {.lex_state = 75, .external_lex_state = 2},
  [45] = {.lex_state = 75, .external_lex_state = 2},
  [46] = {.lex_state = 75, .external_lex_state = 2},
  [47] = {.lex_state = 75, .external_lex_state = 2},
  [48] = {.lex_state = 75, .external_lex_state = 2},
  [49] = {.lex_state = 75, .external_lex_state = 2},
  [50] = {.lex_state = 75, .external_lex_state = 2},
  [51] = {.lex_state = 75, .external_lex_state = 2},
  [52] = {.lex_state = 75, .external_lex_state = 2},
  [53] = {.lex_state = 75, .external_lex_state = 2},
  [54] = {.lex_state = 75, .external_lex_state = 2},
  [55] = {.lex_state = 75, .external_lex_state = 2},
  [56] = {.lex_state = 75, .external_lex_state = 2},
  [57] = {.lex_state = 75, .external_lex_state = 2},
  [58] = {.lex_state = 75, .external_lex_state = 2},
  [59] = {.lex_state = 75, .external_lex_state = 2},
  [60] = {.lex_state = 75, .external_lex_state = 2},
  [61] = {.lex_state = 75, .external_lex_state = 2},
  [62] = {.lex_state = 75, .external_lex_state = 2},
  [63] = {.lex_state = 75, .external_lex_state = 2},
  [64] = {.lex_state = 73, .external_lex_state = 2},
  [65] = {.lex_state = 73, .external_lex_state = 2},
  [66] = {.lex_state = 73, .external_lex_state = 2},
  [67] = {.lex_state = 73, .external_lex_state = 2},
  [68] = {.lex_state = 73, .external_lex_state = 2},
  [69] = {.lex_state = 73, .external_lex_state = 2},
  [70] = {.lex_state = 73, .external_lex_state = 2},
  [71] = {.lex_state = 73, .external_lex_state = 2},
  [72] = {.lex_state = 73, .external_lex_state = 2},
  [73] = {.lex_state = 73, .external_lex_state = 2},
  [74] = {.lex_state = 73, .external_lex_state = 2},
  [75] = {.lex_state = 73, .external_lex_state = 3},
  [76] = {.lex_state = 73, .external_lex_state = 3},
  [77] = {.lex_state = 73, .external_lex_state = 3},
  [78] = {.lex_state = 73, .external_lex_state = 2},
  [79] = {.lex_state = 73, .external_lex_state = 3},
  [80] = {.lex_state = 73, .external_lex_state = 3},
  [81] = {.lex_state = 73, .external_lex_state = 2},
  [82] = {.lex_state = 73, .external_lex_state = 2},
  [83] = {.lex_state = 73, .external_lex_state = 3},
  [84] = {.lex_state = 73, .external_lex_state = 2},
  [85] = {.lex_state = 73, .external_lex_state = 2},
  [86] = {.lex_state = 73, .external_lex_state = 2},
  [87] = {.lex_state = 73, .external_lex_state = 2},
  [88] = {.lex_state = 73, .external_lex_state = 2},
  [89] = {.lex_state = 73, .external_lex_state = 3},
  [90] = {.lex_state = 73, .external_lex_state = 2},
  [91] = {.lex_state = 73, .external_lex_state = 2},
  [92] = {.lex_state = 73, .external_lex_state = 2},
  [93] = {.lex_state = 73, .external_lex_state = 2},
  [94] = {.lex_state = 73, .external_lex_state = 2},
  [95] = {.lex_state = 73, .external_lex_state = 2},
  [96] = {.lex_state = 73, .external_lex_state = 2},
  [97] = {.lex_state = 73, .external_lex_state = 2},
  [98] = {.lex_state = 73, .external_lex_state = 2},
  [99] = {.lex_state = 73, .external_lex_state = 2},
  [100] = {.lex_state = 73, .external_lex_state = 2},
  [101] = {.lex_state = 73, .external_lex_state = 2},
  [102] = {.lex_state = 73, .external_lex_state = 2},
  [103] = {.lex_state = 73, .external_lex_state = 2},
  [104] = {.lex_state = 73, .external_lex_state = 3},
  [105] = {.lex_state = 73, .external_lex_state = 2},
  [106] = {.lex_state = 73, .external_lex_state = 2},
  [107] = {.lex_state = 73, .external_lex_state = 2},
  [108] = {.lex_state = 73, .external_lex_state = 2},
  [109] = {.lex_state = 73, .external_lex_state = 2},
  [110] = {.lex_state = 73, .external_lex_state = 3},
  [111] = {.lex_state = 73, .external_lex_state = 2},
  [112] = {.lex_state = 73, .external_lex_state = 2},
  [113] = {.lex_state = 73, .external_lex_state = 2},
  [114] = {.lex_state = 73, .external_lex_state = 3},
  [115] = {.lex_state = 73, .external_lex_state = 2},
  [116] = {.lex_state = 73, .external_lex_state = 3},
  [117] = {.lex_state = 73, .external_lex_state = 3},
  [118] = {.lex_state = 73, .external_lex_state = 2},
  [119] = {.lex_state = 73, .external_lex_state = 2},
  [120] = {.lex_state = 73, .external_lex_state = 2},
  [121] = {.lex_state = 73, .external_lex_state = 2},
  [122] = {.lex_state = 73, .external_lex_state = 3},
  [123] = {.lex_state = 73, .external_lex_state = 2},
  [124] = {.lex_state = 73, .external_lex_state = 3},
  [125] = {.lex_state = 73, .external_lex_state = 2},
  [126] = {.lex_state = 73, .external_lex_state = 2},
  [127] = {.lex_state = 73, .external_lex_state = 2},
  [128] = {.lex_state = 73, .external_lex_state = 3},
  [129] = {.lex_state = 73, .external_lex_state = 2},
  [130] = {.lex_state = 73, .external_lex_state = 2},
  [131] = {.lex_state = 73, .external_lex_state = 2},
  [132] = {.lex_state = 73, .external_lex_state = 3},
  [133] = {.lex_state = 73, .external_lex_state = 3},
  [134] = {.lex_state = 73, .external_lex_state = 3},
  [135] = {.lex_state = 73, .external_lex_state = 3},
  [136] = {.lex_state = 73, .external_lex_state = 3},
  [137] = {.lex_state = 73, .external_lex_state = 3},
  [138] = {.lex_state = 73, .external_lex_state = 3},
  [139] = {.lex_state = 73, .external_lex_state = 3},
  [140] = {.lex_state = 73, .external_lex_state = 3},
  [141] = {.lex_state = 73, .external_lex_state = 3},
  [142] = {.lex_state = 73, .external_lex_state = 3},
  [143] = {.lex_state = 73, .external_lex_state = 3},
  [144] = {.lex_state = 73, .external_lex_state = 3},
  [145] = {.lex_state = 73, .external_lex_state = 3},
  [146] = {.lex_state = 73, .external_lex_state = 3},
  [147] = {.lex_state = 73, .external_lex_state = 3},
  [148] = {.lex_state = 73, .external_lex_state = 3},
  [149] = {.lex_state = 73, .external_lex_state = 3},
  [150] = {.lex_state = 73, .external_lex_state = 3},
  [151] = {.lex_state = 73, .external_lex_state = 3},
  [152] = {.lex_state = 73, .external_lex_state = 3},
  [153] = {.lex_state = 73, .external_lex_state = 3},
  [154] = {.lex_state = 73, .external_lex_state = 3},
  [155] = {.lex_state = 73, .external_lex_state = 3},
  [156] = {.lex_state = 73, .external_lex_state = 3},
  [157] = {.lex_state = 73, .external_lex_state = 3},
  [158] = {.lex_state = 73, .external_lex_state = 3},
  [159] = {.lex_state = 73, .external_lex_state = 3},
  [160] = {.lex_state = 73, .external_lex_state = 3},
  [161] = {.lex_state = 73, .external_lex_state = 3},
  [162] = {.lex_state = 73, .external_lex_state = 3},
  [163] = {.lex_state = 73, .external_lex_state = 3},
  [164] = {.lex_state = 73, .external_lex_state = 3},
  [165] = {.lex_state = 73, .external_lex_state = 3},
  [166] = {.lex_state = 73, .external_lex_state = 3},
  [167] = {.lex_state = 73, .external_lex_state = 3},
  [168] = {.lex_state = 73, .external_lex_state = 3},
  [169] = {.lex_state = 73, .external_lex_state = 3},
  [170] = {.lex_state = 73, .external_lex_state = 3},
  [171] = {.lex_state = 73, .external_lex_state = 3},
  [172] = {.lex_state = 73, .external_lex_state = 3},
  [173] = {.lex_state = 73, .external_lex_state = 3},
  [174] = {.lex_state = 73, .external_lex_state = 3},
  [175] = {.lex_state = 73, .external_lex_state = 3},
  [176] = {.lex_state = 73, .external_lex_state = 3},
  [177] = {.lex_state = 73, .external_lex_state = 3},
  [178] = {.lex_state = 73, .external_lex_state = 2},
  [179] = {.lex_state = 73, .external_lex_state = 2},
  [180] = {.lex_state = 73, .external_lex_state = 2},
  [181] = {.lex_state = 73, .external_lex_state = 2},
  [182] = {.lex_state = 73, .external_lex_state = 2},
  [183] = {.lex_state = 73, .external_lex_state = 2},
  [184] = {.lex_state = 73, .external_lex_state = 2},
  [185] = {.lex_state = 73, .external_lex_state = 2},
  [186] = {.lex_state = 73, .external_lex_state = 3},
  [187] = {.lex_state = 73, .external_lex_state = 2},
  [188] = {.lex_state = 73, .external_lex_state = 2},
  [189] = {.lex_state = 73, .external_lex_state = 2},
  [190] = {.lex_state = 73, .external_lex_state = 2},
  [191] = {.lex_state = 73, .external_lex_state = 2},
  [192] = {.lex_state = 73, .external_lex_state = 2},
  [193] = {.lex_state = 73, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 2, .external_lex_state = 2},
  [198] = {.lex_state = 2, .external_lex_state = 2},
  [199] = {.lex_state = 2, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 2, .external_lex_state = 2},
  [202] = {.lex_state = 2, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 3, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 3, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 3, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 3, .external_lex_state = 2},
  [228] = {.lex_state = 3, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 3, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 3, .external_lex_state = 2},
  [235] = {.lex_state = 3, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 3, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 3, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 3, .external_lex_state = 2},
  [244] = {.lex_state = 3, .external_lex_state = 2},
  [245] = {.lex_state = 3, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 3, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 3, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 3, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 3, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 3, .external_lex_state = 2},
  [257] = {.lex_state = 3, .external_lex_state = 2},
  [258] = {.lex_state = 3, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 3, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 3, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 3, .external_lex_state = 2},
  [272] = {.lex_state = 3, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_launch] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
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
    [sym__shebang] = STATE(10),
    [sym__sequence] = STATE(250),
    [sym_block] = STATE(110),
    [sym_let] = STATE(110),
    [sym_use] = STATE(110),
    [sym__exp] = STATE(110),
    [sym_break] = STATE(110),
    [sym_return] = STATE(110),
    [sym_await] = STATE(110),
    [sym_launch] = STATE(110),
    [sym_yield] = STATE(110),
    [sym_if] = STATE(110),
    [sym__fn] = STATE(110),
    [sym_loop] = STATE(110),
    [sym_for] = STATE(110),
    [sym_list] = STATE(110),
    [sym_map] = STATE(110),
    [sym_object] = STATE(110),
    [sym_assignment] = STATE(110),
    [sym_binary_exp] = STATE(110),
    [sym_unary_exp] = STATE(110),
    [sym_call] = STATE(110),
    [sym_property_exp] = STATE(110),
    [sym_bool] = STATE(110),
    [sym_string] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__shebang_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(102),
    [sym_let] = STATE(102),
    [sym_use] = STATE(102),
    [sym__exp] = STATE(102),
    [sym_break] = STATE(102),
    [sym_return] = STATE(102),
    [sym_await] = STATE(102),
    [sym_launch] = STATE(102),
    [sym_yield] = STATE(102),
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
    [sym_call] = STATE(102),
    [sym_property_exp] = STATE(102),
    [sym_bool] = STATE(102),
    [sym_string] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(159),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(159),
    [sym_break] = STATE(159),
    [sym_return] = STATE(159),
    [sym_await] = STATE(159),
    [sym_launch] = STATE(159),
    [sym_yield] = STATE(159),
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
    [sym_call] = STATE(159),
    [sym_property_exp] = STATE(159),
    [sym_bool] = STATE(159),
    [sym_string] = STATE(159),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(160),
    [sym_let] = STATE(160),
    [sym_use] = STATE(160),
    [sym__exp] = STATE(160),
    [sym_break] = STATE(160),
    [sym_return] = STATE(160),
    [sym_await] = STATE(160),
    [sym_launch] = STATE(160),
    [sym_yield] = STATE(160),
    [sym_if] = STATE(160),
    [sym__fn] = STATE(160),
    [sym_loop] = STATE(160),
    [sym_for] = STATE(160),
    [sym_list] = STATE(160),
    [sym_map] = STATE(160),
    [sym_object] = STATE(160),
    [sym_assignment] = STATE(160),
    [sym_binary_exp] = STATE(160),
    [sym_unary_exp] = STATE(160),
    [sym_call] = STATE(160),
    [sym_property_exp] = STATE(160),
    [sym_bool] = STATE(160),
    [sym_string] = STATE(160),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_STAR_STAR] = ACTIONS(95),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(95),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(101),
    [sym_let] = STATE(101),
    [sym_use] = STATE(101),
    [sym__exp] = STATE(101),
    [sym_break] = STATE(101),
    [sym_return] = STATE(101),
    [sym_await] = STATE(101),
    [sym_launch] = STATE(101),
    [sym_yield] = STATE(101),
    [sym_if] = STATE(101),
    [sym__fn] = STATE(101),
    [sym_loop] = STATE(101),
    [sym_for] = STATE(101),
    [sym_list] = STATE(101),
    [sym_map] = STATE(101),
    [sym_object] = STATE(101),
    [sym_assignment] = STATE(101),
    [sym_binary_exp] = STATE(101),
    [sym_unary_exp] = STATE(101),
    [sym_call] = STATE(101),
    [sym_property_exp] = STATE(101),
    [sym_bool] = STATE(101),
    [sym_string] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_STAR_STAR] = ACTIONS(95),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(96),
    [sym_let] = STATE(96),
    [sym_use] = STATE(96),
    [sym__exp] = STATE(96),
    [sym_break] = STATE(96),
    [sym_return] = STATE(96),
    [sym_await] = STATE(96),
    [sym_launch] = STATE(96),
    [sym_yield] = STATE(96),
    [sym_if] = STATE(96),
    [sym__fn] = STATE(96),
    [sym_loop] = STATE(96),
    [sym_for] = STATE(96),
    [sym_list] = STATE(96),
    [sym_map] = STATE(96),
    [sym_object] = STATE(96),
    [sym_assignment] = STATE(96),
    [sym_binary_exp] = STATE(96),
    [sym_unary_exp] = STATE(96),
    [sym_call] = STATE(96),
    [sym_property_exp] = STATE(96),
    [sym_bool] = STATE(96),
    [sym_string] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_STAR_STAR] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(171),
    [sym_let] = STATE(171),
    [sym_use] = STATE(171),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(171),
    [sym_return] = STATE(171),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
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
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_STAR_STAR] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(103),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sequence] = STATE(264),
    [sym_block] = STATE(116),
    [sym_let] = STATE(116),
    [sym_use] = STATE(116),
    [sym__exp] = STATE(116),
    [sym_break] = STATE(116),
    [sym_return] = STATE(116),
    [sym_await] = STATE(116),
    [sym_launch] = STATE(116),
    [sym_yield] = STATE(116),
    [sym_if] = STATE(116),
    [sym__fn] = STATE(116),
    [sym_loop] = STATE(116),
    [sym_for] = STATE(116),
    [sym_list] = STATE(116),
    [sym_map] = STATE(116),
    [sym_object] = STATE(116),
    [sym_assignment] = STATE(116),
    [sym_binary_exp] = STATE(116),
    [sym_unary_exp] = STATE(116),
    [sym_call] = STATE(116),
    [sym_property_exp] = STATE(116),
    [sym_bool] = STATE(116),
    [sym_string] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(119),
    [sym_number] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sequence] = STATE(266),
    [sym_block] = STATE(80),
    [sym_let] = STATE(80),
    [sym_use] = STATE(80),
    [sym__exp] = STATE(80),
    [sym_break] = STATE(80),
    [sym_return] = STATE(80),
    [sym_await] = STATE(80),
    [sym_launch] = STATE(80),
    [sym_yield] = STATE(80),
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
    [sym_call] = STATE(80),
    [sym_property_exp] = STATE(80),
    [sym_bool] = STATE(80),
    [sym_string] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(129),
    [sym_number] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(253),
    [sym_block] = STATE(110),
    [sym_let] = STATE(110),
    [sym_use] = STATE(110),
    [sym__exp] = STATE(110),
    [sym_break] = STATE(110),
    [sym_return] = STATE(110),
    [sym_await] = STATE(110),
    [sym_launch] = STATE(110),
    [sym_yield] = STATE(110),
    [sym_if] = STATE(110),
    [sym__fn] = STATE(110),
    [sym_loop] = STATE(110),
    [sym_for] = STATE(110),
    [sym_list] = STATE(110),
    [sym_map] = STATE(110),
    [sym_object] = STATE(110),
    [sym_assignment] = STATE(110),
    [sym_binary_exp] = STATE(110),
    [sym_unary_exp] = STATE(110),
    [sym_call] = STATE(110),
    [sym_property_exp] = STATE(110),
    [sym_bool] = STATE(110),
    [sym_string] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_block] = STATE(175),
    [sym_let] = STATE(175),
    [sym_use] = STATE(175),
    [sym__exp] = STATE(175),
    [sym_break] = STATE(175),
    [sym_return] = STATE(175),
    [sym_await] = STATE(175),
    [sym_launch] = STATE(175),
    [sym_yield] = STATE(175),
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
    [sym_call] = STATE(175),
    [sym_property_exp] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_string] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_block] = STATE(175),
    [sym_let] = STATE(175),
    [sym_use] = STATE(175),
    [sym__exp] = STATE(175),
    [sym_break] = STATE(175),
    [sym_return] = STATE(175),
    [sym_await] = STATE(175),
    [sym_launch] = STATE(175),
    [sym_yield] = STATE(175),
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
    [sym_call] = STATE(175),
    [sym_property_exp] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_string] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sequence] = STATE(264),
    [sym_block] = STATE(110),
    [sym_let] = STATE(110),
    [sym_use] = STATE(110),
    [sym__exp] = STATE(110),
    [sym_break] = STATE(110),
    [sym_return] = STATE(110),
    [sym_await] = STATE(110),
    [sym_launch] = STATE(110),
    [sym_yield] = STATE(110),
    [sym_if] = STATE(110),
    [sym__fn] = STATE(110),
    [sym_loop] = STATE(110),
    [sym_for] = STATE(110),
    [sym_list] = STATE(110),
    [sym_map] = STATE(110),
    [sym_object] = STATE(110),
    [sym_assignment] = STATE(110),
    [sym_binary_exp] = STATE(110),
    [sym_unary_exp] = STATE(110),
    [sym_call] = STATE(110),
    [sym_property_exp] = STATE(110),
    [sym_bool] = STATE(110),
    [sym_string] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sequence] = STATE(266),
    [sym_block] = STATE(110),
    [sym_let] = STATE(110),
    [sym_use] = STATE(110),
    [sym__exp] = STATE(110),
    [sym_break] = STATE(110),
    [sym_return] = STATE(110),
    [sym_await] = STATE(110),
    [sym_launch] = STATE(110),
    [sym_yield] = STATE(110),
    [sym_if] = STATE(110),
    [sym__fn] = STATE(110),
    [sym_loop] = STATE(110),
    [sym_for] = STATE(110),
    [sym_list] = STATE(110),
    [sym_map] = STATE(110),
    [sym_object] = STATE(110),
    [sym_assignment] = STATE(110),
    [sym_binary_exp] = STATE(110),
    [sym_unary_exp] = STATE(110),
    [sym_call] = STATE(110),
    [sym_property_exp] = STATE(110),
    [sym_bool] = STATE(110),
    [sym_string] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_block] = STATE(182),
    [sym_let] = STATE(182),
    [sym_use] = STATE(182),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(182),
    [sym_return] = STATE(182),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
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
    [sym_call] = STATE(182),
    [sym_property_exp] = STATE(182),
    [sym_bool] = STATE(182),
    [sym_string] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_block] = STATE(184),
    [sym_let] = STATE(184),
    [sym_use] = STATE(184),
    [sym__exp] = STATE(184),
    [sym_break] = STATE(184),
    [sym_return] = STATE(184),
    [sym_await] = STATE(184),
    [sym_launch] = STATE(184),
    [sym_yield] = STATE(184),
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
    [sym_call] = STATE(184),
    [sym_property_exp] = STATE(184),
    [sym_bool] = STATE(184),
    [sym_string] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_block] = STATE(179),
    [sym_let] = STATE(179),
    [sym_use] = STATE(179),
    [sym__exp] = STATE(179),
    [sym_break] = STATE(179),
    [sym_return] = STATE(179),
    [sym_await] = STATE(179),
    [sym_launch] = STATE(179),
    [sym_yield] = STATE(179),
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
    [sym_call] = STATE(179),
    [sym_property_exp] = STATE(179),
    [sym_bool] = STATE(179),
    [sym_string] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_block] = STATE(183),
    [sym_let] = STATE(183),
    [sym_use] = STATE(183),
    [sym__exp] = STATE(183),
    [sym_break] = STATE(183),
    [sym_return] = STATE(183),
    [sym_await] = STATE(183),
    [sym_launch] = STATE(183),
    [sym_yield] = STATE(183),
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
    [sym_call] = STATE(183),
    [sym_property_exp] = STATE(183),
    [sym_bool] = STATE(183),
    [sym_string] = STATE(183),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
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
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
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
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
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
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
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
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_block] = STATE(162),
    [sym_let] = STATE(162),
    [sym_use] = STATE(162),
    [sym__exp] = STATE(162),
    [sym_break] = STATE(162),
    [sym_return] = STATE(162),
    [sym_await] = STATE(162),
    [sym_launch] = STATE(162),
    [sym_yield] = STATE(162),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_block] = STATE(173),
    [sym_let] = STATE(173),
    [sym_use] = STATE(173),
    [sym__exp] = STATE(173),
    [sym_break] = STATE(173),
    [sym_return] = STATE(173),
    [sym_await] = STATE(173),
    [sym_launch] = STATE(173),
    [sym_yield] = STATE(173),
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
    [sym_call] = STATE(173),
    [sym_property_exp] = STATE(173),
    [sym_bool] = STATE(173),
    [sym_string] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_block] = STATE(191),
    [sym_let] = STATE(191),
    [sym_use] = STATE(191),
    [sym__exp] = STATE(191),
    [sym_break] = STATE(191),
    [sym_return] = STATE(191),
    [sym_await] = STATE(191),
    [sym_launch] = STATE(191),
    [sym_yield] = STATE(191),
    [sym_if] = STATE(191),
    [sym__fn] = STATE(191),
    [sym_loop] = STATE(191),
    [sym_for] = STATE(191),
    [sym_list] = STATE(191),
    [sym_map] = STATE(191),
    [sym_object] = STATE(191),
    [sym_assignment] = STATE(191),
    [sym_binary_exp] = STATE(191),
    [sym_unary_exp] = STATE(191),
    [sym_call] = STATE(191),
    [sym_property_exp] = STATE(191),
    [sym_bool] = STATE(191),
    [sym_string] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_block] = STATE(153),
    [sym_let] = STATE(153),
    [sym_use] = STATE(153),
    [sym__exp] = STATE(153),
    [sym_break] = STATE(153),
    [sym_return] = STATE(153),
    [sym_await] = STATE(153),
    [sym_launch] = STATE(153),
    [sym_yield] = STATE(153),
    [sym_if] = STATE(153),
    [sym__fn] = STATE(153),
    [sym_loop] = STATE(153),
    [sym_for] = STATE(153),
    [sym_list] = STATE(153),
    [sym_map] = STATE(153),
    [sym_object] = STATE(153),
    [sym_assignment] = STATE(153),
    [sym_binary_exp] = STATE(153),
    [sym_unary_exp] = STATE(153),
    [sym_call] = STATE(153),
    [sym_property_exp] = STATE(153),
    [sym_bool] = STATE(153),
    [sym_string] = STATE(153),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
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
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_block] = STATE(188),
    [sym_let] = STATE(188),
    [sym_use] = STATE(188),
    [sym__exp] = STATE(188),
    [sym_break] = STATE(188),
    [sym_return] = STATE(188),
    [sym_await] = STATE(188),
    [sym_launch] = STATE(188),
    [sym_yield] = STATE(188),
    [sym_if] = STATE(188),
    [sym__fn] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_for] = STATE(188),
    [sym_list] = STATE(188),
    [sym_map] = STATE(188),
    [sym_object] = STATE(188),
    [sym_assignment] = STATE(188),
    [sym_binary_exp] = STATE(188),
    [sym_unary_exp] = STATE(188),
    [sym_call] = STATE(188),
    [sym_property_exp] = STATE(188),
    [sym_bool] = STATE(188),
    [sym_string] = STATE(188),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(91),
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
    [sym_await] = STATE(187),
    [sym_launch] = STATE(187),
    [sym_yield] = STATE(187),
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
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_block] = STATE(132),
    [sym_let] = STATE(132),
    [sym_use] = STATE(132),
    [sym__exp] = STATE(132),
    [sym_break] = STATE(132),
    [sym_return] = STATE(132),
    [sym_await] = STATE(132),
    [sym_launch] = STATE(132),
    [sym_yield] = STATE(132),
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
    [sym_call] = STATE(132),
    [sym_property_exp] = STATE(132),
    [sym_bool] = STATE(132),
    [sym_string] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_block] = STATE(126),
    [sym_let] = STATE(126),
    [sym_use] = STATE(126),
    [sym__exp] = STATE(126),
    [sym_break] = STATE(126),
    [sym_return] = STATE(126),
    [sym_await] = STATE(126),
    [sym_launch] = STATE(126),
    [sym_yield] = STATE(126),
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
    [sym_call] = STATE(126),
    [sym_property_exp] = STATE(126),
    [sym_bool] = STATE(126),
    [sym_string] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(197),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_block] = STATE(180),
    [sym_let] = STATE(180),
    [sym_use] = STATE(180),
    [sym__exp] = STATE(180),
    [sym_break] = STATE(180),
    [sym_return] = STATE(180),
    [sym_await] = STATE(180),
    [sym_launch] = STATE(180),
    [sym_yield] = STATE(180),
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
    [sym_call] = STATE(180),
    [sym_property_exp] = STATE(180),
    [sym_bool] = STATE(180),
    [sym_string] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_block] = STATE(129),
    [sym_let] = STATE(129),
    [sym_use] = STATE(129),
    [sym__exp] = STATE(129),
    [sym_break] = STATE(129),
    [sym_return] = STATE(129),
    [sym_await] = STATE(129),
    [sym_launch] = STATE(129),
    [sym_yield] = STATE(129),
    [sym_if] = STATE(129),
    [sym__fn] = STATE(129),
    [sym_loop] = STATE(129),
    [sym_for] = STATE(129),
    [sym_list] = STATE(129),
    [sym_map] = STATE(129),
    [sym_object] = STATE(129),
    [sym_assignment] = STATE(129),
    [sym_binary_exp] = STATE(129),
    [sym_unary_exp] = STATE(129),
    [sym_call] = STATE(129),
    [sym_property_exp] = STATE(129),
    [sym_bool] = STATE(129),
    [sym_string] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_block] = STATE(130),
    [sym_let] = STATE(130),
    [sym_use] = STATE(130),
    [sym__exp] = STATE(130),
    [sym_break] = STATE(130),
    [sym_return] = STATE(130),
    [sym_await] = STATE(130),
    [sym_launch] = STATE(130),
    [sym_yield] = STATE(130),
    [sym_if] = STATE(130),
    [sym__fn] = STATE(130),
    [sym_loop] = STATE(130),
    [sym_for] = STATE(130),
    [sym_list] = STATE(130),
    [sym_map] = STATE(130),
    [sym_object] = STATE(130),
    [sym_assignment] = STATE(130),
    [sym_binary_exp] = STATE(130),
    [sym_unary_exp] = STATE(130),
    [sym_call] = STATE(130),
    [sym_property_exp] = STATE(130),
    [sym_bool] = STATE(130),
    [sym_string] = STATE(130),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_block] = STATE(131),
    [sym_let] = STATE(131),
    [sym_use] = STATE(131),
    [sym__exp] = STATE(131),
    [sym_break] = STATE(131),
    [sym_return] = STATE(131),
    [sym_await] = STATE(131),
    [sym_launch] = STATE(131),
    [sym_yield] = STATE(131),
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
    [sym_call] = STATE(131),
    [sym_property_exp] = STATE(131),
    [sym_bool] = STATE(131),
    [sym_string] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(205),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_block] = STATE(103),
    [sym_let] = STATE(103),
    [sym_use] = STATE(103),
    [sym__exp] = STATE(103),
    [sym_break] = STATE(103),
    [sym_return] = STATE(103),
    [sym_await] = STATE(103),
    [sym_launch] = STATE(103),
    [sym_yield] = STATE(103),
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
    [sym_call] = STATE(103),
    [sym_property_exp] = STATE(103),
    [sym_bool] = STATE(103),
    [sym_string] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_block] = STATE(127),
    [sym_let] = STATE(127),
    [sym_use] = STATE(127),
    [sym__exp] = STATE(127),
    [sym_break] = STATE(127),
    [sym_return] = STATE(127),
    [sym_await] = STATE(127),
    [sym_launch] = STATE(127),
    [sym_yield] = STATE(127),
    [sym_if] = STATE(127),
    [sym__fn] = STATE(127),
    [sym_loop] = STATE(127),
    [sym_for] = STATE(127),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(127),
    [sym_binary_exp] = STATE(127),
    [sym_unary_exp] = STATE(127),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(209),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_block] = STATE(177),
    [sym_let] = STATE(177),
    [sym_use] = STATE(177),
    [sym__exp] = STATE(177),
    [sym_break] = STATE(177),
    [sym_return] = STATE(177),
    [sym_await] = STATE(177),
    [sym_launch] = STATE(177),
    [sym_yield] = STATE(177),
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
    [sym_call] = STATE(177),
    [sym_property_exp] = STATE(177),
    [sym_bool] = STATE(177),
    [sym_string] = STATE(177),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_block] = STATE(119),
    [sym_let] = STATE(119),
    [sym_use] = STATE(119),
    [sym__exp] = STATE(119),
    [sym_break] = STATE(119),
    [sym_return] = STATE(119),
    [sym_await] = STATE(119),
    [sym_launch] = STATE(119),
    [sym_yield] = STATE(119),
    [sym_if] = STATE(119),
    [sym__fn] = STATE(119),
    [sym_loop] = STATE(119),
    [sym_for] = STATE(119),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(119),
    [sym_binary_exp] = STATE(119),
    [sym_unary_exp] = STATE(119),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_block] = STATE(175),
    [sym_let] = STATE(175),
    [sym_use] = STATE(175),
    [sym__exp] = STATE(175),
    [sym_break] = STATE(175),
    [sym_return] = STATE(175),
    [sym_await] = STATE(175),
    [sym_launch] = STATE(175),
    [sym_yield] = STATE(175),
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
    [sym_call] = STATE(175),
    [sym_property_exp] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_string] = STATE(175),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_block] = STATE(176),
    [sym_let] = STATE(176),
    [sym_use] = STATE(176),
    [sym__exp] = STATE(176),
    [sym_break] = STATE(176),
    [sym_return] = STATE(176),
    [sym_await] = STATE(176),
    [sym_launch] = STATE(176),
    [sym_yield] = STATE(176),
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
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_block] = STATE(90),
    [sym_let] = STATE(90),
    [sym_use] = STATE(90),
    [sym__exp] = STATE(90),
    [sym_break] = STATE(90),
    [sym_return] = STATE(90),
    [sym_await] = STATE(90),
    [sym_launch] = STATE(90),
    [sym_yield] = STATE(90),
    [sym_if] = STATE(90),
    [sym__fn] = STATE(90),
    [sym_loop] = STATE(90),
    [sym_for] = STATE(90),
    [sym_list] = STATE(90),
    [sym_map] = STATE(90),
    [sym_object] = STATE(90),
    [sym_assignment] = STATE(90),
    [sym_binary_exp] = STATE(90),
    [sym_unary_exp] = STATE(90),
    [sym_call] = STATE(90),
    [sym_property_exp] = STATE(90),
    [sym_bool] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(217),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_block] = STATE(92),
    [sym_let] = STATE(92),
    [sym_use] = STATE(92),
    [sym__exp] = STATE(92),
    [sym_break] = STATE(92),
    [sym_return] = STATE(92),
    [sym_await] = STATE(92),
    [sym_launch] = STATE(92),
    [sym_yield] = STATE(92),
    [sym_if] = STATE(92),
    [sym__fn] = STATE(92),
    [sym_loop] = STATE(92),
    [sym_for] = STATE(92),
    [sym_list] = STATE(92),
    [sym_map] = STATE(92),
    [sym_object] = STATE(92),
    [sym_assignment] = STATE(92),
    [sym_binary_exp] = STATE(92),
    [sym_unary_exp] = STATE(92),
    [sym_call] = STATE(92),
    [sym_property_exp] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(219),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_block] = STATE(185),
    [sym_let] = STATE(185),
    [sym_use] = STATE(185),
    [sym__exp] = STATE(185),
    [sym_break] = STATE(185),
    [sym_return] = STATE(185),
    [sym_await] = STATE(185),
    [sym_launch] = STATE(185),
    [sym_yield] = STATE(185),
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
    [sym_call] = STATE(185),
    [sym_property_exp] = STATE(185),
    [sym_bool] = STATE(185),
    [sym_string] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_block] = STATE(97),
    [sym_let] = STATE(97),
    [sym_use] = STATE(97),
    [sym__exp] = STATE(97),
    [sym_break] = STATE(97),
    [sym_return] = STATE(97),
    [sym_await] = STATE(97),
    [sym_launch] = STATE(97),
    [sym_yield] = STATE(97),
    [sym_if] = STATE(97),
    [sym__fn] = STATE(97),
    [sym_loop] = STATE(97),
    [sym_for] = STATE(97),
    [sym_list] = STATE(97),
    [sym_map] = STATE(97),
    [sym_object] = STATE(97),
    [sym_assignment] = STATE(97),
    [sym_binary_exp] = STATE(97),
    [sym_unary_exp] = STATE(97),
    [sym_call] = STATE(97),
    [sym_property_exp] = STATE(97),
    [sym_bool] = STATE(97),
    [sym_string] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(223),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_block] = STATE(152),
    [sym_let] = STATE(152),
    [sym_use] = STATE(152),
    [sym__exp] = STATE(152),
    [sym_break] = STATE(152),
    [sym_return] = STATE(152),
    [sym_await] = STATE(152),
    [sym_launch] = STATE(152),
    [sym_yield] = STATE(152),
    [sym_if] = STATE(152),
    [sym__fn] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_for] = STATE(152),
    [sym_list] = STATE(152),
    [sym_map] = STATE(152),
    [sym_object] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_binary_exp] = STATE(152),
    [sym_unary_exp] = STATE(152),
    [sym_call] = STATE(152),
    [sym_property_exp] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_string] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(225),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_block] = STATE(99),
    [sym_let] = STATE(99),
    [sym_use] = STATE(99),
    [sym__exp] = STATE(99),
    [sym_break] = STATE(99),
    [sym_return] = STATE(99),
    [sym_await] = STATE(99),
    [sym_launch] = STATE(99),
    [sym_yield] = STATE(99),
    [sym_if] = STATE(99),
    [sym__fn] = STATE(99),
    [sym_loop] = STATE(99),
    [sym_for] = STATE(99),
    [sym_list] = STATE(99),
    [sym_map] = STATE(99),
    [sym_object] = STATE(99),
    [sym_assignment] = STATE(99),
    [sym_binary_exp] = STATE(99),
    [sym_unary_exp] = STATE(99),
    [sym_call] = STATE(99),
    [sym_property_exp] = STATE(99),
    [sym_bool] = STATE(99),
    [sym_string] = STATE(99),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_block] = STATE(174),
    [sym_let] = STATE(174),
    [sym_use] = STATE(174),
    [sym__exp] = STATE(174),
    [sym_break] = STATE(174),
    [sym_return] = STATE(174),
    [sym_await] = STATE(174),
    [sym_launch] = STATE(174),
    [sym_yield] = STATE(174),
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
    [sym_call] = STATE(174),
    [sym_property_exp] = STATE(174),
    [sym_bool] = STATE(174),
    [sym_string] = STATE(174),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(229),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(229),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_block] = STATE(161),
    [sym_let] = STATE(161),
    [sym_use] = STATE(161),
    [sym__exp] = STATE(161),
    [sym_break] = STATE(161),
    [sym_return] = STATE(161),
    [sym_await] = STATE(161),
    [sym_launch] = STATE(161),
    [sym_yield] = STATE(161),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(231),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_block] = STATE(190),
    [sym_let] = STATE(190),
    [sym_use] = STATE(190),
    [sym__exp] = STATE(190),
    [sym_break] = STATE(190),
    [sym_return] = STATE(190),
    [sym_await] = STATE(190),
    [sym_launch] = STATE(190),
    [sym_yield] = STATE(190),
    [sym_if] = STATE(190),
    [sym__fn] = STATE(190),
    [sym_loop] = STATE(190),
    [sym_for] = STATE(190),
    [sym_list] = STATE(190),
    [sym_map] = STATE(190),
    [sym_object] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_binary_exp] = STATE(190),
    [sym_unary_exp] = STATE(190),
    [sym_call] = STATE(190),
    [sym_property_exp] = STATE(190),
    [sym_bool] = STATE(190),
    [sym_string] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(233),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_block] = STATE(166),
    [sym_let] = STATE(166),
    [sym_use] = STATE(166),
    [sym__exp] = STATE(166),
    [sym_break] = STATE(166),
    [sym_return] = STATE(166),
    [sym_await] = STATE(166),
    [sym_launch] = STATE(166),
    [sym_yield] = STATE(166),
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
    [sym_call] = STATE(166),
    [sym_property_exp] = STATE(166),
    [sym_bool] = STATE(166),
    [sym_string] = STATE(166),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(235),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_block] = STATE(165),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(165),
    [sym_return] = STATE(165),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
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
    [sym_call] = STATE(165),
    [sym_property_exp] = STATE(165),
    [sym_bool] = STATE(165),
    [sym_string] = STATE(165),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(237),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_block] = STATE(164),
    [sym_let] = STATE(164),
    [sym_use] = STATE(164),
    [sym__exp] = STATE(164),
    [sym_break] = STATE(164),
    [sym_return] = STATE(164),
    [sym_await] = STATE(164),
    [sym_launch] = STATE(164),
    [sym_yield] = STATE(164),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(239),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_block] = STATE(163),
    [sym_let] = STATE(163),
    [sym_use] = STATE(163),
    [sym__exp] = STATE(163),
    [sym_break] = STATE(163),
    [sym_return] = STATE(163),
    [sym_await] = STATE(163),
    [sym_launch] = STATE(163),
    [sym_yield] = STATE(163),
    [sym_if] = STATE(163),
    [sym__fn] = STATE(163),
    [sym_loop] = STATE(163),
    [sym_for] = STATE(163),
    [sym_list] = STATE(163),
    [sym_map] = STATE(163),
    [sym_object] = STATE(163),
    [sym_assignment] = STATE(163),
    [sym_binary_exp] = STATE(163),
    [sym_unary_exp] = STATE(163),
    [sym_call] = STATE(163),
    [sym_property_exp] = STATE(163),
    [sym_bool] = STATE(163),
    [sym_string] = STATE(163),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(241),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_block] = STATE(181),
    [sym_let] = STATE(181),
    [sym_use] = STATE(181),
    [sym__exp] = STATE(181),
    [sym_break] = STATE(181),
    [sym_return] = STATE(181),
    [sym_await] = STATE(181),
    [sym_launch] = STATE(181),
    [sym_yield] = STATE(181),
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
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(243),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_block] = STATE(192),
    [sym_let] = STATE(192),
    [sym_use] = STATE(192),
    [sym__exp] = STATE(192),
    [sym_break] = STATE(192),
    [sym_return] = STATE(192),
    [sym_await] = STATE(192),
    [sym_launch] = STATE(192),
    [sym_yield] = STATE(192),
    [sym_if] = STATE(192),
    [sym__fn] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_for] = STATE(192),
    [sym_list] = STATE(192),
    [sym_map] = STATE(192),
    [sym_object] = STATE(192),
    [sym_assignment] = STATE(192),
    [sym_binary_exp] = STATE(192),
    [sym_unary_exp] = STATE(192),
    [sym_call] = STATE(192),
    [sym_property_exp] = STATE(192),
    [sym_bool] = STATE(192),
    [sym_string] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(245),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_block] = STATE(189),
    [sym_let] = STATE(189),
    [sym_use] = STATE(189),
    [sym__exp] = STATE(189),
    [sym_break] = STATE(189),
    [sym_return] = STATE(189),
    [sym_await] = STATE(189),
    [sym_launch] = STATE(189),
    [sym_yield] = STATE(189),
    [sym_if] = STATE(189),
    [sym__fn] = STATE(189),
    [sym_loop] = STATE(189),
    [sym_for] = STATE(189),
    [sym_list] = STATE(189),
    [sym_map] = STATE(189),
    [sym_object] = STATE(189),
    [sym_assignment] = STATE(189),
    [sym_binary_exp] = STATE(189),
    [sym_unary_exp] = STATE(189),
    [sym_call] = STATE(189),
    [sym_property_exp] = STATE(189),
    [sym_bool] = STATE(189),
    [sym_string] = STATE(189),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(247),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_block] = STATE(186),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(186),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
    [sym_await] = STATE(186),
    [sym_launch] = STATE(186),
    [sym_yield] = STATE(186),
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
    [sym_call] = STATE(186),
    [sym_property_exp] = STATE(186),
    [sym_bool] = STATE(186),
    [sym_string] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 17,
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
  [36] = 4,
    ACTIONS(262), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 17,
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
  [70] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 17,
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
  [106] = 3,
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
  [138] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 17,
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
  [174] = 4,
    ACTIONS(280), 1,
      anon_sym_else,
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
  [208] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 4,
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
  [240] = 5,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 17,
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
  [276] = 5,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 17,
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
  [312] = 4,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 18,
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
  [346] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 18,
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
  [377] = 5,
    ACTIONS(309), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 16,
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
  [412] = 5,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 15,
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
  [447] = 5,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 16,
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
  [482] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(320), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(318), 18,
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
  [513] = 4,
    ACTIONS(322), 1,
      anon_sym_else,
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
  [546] = 15,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(194), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [601] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 18,
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
  [632] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 18,
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
  [663] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 4,
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
  [694] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 18,
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
  [725] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 18,
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
  [756] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(364), 18,
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
  [787] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(368), 18,
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
  [818] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(374), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(372), 18,
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
  [849] = 5,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 16,
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
  [884] = 5,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 16,
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
  [919] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(388), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(386), 18,
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
  [950] = 5,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 16,
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
  [985] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(392), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 18,
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
  [1016] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 18,
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
  [1047] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(398), 18,
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
  [1078] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(402), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1125] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(418), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1172] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(422), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(420), 18,
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
  [1203] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1250] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 18,
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
  [1281] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1328] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1375] = 9,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 12,
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
  [1418] = 5,
    ACTIONS(314), 1,
      anon_sym_COLON_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 15,
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
  [1453] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(442), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(440), 18,
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
  [1484] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 18,
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
  [1515] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(450), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(448), 18,
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
  [1546] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(454), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(452), 18,
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
  [1577] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(458), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 18,
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
  [1608] = 14,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(194), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(328), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1661] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(462), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(460), 18,
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
  [1692] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(466), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(464), 18,
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
  [1723] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(470), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(468), 18,
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
  [1754] = 4,
    STATE(128), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 17,
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
  [1787] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(474), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 18,
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
  [1818] = 15,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym__sc,
    STATE(194), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1873] = 4,
    ACTIONS(314), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 16,
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
  [1906] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(478), 18,
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
  [1937] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(482), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1984] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 18,
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
  [2015] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(490), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(488), 18,
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
  [2046] = 5,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 16,
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
  [2081] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(492), 18,
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
  [2112] = 3,
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
  [2143] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 18,
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
  [2174] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(496), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2221] = 10,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(434), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [2266] = 5,
    ACTIONS(498), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 16,
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
  [2301] = 5,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 16,
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
  [2336] = 6,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 15,
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
  [2373] = 8,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 14,
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
  [2414] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(496), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2460] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(478), 17,
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
  [2490] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(454), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(452), 17,
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
  [2520] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 17,
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
  [2550] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(388), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(386), 17,
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
  [2580] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(422), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(420), 17,
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
  [2610] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(364), 17,
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
  [2640] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(320), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(318), 17,
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
  [2670] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(374), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(372), 17,
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
  [2700] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(458), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 17,
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
  [2730] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 17,
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
  [2760] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 17,
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
  [2790] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 17,
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
  [2820] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(462), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(460), 17,
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
  [2850] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(466), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(464), 17,
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
  [2880] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 17,
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
  [2910] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(470), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(468), 17,
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
  [2940] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 17,
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
  [2970] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 17,
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
  [3000] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(368), 17,
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
  [3030] = 5,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 15,
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
  [3064] = 5,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 15,
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
  [3098] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(392), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 17,
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
  [3128] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(450), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(448), 17,
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
  [3158] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(474), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 17,
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
  [3188] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 17,
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
  [3218] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 17,
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
  [3248] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3294] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3340] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3386] = 5,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 15,
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
  [3420] = 6,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 14,
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
  [3456] = 8,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 13,
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
  [3496] = 9,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 11,
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
  [3538] = 10,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(434), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3582] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(442), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(440), 17,
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
  [3612] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(492), 17,
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
  [3642] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 17,
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
  [3672] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(398), 17,
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
  [3702] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(402), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3748] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(490), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(488), 17,
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
  [3778] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(482), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3824] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(418), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3870] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(501), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3915] = 13,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    STATE(203), 1,
      aux_sym_object_repeat1,
    STATE(231), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3964] = 13,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    STATE(196), 1,
      aux_sym_object_repeat1,
    STATE(239), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(505), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4013] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(507), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4057] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4105] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4153] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4201] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4249] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4297] = 13,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4345] = 12,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4390] = 11,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(533), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4433] = 12,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4478] = 12,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4523] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(537), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4566] = 12,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4611] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4653] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4695] = 11,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4737] = 5,
    STATE(11), 1,
      sym__sc,
    STATE(195), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(545), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4756] = 5,
    STATE(44), 1,
      sym__sc,
    STATE(195), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(547), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4775] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(235), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4790] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      sym_line_comment,
    STATE(198), 1,
      aux_sym_string_repeat1,
    ACTIONS(554), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4807] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      sym_line_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(560), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4824] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(564), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4841] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(244), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(567), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4856] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      aux_sym_string_repeat1,
    ACTIONS(572), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4873] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(560), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4890] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(237), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(576), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4905] = 4,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4920] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4934] = 4,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4948] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4962] = 4,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4976] = 4,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4990] = 4,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5004] = 4,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5018] = 4,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5032] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5046] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5060] = 4,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5074] = 4,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5088] = 4,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5102] = 4,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5116] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(581), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5125] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5136] = 3,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5147] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5158] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5169] = 3,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5180] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5191] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5202] = 3,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5213] = 3,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5224] = 3,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5235] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5246] = 3,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5257] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5268] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5279] = 3,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5290] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5301] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5312] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5323] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5334] = 3,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5345] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5356] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5367] = 2,
    ACTIONS(651), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5375] = 2,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5383] = 2,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5391] = 2,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5399] = 2,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5407] = 2,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5415] = 2,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5423] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5431] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5439] = 2,
    ACTIONS(663), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5447] = 2,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5455] = 2,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5463] = 2,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5471] = 2,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5479] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5487] = 2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5495] = 2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5503] = 2,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5511] = 2,
    ACTIONS(677), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5519] = 2,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5527] = 2,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5535] = 2,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5543] = 2,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5551] = 2,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5559] = 2,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5567] = 2,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5575] = 2,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5583] = 2,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5591] = 2,
    ACTIONS(693), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5599] = 2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5607] = 2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5615] = 2,
    ACTIONS(699), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 36,
  [SMALL_STATE(66)] = 70,
  [SMALL_STATE(67)] = 106,
  [SMALL_STATE(68)] = 138,
  [SMALL_STATE(69)] = 174,
  [SMALL_STATE(70)] = 208,
  [SMALL_STATE(71)] = 240,
  [SMALL_STATE(72)] = 276,
  [SMALL_STATE(73)] = 312,
  [SMALL_STATE(74)] = 346,
  [SMALL_STATE(75)] = 377,
  [SMALL_STATE(76)] = 412,
  [SMALL_STATE(77)] = 447,
  [SMALL_STATE(78)] = 482,
  [SMALL_STATE(79)] = 513,
  [SMALL_STATE(80)] = 546,
  [SMALL_STATE(81)] = 601,
  [SMALL_STATE(82)] = 632,
  [SMALL_STATE(83)] = 663,
  [SMALL_STATE(84)] = 694,
  [SMALL_STATE(85)] = 725,
  [SMALL_STATE(86)] = 756,
  [SMALL_STATE(87)] = 787,
  [SMALL_STATE(88)] = 818,
  [SMALL_STATE(89)] = 849,
  [SMALL_STATE(90)] = 884,
  [SMALL_STATE(91)] = 919,
  [SMALL_STATE(92)] = 950,
  [SMALL_STATE(93)] = 985,
  [SMALL_STATE(94)] = 1016,
  [SMALL_STATE(95)] = 1047,
  [SMALL_STATE(96)] = 1078,
  [SMALL_STATE(97)] = 1125,
  [SMALL_STATE(98)] = 1172,
  [SMALL_STATE(99)] = 1203,
  [SMALL_STATE(100)] = 1250,
  [SMALL_STATE(101)] = 1281,
  [SMALL_STATE(102)] = 1328,
  [SMALL_STATE(103)] = 1375,
  [SMALL_STATE(104)] = 1418,
  [SMALL_STATE(105)] = 1453,
  [SMALL_STATE(106)] = 1484,
  [SMALL_STATE(107)] = 1515,
  [SMALL_STATE(108)] = 1546,
  [SMALL_STATE(109)] = 1577,
  [SMALL_STATE(110)] = 1608,
  [SMALL_STATE(111)] = 1661,
  [SMALL_STATE(112)] = 1692,
  [SMALL_STATE(113)] = 1723,
  [SMALL_STATE(114)] = 1754,
  [SMALL_STATE(115)] = 1787,
  [SMALL_STATE(116)] = 1818,
  [SMALL_STATE(117)] = 1873,
  [SMALL_STATE(118)] = 1906,
  [SMALL_STATE(119)] = 1937,
  [SMALL_STATE(120)] = 1984,
  [SMALL_STATE(121)] = 2015,
  [SMALL_STATE(122)] = 2046,
  [SMALL_STATE(123)] = 2081,
  [SMALL_STATE(124)] = 2112,
  [SMALL_STATE(125)] = 2143,
  [SMALL_STATE(126)] = 2174,
  [SMALL_STATE(127)] = 2221,
  [SMALL_STATE(128)] = 2266,
  [SMALL_STATE(129)] = 2301,
  [SMALL_STATE(130)] = 2336,
  [SMALL_STATE(131)] = 2373,
  [SMALL_STATE(132)] = 2414,
  [SMALL_STATE(133)] = 2460,
  [SMALL_STATE(134)] = 2490,
  [SMALL_STATE(135)] = 2520,
  [SMALL_STATE(136)] = 2550,
  [SMALL_STATE(137)] = 2580,
  [SMALL_STATE(138)] = 2610,
  [SMALL_STATE(139)] = 2640,
  [SMALL_STATE(140)] = 2670,
  [SMALL_STATE(141)] = 2700,
  [SMALL_STATE(142)] = 2730,
  [SMALL_STATE(143)] = 2760,
  [SMALL_STATE(144)] = 2790,
  [SMALL_STATE(145)] = 2820,
  [SMALL_STATE(146)] = 2850,
  [SMALL_STATE(147)] = 2880,
  [SMALL_STATE(148)] = 2910,
  [SMALL_STATE(149)] = 2940,
  [SMALL_STATE(150)] = 2970,
  [SMALL_STATE(151)] = 3000,
  [SMALL_STATE(152)] = 3030,
  [SMALL_STATE(153)] = 3064,
  [SMALL_STATE(154)] = 3098,
  [SMALL_STATE(155)] = 3128,
  [SMALL_STATE(156)] = 3158,
  [SMALL_STATE(157)] = 3188,
  [SMALL_STATE(158)] = 3218,
  [SMALL_STATE(159)] = 3248,
  [SMALL_STATE(160)] = 3294,
  [SMALL_STATE(161)] = 3340,
  [SMALL_STATE(162)] = 3386,
  [SMALL_STATE(163)] = 3420,
  [SMALL_STATE(164)] = 3456,
  [SMALL_STATE(165)] = 3496,
  [SMALL_STATE(166)] = 3538,
  [SMALL_STATE(167)] = 3582,
  [SMALL_STATE(168)] = 3612,
  [SMALL_STATE(169)] = 3642,
  [SMALL_STATE(170)] = 3672,
  [SMALL_STATE(171)] = 3702,
  [SMALL_STATE(172)] = 3748,
  [SMALL_STATE(173)] = 3778,
  [SMALL_STATE(174)] = 3824,
  [SMALL_STATE(175)] = 3870,
  [SMALL_STATE(176)] = 3915,
  [SMALL_STATE(177)] = 3964,
  [SMALL_STATE(178)] = 4013,
  [SMALL_STATE(179)] = 4057,
  [SMALL_STATE(180)] = 4105,
  [SMALL_STATE(181)] = 4153,
  [SMALL_STATE(182)] = 4201,
  [SMALL_STATE(183)] = 4249,
  [SMALL_STATE(184)] = 4297,
  [SMALL_STATE(185)] = 4345,
  [SMALL_STATE(186)] = 4390,
  [SMALL_STATE(187)] = 4433,
  [SMALL_STATE(188)] = 4478,
  [SMALL_STATE(189)] = 4523,
  [SMALL_STATE(190)] = 4566,
  [SMALL_STATE(191)] = 4611,
  [SMALL_STATE(192)] = 4653,
  [SMALL_STATE(193)] = 4695,
  [SMALL_STATE(194)] = 4737,
  [SMALL_STATE(195)] = 4756,
  [SMALL_STATE(196)] = 4775,
  [SMALL_STATE(197)] = 4790,
  [SMALL_STATE(198)] = 4807,
  [SMALL_STATE(199)] = 4824,
  [SMALL_STATE(200)] = 4841,
  [SMALL_STATE(201)] = 4856,
  [SMALL_STATE(202)] = 4873,
  [SMALL_STATE(203)] = 4890,
  [SMALL_STATE(204)] = 4905,
  [SMALL_STATE(205)] = 4920,
  [SMALL_STATE(206)] = 4934,
  [SMALL_STATE(207)] = 4948,
  [SMALL_STATE(208)] = 4962,
  [SMALL_STATE(209)] = 4976,
  [SMALL_STATE(210)] = 4990,
  [SMALL_STATE(211)] = 5004,
  [SMALL_STATE(212)] = 5018,
  [SMALL_STATE(213)] = 5032,
  [SMALL_STATE(214)] = 5046,
  [SMALL_STATE(215)] = 5060,
  [SMALL_STATE(216)] = 5074,
  [SMALL_STATE(217)] = 5088,
  [SMALL_STATE(218)] = 5102,
  [SMALL_STATE(219)] = 5116,
  [SMALL_STATE(220)] = 5125,
  [SMALL_STATE(221)] = 5136,
  [SMALL_STATE(222)] = 5147,
  [SMALL_STATE(223)] = 5158,
  [SMALL_STATE(224)] = 5169,
  [SMALL_STATE(225)] = 5180,
  [SMALL_STATE(226)] = 5191,
  [SMALL_STATE(227)] = 5202,
  [SMALL_STATE(228)] = 5213,
  [SMALL_STATE(229)] = 5224,
  [SMALL_STATE(230)] = 5235,
  [SMALL_STATE(231)] = 5246,
  [SMALL_STATE(232)] = 5257,
  [SMALL_STATE(233)] = 5268,
  [SMALL_STATE(234)] = 5279,
  [SMALL_STATE(235)] = 5290,
  [SMALL_STATE(236)] = 5301,
  [SMALL_STATE(237)] = 5312,
  [SMALL_STATE(238)] = 5323,
  [SMALL_STATE(239)] = 5334,
  [SMALL_STATE(240)] = 5345,
  [SMALL_STATE(241)] = 5356,
  [SMALL_STATE(242)] = 5367,
  [SMALL_STATE(243)] = 5375,
  [SMALL_STATE(244)] = 5383,
  [SMALL_STATE(245)] = 5391,
  [SMALL_STATE(246)] = 5399,
  [SMALL_STATE(247)] = 5407,
  [SMALL_STATE(248)] = 5415,
  [SMALL_STATE(249)] = 5423,
  [SMALL_STATE(250)] = 5431,
  [SMALL_STATE(251)] = 5439,
  [SMALL_STATE(252)] = 5447,
  [SMALL_STATE(253)] = 5455,
  [SMALL_STATE(254)] = 5463,
  [SMALL_STATE(255)] = 5471,
  [SMALL_STATE(256)] = 5479,
  [SMALL_STATE(257)] = 5487,
  [SMALL_STATE(258)] = 5495,
  [SMALL_STATE(259)] = 5503,
  [SMALL_STATE(260)] = 5511,
  [SMALL_STATE(261)] = 5519,
  [SMALL_STATE(262)] = 5527,
  [SMALL_STATE(263)] = 5535,
  [SMALL_STATE(264)] = 5543,
  [SMALL_STATE(265)] = 5551,
  [SMALL_STATE(266)] = 5559,
  [SMALL_STATE(267)] = 5567,
  [SMALL_STATE(268)] = 5575,
  [SMALL_STATE(269)] = 5583,
  [SMALL_STATE(270)] = 5591,
  [SMALL_STATE(271)] = 5599,
  [SMALL_STATE(272)] = 5607,
  [SMALL_STATE(273)] = 5615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(247),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(252),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(260),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(262),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(44),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(199),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(244),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(31),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(245),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(54),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [655] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
