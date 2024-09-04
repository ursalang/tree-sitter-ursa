#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym__shebang_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_let = 4,
  anon_sym_var = 5,
  anon_sym_EQ = 6,
  anon_sym_use = 7,
  anon_sym_DOT = 8,
  anon_sym_SEMI = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_break = 12,
  sym_continue = 13,
  anon_sym_return = 14,
  anon_sym_await = 15,
  anon_sym_launch = 16,
  anon_sym_yield = 17,
  anon_sym_if = 18,
  anon_sym_else = 19,
  anon_sym_fn = 20,
  anon_sym_gen = 21,
  anon_sym_COMMA = 22,
  anon_sym_loop = 23,
  anon_sym_for = 24,
  anon_sym_in = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_COLON = 28,
  anon_sym_COLON_EQ = 29,
  anon_sym_or = 30,
  anon_sym_and = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_PERCENT = 42,
  anon_sym_STAR_STAR = 43,
  anon_sym_not = 44,
  sym_identifier = 45,
  sym_number = 46,
  anon_sym_false = 47,
  anon_sym_true = 48,
  sym_null = 49,
  anon_sym_DQUOTE = 50,
  sym__unescaped_string_fragment = 51,
  sym__escape_sequence = 52,
  sym_line_comment = 53,
  sym__automatic_semicolon = 54,
  sym_block_comment = 55,
  sym_raw_string_literal = 56,
  sym_module = 57,
  sym__shebang = 58,
  sym__sequence = 59,
  sym_block = 60,
  sym_let = 61,
  sym_use = 62,
  sym__sc = 63,
  sym__exp = 64,
  sym_break = 65,
  sym_return = 66,
  sym_await = 67,
  sym_launch = 68,
  sym_yield = 69,
  sym_if = 70,
  sym_fn = 71,
  sym_params = 72,
  sym_loop = 73,
  sym_for = 74,
  sym_list = 75,
  sym_map = 76,
  sym_object = 77,
  sym_assignment = 78,
  sym_binary_exp = 79,
  sym_unary_exp = 80,
  sym_call = 81,
  sym_property_exp = 82,
  sym_bool = 83,
  sym_string = 84,
  aux_sym__sequence_repeat1 = 85,
  aux_sym_use_repeat1 = 86,
  aux_sym_params_repeat1 = 87,
  aux_sym_list_repeat1 = 88,
  aux_sym_map_repeat1 = 89,
  aux_sym_object_repeat1 = 90,
  aux_sym_property_exp_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  alias_sym_property_identifier = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
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
  [anon_sym_in] = "in",
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
  [sym_fn] = "fn",
  [sym_params] = "params",
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
  [aux_sym_params_repeat1] = "params_repeat1",
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
  [anon_sym_var] = anon_sym_var,
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
  [anon_sym_in] = anon_sym_in,
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
  [sym_fn] = sym_fn,
  [sym_params] = sym_params,
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
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
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
  [anon_sym_var] = {
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
  [anon_sym_in] = {
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
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
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
  [aux_sym_params_repeat1] = {
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
  [4] = 4,
  [5] = 3,
  [6] = 4,
  [7] = 2,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 17,
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 40,
  [42] = 32,
  [43] = 29,
  [44] = 30,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 28,
  [57] = 55,
  [58] = 48,
  [59] = 50,
  [60] = 51,
  [61] = 52,
  [62] = 54,
  [63] = 49,
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
  [75] = 75,
  [76] = 76,
  [77] = 72,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 64,
  [82] = 67,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 65,
  [87] = 87,
  [88] = 88,
  [89] = 89,
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
  [100] = 70,
  [101] = 71,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 73,
  [110] = 110,
  [111] = 69,
  [112] = 112,
  [113] = 113,
  [114] = 66,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 68,
  [125] = 108,
  [126] = 83,
  [127] = 127,
  [128] = 89,
  [129] = 74,
  [130] = 119,
  [131] = 120,
  [132] = 80,
  [133] = 112,
  [134] = 110,
  [135] = 121,
  [136] = 85,
  [137] = 79,
  [138] = 78,
  [139] = 88,
  [140] = 76,
  [141] = 116,
  [142] = 122,
  [143] = 94,
  [144] = 115,
  [145] = 123,
  [146] = 118,
  [147] = 92,
  [148] = 95,
  [149] = 87,
  [150] = 107,
  [151] = 106,
  [152] = 113,
  [153] = 105,
  [154] = 97,
  [155] = 104,
  [156] = 103,
  [157] = 117,
  [158] = 84,
  [159] = 102,
  [160] = 75,
  [161] = 90,
  [162] = 93,
  [163] = 91,
  [164] = 96,
  [165] = 99,
  [166] = 98,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 173,
  [176] = 172,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 178,
  [182] = 177,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 191,
  [195] = 195,
  [196] = 195,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 198,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 197,
  [208] = 208,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 213,
  [216] = 216,
  [217] = 211,
  [218] = 214,
  [219] = 212,
  [220] = 220,
  [221] = 220,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 239,
  [240] = 226,
  [241] = 241,
  [242] = 228,
  [243] = 229,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 247,
  [248] = 231,
  [249] = 230,
  [250] = 250,
  [251] = 237,
  [252] = 252,
  [253] = 253,
  [254] = 233,
  [255] = 255,
  [256] = 250,
  [257] = 253,
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
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 72:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(196);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(196);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(196);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(196);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(178);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(196);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(175);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(196);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(196);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(196);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(179);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(196);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(126);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(102);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(94);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(194);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(114);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(116);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(170);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(169);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(196);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 3},
  [3] = {.lex_state = 72, .external_lex_state = 2},
  [4] = {.lex_state = 72, .external_lex_state = 2},
  [5] = {.lex_state = 72, .external_lex_state = 3},
  [6] = {.lex_state = 72, .external_lex_state = 3},
  [7] = {.lex_state = 72, .external_lex_state = 2},
  [8] = {.lex_state = 76, .external_lex_state = 2},
  [9] = {.lex_state = 76, .external_lex_state = 2},
  [10] = {.lex_state = 76, .external_lex_state = 2},
  [11] = {.lex_state = 76, .external_lex_state = 2},
  [12] = {.lex_state = 76, .external_lex_state = 2},
  [13] = {.lex_state = 76, .external_lex_state = 2},
  [14] = {.lex_state = 76, .external_lex_state = 2},
  [15] = {.lex_state = 76, .external_lex_state = 2},
  [16] = {.lex_state = 76, .external_lex_state = 2},
  [17] = {.lex_state = 76, .external_lex_state = 2},
  [18] = {.lex_state = 76, .external_lex_state = 2},
  [19] = {.lex_state = 76, .external_lex_state = 2},
  [20] = {.lex_state = 76, .external_lex_state = 2},
  [21] = {.lex_state = 76, .external_lex_state = 2},
  [22] = {.lex_state = 76, .external_lex_state = 2},
  [23] = {.lex_state = 76, .external_lex_state = 2},
  [24] = {.lex_state = 76, .external_lex_state = 2},
  [25] = {.lex_state = 76, .external_lex_state = 2},
  [26] = {.lex_state = 76, .external_lex_state = 2},
  [27] = {.lex_state = 76, .external_lex_state = 2},
  [28] = {.lex_state = 76, .external_lex_state = 2},
  [29] = {.lex_state = 76, .external_lex_state = 2},
  [30] = {.lex_state = 76, .external_lex_state = 2},
  [31] = {.lex_state = 76, .external_lex_state = 2},
  [32] = {.lex_state = 76, .external_lex_state = 2},
  [33] = {.lex_state = 76, .external_lex_state = 2},
  [34] = {.lex_state = 76, .external_lex_state = 2},
  [35] = {.lex_state = 76, .external_lex_state = 2},
  [36] = {.lex_state = 76, .external_lex_state = 2},
  [37] = {.lex_state = 76, .external_lex_state = 2},
  [38] = {.lex_state = 76, .external_lex_state = 2},
  [39] = {.lex_state = 76, .external_lex_state = 2},
  [40] = {.lex_state = 76, .external_lex_state = 2},
  [41] = {.lex_state = 76, .external_lex_state = 2},
  [42] = {.lex_state = 76, .external_lex_state = 2},
  [43] = {.lex_state = 76, .external_lex_state = 2},
  [44] = {.lex_state = 76, .external_lex_state = 2},
  [45] = {.lex_state = 76, .external_lex_state = 2},
  [46] = {.lex_state = 76, .external_lex_state = 2},
  [47] = {.lex_state = 76, .external_lex_state = 2},
  [48] = {.lex_state = 76, .external_lex_state = 2},
  [49] = {.lex_state = 76, .external_lex_state = 2},
  [50] = {.lex_state = 76, .external_lex_state = 2},
  [51] = {.lex_state = 76, .external_lex_state = 2},
  [52] = {.lex_state = 76, .external_lex_state = 2},
  [53] = {.lex_state = 76, .external_lex_state = 2},
  [54] = {.lex_state = 76, .external_lex_state = 2},
  [55] = {.lex_state = 76, .external_lex_state = 2},
  [56] = {.lex_state = 76, .external_lex_state = 2},
  [57] = {.lex_state = 76, .external_lex_state = 2},
  [58] = {.lex_state = 76, .external_lex_state = 2},
  [59] = {.lex_state = 76, .external_lex_state = 2},
  [60] = {.lex_state = 76, .external_lex_state = 2},
  [61] = {.lex_state = 76, .external_lex_state = 2},
  [62] = {.lex_state = 76, .external_lex_state = 2},
  [63] = {.lex_state = 76, .external_lex_state = 2},
  [64] = {.lex_state = 74, .external_lex_state = 2},
  [65] = {.lex_state = 74, .external_lex_state = 2},
  [66] = {.lex_state = 74, .external_lex_state = 2},
  [67] = {.lex_state = 74, .external_lex_state = 2},
  [68] = {.lex_state = 74, .external_lex_state = 2},
  [69] = {.lex_state = 74, .external_lex_state = 2},
  [70] = {.lex_state = 74, .external_lex_state = 2},
  [71] = {.lex_state = 74, .external_lex_state = 2},
  [72] = {.lex_state = 74, .external_lex_state = 2},
  [73] = {.lex_state = 74, .external_lex_state = 2},
  [74] = {.lex_state = 74, .external_lex_state = 2},
  [75] = {.lex_state = 74, .external_lex_state = 2},
  [76] = {.lex_state = 74, .external_lex_state = 2},
  [77] = {.lex_state = 74, .external_lex_state = 3},
  [78] = {.lex_state = 74, .external_lex_state = 2},
  [79] = {.lex_state = 74, .external_lex_state = 2},
  [80] = {.lex_state = 74, .external_lex_state = 2},
  [81] = {.lex_state = 74, .external_lex_state = 3},
  [82] = {.lex_state = 74, .external_lex_state = 3},
  [83] = {.lex_state = 74, .external_lex_state = 3},
  [84] = {.lex_state = 74, .external_lex_state = 2},
  [85] = {.lex_state = 74, .external_lex_state = 2},
  [86] = {.lex_state = 74, .external_lex_state = 3},
  [87] = {.lex_state = 74, .external_lex_state = 2},
  [88] = {.lex_state = 74, .external_lex_state = 2},
  [89] = {.lex_state = 74, .external_lex_state = 2},
  [90] = {.lex_state = 74, .external_lex_state = 2},
  [91] = {.lex_state = 74, .external_lex_state = 2},
  [92] = {.lex_state = 74, .external_lex_state = 2},
  [93] = {.lex_state = 74, .external_lex_state = 2},
  [94] = {.lex_state = 74, .external_lex_state = 2},
  [95] = {.lex_state = 74, .external_lex_state = 2},
  [96] = {.lex_state = 74, .external_lex_state = 2},
  [97] = {.lex_state = 74, .external_lex_state = 2},
  [98] = {.lex_state = 74, .external_lex_state = 2},
  [99] = {.lex_state = 74, .external_lex_state = 2},
  [100] = {.lex_state = 74, .external_lex_state = 3},
  [101] = {.lex_state = 74, .external_lex_state = 3},
  [102] = {.lex_state = 74, .external_lex_state = 2},
  [103] = {.lex_state = 74, .external_lex_state = 2},
  [104] = {.lex_state = 74, .external_lex_state = 2},
  [105] = {.lex_state = 74, .external_lex_state = 2},
  [106] = {.lex_state = 74, .external_lex_state = 2},
  [107] = {.lex_state = 74, .external_lex_state = 2},
  [108] = {.lex_state = 74, .external_lex_state = 3},
  [109] = {.lex_state = 74, .external_lex_state = 3},
  [110] = {.lex_state = 74, .external_lex_state = 2},
  [111] = {.lex_state = 74, .external_lex_state = 3},
  [112] = {.lex_state = 74, .external_lex_state = 2},
  [113] = {.lex_state = 74, .external_lex_state = 2},
  [114] = {.lex_state = 74, .external_lex_state = 3},
  [115] = {.lex_state = 74, .external_lex_state = 2},
  [116] = {.lex_state = 74, .external_lex_state = 2},
  [117] = {.lex_state = 74, .external_lex_state = 2},
  [118] = {.lex_state = 74, .external_lex_state = 2},
  [119] = {.lex_state = 74, .external_lex_state = 2},
  [120] = {.lex_state = 74, .external_lex_state = 2},
  [121] = {.lex_state = 74, .external_lex_state = 2},
  [122] = {.lex_state = 74, .external_lex_state = 2},
  [123] = {.lex_state = 74, .external_lex_state = 2},
  [124] = {.lex_state = 74, .external_lex_state = 3},
  [125] = {.lex_state = 74, .external_lex_state = 3},
  [126] = {.lex_state = 74, .external_lex_state = 3},
  [127] = {.lex_state = 74, .external_lex_state = 3},
  [128] = {.lex_state = 74, .external_lex_state = 3},
  [129] = {.lex_state = 74, .external_lex_state = 3},
  [130] = {.lex_state = 74, .external_lex_state = 3},
  [131] = {.lex_state = 74, .external_lex_state = 3},
  [132] = {.lex_state = 74, .external_lex_state = 3},
  [133] = {.lex_state = 74, .external_lex_state = 3},
  [134] = {.lex_state = 74, .external_lex_state = 3},
  [135] = {.lex_state = 74, .external_lex_state = 3},
  [136] = {.lex_state = 74, .external_lex_state = 3},
  [137] = {.lex_state = 74, .external_lex_state = 3},
  [138] = {.lex_state = 74, .external_lex_state = 3},
  [139] = {.lex_state = 74, .external_lex_state = 3},
  [140] = {.lex_state = 74, .external_lex_state = 3},
  [141] = {.lex_state = 74, .external_lex_state = 3},
  [142] = {.lex_state = 74, .external_lex_state = 3},
  [143] = {.lex_state = 74, .external_lex_state = 3},
  [144] = {.lex_state = 74, .external_lex_state = 3},
  [145] = {.lex_state = 74, .external_lex_state = 3},
  [146] = {.lex_state = 74, .external_lex_state = 3},
  [147] = {.lex_state = 74, .external_lex_state = 3},
  [148] = {.lex_state = 74, .external_lex_state = 3},
  [149] = {.lex_state = 74, .external_lex_state = 3},
  [150] = {.lex_state = 74, .external_lex_state = 3},
  [151] = {.lex_state = 74, .external_lex_state = 3},
  [152] = {.lex_state = 74, .external_lex_state = 3},
  [153] = {.lex_state = 74, .external_lex_state = 3},
  [154] = {.lex_state = 74, .external_lex_state = 3},
  [155] = {.lex_state = 74, .external_lex_state = 3},
  [156] = {.lex_state = 74, .external_lex_state = 3},
  [157] = {.lex_state = 74, .external_lex_state = 3},
  [158] = {.lex_state = 74, .external_lex_state = 3},
  [159] = {.lex_state = 74, .external_lex_state = 3},
  [160] = {.lex_state = 74, .external_lex_state = 3},
  [161] = {.lex_state = 74, .external_lex_state = 3},
  [162] = {.lex_state = 74, .external_lex_state = 3},
  [163] = {.lex_state = 74, .external_lex_state = 3},
  [164] = {.lex_state = 74, .external_lex_state = 3},
  [165] = {.lex_state = 74, .external_lex_state = 3},
  [166] = {.lex_state = 74, .external_lex_state = 3},
  [167] = {.lex_state = 74, .external_lex_state = 3},
  [168] = {.lex_state = 74, .external_lex_state = 3},
  [169] = {.lex_state = 74, .external_lex_state = 3},
  [170] = {.lex_state = 74, .external_lex_state = 2},
  [171] = {.lex_state = 74, .external_lex_state = 2},
  [172] = {.lex_state = 74, .external_lex_state = 2},
  [173] = {.lex_state = 74, .external_lex_state = 2},
  [174] = {.lex_state = 74, .external_lex_state = 2},
  [175] = {.lex_state = 74, .external_lex_state = 2},
  [176] = {.lex_state = 74, .external_lex_state = 2},
  [177] = {.lex_state = 74, .external_lex_state = 2},
  [178] = {.lex_state = 74, .external_lex_state = 2},
  [179] = {.lex_state = 74, .external_lex_state = 2},
  [180] = {.lex_state = 74, .external_lex_state = 3},
  [181] = {.lex_state = 74, .external_lex_state = 2},
  [182] = {.lex_state = 74, .external_lex_state = 2},
  [183] = {.lex_state = 74, .external_lex_state = 2},
  [184] = {.lex_state = 74, .external_lex_state = 2},
  [185] = {.lex_state = 74, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 2, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 2, .external_lex_state = 2},
  [194] = {.lex_state = 2, .external_lex_state = 2},
  [195] = {.lex_state = 2, .external_lex_state = 2},
  [196] = {.lex_state = 2, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 3, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 3, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 3, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 3, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 3, .external_lex_state = 2},
  [219] = {.lex_state = 3, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 3, .external_lex_state = 2},
  [223] = {.lex_state = 3, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 3, .external_lex_state = 2},
  [228] = {.lex_state = 3, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 3, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 3, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 3, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 3, .external_lex_state = 2},
  [242] = {.lex_state = 3, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 3, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 3, .external_lex_state = 2},
  [250] = {.lex_state = 3, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 3, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 3, .external_lex_state = 2},
  [257] = {.lex_state = 3, .external_lex_state = 2},
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
    [anon_sym_var] = ACTIONS(1),
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
    [anon_sym_in] = ACTIONS(1),
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
    [sym__shebang] = STATE(15),
    [sym__sequence] = STATE(244),
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
    [sym_fn] = STATE(127),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__shebang_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(156),
    [sym_let] = STATE(156),
    [sym_use] = STATE(156),
    [sym__exp] = STATE(156),
    [sym_break] = STATE(156),
    [sym_return] = STATE(156),
    [sym_await] = STATE(156),
    [sym_launch] = STATE(156),
    [sym_yield] = STATE(156),
    [sym_if] = STATE(156),
    [sym_fn] = STATE(156),
    [sym_loop] = STATE(156),
    [sym_for] = STATE(156),
    [sym_list] = STATE(156),
    [sym_map] = STATE(156),
    [sym_object] = STATE(156),
    [sym_assignment] = STATE(156),
    [sym_binary_exp] = STATE(156),
    [sym_unary_exp] = STATE(156),
    [sym_call] = STATE(156),
    [sym_property_exp] = STATE(156),
    [sym_bool] = STATE(156),
    [sym_string] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(53),
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
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_STAR_STAR] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(49),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(107),
    [sym_let] = STATE(107),
    [sym_use] = STATE(107),
    [sym__exp] = STATE(107),
    [sym_break] = STATE(107),
    [sym_return] = STATE(107),
    [sym_await] = STATE(107),
    [sym_launch] = STATE(107),
    [sym_yield] = STATE(107),
    [sym_if] = STATE(107),
    [sym_fn] = STATE(107),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(106),
    [sym_let] = STATE(106),
    [sym_use] = STATE(106),
    [sym__exp] = STATE(106),
    [sym_break] = STATE(106),
    [sym_return] = STATE(106),
    [sym_await] = STATE(106),
    [sym_launch] = STATE(106),
    [sym_yield] = STATE(106),
    [sym_if] = STATE(106),
    [sym_fn] = STATE(106),
    [sym_loop] = STATE(106),
    [sym_for] = STATE(106),
    [sym_list] = STATE(106),
    [sym_map] = STATE(106),
    [sym_object] = STATE(106),
    [sym_assignment] = STATE(106),
    [sym_binary_exp] = STATE(106),
    [sym_unary_exp] = STATE(106),
    [sym_call] = STATE(106),
    [sym_property_exp] = STATE(106),
    [sym_bool] = STATE(106),
    [sym_string] = STATE(106),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_STAR_STAR] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(150),
    [sym_let] = STATE(150),
    [sym_use] = STATE(150),
    [sym__exp] = STATE(150),
    [sym_break] = STATE(150),
    [sym_return] = STATE(150),
    [sym_await] = STATE(150),
    [sym_launch] = STATE(150),
    [sym_yield] = STATE(150),
    [sym_if] = STATE(150),
    [sym_fn] = STATE(150),
    [sym_loop] = STATE(150),
    [sym_for] = STATE(150),
    [sym_list] = STATE(150),
    [sym_map] = STATE(150),
    [sym_object] = STATE(150),
    [sym_assignment] = STATE(150),
    [sym_binary_exp] = STATE(150),
    [sym_unary_exp] = STATE(150),
    [sym_call] = STATE(150),
    [sym_property_exp] = STATE(150),
    [sym_bool] = STATE(150),
    [sym_string] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(105),
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
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(151),
    [sym_let] = STATE(151),
    [sym_use] = STATE(151),
    [sym__exp] = STATE(151),
    [sym_break] = STATE(151),
    [sym_return] = STATE(151),
    [sym_await] = STATE(151),
    [sym_launch] = STATE(151),
    [sym_yield] = STATE(151),
    [sym_if] = STATE(151),
    [sym_fn] = STATE(151),
    [sym_loop] = STATE(151),
    [sym_for] = STATE(151),
    [sym_list] = STATE(151),
    [sym_map] = STATE(151),
    [sym_object] = STATE(151),
    [sym_assignment] = STATE(151),
    [sym_binary_exp] = STATE(151),
    [sym_unary_exp] = STATE(151),
    [sym_call] = STATE(151),
    [sym_property_exp] = STATE(151),
    [sym_bool] = STATE(151),
    [sym_string] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(107),
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
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_STAR_STAR] = ACTIONS(99),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(99),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
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
    [sym_fn] = STATE(103),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_STAR_STAR] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sequence] = STATE(229),
    [sym_block] = STATE(125),
    [sym_let] = STATE(125),
    [sym_use] = STATE(125),
    [sym__exp] = STATE(125),
    [sym_break] = STATE(125),
    [sym_return] = STATE(125),
    [sym_await] = STATE(125),
    [sym_launch] = STATE(125),
    [sym_yield] = STATE(125),
    [sym_if] = STATE(125),
    [sym_fn] = STATE(125),
    [sym_loop] = STATE(125),
    [sym_for] = STATE(125),
    [sym_list] = STATE(125),
    [sym_map] = STATE(125),
    [sym_object] = STATE(125),
    [sym_assignment] = STATE(125),
    [sym_binary_exp] = STATE(125),
    [sym_unary_exp] = STATE(125),
    [sym_call] = STATE(125),
    [sym_property_exp] = STATE(125),
    [sym_bool] = STATE(125),
    [sym_string] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym__sequence] = STATE(243),
    [sym_block] = STATE(108),
    [sym_let] = STATE(108),
    [sym_use] = STATE(108),
    [sym__exp] = STATE(108),
    [sym_break] = STATE(108),
    [sym_return] = STATE(108),
    [sym_await] = STATE(108),
    [sym_launch] = STATE(108),
    [sym_yield] = STATE(108),
    [sym_if] = STATE(108),
    [sym_fn] = STATE(108),
    [sym_loop] = STATE(108),
    [sym_for] = STATE(108),
    [sym_list] = STATE(108),
    [sym_map] = STATE(108),
    [sym_object] = STATE(108),
    [sym_assignment] = STATE(108),
    [sym_binary_exp] = STATE(108),
    [sym_unary_exp] = STATE(108),
    [sym_call] = STATE(108),
    [sym_property_exp] = STATE(108),
    [sym_bool] = STATE(108),
    [sym_string] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(168),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(168),
    [sym_break] = STATE(168),
    [sym_return] = STATE(168),
    [sym_await] = STATE(168),
    [sym_launch] = STATE(168),
    [sym_yield] = STATE(168),
    [sym_if] = STATE(168),
    [sym_fn] = STATE(168),
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
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(133),
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
    [sym_number] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_block] = STATE(170),
    [sym_let] = STATE(170),
    [sym_use] = STATE(170),
    [sym__exp] = STATE(170),
    [sym_break] = STATE(170),
    [sym_return] = STATE(170),
    [sym_await] = STATE(170),
    [sym_launch] = STATE(170),
    [sym_yield] = STATE(170),
    [sym_if] = STATE(170),
    [sym_fn] = STATE(170),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sequence] = STATE(243),
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
    [sym_fn] = STATE(127),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
  [13] = {
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
    [sym_fn] = STATE(174),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_block] = STATE(168),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(168),
    [sym_break] = STATE(168),
    [sym_return] = STATE(168),
    [sym_await] = STATE(168),
    [sym_launch] = STATE(168),
    [sym_yield] = STATE(168),
    [sym_if] = STATE(168),
    [sym_fn] = STATE(168),
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
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(133),
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
    [sym_number] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sequence] = STATE(239),
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
    [sym_fn] = STATE(127),
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
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
  [16] = {
    [sym__sequence] = STATE(229),
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
    [sym_fn] = STATE(127),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
  [17] = {
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
    [sym_fn] = STATE(171),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
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
    [sym_fn] = STATE(175),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
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
    [sym_fn] = STATE(171),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
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
    [sym_fn] = STATE(173),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
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
    [sym_fn] = STATE(185),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
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
    [sym_fn] = STATE(185),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
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
    [sym_fn] = STATE(185),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
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
    [sym_fn] = STATE(185),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [25] = {
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
    [sym_fn] = STATE(171),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
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
    [sym_fn] = STATE(171),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_block] = STATE(167),
    [sym_let] = STATE(167),
    [sym_use] = STATE(167),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(167),
    [sym_return] = STATE(167),
    [sym_await] = STATE(167),
    [sym_launch] = STATE(167),
    [sym_yield] = STATE(167),
    [sym_if] = STATE(167),
    [sym_fn] = STATE(167),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(172),
    [sym_let] = STATE(172),
    [sym_use] = STATE(172),
    [sym__exp] = STATE(172),
    [sym_break] = STATE(172),
    [sym_return] = STATE(172),
    [sym_await] = STATE(172),
    [sym_launch] = STATE(172),
    [sym_yield] = STATE(172),
    [sym_if] = STATE(172),
    [sym_fn] = STATE(172),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
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
    [sym_fn] = STATE(165),
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
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(187),
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
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
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
    [sym_fn] = STATE(166),
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
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(169),
    [sym_let] = STATE(169),
    [sym_use] = STATE(169),
    [sym__exp] = STATE(169),
    [sym_break] = STATE(169),
    [sym_return] = STATE(169),
    [sym_await] = STATE(169),
    [sym_launch] = STATE(169),
    [sym_yield] = STATE(169),
    [sym_if] = STATE(169),
    [sym_fn] = STATE(169),
    [sym_loop] = STATE(169),
    [sym_for] = STATE(169),
    [sym_list] = STATE(169),
    [sym_map] = STATE(169),
    [sym_object] = STATE(169),
    [sym_assignment] = STATE(169),
    [sym_binary_exp] = STATE(169),
    [sym_unary_exp] = STATE(169),
    [sym_call] = STATE(169),
    [sym_property_exp] = STATE(169),
    [sym_bool] = STATE(169),
    [sym_string] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(191),
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
    [sym_number] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [32] = {
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
    [sym_fn] = STATE(181),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [33] = {
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
    [sym_fn] = STATE(184),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [34] = {
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
    [sym_fn] = STATE(180),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(197),
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
    [sym_number] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(47),
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
    [sym_await] = STATE(179),
    [sym_launch] = STATE(179),
    [sym_yield] = STATE(179),
    [sym_if] = STATE(179),
    [sym_fn] = STATE(179),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [36] = {
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
    [sym_fn] = STATE(185),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [37] = {
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
    [sym_fn] = STATE(183),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [38] = {
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
    [sym_fn] = STATE(153),
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
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(203),
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
    [sym_number] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_block] = STATE(105),
    [sym_let] = STATE(105),
    [sym_use] = STATE(105),
    [sym__exp] = STATE(105),
    [sym_break] = STATE(105),
    [sym_return] = STATE(105),
    [sym_await] = STATE(105),
    [sym_launch] = STATE(105),
    [sym_yield] = STATE(105),
    [sym_if] = STATE(105),
    [sym_fn] = STATE(105),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(205),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_block] = STATE(104),
    [sym_let] = STATE(104),
    [sym_use] = STATE(104),
    [sym__exp] = STATE(104),
    [sym_break] = STATE(104),
    [sym_return] = STATE(104),
    [sym_await] = STATE(104),
    [sym_launch] = STATE(104),
    [sym_yield] = STATE(104),
    [sym_if] = STATE(104),
    [sym_fn] = STATE(104),
    [sym_loop] = STATE(104),
    [sym_for] = STATE(104),
    [sym_list] = STATE(104),
    [sym_map] = STATE(104),
    [sym_object] = STATE(104),
    [sym_assignment] = STATE(104),
    [sym_binary_exp] = STATE(104),
    [sym_unary_exp] = STATE(104),
    [sym_call] = STATE(104),
    [sym_property_exp] = STATE(104),
    [sym_bool] = STATE(104),
    [sym_string] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_block] = STATE(155),
    [sym_let] = STATE(155),
    [sym_use] = STATE(155),
    [sym__exp] = STATE(155),
    [sym_break] = STATE(155),
    [sym_return] = STATE(155),
    [sym_await] = STATE(155),
    [sym_launch] = STATE(155),
    [sym_yield] = STATE(155),
    [sym_if] = STATE(155),
    [sym_fn] = STATE(155),
    [sym_loop] = STATE(155),
    [sym_for] = STATE(155),
    [sym_list] = STATE(155),
    [sym_map] = STATE(155),
    [sym_object] = STATE(155),
    [sym_assignment] = STATE(155),
    [sym_binary_exp] = STATE(155),
    [sym_unary_exp] = STATE(155),
    [sym_call] = STATE(155),
    [sym_property_exp] = STATE(155),
    [sym_bool] = STATE(155),
    [sym_string] = STATE(155),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(209),
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
    [sym_number] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [42] = {
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
    [sym_fn] = STATE(178),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [43] = {
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
    [sym_fn] = STATE(99),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_block] = STATE(98),
    [sym_let] = STATE(98),
    [sym_use] = STATE(98),
    [sym__exp] = STATE(98),
    [sym_break] = STATE(98),
    [sym_return] = STATE(98),
    [sym_await] = STATE(98),
    [sym_launch] = STATE(98),
    [sym_yield] = STATE(98),
    [sym_if] = STATE(98),
    [sym_fn] = STATE(98),
    [sym_loop] = STATE(98),
    [sym_for] = STATE(98),
    [sym_list] = STATE(98),
    [sym_map] = STATE(98),
    [sym_object] = STATE(98),
    [sym_assignment] = STATE(98),
    [sym_binary_exp] = STATE(98),
    [sym_unary_exp] = STATE(98),
    [sym_call] = STATE(98),
    [sym_property_exp] = STATE(98),
    [sym_bool] = STATE(98),
    [sym_string] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_block] = STATE(168),
    [sym_let] = STATE(168),
    [sym_use] = STATE(168),
    [sym__exp] = STATE(168),
    [sym_break] = STATE(168),
    [sym_return] = STATE(168),
    [sym_await] = STATE(168),
    [sym_launch] = STATE(168),
    [sym_yield] = STATE(168),
    [sym_if] = STATE(168),
    [sym_fn] = STATE(168),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(133),
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
    [sym_number] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [46] = {
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
    [sym_fn] = STATE(171),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_block] = STATE(79),
    [sym_let] = STATE(79),
    [sym_use] = STATE(79),
    [sym__exp] = STATE(79),
    [sym_break] = STATE(79),
    [sym_return] = STATE(79),
    [sym_await] = STATE(79),
    [sym_launch] = STATE(79),
    [sym_yield] = STATE(79),
    [sym_if] = STATE(79),
    [sym_fn] = STATE(79),
    [sym_loop] = STATE(79),
    [sym_for] = STATE(79),
    [sym_list] = STATE(79),
    [sym_map] = STATE(79),
    [sym_object] = STATE(79),
    [sym_assignment] = STATE(79),
    [sym_binary_exp] = STATE(79),
    [sym_unary_exp] = STATE(79),
    [sym_call] = STATE(79),
    [sym_property_exp] = STATE(79),
    [sym_bool] = STATE(79),
    [sym_string] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(217),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_block] = STATE(94),
    [sym_let] = STATE(94),
    [sym_use] = STATE(94),
    [sym__exp] = STATE(94),
    [sym_break] = STATE(94),
    [sym_return] = STATE(94),
    [sym_await] = STATE(94),
    [sym_launch] = STATE(94),
    [sym_yield] = STATE(94),
    [sym_if] = STATE(94),
    [sym_fn] = STATE(94),
    [sym_loop] = STATE(94),
    [sym_for] = STATE(94),
    [sym_list] = STATE(94),
    [sym_map] = STATE(94),
    [sym_object] = STATE(94),
    [sym_assignment] = STATE(94),
    [sym_binary_exp] = STATE(94),
    [sym_unary_exp] = STATE(94),
    [sym_call] = STATE(94),
    [sym_property_exp] = STATE(94),
    [sym_bool] = STATE(94),
    [sym_string] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(219),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [49] = {
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
    [sym_fn] = STATE(182),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_block] = STATE(118),
    [sym_let] = STATE(118),
    [sym_use] = STATE(118),
    [sym__exp] = STATE(118),
    [sym_break] = STATE(118),
    [sym_return] = STATE(118),
    [sym_await] = STATE(118),
    [sym_launch] = STATE(118),
    [sym_yield] = STATE(118),
    [sym_if] = STATE(118),
    [sym_fn] = STATE(118),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(223),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [51] = {
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
    [sym_fn] = STATE(92),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(225),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_block] = STATE(95),
    [sym_let] = STATE(95),
    [sym_use] = STATE(95),
    [sym__exp] = STATE(95),
    [sym_break] = STATE(95),
    [sym_return] = STATE(95),
    [sym_await] = STATE(95),
    [sym_launch] = STATE(95),
    [sym_yield] = STATE(95),
    [sym_if] = STATE(95),
    [sym_fn] = STATE(95),
    [sym_loop] = STATE(95),
    [sym_for] = STATE(95),
    [sym_list] = STATE(95),
    [sym_map] = STATE(95),
    [sym_object] = STATE(95),
    [sym_assignment] = STATE(95),
    [sym_binary_exp] = STATE(95),
    [sym_unary_exp] = STATE(95),
    [sym_call] = STATE(95),
    [sym_property_exp] = STATE(95),
    [sym_bool] = STATE(95),
    [sym_string] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_block] = STATE(137),
    [sym_let] = STATE(137),
    [sym_use] = STATE(137),
    [sym__exp] = STATE(137),
    [sym_break] = STATE(137),
    [sym_return] = STATE(137),
    [sym_await] = STATE(137),
    [sym_launch] = STATE(137),
    [sym_yield] = STATE(137),
    [sym_if] = STATE(137),
    [sym_fn] = STATE(137),
    [sym_loop] = STATE(137),
    [sym_for] = STATE(137),
    [sym_list] = STATE(137),
    [sym_map] = STATE(137),
    [sym_object] = STATE(137),
    [sym_assignment] = STATE(137),
    [sym_binary_exp] = STATE(137),
    [sym_unary_exp] = STATE(137),
    [sym_call] = STATE(137),
    [sym_property_exp] = STATE(137),
    [sym_bool] = STATE(137),
    [sym_string] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
  [54] = {
    [sym_block] = STATE(87),
    [sym_let] = STATE(87),
    [sym_use] = STATE(87),
    [sym__exp] = STATE(87),
    [sym_break] = STATE(87),
    [sym_return] = STATE(87),
    [sym_await] = STATE(87),
    [sym_launch] = STATE(87),
    [sym_yield] = STATE(87),
    [sym_if] = STATE(87),
    [sym_fn] = STATE(87),
    [sym_loop] = STATE(87),
    [sym_for] = STATE(87),
    [sym_list] = STATE(87),
    [sym_map] = STATE(87),
    [sym_object] = STATE(87),
    [sym_assignment] = STATE(87),
    [sym_binary_exp] = STATE(87),
    [sym_unary_exp] = STATE(87),
    [sym_call] = STATE(87),
    [sym_property_exp] = STATE(87),
    [sym_bool] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(231),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [55] = {
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
    [sym_fn] = STATE(90),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(233),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [56] = {
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
    [sym_fn] = STATE(176),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(235),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [57] = {
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
    [sym_fn] = STATE(161),
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
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(143),
    [sym_let] = STATE(143),
    [sym_use] = STATE(143),
    [sym__exp] = STATE(143),
    [sym_break] = STATE(143),
    [sym_return] = STATE(143),
    [sym_await] = STATE(143),
    [sym_launch] = STATE(143),
    [sym_yield] = STATE(143),
    [sym_if] = STATE(143),
    [sym_fn] = STATE(143),
    [sym_loop] = STATE(143),
    [sym_for] = STATE(143),
    [sym_list] = STATE(143),
    [sym_map] = STATE(143),
    [sym_object] = STATE(143),
    [sym_assignment] = STATE(143),
    [sym_binary_exp] = STATE(143),
    [sym_unary_exp] = STATE(143),
    [sym_call] = STATE(143),
    [sym_property_exp] = STATE(143),
    [sym_bool] = STATE(143),
    [sym_string] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(146),
    [sym_let] = STATE(146),
    [sym_use] = STATE(146),
    [sym__exp] = STATE(146),
    [sym_break] = STATE(146),
    [sym_return] = STATE(146),
    [sym_await] = STATE(146),
    [sym_launch] = STATE(146),
    [sym_yield] = STATE(146),
    [sym_if] = STATE(146),
    [sym_fn] = STATE(146),
    [sym_loop] = STATE(146),
    [sym_for] = STATE(146),
    [sym_list] = STATE(146),
    [sym_map] = STATE(146),
    [sym_object] = STATE(146),
    [sym_assignment] = STATE(146),
    [sym_binary_exp] = STATE(146),
    [sym_unary_exp] = STATE(146),
    [sym_call] = STATE(146),
    [sym_property_exp] = STATE(146),
    [sym_bool] = STATE(146),
    [sym_string] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
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
    [sym_block] = STATE(147),
    [sym_let] = STATE(147),
    [sym_use] = STATE(147),
    [sym__exp] = STATE(147),
    [sym_break] = STATE(147),
    [sym_return] = STATE(147),
    [sym_await] = STATE(147),
    [sym_launch] = STATE(147),
    [sym_yield] = STATE(147),
    [sym_if] = STATE(147),
    [sym_fn] = STATE(147),
    [sym_loop] = STATE(147),
    [sym_for] = STATE(147),
    [sym_list] = STATE(147),
    [sym_map] = STATE(147),
    [sym_object] = STATE(147),
    [sym_assignment] = STATE(147),
    [sym_binary_exp] = STATE(147),
    [sym_unary_exp] = STATE(147),
    [sym_call] = STATE(147),
    [sym_property_exp] = STATE(147),
    [sym_bool] = STATE(147),
    [sym_string] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(243),
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
    [sym_number] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_block] = STATE(148),
    [sym_let] = STATE(148),
    [sym_use] = STATE(148),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(148),
    [sym_return] = STATE(148),
    [sym_await] = STATE(148),
    [sym_launch] = STATE(148),
    [sym_yield] = STATE(148),
    [sym_if] = STATE(148),
    [sym_fn] = STATE(148),
    [sym_loop] = STATE(148),
    [sym_for] = STATE(148),
    [sym_list] = STATE(148),
    [sym_map] = STATE(148),
    [sym_object] = STATE(148),
    [sym_assignment] = STATE(148),
    [sym_binary_exp] = STATE(148),
    [sym_unary_exp] = STATE(148),
    [sym_call] = STATE(148),
    [sym_property_exp] = STATE(148),
    [sym_bool] = STATE(148),
    [sym_string] = STATE(148),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(245),
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
    [sym_number] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_block] = STATE(149),
    [sym_let] = STATE(149),
    [sym_use] = STATE(149),
    [sym__exp] = STATE(149),
    [sym_break] = STATE(149),
    [sym_return] = STATE(149),
    [sym_await] = STATE(149),
    [sym_launch] = STATE(149),
    [sym_yield] = STATE(149),
    [sym_if] = STATE(149),
    [sym_fn] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_for] = STATE(149),
    [sym_list] = STATE(149),
    [sym_map] = STATE(149),
    [sym_object] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_binary_exp] = STATE(149),
    [sym_unary_exp] = STATE(149),
    [sym_call] = STATE(149),
    [sym_property_exp] = STATE(149),
    [sym_bool] = STATE(149),
    [sym_string] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(247),
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
    [sym_number] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [63] = {
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
    [sym_fn] = STATE(177),
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
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_await] = ACTIONS(73),
    [anon_sym_launch] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_gen] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [sym_null] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 4,
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
  [32] = 5,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
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
  [68] = 5,
    ACTIONS(263), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [104] = 4,
    ACTIONS(272), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 17,
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
  [138] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 4,
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
    STATE(66), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(280), 18,
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
  [208] = 5,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(70), 1,
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
  [244] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(70), 1,
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
  [280] = 4,
    ACTIONS(297), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
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
  [314] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 19,
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
  [377] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(311), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 18,
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
  [408] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 18,
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
  [439] = 4,
    ACTIONS(317), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 4,
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
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [472] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 18,
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
  [503] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(323), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [550] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(343), 18,
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
  [581] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 4,
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
  [612] = 4,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 16,
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
  [645] = 5,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 15,
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
  [680] = 3,
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
  [711] = 3,
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
  [742] = 5,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(259), 4,
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
  [777] = 5,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 16,
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
  [812] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 18,
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
  [843] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 18,
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
  [874] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(373), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [921] = 3,
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
  [952] = 8,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 14,
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
  [993] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 18,
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
  [1024] = 10,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(361), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [1069] = 6,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 15,
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
  [1106] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 18,
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
  [1137] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(383), 18,
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
  [1168] = 5,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 16,
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
  [1203] = 5,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 16,
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
  [1238] = 5,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 16,
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
  [1273] = 5,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 16,
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
  [1308] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 18,
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
  [1339] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1386] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
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
  [1433] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1480] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(406), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1527] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(408), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1574] = 15,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    STATE(14), 1,
      sym__sc,
    STATE(186), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1629] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 18,
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
  [1660] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 18,
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
  [1691] = 4,
    STATE(114), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(280), 17,
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
  [1724] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 18,
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
  [1755] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 18,
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
  [1786] = 5,
    ACTIONS(446), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 16,
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
  [1821] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 18,
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
  [1852] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(453), 18,
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
  [1883] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(457), 18,
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
  [1914] = 9,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 12,
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
  [1957] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(463), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(461), 18,
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
  [1988] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(465), 18,
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
  [2019] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(469), 18,
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
  [2050] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(473), 18,
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
  [2081] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(479), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 18,
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
  [2112] = 5,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(101), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 4,
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
  [2147] = 15,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(481), 1,
      anon_sym_COLON,
    STATE(14), 1,
      sym__sc,
    STATE(186), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2202] = 5,
    ACTIONS(347), 1,
      anon_sym_COLON_EQ,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 15,
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
  [2237] = 14,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    STATE(14), 1,
      sym__sc,
    STATE(186), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(414), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2290] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 17,
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
  [2320] = 3,
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
  [2350] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(463), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(461), 17,
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
  [2380] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(465), 17,
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
  [2410] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(343), 17,
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
  [2440] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 17,
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
  [2470] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 17,
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
  [2500] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(469), 17,
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
  [2530] = 3,
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
  [2560] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(323), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2606] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 17,
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
  [2636] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 17,
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
  [2666] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 17,
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
  [2696] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(453), 17,
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
  [2726] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(473), 17,
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
  [2756] = 10,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(361), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [2800] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 17,
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
  [2830] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(479), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 17,
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
  [2860] = 9,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 11,
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
  [2902] = 8,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 13,
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
  [2942] = 6,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 14,
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
  [2978] = 5,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 15,
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
  [3012] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(408), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3058] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(406), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3104] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 17,
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
  [3134] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3180] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(383), 17,
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
  [3210] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
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
  [3256] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3302] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(457), 17,
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
  [3332] = 3,
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
  [3362] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 17,
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
  [3392] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(311), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 17,
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
  [3422] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(373), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3468] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 17,
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
  [3498] = 3,
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
  [3528] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 17,
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
  [3558] = 5,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 15,
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
  [3592] = 5,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 15,
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
  [3626] = 13,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    STATE(188), 1,
      aux_sym_object_repeat1,
    STATE(212), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(485), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3675] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(487), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3720] = 13,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    STATE(189), 1,
      aux_sym_object_repeat1,
    STATE(219), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(489), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3769] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3817] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(495), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3861] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3909] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3957] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4005] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4053] = 13,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4101] = 12,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4146] = 12,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4191] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(517), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4234] = 11,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(424), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(428), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(519), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(422), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4277] = 12,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4322] = 12,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4367] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4409] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4451] = 11,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4493] = 5,
    STATE(10), 1,
      sym__sc,
    STATE(187), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(529), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4512] = 5,
    STATE(45), 1,
      sym__sc,
    STATE(187), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(531), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4531] = 4,
    STATE(190), 1,
      aux_sym_object_repeat1,
    STATE(214), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4546] = 4,
    STATE(190), 1,
      aux_sym_object_repeat1,
    STATE(218), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4561] = 4,
    STATE(190), 1,
      aux_sym_object_repeat1,
    STATE(227), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4576] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      sym_line_comment,
    STATE(196), 1,
      aux_sym_string_repeat1,
    ACTIONS(543), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4593] = 4,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(495), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4608] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(545), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_string_repeat1,
    ACTIONS(552), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4625] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(545), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat1,
    ACTIONS(557), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4642] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(545), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_string_repeat1,
    ACTIONS(561), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4659] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(545), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_string_repeat1,
    ACTIONS(561), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4676] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4690] = 4,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4704] = 4,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4718] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4732] = 4,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4746] = 4,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4760] = 4,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4774] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4788] = 4,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4802] = 4,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4816] = 4,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4830] = 3,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4841] = 3,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4852] = 3,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4863] = 3,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4874] = 3,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4885] = 3,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4896] = 3,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4907] = 3,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4918] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4927] = 3,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4938] = 3,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4949] = 3,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4960] = 3,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4971] = 3,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4982] = 3,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4993] = 2,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5001] = 2,
    ACTIONS(617), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5009] = 2,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5017] = 2,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5025] = 2,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5033] = 2,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5041] = 2,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5049] = 2,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5057] = 2,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5065] = 2,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5073] = 2,
    ACTIONS(631), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5081] = 2,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5089] = 2,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5097] = 2,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5105] = 2,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5113] = 2,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5121] = 2,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5129] = 2,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5137] = 2,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5145] = 2,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5153] = 2,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5161] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5169] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5177] = 2,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5185] = 2,
    ACTIONS(653), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5193] = 2,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5201] = 2,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5209] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5217] = 2,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5225] = 2,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5233] = 2,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5241] = 2,
    ACTIONS(667), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5249] = 2,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5257] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5265] = 2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 32,
  [SMALL_STATE(66)] = 68,
  [SMALL_STATE(67)] = 104,
  [SMALL_STATE(68)] = 138,
  [SMALL_STATE(69)] = 174,
  [SMALL_STATE(70)] = 208,
  [SMALL_STATE(71)] = 244,
  [SMALL_STATE(72)] = 280,
  [SMALL_STATE(73)] = 314,
  [SMALL_STATE(74)] = 346,
  [SMALL_STATE(75)] = 377,
  [SMALL_STATE(76)] = 408,
  [SMALL_STATE(77)] = 439,
  [SMALL_STATE(78)] = 472,
  [SMALL_STATE(79)] = 503,
  [SMALL_STATE(80)] = 550,
  [SMALL_STATE(81)] = 581,
  [SMALL_STATE(82)] = 612,
  [SMALL_STATE(83)] = 645,
  [SMALL_STATE(84)] = 680,
  [SMALL_STATE(85)] = 711,
  [SMALL_STATE(86)] = 742,
  [SMALL_STATE(87)] = 777,
  [SMALL_STATE(88)] = 812,
  [SMALL_STATE(89)] = 843,
  [SMALL_STATE(90)] = 874,
  [SMALL_STATE(91)] = 921,
  [SMALL_STATE(92)] = 952,
  [SMALL_STATE(93)] = 993,
  [SMALL_STATE(94)] = 1024,
  [SMALL_STATE(95)] = 1069,
  [SMALL_STATE(96)] = 1106,
  [SMALL_STATE(97)] = 1137,
  [SMALL_STATE(98)] = 1168,
  [SMALL_STATE(99)] = 1203,
  [SMALL_STATE(100)] = 1238,
  [SMALL_STATE(101)] = 1273,
  [SMALL_STATE(102)] = 1308,
  [SMALL_STATE(103)] = 1339,
  [SMALL_STATE(104)] = 1386,
  [SMALL_STATE(105)] = 1433,
  [SMALL_STATE(106)] = 1480,
  [SMALL_STATE(107)] = 1527,
  [SMALL_STATE(108)] = 1574,
  [SMALL_STATE(109)] = 1629,
  [SMALL_STATE(110)] = 1660,
  [SMALL_STATE(111)] = 1691,
  [SMALL_STATE(112)] = 1724,
  [SMALL_STATE(113)] = 1755,
  [SMALL_STATE(114)] = 1786,
  [SMALL_STATE(115)] = 1821,
  [SMALL_STATE(116)] = 1852,
  [SMALL_STATE(117)] = 1883,
  [SMALL_STATE(118)] = 1914,
  [SMALL_STATE(119)] = 1957,
  [SMALL_STATE(120)] = 1988,
  [SMALL_STATE(121)] = 2019,
  [SMALL_STATE(122)] = 2050,
  [SMALL_STATE(123)] = 2081,
  [SMALL_STATE(124)] = 2112,
  [SMALL_STATE(125)] = 2147,
  [SMALL_STATE(126)] = 2202,
  [SMALL_STATE(127)] = 2237,
  [SMALL_STATE(128)] = 2290,
  [SMALL_STATE(129)] = 2320,
  [SMALL_STATE(130)] = 2350,
  [SMALL_STATE(131)] = 2380,
  [SMALL_STATE(132)] = 2410,
  [SMALL_STATE(133)] = 2440,
  [SMALL_STATE(134)] = 2470,
  [SMALL_STATE(135)] = 2500,
  [SMALL_STATE(136)] = 2530,
  [SMALL_STATE(137)] = 2560,
  [SMALL_STATE(138)] = 2606,
  [SMALL_STATE(139)] = 2636,
  [SMALL_STATE(140)] = 2666,
  [SMALL_STATE(141)] = 2696,
  [SMALL_STATE(142)] = 2726,
  [SMALL_STATE(143)] = 2756,
  [SMALL_STATE(144)] = 2800,
  [SMALL_STATE(145)] = 2830,
  [SMALL_STATE(146)] = 2860,
  [SMALL_STATE(147)] = 2902,
  [SMALL_STATE(148)] = 2942,
  [SMALL_STATE(149)] = 2978,
  [SMALL_STATE(150)] = 3012,
  [SMALL_STATE(151)] = 3058,
  [SMALL_STATE(152)] = 3104,
  [SMALL_STATE(153)] = 3134,
  [SMALL_STATE(154)] = 3180,
  [SMALL_STATE(155)] = 3210,
  [SMALL_STATE(156)] = 3256,
  [SMALL_STATE(157)] = 3302,
  [SMALL_STATE(158)] = 3332,
  [SMALL_STATE(159)] = 3362,
  [SMALL_STATE(160)] = 3392,
  [SMALL_STATE(161)] = 3422,
  [SMALL_STATE(162)] = 3468,
  [SMALL_STATE(163)] = 3498,
  [SMALL_STATE(164)] = 3528,
  [SMALL_STATE(165)] = 3558,
  [SMALL_STATE(166)] = 3592,
  [SMALL_STATE(167)] = 3626,
  [SMALL_STATE(168)] = 3675,
  [SMALL_STATE(169)] = 3720,
  [SMALL_STATE(170)] = 3769,
  [SMALL_STATE(171)] = 3817,
  [SMALL_STATE(172)] = 3861,
  [SMALL_STATE(173)] = 3909,
  [SMALL_STATE(174)] = 3957,
  [SMALL_STATE(175)] = 4005,
  [SMALL_STATE(176)] = 4053,
  [SMALL_STATE(177)] = 4101,
  [SMALL_STATE(178)] = 4146,
  [SMALL_STATE(179)] = 4191,
  [SMALL_STATE(180)] = 4234,
  [SMALL_STATE(181)] = 4277,
  [SMALL_STATE(182)] = 4322,
  [SMALL_STATE(183)] = 4367,
  [SMALL_STATE(184)] = 4409,
  [SMALL_STATE(185)] = 4451,
  [SMALL_STATE(186)] = 4493,
  [SMALL_STATE(187)] = 4512,
  [SMALL_STATE(188)] = 4531,
  [SMALL_STATE(189)] = 4546,
  [SMALL_STATE(190)] = 4561,
  [SMALL_STATE(191)] = 4576,
  [SMALL_STATE(192)] = 4593,
  [SMALL_STATE(193)] = 4608,
  [SMALL_STATE(194)] = 4625,
  [SMALL_STATE(195)] = 4642,
  [SMALL_STATE(196)] = 4659,
  [SMALL_STATE(197)] = 4676,
  [SMALL_STATE(198)] = 4690,
  [SMALL_STATE(199)] = 4704,
  [SMALL_STATE(200)] = 4718,
  [SMALL_STATE(201)] = 4732,
  [SMALL_STATE(202)] = 4746,
  [SMALL_STATE(203)] = 4760,
  [SMALL_STATE(204)] = 4774,
  [SMALL_STATE(205)] = 4788,
  [SMALL_STATE(206)] = 4802,
  [SMALL_STATE(207)] = 4816,
  [SMALL_STATE(208)] = 4830,
  [SMALL_STATE(209)] = 4841,
  [SMALL_STATE(210)] = 4852,
  [SMALL_STATE(211)] = 4863,
  [SMALL_STATE(212)] = 4874,
  [SMALL_STATE(213)] = 4885,
  [SMALL_STATE(214)] = 4896,
  [SMALL_STATE(215)] = 4907,
  [SMALL_STATE(216)] = 4918,
  [SMALL_STATE(217)] = 4927,
  [SMALL_STATE(218)] = 4938,
  [SMALL_STATE(219)] = 4949,
  [SMALL_STATE(220)] = 4960,
  [SMALL_STATE(221)] = 4971,
  [SMALL_STATE(222)] = 4982,
  [SMALL_STATE(223)] = 4993,
  [SMALL_STATE(224)] = 5001,
  [SMALL_STATE(225)] = 5009,
  [SMALL_STATE(226)] = 5017,
  [SMALL_STATE(227)] = 5025,
  [SMALL_STATE(228)] = 5033,
  [SMALL_STATE(229)] = 5041,
  [SMALL_STATE(230)] = 5049,
  [SMALL_STATE(231)] = 5057,
  [SMALL_STATE(232)] = 5065,
  [SMALL_STATE(233)] = 5073,
  [SMALL_STATE(234)] = 5081,
  [SMALL_STATE(235)] = 5089,
  [SMALL_STATE(236)] = 5097,
  [SMALL_STATE(237)] = 5105,
  [SMALL_STATE(238)] = 5113,
  [SMALL_STATE(239)] = 5121,
  [SMALL_STATE(240)] = 5129,
  [SMALL_STATE(241)] = 5137,
  [SMALL_STATE(242)] = 5145,
  [SMALL_STATE(243)] = 5153,
  [SMALL_STATE(244)] = 5161,
  [SMALL_STATE(245)] = 5169,
  [SMALL_STATE(246)] = 5177,
  [SMALL_STATE(247)] = 5185,
  [SMALL_STATE(248)] = 5193,
  [SMALL_STATE(249)] = 5201,
  [SMALL_STATE(250)] = 5209,
  [SMALL_STATE(251)] = 5217,
  [SMALL_STATE(252)] = 5225,
  [SMALL_STATE(253)] = 5233,
  [SMALL_STATE(254)] = 5241,
  [SMALL_STATE(255)] = 5249,
  [SMALL_STATE(256)] = 5257,
  [SMALL_STATE(257)] = 5265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(238),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(230),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(249),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(235),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(45),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(227),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(46),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(193),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(223),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(36),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
