#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 95
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
  anon_sym_and = 7,
  anon_sym_use = 8,
  anon_sym_DOT = 9,
  anon_sym_SEMI = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_break = 13,
  sym_continue = 14,
  anon_sym_return = 15,
  anon_sym_await = 16,
  anon_sym_launch = 17,
  anon_sym_yield = 18,
  anon_sym_if = 19,
  anon_sym_else = 20,
  anon_sym_fn = 21,
  anon_sym_gen = 22,
  anon_sym_COMMA = 23,
  anon_sym_loop = 24,
  anon_sym_for = 25,
  anon_sym_in = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_COLON = 29,
  anon_sym_COLON_EQ = 30,
  anon_sym_or = 31,
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
  sym_statement = 61,
  sym_let = 62,
  sym_use = 63,
  sym__sc = 64,
  sym__exp = 65,
  sym_break = 66,
  sym_return = 67,
  sym_await = 68,
  sym_launch = 69,
  sym_yield = 70,
  sym_if = 71,
  sym_fn = 72,
  sym_params = 73,
  sym_loop = 74,
  sym_for = 75,
  sym_list = 76,
  sym_map = 77,
  sym_object = 78,
  sym_member = 79,
  sym_assignment = 80,
  sym_binary_exp = 81,
  sym_unary_exp = 82,
  sym_call = 83,
  sym_property_exp = 84,
  sym_bool = 85,
  sym_string = 86,
  aux_sym__sequence_repeat1 = 87,
  aux_sym_use_repeat1 = 88,
  aux_sym_params_repeat1 = 89,
  aux_sym_list_repeat1 = 90,
  aux_sym_map_repeat1 = 91,
  aux_sym_object_repeat1 = 92,
  aux_sym_property_exp_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
  alias_sym_property_identifier = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_and] = "and",
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
  [sym_statement] = "statement",
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
  [sym_member] = "member",
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
  [anon_sym_and] = anon_sym_and,
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
  [sym_statement] = sym_statement,
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
  [sym_member] = sym_member,
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
  [anon_sym_and] = {
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
  [sym_statement] = {
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
  [sym_member] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 21,
  [25] = 22,
  [26] = 19,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 45,
  [49] = 49,
  [50] = 36,
  [51] = 51,
  [52] = 41,
  [53] = 38,
  [54] = 51,
  [55] = 55,
  [56] = 40,
  [57] = 57,
  [58] = 57,
  [59] = 37,
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
  [74] = 63,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 66,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 61,
  [84] = 62,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 60,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 65,
  [97] = 64,
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
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 98,
  [112] = 81,
  [113] = 73,
  [114] = 106,
  [115] = 72,
  [116] = 105,
  [117] = 103,
  [118] = 102,
  [119] = 77,
  [120] = 68,
  [121] = 78,
  [122] = 101,
  [123] = 85,
  [124] = 100,
  [125] = 110,
  [126] = 67,
  [127] = 109,
  [128] = 99,
  [129] = 76,
  [130] = 108,
  [131] = 92,
  [132] = 89,
  [133] = 88,
  [134] = 70,
  [135] = 107,
  [136] = 75,
  [137] = 80,
  [138] = 86,
  [139] = 71,
  [140] = 104,
  [141] = 95,
  [142] = 94,
  [143] = 69,
  [144] = 90,
  [145] = 87,
  [146] = 82,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 157,
  [158] = 154,
  [159] = 155,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 160,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 176,
  [180] = 178,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 183,
  [188] = 184,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 181,
  [193] = 193,
  [194] = 177,
  [195] = 195,
  [196] = 196,
  [197] = 196,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 200,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 195,
  [208] = 208,
  [209] = 209,
  [210] = 206,
  [211] = 211,
  [212] = 212,
  [213] = 211,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 215,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 224,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 222,
  [235] = 223,
  [236] = 227,
  [237] = 237,
  [238] = 225,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 232,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 246,
  [250] = 250,
  [251] = 251,
  [252] = 241,
  [253] = 253,
  [254] = 242,
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
                  ? (c < 'b'
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

static inline bool sym_identifier_character_set_4(int32_t c) {
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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

static inline bool sym_identifier_character_set_6(int32_t c) {
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
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(28);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(199);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(28);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 73:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(199);
      END_STATE();
    case 74:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(199);
      END_STATE();
    case 75:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 76:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(199);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(135);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(199);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(181);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(178);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(178);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(108);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(89);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(110);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(98);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(148);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(192);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(169);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(118);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(86);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(148);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(199);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 77, .external_lex_state = 2},
  [2] = {.lex_state = 73, .external_lex_state = 2},
  [3] = {.lex_state = 73, .external_lex_state = 3},
  [4] = {.lex_state = 77, .external_lex_state = 2},
  [5] = {.lex_state = 77, .external_lex_state = 2},
  [6] = {.lex_state = 77, .external_lex_state = 2},
  [7] = {.lex_state = 77, .external_lex_state = 2},
  [8] = {.lex_state = 77, .external_lex_state = 2},
  [9] = {.lex_state = 77, .external_lex_state = 2},
  [10] = {.lex_state = 77, .external_lex_state = 2},
  [11] = {.lex_state = 77, .external_lex_state = 2},
  [12] = {.lex_state = 78, .external_lex_state = 3},
  [13] = {.lex_state = 78, .external_lex_state = 3},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 78, .external_lex_state = 2},
  [16] = {.lex_state = 78, .external_lex_state = 2},
  [17] = {.lex_state = 78, .external_lex_state = 2},
  [18] = {.lex_state = 78, .external_lex_state = 2},
  [19] = {.lex_state = 78, .external_lex_state = 2},
  [20] = {.lex_state = 78, .external_lex_state = 2},
  [21] = {.lex_state = 78, .external_lex_state = 2},
  [22] = {.lex_state = 78, .external_lex_state = 2},
  [23] = {.lex_state = 78, .external_lex_state = 2},
  [24] = {.lex_state = 78, .external_lex_state = 2},
  [25] = {.lex_state = 78, .external_lex_state = 2},
  [26] = {.lex_state = 78, .external_lex_state = 2},
  [27] = {.lex_state = 78, .external_lex_state = 2},
  [28] = {.lex_state = 78, .external_lex_state = 2},
  [29] = {.lex_state = 78, .external_lex_state = 2},
  [30] = {.lex_state = 78, .external_lex_state = 2},
  [31] = {.lex_state = 78, .external_lex_state = 2},
  [32] = {.lex_state = 78, .external_lex_state = 2},
  [33] = {.lex_state = 78, .external_lex_state = 2},
  [34] = {.lex_state = 78, .external_lex_state = 2},
  [35] = {.lex_state = 78, .external_lex_state = 2},
  [36] = {.lex_state = 78, .external_lex_state = 2},
  [37] = {.lex_state = 78, .external_lex_state = 2},
  [38] = {.lex_state = 78, .external_lex_state = 2},
  [39] = {.lex_state = 78, .external_lex_state = 2},
  [40] = {.lex_state = 78, .external_lex_state = 2},
  [41] = {.lex_state = 78, .external_lex_state = 2},
  [42] = {.lex_state = 78, .external_lex_state = 2},
  [43] = {.lex_state = 78, .external_lex_state = 2},
  [44] = {.lex_state = 78, .external_lex_state = 2},
  [45] = {.lex_state = 78, .external_lex_state = 2},
  [46] = {.lex_state = 78, .external_lex_state = 2},
  [47] = {.lex_state = 78, .external_lex_state = 2},
  [48] = {.lex_state = 78, .external_lex_state = 2},
  [49] = {.lex_state = 78, .external_lex_state = 2},
  [50] = {.lex_state = 78, .external_lex_state = 2},
  [51] = {.lex_state = 78, .external_lex_state = 2},
  [52] = {.lex_state = 78, .external_lex_state = 2},
  [53] = {.lex_state = 78, .external_lex_state = 2},
  [54] = {.lex_state = 78, .external_lex_state = 2},
  [55] = {.lex_state = 78, .external_lex_state = 2},
  [56] = {.lex_state = 78, .external_lex_state = 2},
  [57] = {.lex_state = 78, .external_lex_state = 2},
  [58] = {.lex_state = 78, .external_lex_state = 2},
  [59] = {.lex_state = 78, .external_lex_state = 2},
  [60] = {.lex_state = 75, .external_lex_state = 3},
  [61] = {.lex_state = 75, .external_lex_state = 3},
  [62] = {.lex_state = 75, .external_lex_state = 3},
  [63] = {.lex_state = 75, .external_lex_state = 2},
  [64] = {.lex_state = 75, .external_lex_state = 2},
  [65] = {.lex_state = 75, .external_lex_state = 2},
  [66] = {.lex_state = 75, .external_lex_state = 2},
  [67] = {.lex_state = 75, .external_lex_state = 2},
  [68] = {.lex_state = 75, .external_lex_state = 2},
  [69] = {.lex_state = 75, .external_lex_state = 2},
  [70] = {.lex_state = 75, .external_lex_state = 2},
  [71] = {.lex_state = 75, .external_lex_state = 2},
  [72] = {.lex_state = 75, .external_lex_state = 2},
  [73] = {.lex_state = 75, .external_lex_state = 2},
  [74] = {.lex_state = 75, .external_lex_state = 3},
  [75] = {.lex_state = 75, .external_lex_state = 2},
  [76] = {.lex_state = 75, .external_lex_state = 2},
  [77] = {.lex_state = 75, .external_lex_state = 2},
  [78] = {.lex_state = 75, .external_lex_state = 2},
  [79] = {.lex_state = 75, .external_lex_state = 3},
  [80] = {.lex_state = 75, .external_lex_state = 2},
  [81] = {.lex_state = 75, .external_lex_state = 2},
  [82] = {.lex_state = 75, .external_lex_state = 2},
  [83] = {.lex_state = 75, .external_lex_state = 2},
  [84] = {.lex_state = 75, .external_lex_state = 3},
  [85] = {.lex_state = 75, .external_lex_state = 2},
  [86] = {.lex_state = 75, .external_lex_state = 2},
  [87] = {.lex_state = 75, .external_lex_state = 2},
  [88] = {.lex_state = 75, .external_lex_state = 2},
  [89] = {.lex_state = 75, .external_lex_state = 2},
  [90] = {.lex_state = 75, .external_lex_state = 2},
  [91] = {.lex_state = 75, .external_lex_state = 2},
  [92] = {.lex_state = 75, .external_lex_state = 2},
  [93] = {.lex_state = 75, .external_lex_state = 3},
  [94] = {.lex_state = 75, .external_lex_state = 2},
  [95] = {.lex_state = 75, .external_lex_state = 2},
  [96] = {.lex_state = 75, .external_lex_state = 3},
  [97] = {.lex_state = 75, .external_lex_state = 3},
  [98] = {.lex_state = 75, .external_lex_state = 2},
  [99] = {.lex_state = 75, .external_lex_state = 2},
  [100] = {.lex_state = 75, .external_lex_state = 2},
  [101] = {.lex_state = 75, .external_lex_state = 2},
  [102] = {.lex_state = 75, .external_lex_state = 2},
  [103] = {.lex_state = 75, .external_lex_state = 2},
  [104] = {.lex_state = 75, .external_lex_state = 2},
  [105] = {.lex_state = 75, .external_lex_state = 2},
  [106] = {.lex_state = 75, .external_lex_state = 2},
  [107] = {.lex_state = 75, .external_lex_state = 2},
  [108] = {.lex_state = 75, .external_lex_state = 2},
  [109] = {.lex_state = 75, .external_lex_state = 2},
  [110] = {.lex_state = 75, .external_lex_state = 2},
  [111] = {.lex_state = 75, .external_lex_state = 3},
  [112] = {.lex_state = 75, .external_lex_state = 3},
  [113] = {.lex_state = 75, .external_lex_state = 3},
  [114] = {.lex_state = 75, .external_lex_state = 3},
  [115] = {.lex_state = 75, .external_lex_state = 3},
  [116] = {.lex_state = 75, .external_lex_state = 3},
  [117] = {.lex_state = 75, .external_lex_state = 3},
  [118] = {.lex_state = 75, .external_lex_state = 3},
  [119] = {.lex_state = 75, .external_lex_state = 3},
  [120] = {.lex_state = 75, .external_lex_state = 3},
  [121] = {.lex_state = 75, .external_lex_state = 3},
  [122] = {.lex_state = 75, .external_lex_state = 3},
  [123] = {.lex_state = 75, .external_lex_state = 3},
  [124] = {.lex_state = 75, .external_lex_state = 3},
  [125] = {.lex_state = 75, .external_lex_state = 3},
  [126] = {.lex_state = 75, .external_lex_state = 3},
  [127] = {.lex_state = 75, .external_lex_state = 3},
  [128] = {.lex_state = 75, .external_lex_state = 3},
  [129] = {.lex_state = 75, .external_lex_state = 3},
  [130] = {.lex_state = 75, .external_lex_state = 3},
  [131] = {.lex_state = 75, .external_lex_state = 3},
  [132] = {.lex_state = 75, .external_lex_state = 3},
  [133] = {.lex_state = 75, .external_lex_state = 3},
  [134] = {.lex_state = 75, .external_lex_state = 3},
  [135] = {.lex_state = 75, .external_lex_state = 3},
  [136] = {.lex_state = 75, .external_lex_state = 3},
  [137] = {.lex_state = 75, .external_lex_state = 3},
  [138] = {.lex_state = 75, .external_lex_state = 3},
  [139] = {.lex_state = 75, .external_lex_state = 3},
  [140] = {.lex_state = 75, .external_lex_state = 3},
  [141] = {.lex_state = 75, .external_lex_state = 3},
  [142] = {.lex_state = 75, .external_lex_state = 3},
  [143] = {.lex_state = 75, .external_lex_state = 3},
  [144] = {.lex_state = 75, .external_lex_state = 3},
  [145] = {.lex_state = 75, .external_lex_state = 3},
  [146] = {.lex_state = 75, .external_lex_state = 3},
  [147] = {.lex_state = 75, .external_lex_state = 3},
  [148] = {.lex_state = 75, .external_lex_state = 3},
  [149] = {.lex_state = 75, .external_lex_state = 3},
  [150] = {.lex_state = 75, .external_lex_state = 3},
  [151] = {.lex_state = 75, .external_lex_state = 3},
  [152] = {.lex_state = 75, .external_lex_state = 3},
  [153] = {.lex_state = 75, .external_lex_state = 2},
  [154] = {.lex_state = 75, .external_lex_state = 2},
  [155] = {.lex_state = 75, .external_lex_state = 2},
  [156] = {.lex_state = 75, .external_lex_state = 2},
  [157] = {.lex_state = 75, .external_lex_state = 2},
  [158] = {.lex_state = 75, .external_lex_state = 2},
  [159] = {.lex_state = 75, .external_lex_state = 2},
  [160] = {.lex_state = 75, .external_lex_state = 2},
  [161] = {.lex_state = 75, .external_lex_state = 2},
  [162] = {.lex_state = 75, .external_lex_state = 2},
  [163] = {.lex_state = 75, .external_lex_state = 2},
  [164] = {.lex_state = 75, .external_lex_state = 3},
  [165] = {.lex_state = 75, .external_lex_state = 2},
  [166] = {.lex_state = 75, .external_lex_state = 2},
  [167] = {.lex_state = 75, .external_lex_state = 2},
  [168] = {.lex_state = 75, .external_lex_state = 2},
  [169] = {.lex_state = 75, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 75, .external_lex_state = 3},
  [174] = {.lex_state = 75, .external_lex_state = 3},
  [175] = {.lex_state = 75, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 3, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 3, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 3, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 3, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 3, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 4, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 4, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 4, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 4, .external_lex_state = 2},
  [205] = {.lex_state = 4, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 4, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 4, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 4, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 4, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 4, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 4, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 4, .external_lex_state = 2},
  [239] = {.lex_state = 4, .external_lex_state = 2},
  [240] = {.lex_state = 4, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 75, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 75, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 4, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 4, .external_lex_state = 2},
  [254] = {.lex_state = 4, .external_lex_state = 2},
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
    [anon_sym_and] = ACTIONS(1),
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
    [sym_module] = STATE(228),
    [sym__shebang] = STATE(9),
    [sym__sequence] = STATE(226),
    [sym_block] = STATE(148),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(73),
    [sym__exp] = STATE(73),
    [sym_await] = STATE(73),
    [sym_launch] = STATE(73),
    [sym_yield] = STATE(73),
    [sym_if] = STATE(73),
    [sym_fn] = STATE(73),
    [sym_loop] = STATE(73),
    [sym_for] = STATE(73),
    [sym_list] = STATE(73),
    [sym_map] = STATE(73),
    [sym_object] = STATE(73),
    [sym_assignment] = STATE(73),
    [sym_binary_exp] = STATE(73),
    [sym_unary_exp] = STATE(73),
    [sym_call] = STATE(73),
    [sym_property_exp] = STATE(73),
    [sym_bool] = STATE(73),
    [sym_string] = STATE(73),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_await] = ACTIONS(59),
    [anon_sym_launch] = ACTIONS(61),
    [anon_sym_yield] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_gen] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_loop] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [sym_null] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(113),
    [sym__exp] = STATE(113),
    [sym_await] = STATE(113),
    [sym_launch] = STATE(113),
    [sym_yield] = STATE(113),
    [sym_if] = STATE(113),
    [sym_fn] = STATE(113),
    [sym_loop] = STATE(113),
    [sym_for] = STATE(113),
    [sym_list] = STATE(113),
    [sym_map] = STATE(113),
    [sym_object] = STATE(113),
    [sym_assignment] = STATE(113),
    [sym_binary_exp] = STATE(113),
    [sym_unary_exp] = STATE(113),
    [sym_call] = STATE(113),
    [sym_property_exp] = STATE(113),
    [sym_bool] = STATE(113),
    [sym_string] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sequence] = STATE(245),
    [sym_block] = STATE(152),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(152),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
    [sym_await] = STATE(152),
    [sym_launch] = STATE(152),
    [sym_yield] = STATE(152),
    [sym_if] = STATE(152),
    [sym_fn] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_for] = STATE(152),
    [sym_list] = STATE(152),
    [sym_map] = STATE(152),
    [sym_object] = STATE(152),
    [sym_member] = STATE(188),
    [sym_assignment] = STATE(152),
    [sym_binary_exp] = STATE(152),
    [sym_unary_exp] = STATE(152),
    [sym_call] = STATE(152),
    [sym_property_exp] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_string] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(91),
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
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sequence] = STATE(232),
    [sym_block] = STATE(149),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(149),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [sym_member] = STATE(184),
    [sym_assignment] = STATE(149),
    [sym_binary_exp] = STATE(149),
    [sym_unary_exp] = STATE(149),
    [sym_call] = STATE(149),
    [sym_property_exp] = STATE(149),
    [sym_bool] = STATE(149),
    [sym_string] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(101),
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
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(95),
    [sym_number] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(148),
    [sym_statement] = STATE(193),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(107),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(148),
    [sym_statement] = STATE(193),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(109),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sequence] = STATE(245),
    [sym_block] = STATE(148),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [anon_sym_RBRACE] = ACTIONS(111),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sequence] = STATE(250),
    [sym_block] = STATE(148),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [ts_builtin_sym_end] = ACTIONS(113),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(232),
    [sym_block] = STATE(148),
    [sym_statement] = STATE(170),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [anon_sym_RBRACE] = ACTIONS(115),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_block] = STATE(148),
    [sym_statement] = STATE(193),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(148),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
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
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(119), 2,
      sym_number,
      sym_null,
    ACTIONS(117), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(151), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [84] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    ACTIONS(121), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(150), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [168] = 20,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_let,
      anon_sym_var,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(125), 2,
      sym_number,
      sym_null,
    STATE(126), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [253] = 20,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(131), 2,
      sym_number,
      sym_null,
    STATE(155), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [337] = 20,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(137), 2,
      sym_number,
      sym_null,
    STATE(159), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [421] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 2,
      sym_number,
      sym_null,
    STATE(168), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [502] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 2,
      sym_number,
      sym_null,
    STATE(168), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [583] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(156), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [664] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 2,
      sym_number,
      sym_null,
    STATE(168), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [745] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 2,
      sym_number,
      sym_null,
    STATE(157), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [826] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 2,
      sym_number,
      sym_null,
    STATE(157), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [907] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 2,
      sym_number,
      sym_null,
    STATE(168), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [988] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 2,
      sym_number,
      sym_null,
    STATE(157), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1069] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 2,
      sym_number,
      sym_null,
    STATE(157), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1150] = 19,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(165), 2,
      sym_number,
      sym_null,
    STATE(153), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1231] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(167), 2,
      sym_number,
      sym_null,
    STATE(167), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1309] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(169), 2,
      sym_number,
      sym_null,
    STATE(166), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1387] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(153), 2,
      sym_number,
      sym_null,
    STATE(157), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1465] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(171), 2,
      sym_number,
      sym_null,
    STATE(116), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1543] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(173), 2,
      sym_number,
      sym_null,
    STATE(117), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1621] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(175), 2,
      sym_number,
      sym_null,
    STATE(165), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1699] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(177), 2,
      sym_number,
      sym_null,
    STATE(105), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1777] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(179), 2,
      sym_number,
      sym_null,
    STATE(103), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1855] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(181), 2,
      sym_number,
      sym_null,
    STATE(102), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [1933] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(183), 2,
      sym_number,
      sym_null,
    STATE(101), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2011] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(185), 2,
      sym_number,
      sym_null,
    STATE(67), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2089] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(187), 2,
      sym_number,
      sym_null,
    STATE(98), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2167] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(189), 2,
      sym_number,
      sym_null,
    STATE(118), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2245] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(191), 2,
      sym_number,
      sym_null,
    STATE(78), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2323] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(193), 2,
      sym_number,
      sym_null,
    STATE(77), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2401] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(195), 2,
      sym_number,
      sym_null,
    STATE(160), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2479] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(141), 2,
      sym_number,
      sym_null,
    STATE(168), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2557] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(197), 2,
      sym_number,
      sym_null,
    STATE(163), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2635] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(199), 2,
      sym_number,
      sym_null,
    STATE(115), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2713] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(201), 2,
      sym_number,
      sym_null,
    STATE(71), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2791] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(203), 2,
      sym_number,
      sym_null,
    STATE(139), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2869] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(205), 2,
      sym_number,
      sym_null,
    STATE(72), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [2947] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(207), 2,
      sym_number,
      sym_null,
    STATE(164), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3025] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(209), 2,
      sym_number,
      sym_null,
    STATE(122), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3103] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(211), 2,
      sym_number,
      sym_null,
    STATE(158), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3181] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(213), 2,
      sym_number,
      sym_null,
    STATE(119), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3259] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(215), 2,
      sym_number,
      sym_null,
    STATE(111), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3337] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(217), 2,
      sym_number,
      sym_null,
    STATE(154), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3415] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(219), 2,
      sym_number,
      sym_null,
    STATE(147), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3493] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(221), 2,
      sym_number,
      sym_null,
    STATE(121), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3571] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(223), 2,
      sym_number,
      sym_null,
    STATE(161), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3649] = 18,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_await,
    ACTIONS(61), 1,
      anon_sym_launch,
    ACTIONS(63), 1,
      anon_sym_yield,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(225), 2,
      sym_number,
      sym_null,
    STATE(162), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3727] = 18,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_await,
    ACTIONS(25), 1,
      anon_sym_launch,
    ACTIONS(27), 1,
      anon_sym_yield,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_loop,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(125), 2,
      sym_number,
      sym_null,
    STATE(126), 19,
      sym_block,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_fn,
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
  [3805] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3840] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(233), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(231), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3875] = 5,
    ACTIONS(237), 1,
      anon_sym_else,
    ACTIONS(241), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(235), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3912] = 4,
    ACTIONS(247), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3946] = 5,
    ACTIONS(251), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3982] = 4,
    STATE(66), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(257), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4016] = 5,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(259), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4052] = 10,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [4097] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4128] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4159] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(292), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4190] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4237] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
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
  [4284] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(302), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4331] = 4,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4364] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(306), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4395] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4426] = 5,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(314), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4461] = 5,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(314), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4496] = 5,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(259), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4531] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4562] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4593] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4624] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(233), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(231), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4655] = 5,
    ACTIONS(333), 1,
      anon_sym_else,
    ACTIONS(335), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(235), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4690] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(337), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4721] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(343), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4752] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4783] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(349), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4814] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4845] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4876] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4907] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4938] = 5,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(243), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [4973] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5004] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(371), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5035] = 4,
    STATE(79), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(257), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5068] = 5,
    ACTIONS(375), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5103] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(377), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5150] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5181] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5212] = 9,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5255] = 8,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5296] = 6,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 15,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [5333] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(389), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5364] = 5,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5399] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(393), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5430] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5461] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5492] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5523] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5554] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(377), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5600] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5630] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(302), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5676] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(393), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5706] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
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
  [5752] = 5,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5786] = 6,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 14,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [5822] = 8,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 13,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5862] = 5,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(314), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5896] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(284), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5926] = 5,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(314), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5960] = 9,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 11,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6002] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(337), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6032] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6062] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6092] = 10,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(266), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [6136] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6166] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6196] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6226] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6256] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6286] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6316] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(349), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6346] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(292), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6376] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6406] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(306), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6436] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6466] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(343), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6496] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6542] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(389), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6572] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(371), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6602] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6632] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6662] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6692] = 3,
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
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6722] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6752] = 13,
    ACTIONS(413), 1,
      anon_sym_or,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(433), 1,
      anon_sym_and,
    ACTIONS(435), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(431), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6801] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(437), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6846] = 12,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(437), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6893] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(441), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6938] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(443), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6983] = 12,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(437), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7030] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7078] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7126] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7174] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7222] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(461), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7266] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7314] = 13,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7362] = 12,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7407] = 12,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7452] = 12,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7497] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(475), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7540] = 11,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_PERCENT,
    ACTIONS(429), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(421), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(419), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7583] = 12,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7628] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7670] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7712] = 11,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_PERCENT,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(298), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(272), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7754] = 4,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(169), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7771] = 5,
    STATE(6), 1,
      sym__sc,
    STATE(172), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(492), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7790] = 5,
    STATE(11), 1,
      sym__sc,
    STATE(171), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(496), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7809] = 5,
    STATE(7), 1,
      sym__sc,
    STATE(171), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(499), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7828] = 4,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(169), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(501), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7845] = 4,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(505), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7862] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7874] = 4,
    STATE(191), 1,
      aux_sym_object_repeat1,
    STATE(205), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7889] = 4,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(107), 2,
      sym_block,
      sym_if,
  [7904] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      sym_line_comment,
    STATE(185), 1,
      aux_sym_string_repeat1,
    ACTIONS(513), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7921] = 4,
    STATE(191), 1,
      aux_sym_object_repeat1,
    STATE(204), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(517), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7936] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      aux_sym_string_repeat1,
    ACTIONS(513), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7953] = 4,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(138), 2,
      sym_block,
      sym_if,
  [7968] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7979] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      aux_sym_string_repeat1,
    ACTIONS(527), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7996] = 4,
    STATE(176), 1,
      aux_sym_object_repeat1,
    STATE(202), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(529), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [8011] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      aux_sym_string_repeat1,
    ACTIONS(533), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [8028] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8039] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(538), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [8056] = 4,
    STATE(179), 1,
      aux_sym_object_repeat1,
    STATE(200), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(540), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [8071] = 4,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8086] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(545), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8097] = 4,
    STATE(191), 1,
      aux_sym_object_repeat1,
    STATE(219), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(547), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [8112] = 4,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym_block,
      sym_if,
  [8127] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8138] = 4,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(135), 2,
      sym_block,
      sym_if,
  [8153] = 4,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8167] = 4,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8181] = 4,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8195] = 4,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8209] = 4,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8223] = 4,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(218), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8237] = 3,
    STATE(190), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(570), 2,
      anon_sym_let,
      anon_sym_var,
  [8249] = 4,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8263] = 4,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8277] = 4,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8291] = 4,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8305] = 4,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8319] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8333] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8347] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8361] = 4,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8375] = 3,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8386] = 3,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8397] = 3,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8408] = 3,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8419] = 3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8430] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8439] = 3,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8450] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(604), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [8459] = 3,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(218), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8470] = 3,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8481] = 3,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8492] = 2,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8500] = 2,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8508] = 2,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8516] = 2,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8524] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8532] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8540] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8548] = 2,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8556] = 2,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8564] = 2,
    ACTIONS(618), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8572] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8580] = 2,
    ACTIONS(622), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8588] = 2,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8596] = 2,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8604] = 2,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8612] = 2,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8620] = 2,
    ACTIONS(632), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8628] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8636] = 2,
    ACTIONS(636), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8644] = 2,
    ACTIONS(638), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8652] = 2,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8660] = 2,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8668] = 2,
    ACTIONS(642), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8676] = 2,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8684] = 2,
    ACTIONS(646), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8692] = 2,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8700] = 2,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8708] = 2,
    ACTIONS(652), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8716] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8724] = 2,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8732] = 2,
    ACTIONS(656), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8740] = 2,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8748] = 2,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 337,
  [SMALL_STATE(17)] = 421,
  [SMALL_STATE(18)] = 502,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 664,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 907,
  [SMALL_STATE(24)] = 988,
  [SMALL_STATE(25)] = 1069,
  [SMALL_STATE(26)] = 1150,
  [SMALL_STATE(27)] = 1231,
  [SMALL_STATE(28)] = 1309,
  [SMALL_STATE(29)] = 1387,
  [SMALL_STATE(30)] = 1465,
  [SMALL_STATE(31)] = 1543,
  [SMALL_STATE(32)] = 1621,
  [SMALL_STATE(33)] = 1699,
  [SMALL_STATE(34)] = 1777,
  [SMALL_STATE(35)] = 1855,
  [SMALL_STATE(36)] = 1933,
  [SMALL_STATE(37)] = 2011,
  [SMALL_STATE(38)] = 2089,
  [SMALL_STATE(39)] = 2167,
  [SMALL_STATE(40)] = 2245,
  [SMALL_STATE(41)] = 2323,
  [SMALL_STATE(42)] = 2401,
  [SMALL_STATE(43)] = 2479,
  [SMALL_STATE(44)] = 2557,
  [SMALL_STATE(45)] = 2635,
  [SMALL_STATE(46)] = 2713,
  [SMALL_STATE(47)] = 2791,
  [SMALL_STATE(48)] = 2869,
  [SMALL_STATE(49)] = 2947,
  [SMALL_STATE(50)] = 3025,
  [SMALL_STATE(51)] = 3103,
  [SMALL_STATE(52)] = 3181,
  [SMALL_STATE(53)] = 3259,
  [SMALL_STATE(54)] = 3337,
  [SMALL_STATE(55)] = 3415,
  [SMALL_STATE(56)] = 3493,
  [SMALL_STATE(57)] = 3571,
  [SMALL_STATE(58)] = 3649,
  [SMALL_STATE(59)] = 3727,
  [SMALL_STATE(60)] = 3805,
  [SMALL_STATE(61)] = 3840,
  [SMALL_STATE(62)] = 3875,
  [SMALL_STATE(63)] = 3912,
  [SMALL_STATE(64)] = 3946,
  [SMALL_STATE(65)] = 3982,
  [SMALL_STATE(66)] = 4016,
  [SMALL_STATE(67)] = 4052,
  [SMALL_STATE(68)] = 4097,
  [SMALL_STATE(69)] = 4128,
  [SMALL_STATE(70)] = 4159,
  [SMALL_STATE(71)] = 4190,
  [SMALL_STATE(72)] = 4237,
  [SMALL_STATE(73)] = 4284,
  [SMALL_STATE(74)] = 4331,
  [SMALL_STATE(75)] = 4364,
  [SMALL_STATE(76)] = 4395,
  [SMALL_STATE(77)] = 4426,
  [SMALL_STATE(78)] = 4461,
  [SMALL_STATE(79)] = 4496,
  [SMALL_STATE(80)] = 4531,
  [SMALL_STATE(81)] = 4562,
  [SMALL_STATE(82)] = 4593,
  [SMALL_STATE(83)] = 4624,
  [SMALL_STATE(84)] = 4655,
  [SMALL_STATE(85)] = 4690,
  [SMALL_STATE(86)] = 4721,
  [SMALL_STATE(87)] = 4752,
  [SMALL_STATE(88)] = 4783,
  [SMALL_STATE(89)] = 4814,
  [SMALL_STATE(90)] = 4845,
  [SMALL_STATE(91)] = 4876,
  [SMALL_STATE(92)] = 4907,
  [SMALL_STATE(93)] = 4938,
  [SMALL_STATE(94)] = 4973,
  [SMALL_STATE(95)] = 5004,
  [SMALL_STATE(96)] = 5035,
  [SMALL_STATE(97)] = 5068,
  [SMALL_STATE(98)] = 5103,
  [SMALL_STATE(99)] = 5150,
  [SMALL_STATE(100)] = 5181,
  [SMALL_STATE(101)] = 5212,
  [SMALL_STATE(102)] = 5255,
  [SMALL_STATE(103)] = 5296,
  [SMALL_STATE(104)] = 5333,
  [SMALL_STATE(105)] = 5364,
  [SMALL_STATE(106)] = 5399,
  [SMALL_STATE(107)] = 5430,
  [SMALL_STATE(108)] = 5461,
  [SMALL_STATE(109)] = 5492,
  [SMALL_STATE(110)] = 5523,
  [SMALL_STATE(111)] = 5554,
  [SMALL_STATE(112)] = 5600,
  [SMALL_STATE(113)] = 5630,
  [SMALL_STATE(114)] = 5676,
  [SMALL_STATE(115)] = 5706,
  [SMALL_STATE(116)] = 5752,
  [SMALL_STATE(117)] = 5786,
  [SMALL_STATE(118)] = 5822,
  [SMALL_STATE(119)] = 5862,
  [SMALL_STATE(120)] = 5896,
  [SMALL_STATE(121)] = 5926,
  [SMALL_STATE(122)] = 5960,
  [SMALL_STATE(123)] = 6002,
  [SMALL_STATE(124)] = 6032,
  [SMALL_STATE(125)] = 6062,
  [SMALL_STATE(126)] = 6092,
  [SMALL_STATE(127)] = 6136,
  [SMALL_STATE(128)] = 6166,
  [SMALL_STATE(129)] = 6196,
  [SMALL_STATE(130)] = 6226,
  [SMALL_STATE(131)] = 6256,
  [SMALL_STATE(132)] = 6286,
  [SMALL_STATE(133)] = 6316,
  [SMALL_STATE(134)] = 6346,
  [SMALL_STATE(135)] = 6376,
  [SMALL_STATE(136)] = 6406,
  [SMALL_STATE(137)] = 6436,
  [SMALL_STATE(138)] = 6466,
  [SMALL_STATE(139)] = 6496,
  [SMALL_STATE(140)] = 6542,
  [SMALL_STATE(141)] = 6572,
  [SMALL_STATE(142)] = 6602,
  [SMALL_STATE(143)] = 6632,
  [SMALL_STATE(144)] = 6662,
  [SMALL_STATE(145)] = 6692,
  [SMALL_STATE(146)] = 6722,
  [SMALL_STATE(147)] = 6752,
  [SMALL_STATE(148)] = 6801,
  [SMALL_STATE(149)] = 6846,
  [SMALL_STATE(150)] = 6893,
  [SMALL_STATE(151)] = 6938,
  [SMALL_STATE(152)] = 6983,
  [SMALL_STATE(153)] = 7030,
  [SMALL_STATE(154)] = 7078,
  [SMALL_STATE(155)] = 7126,
  [SMALL_STATE(156)] = 7174,
  [SMALL_STATE(157)] = 7222,
  [SMALL_STATE(158)] = 7266,
  [SMALL_STATE(159)] = 7314,
  [SMALL_STATE(160)] = 7362,
  [SMALL_STATE(161)] = 7407,
  [SMALL_STATE(162)] = 7452,
  [SMALL_STATE(163)] = 7497,
  [SMALL_STATE(164)] = 7540,
  [SMALL_STATE(165)] = 7583,
  [SMALL_STATE(166)] = 7628,
  [SMALL_STATE(167)] = 7670,
  [SMALL_STATE(168)] = 7712,
  [SMALL_STATE(169)] = 7754,
  [SMALL_STATE(170)] = 7771,
  [SMALL_STATE(171)] = 7790,
  [SMALL_STATE(172)] = 7809,
  [SMALL_STATE(173)] = 7828,
  [SMALL_STATE(174)] = 7845,
  [SMALL_STATE(175)] = 7862,
  [SMALL_STATE(176)] = 7874,
  [SMALL_STATE(177)] = 7889,
  [SMALL_STATE(178)] = 7904,
  [SMALL_STATE(179)] = 7921,
  [SMALL_STATE(180)] = 7936,
  [SMALL_STATE(181)] = 7953,
  [SMALL_STATE(182)] = 7968,
  [SMALL_STATE(183)] = 7979,
  [SMALL_STATE(184)] = 7996,
  [SMALL_STATE(185)] = 8011,
  [SMALL_STATE(186)] = 8028,
  [SMALL_STATE(187)] = 8039,
  [SMALL_STATE(188)] = 8056,
  [SMALL_STATE(189)] = 8071,
  [SMALL_STATE(190)] = 8086,
  [SMALL_STATE(191)] = 8097,
  [SMALL_STATE(192)] = 8112,
  [SMALL_STATE(193)] = 8127,
  [SMALL_STATE(194)] = 8138,
  [SMALL_STATE(195)] = 8153,
  [SMALL_STATE(196)] = 8167,
  [SMALL_STATE(197)] = 8181,
  [SMALL_STATE(198)] = 8195,
  [SMALL_STATE(199)] = 8209,
  [SMALL_STATE(200)] = 8223,
  [SMALL_STATE(201)] = 8237,
  [SMALL_STATE(202)] = 8249,
  [SMALL_STATE(203)] = 8263,
  [SMALL_STATE(204)] = 8277,
  [SMALL_STATE(205)] = 8291,
  [SMALL_STATE(206)] = 8305,
  [SMALL_STATE(207)] = 8319,
  [SMALL_STATE(208)] = 8333,
  [SMALL_STATE(209)] = 8347,
  [SMALL_STATE(210)] = 8361,
  [SMALL_STATE(211)] = 8375,
  [SMALL_STATE(212)] = 8386,
  [SMALL_STATE(213)] = 8397,
  [SMALL_STATE(214)] = 8408,
  [SMALL_STATE(215)] = 8419,
  [SMALL_STATE(216)] = 8430,
  [SMALL_STATE(217)] = 8439,
  [SMALL_STATE(218)] = 8450,
  [SMALL_STATE(219)] = 8459,
  [SMALL_STATE(220)] = 8470,
  [SMALL_STATE(221)] = 8481,
  [SMALL_STATE(222)] = 8492,
  [SMALL_STATE(223)] = 8500,
  [SMALL_STATE(224)] = 8508,
  [SMALL_STATE(225)] = 8516,
  [SMALL_STATE(226)] = 8524,
  [SMALL_STATE(227)] = 8532,
  [SMALL_STATE(228)] = 8540,
  [SMALL_STATE(229)] = 8548,
  [SMALL_STATE(230)] = 8556,
  [SMALL_STATE(231)] = 8564,
  [SMALL_STATE(232)] = 8572,
  [SMALL_STATE(233)] = 8580,
  [SMALL_STATE(234)] = 8588,
  [SMALL_STATE(235)] = 8596,
  [SMALL_STATE(236)] = 8604,
  [SMALL_STATE(237)] = 8612,
  [SMALL_STATE(238)] = 8620,
  [SMALL_STATE(239)] = 8628,
  [SMALL_STATE(240)] = 8636,
  [SMALL_STATE(241)] = 8644,
  [SMALL_STATE(242)] = 8652,
  [SMALL_STATE(243)] = 8660,
  [SMALL_STATE(244)] = 8668,
  [SMALL_STATE(245)] = 8676,
  [SMALL_STATE(246)] = 8684,
  [SMALL_STATE(247)] = 8692,
  [SMALL_STATE(248)] = 8700,
  [SMALL_STATE(249)] = 8708,
  [SMALL_STATE(250)] = 8716,
  [SMALL_STATE(251)] = 8724,
  [SMALL_STATE(252)] = 8732,
  [SMALL_STATE(253)] = 8740,
  [SMALL_STATE(254)] = 8748,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(236),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(227),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(239),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(11),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(185),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, .production_id = 3),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(219),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(43),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(251),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [614] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
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
