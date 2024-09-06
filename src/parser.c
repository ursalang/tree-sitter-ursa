#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 244
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 21,
  [22] = 19,
  [23] = 18,
  [24] = 21,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 28,
  [36] = 31,
  [37] = 37,
  [38] = 33,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 29,
  [50] = 50,
  [51] = 42,
  [52] = 52,
  [53] = 40,
  [54] = 27,
  [55] = 55,
  [56] = 41,
  [57] = 55,
  [58] = 30,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 61,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 63,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 64,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 65,
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
  [106] = 106,
  [107] = 60,
  [108] = 59,
  [109] = 75,
  [110] = 70,
  [111] = 88,
  [112] = 101,
  [113] = 91,
  [114] = 98,
  [115] = 106,
  [116] = 69,
  [117] = 104,
  [118] = 80,
  [119] = 103,
  [120] = 102,
  [121] = 66,
  [122] = 86,
  [123] = 78,
  [124] = 85,
  [125] = 84,
  [126] = 77,
  [127] = 83,
  [128] = 81,
  [129] = 92,
  [130] = 93,
  [131] = 90,
  [132] = 105,
  [133] = 97,
  [134] = 99,
  [135] = 89,
  [136] = 73,
  [137] = 72,
  [138] = 71,
  [139] = 96,
  [140] = 74,
  [141] = 67,
  [142] = 100,
  [143] = 94,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 150,
  [154] = 151,
  [155] = 155,
  [156] = 155,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 157,
  [161] = 161,
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 166,
  [167] = 167,
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
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 180,
  [184] = 175,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 186,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 192,
  [196] = 196,
  [197] = 196,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 208,
  [210] = 205,
  [211] = 211,
  [212] = 212,
  [213] = 207,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 222,
  [223] = 223,
  [224] = 215,
  [225] = 225,
  [226] = 216,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 232,
  [236] = 234,
  [237] = 222,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 230,
  [243] = 233,
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(199);
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
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(198);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(109);
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
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(96);
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
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(102);
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
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(205);
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
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(98);
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
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(84);
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
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(100);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(214);
      if (lookahead != 0) ADVANCE(212);
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
      if (lookahead == '}') ADVANCE(212);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(199);
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
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(200);
      END_STATE();
    case 72:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(163);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(198);
      END_STATE();
    case 73:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(163);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(198);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(163);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(198);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(163);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(198);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(198);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(180);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(177);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(177);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(198);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(161);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(105);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(127);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(107);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(103);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(190);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(95);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(112);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(147);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(191);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(168);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(115);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(152);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(154);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(194);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(185);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(147);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(198);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 2},
  [3] = {.lex_state = 72, .external_lex_state = 3},
  [4] = {.lex_state = 76, .external_lex_state = 2},
  [5] = {.lex_state = 76, .external_lex_state = 2},
  [6] = {.lex_state = 76, .external_lex_state = 2},
  [7] = {.lex_state = 76, .external_lex_state = 2},
  [8] = {.lex_state = 76, .external_lex_state = 2},
  [9] = {.lex_state = 76, .external_lex_state = 2},
  [10] = {.lex_state = 76, .external_lex_state = 2},
  [11] = {.lex_state = 76, .external_lex_state = 2},
  [12] = {.lex_state = 77, .external_lex_state = 3},
  [13] = {.lex_state = 77, .external_lex_state = 3},
  [14] = {.lex_state = 77, .external_lex_state = 2},
  [15] = {.lex_state = 77, .external_lex_state = 2},
  [16] = {.lex_state = 77, .external_lex_state = 2},
  [17] = {.lex_state = 77, .external_lex_state = 2},
  [18] = {.lex_state = 77, .external_lex_state = 2},
  [19] = {.lex_state = 77, .external_lex_state = 2},
  [20] = {.lex_state = 77, .external_lex_state = 2},
  [21] = {.lex_state = 77, .external_lex_state = 2},
  [22] = {.lex_state = 77, .external_lex_state = 2},
  [23] = {.lex_state = 77, .external_lex_state = 2},
  [24] = {.lex_state = 77, .external_lex_state = 2},
  [25] = {.lex_state = 77, .external_lex_state = 2},
  [26] = {.lex_state = 77, .external_lex_state = 2},
  [27] = {.lex_state = 77, .external_lex_state = 2},
  [28] = {.lex_state = 77, .external_lex_state = 2},
  [29] = {.lex_state = 77, .external_lex_state = 2},
  [30] = {.lex_state = 77, .external_lex_state = 2},
  [31] = {.lex_state = 77, .external_lex_state = 2},
  [32] = {.lex_state = 77, .external_lex_state = 2},
  [33] = {.lex_state = 77, .external_lex_state = 2},
  [34] = {.lex_state = 77, .external_lex_state = 2},
  [35] = {.lex_state = 77, .external_lex_state = 2},
  [36] = {.lex_state = 77, .external_lex_state = 2},
  [37] = {.lex_state = 77, .external_lex_state = 2},
  [38] = {.lex_state = 77, .external_lex_state = 2},
  [39] = {.lex_state = 77, .external_lex_state = 2},
  [40] = {.lex_state = 77, .external_lex_state = 2},
  [41] = {.lex_state = 77, .external_lex_state = 2},
  [42] = {.lex_state = 77, .external_lex_state = 2},
  [43] = {.lex_state = 77, .external_lex_state = 2},
  [44] = {.lex_state = 77, .external_lex_state = 2},
  [45] = {.lex_state = 77, .external_lex_state = 2},
  [46] = {.lex_state = 77, .external_lex_state = 2},
  [47] = {.lex_state = 77, .external_lex_state = 2},
  [48] = {.lex_state = 77, .external_lex_state = 2},
  [49] = {.lex_state = 77, .external_lex_state = 2},
  [50] = {.lex_state = 77, .external_lex_state = 2},
  [51] = {.lex_state = 77, .external_lex_state = 2},
  [52] = {.lex_state = 77, .external_lex_state = 2},
  [53] = {.lex_state = 77, .external_lex_state = 2},
  [54] = {.lex_state = 77, .external_lex_state = 2},
  [55] = {.lex_state = 77, .external_lex_state = 2},
  [56] = {.lex_state = 77, .external_lex_state = 2},
  [57] = {.lex_state = 77, .external_lex_state = 2},
  [58] = {.lex_state = 77, .external_lex_state = 2},
  [59] = {.lex_state = 74, .external_lex_state = 2},
  [60] = {.lex_state = 74, .external_lex_state = 2},
  [61] = {.lex_state = 74, .external_lex_state = 2},
  [62] = {.lex_state = 74, .external_lex_state = 2},
  [63] = {.lex_state = 74, .external_lex_state = 2},
  [64] = {.lex_state = 74, .external_lex_state = 2},
  [65] = {.lex_state = 74, .external_lex_state = 2},
  [66] = {.lex_state = 74, .external_lex_state = 2},
  [67] = {.lex_state = 74, .external_lex_state = 2},
  [68] = {.lex_state = 74, .external_lex_state = 3},
  [69] = {.lex_state = 74, .external_lex_state = 2},
  [70] = {.lex_state = 74, .external_lex_state = 2},
  [71] = {.lex_state = 74, .external_lex_state = 2},
  [72] = {.lex_state = 74, .external_lex_state = 2},
  [73] = {.lex_state = 74, .external_lex_state = 2},
  [74] = {.lex_state = 74, .external_lex_state = 2},
  [75] = {.lex_state = 74, .external_lex_state = 2},
  [76] = {.lex_state = 74, .external_lex_state = 3},
  [77] = {.lex_state = 74, .external_lex_state = 2},
  [78] = {.lex_state = 74, .external_lex_state = 2},
  [79] = {.lex_state = 74, .external_lex_state = 3},
  [80] = {.lex_state = 74, .external_lex_state = 2},
  [81] = {.lex_state = 74, .external_lex_state = 2},
  [82] = {.lex_state = 74, .external_lex_state = 3},
  [83] = {.lex_state = 74, .external_lex_state = 2},
  [84] = {.lex_state = 74, .external_lex_state = 2},
  [85] = {.lex_state = 74, .external_lex_state = 2},
  [86] = {.lex_state = 74, .external_lex_state = 2},
  [87] = {.lex_state = 74, .external_lex_state = 3},
  [88] = {.lex_state = 74, .external_lex_state = 2},
  [89] = {.lex_state = 74, .external_lex_state = 2},
  [90] = {.lex_state = 74, .external_lex_state = 2},
  [91] = {.lex_state = 74, .external_lex_state = 2},
  [92] = {.lex_state = 74, .external_lex_state = 2},
  [93] = {.lex_state = 74, .external_lex_state = 2},
  [94] = {.lex_state = 74, .external_lex_state = 2},
  [95] = {.lex_state = 74, .external_lex_state = 3},
  [96] = {.lex_state = 74, .external_lex_state = 2},
  [97] = {.lex_state = 74, .external_lex_state = 2},
  [98] = {.lex_state = 74, .external_lex_state = 2},
  [99] = {.lex_state = 74, .external_lex_state = 2},
  [100] = {.lex_state = 74, .external_lex_state = 2},
  [101] = {.lex_state = 74, .external_lex_state = 2},
  [102] = {.lex_state = 74, .external_lex_state = 2},
  [103] = {.lex_state = 74, .external_lex_state = 2},
  [104] = {.lex_state = 74, .external_lex_state = 2},
  [105] = {.lex_state = 74, .external_lex_state = 2},
  [106] = {.lex_state = 74, .external_lex_state = 2},
  [107] = {.lex_state = 74, .external_lex_state = 3},
  [108] = {.lex_state = 74, .external_lex_state = 3},
  [109] = {.lex_state = 74, .external_lex_state = 3},
  [110] = {.lex_state = 74, .external_lex_state = 3},
  [111] = {.lex_state = 74, .external_lex_state = 3},
  [112] = {.lex_state = 74, .external_lex_state = 3},
  [113] = {.lex_state = 74, .external_lex_state = 3},
  [114] = {.lex_state = 74, .external_lex_state = 3},
  [115] = {.lex_state = 74, .external_lex_state = 3},
  [116] = {.lex_state = 74, .external_lex_state = 3},
  [117] = {.lex_state = 74, .external_lex_state = 3},
  [118] = {.lex_state = 74, .external_lex_state = 3},
  [119] = {.lex_state = 74, .external_lex_state = 3},
  [120] = {.lex_state = 74, .external_lex_state = 3},
  [121] = {.lex_state = 74, .external_lex_state = 3},
  [122] = {.lex_state = 74, .external_lex_state = 3},
  [123] = {.lex_state = 74, .external_lex_state = 3},
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
  [150] = {.lex_state = 74, .external_lex_state = 2},
  [151] = {.lex_state = 74, .external_lex_state = 2},
  [152] = {.lex_state = 74, .external_lex_state = 2},
  [153] = {.lex_state = 74, .external_lex_state = 2},
  [154] = {.lex_state = 74, .external_lex_state = 2},
  [155] = {.lex_state = 74, .external_lex_state = 2},
  [156] = {.lex_state = 74, .external_lex_state = 2},
  [157] = {.lex_state = 74, .external_lex_state = 2},
  [158] = {.lex_state = 74, .external_lex_state = 2},
  [159] = {.lex_state = 74, .external_lex_state = 2},
  [160] = {.lex_state = 74, .external_lex_state = 2},
  [161] = {.lex_state = 74, .external_lex_state = 3},
  [162] = {.lex_state = 74, .external_lex_state = 2},
  [163] = {.lex_state = 74, .external_lex_state = 2},
  [164] = {.lex_state = 74, .external_lex_state = 2},
  [165] = {.lex_state = 74, .external_lex_state = 2},
  [166] = {.lex_state = 74, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 74, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 74, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 74, .external_lex_state = 3},
  [173] = {.lex_state = 2, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 2, .external_lex_state = 2},
  [181] = {.lex_state = 2, .external_lex_state = 2},
  [182] = {.lex_state = 2, .external_lex_state = 2},
  [183] = {.lex_state = 2, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 3, .external_lex_state = 2},
  [189] = {.lex_state = 3, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 3, .external_lex_state = 2},
  [192] = {.lex_state = 3, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 3, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 3, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 3, .external_lex_state = 2},
  [212] = {.lex_state = 3, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 3, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 3, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 3, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 3, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 3, .external_lex_state = 2},
  [224] = {.lex_state = 3, .external_lex_state = 2},
  [225] = {.lex_state = 3, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 3, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 3, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 3, .external_lex_state = 2},
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
    [sym_module] = STATE(220),
    [sym__shebang] = STATE(10),
    [sym__sequence] = STATE(229),
    [sym_block] = STATE(144),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
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
    [sym_block] = STATE(102),
    [sym__exp] = STATE(102),
    [sym_await] = STATE(102),
    [sym_launch] = STATE(102),
    [sym_yield] = STATE(102),
    [sym_if] = STATE(102),
    [sym_fn] = STATE(102),
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
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(53),
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
    [anon_sym_and] = ACTIONS(55),
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
    [sym_block] = STATE(120),
    [sym__exp] = STATE(120),
    [sym_await] = STATE(120),
    [sym_launch] = STATE(120),
    [sym_yield] = STATE(120),
    [sym_if] = STATE(120),
    [sym_fn] = STATE(120),
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
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(53),
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
    [anon_sym_and] = ACTIONS(55),
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
    [sym__sequence] = STATE(232),
    [sym_block] = STATE(149),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(149),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
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
    [sym_member] = STATE(177),
    [sym_assignment] = STATE(149),
    [sym_binary_exp] = STATE(149),
    [sym_unary_exp] = STATE(149),
    [sym_call] = STATE(149),
    [sym_property_exp] = STATE(149),
    [sym_bool] = STATE(149),
    [sym_string] = STATE(149),
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
    [sym__sequence] = STATE(235),
    [sym_block] = STATE(147),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(147),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
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
    [sym_member] = STATE(179),
    [sym_assignment] = STATE(147),
    [sym_binary_exp] = STATE(147),
    [sym_unary_exp] = STATE(147),
    [sym_call] = STATE(147),
    [sym_property_exp] = STATE(147),
    [sym_bool] = STATE(147),
    [sym_string] = STATE(147),
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
    [sym_block] = STATE(144),
    [sym_statement] = STATE(185),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
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
    [sym_block] = STATE(144),
    [sym_statement] = STATE(185),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
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
    [sym__sequence] = STATE(232),
    [sym_block] = STATE(144),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
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
    [sym__sequence] = STATE(235),
    [sym_block] = STATE(144),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(113),
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
    [sym__sequence] = STATE(218),
    [sym_block] = STATE(144),
    [sym_statement] = STATE(167),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(115),
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
  [11] = {
    [sym_block] = STATE(144),
    [sym_statement] = STATE(185),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(144),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(144),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(144),
    [sym_map] = STATE(144),
    [sym_object] = STATE(144),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(144),
    [sym_property_exp] = STATE(144),
    [sym_bool] = STATE(144),
    [sym_string] = STATE(144),
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
    STATE(148), 19,
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
    STATE(146), 19,
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
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
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
    ACTIONS(129), 2,
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
  [252] = 20,
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
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
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
    ACTIONS(135), 2,
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
  [336] = 19,
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
    ACTIONS(137), 1,
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
    ACTIONS(139), 2,
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
  [417] = 19,
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
    ACTIONS(141), 1,
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
    ACTIONS(143), 2,
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
  [498] = 19,
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
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(152), 19,
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
  [579] = 19,
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
    ACTIONS(139), 2,
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
  [660] = 19,
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
    ACTIONS(139), 2,
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
  [741] = 19,
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
    ACTIONS(153), 1,
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
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(152), 19,
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
  [822] = 19,
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
    ACTIONS(139), 2,
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
  [903] = 19,
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
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(152), 19,
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
  [984] = 19,
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
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(152), 19,
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
  [1065] = 19,
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
    ACTIONS(163), 2,
      sym_number,
      sym_null,
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
  [1146] = 18,
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
    ACTIONS(165), 2,
      sym_number,
      sym_null,
    STATE(85), 19,
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
  [1224] = 18,
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
    STATE(99), 19,
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
  [1302] = 18,
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
    ACTIONS(169), 2,
      sym_number,
      sym_null,
    STATE(127), 19,
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
  [1380] = 18,
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
    ACTIONS(171), 2,
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
  [1458] = 18,
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
    ACTIONS(173), 2,
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
  [1536] = 18,
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
    ACTIONS(175), 2,
      sym_number,
      sym_null,
    STATE(125), 19,
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
  [1614] = 18,
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
    ACTIONS(177), 2,
      sym_number,
      sym_null,
    STATE(124), 19,
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
  [1692] = 18,
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
    ACTIONS(179), 2,
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
  [1770] = 18,
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
    ACTIONS(181), 2,
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
  [1848] = 18,
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
    STATE(83), 19,
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
  [1926] = 18,
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
    STATE(84), 19,
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
  [2004] = 18,
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
    ACTIONS(187), 2,
      sym_number,
      sym_null,
    STATE(145), 19,
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
  [2082] = 18,
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
    ACTIONS(189), 2,
      sym_number,
      sym_null,
    STATE(86), 19,
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
  [2160] = 18,
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
    STATE(66), 19,
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
  [2238] = 18,
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
    STATE(90), 19,
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
  [2316] = 18,
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
  [2394] = 18,
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
  [2472] = 18,
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
    ACTIONS(199), 2,
      sym_number,
      sym_null,
    STATE(104), 19,
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
  [2550] = 18,
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
    ACTIONS(201), 2,
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
  [2628] = 18,
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
  [2706] = 18,
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
    ACTIONS(139), 2,
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
  [2784] = 18,
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
  [2862] = 18,
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
    ACTIONS(207), 2,
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
  [2940] = 18,
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
    ACTIONS(209), 2,
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
  [3018] = 18,
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
    ACTIONS(147), 2,
      sym_number,
      sym_null,
    STATE(152), 19,
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
  [3096] = 18,
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
    ACTIONS(211), 2,
      sym_number,
      sym_null,
    STATE(114), 19,
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
  [3174] = 18,
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
  [3252] = 18,
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
    STATE(131), 19,
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
  [3330] = 18,
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
    ACTIONS(217), 2,
      sym_number,
      sym_null,
    STATE(134), 19,
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
  [3408] = 18,
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
    ACTIONS(219), 2,
      sym_number,
      sym_null,
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
  [3486] = 18,
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
    ACTIONS(221), 2,
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
  [3564] = 18,
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
  [3642] = 18,
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
  [3720] = 4,
    STATE(60), 1,
      aux_sym_property_exp_repeat1,
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
  [3754] = 5,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(231), 17,
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
  [3790] = 4,
    ACTIONS(242), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 17,
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
  [3824] = 3,
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
  [3856] = 4,
    ACTIONS(250), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 18,
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
  [3890] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(254), 19,
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
  [3922] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 17,
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
  [3958] = 10,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [4003] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(282), 18,
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
  [4034] = 4,
    ACTIONS(286), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 16,
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
  [4067] = 3,
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
  [4098] = 3,
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
  [4129] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 18,
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
  [4160] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 18,
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
  [4191] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 18,
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
  [4222] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(308), 18,
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
  [4253] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(312), 18,
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
  [4284] = 3,
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
  [4315] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(316), 18,
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
  [4346] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 18,
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
  [4377] = 5,
    ACTIONS(286), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 15,
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
  [4412] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(326), 18,
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
  [4443] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(332), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(330), 18,
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
  [4474] = 4,
    ACTIONS(334), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 17,
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
  [4507] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 16,
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
  [4542] = 6,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 15,
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
  [4579] = 8,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 14,
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
  [4620] = 9,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 12,
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
  [4663] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(254), 18,
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
  [4694] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(338), 18,
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
  [4725] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(344), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(342), 18,
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
  [4756] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(346), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4803] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(352), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(350), 18,
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
  [4834] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(354), 18,
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
  [4865] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 18,
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
  [4896] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 18,
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
  [4927] = 5,
    ACTIONS(366), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 16,
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
  [4962] = 3,
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
  [4993] = 3,
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
  [5024] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 16,
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
  [5059] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 16,
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
  [5094] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 18,
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
  [5125] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(384), 18,
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
  [5156] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(388), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5203] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(390), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5250] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(392), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5297] = 3,
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
  [5328] = 3,
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
  [5359] = 5,
    ACTIONS(402), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(231), 16,
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
  [5394] = 4,
    STATE(107), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 17,
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
  [5427] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(312), 17,
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
  [5457] = 3,
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
  [5487] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(338), 17,
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
  [5517] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(384), 17,
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
  [5547] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(352), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(350), 17,
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
  [5577] = 5,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 15,
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
  [5611] = 3,
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
  [5641] = 3,
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
  [5671] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(392), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5717] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(326), 17,
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
  [5747] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(390), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5793] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(388), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [5839] = 10,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [5883] = 9,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 11,
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
  [5925] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(320), 17,
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
  [5955] = 8,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 13,
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
  [5995] = 6,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 14,
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
  [6031] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(316), 17,
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
  [6061] = 5,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 15,
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
  [6095] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(332), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(330), 17,
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
  [6125] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(354), 17,
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
  [6155] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 17,
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
  [6185] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(346), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6231] = 3,
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
  [6261] = 3,
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
  [6291] = 5,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 15,
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
  [6325] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(344), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(342), 17,
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
  [6355] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 17,
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
  [6385] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 17,
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
  [6415] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 17,
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
  [6445] = 3,
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
  [6475] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(308), 17,
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
  [6505] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(282), 17,
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
  [6535] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 17,
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
  [6565] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 17,
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
  [6595] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(423), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6640] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(425), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6685] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(427), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6730] = 12,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6777] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6822] = 12,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6869] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6917] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6965] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(443), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7009] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7057] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7105] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7153] = 13,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7201] = 12,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7246] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(461), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7289] = 12,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7334] = 12,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7379] = 11,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_PERCENT,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(413), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(465), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(411), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7422] = 12,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7467] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7509] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7551] = 11,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_PERCENT,
    ACTIONS(280), 1,
      anon_sym_STAR_STAR,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(270), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7593] = 4,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7610] = 5,
    STATE(6), 1,
      sym__sc,
    STATE(169), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(479), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7629] = 4,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(481), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7646] = 5,
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
    ACTIONS(483), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7665] = 4,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7682] = 5,
    STATE(11), 1,
      sym__sc,
    STATE(171), 1,
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
  [7701] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7713] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      sym_line_comment,
    STATE(173), 1,
      aux_sym_string_repeat1,
    ACTIONS(497), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7730] = 4,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7745] = 4,
    STATE(176), 1,
      aux_sym_object_repeat1,
    STATE(188), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(505), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7760] = 4,
    STATE(176), 1,
      aux_sym_object_repeat1,
    STATE(206), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7775] = 4,
    STATE(184), 1,
      aux_sym_object_repeat1,
    STATE(192), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(510), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7790] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7801] = 4,
    STATE(175), 1,
      aux_sym_object_repeat1,
    STATE(195), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7816] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym_string_repeat1,
    ACTIONS(516), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7833] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_string_repeat1,
    ACTIONS(520), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7850] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_string_repeat1,
    ACTIONS(520), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7867] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      aux_sym_string_repeat1,
    ACTIONS(526), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [7884] = 4,
    STATE(176), 1,
      aux_sym_object_repeat1,
    STATE(189), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(528), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [7899] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(490), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7910] = 4,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7924] = 4,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7938] = 4,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(202), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7952] = 4,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7966] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7980] = 4,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7994] = 4,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8008] = 4,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8022] = 4,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8036] = 4,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8050] = 4,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8064] = 4,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8078] = 4,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8092] = 4,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8106] = 4,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8120] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8131] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(576), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [8140] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(571), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8149] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8160] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8171] = 3,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(202), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8182] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8193] = 3,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8204] = 3,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8215] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8226] = 3,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8237] = 3,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8248] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8259] = 2,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8267] = 2,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8275] = 2,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8283] = 2,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8291] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8299] = 2,
    ACTIONS(592), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8307] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8315] = 2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8323] = 2,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8331] = 2,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8339] = 2,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8347] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8355] = 2,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8363] = 2,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8371] = 2,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8379] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8387] = 2,
    ACTIONS(606), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8395] = 2,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8403] = 2,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8411] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8419] = 2,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8427] = 2,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8435] = 2,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8443] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8451] = 2,
    ACTIONS(622), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8459] = 2,
    ACTIONS(624), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8467] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8475] = 2,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8483] = 2,
    ACTIONS(630), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8491] = 2,
    ACTIONS(632), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 417,
  [SMALL_STATE(18)] = 498,
  [SMALL_STATE(19)] = 579,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 741,
  [SMALL_STATE(22)] = 822,
  [SMALL_STATE(23)] = 903,
  [SMALL_STATE(24)] = 984,
  [SMALL_STATE(25)] = 1065,
  [SMALL_STATE(26)] = 1146,
  [SMALL_STATE(27)] = 1224,
  [SMALL_STATE(28)] = 1302,
  [SMALL_STATE(29)] = 1380,
  [SMALL_STATE(30)] = 1458,
  [SMALL_STATE(31)] = 1536,
  [SMALL_STATE(32)] = 1614,
  [SMALL_STATE(33)] = 1692,
  [SMALL_STATE(34)] = 1770,
  [SMALL_STATE(35)] = 1848,
  [SMALL_STATE(36)] = 1926,
  [SMALL_STATE(37)] = 2004,
  [SMALL_STATE(38)] = 2082,
  [SMALL_STATE(39)] = 2160,
  [SMALL_STATE(40)] = 2238,
  [SMALL_STATE(41)] = 2316,
  [SMALL_STATE(42)] = 2394,
  [SMALL_STATE(43)] = 2472,
  [SMALL_STATE(44)] = 2550,
  [SMALL_STATE(45)] = 2628,
  [SMALL_STATE(46)] = 2706,
  [SMALL_STATE(47)] = 2784,
  [SMALL_STATE(48)] = 2862,
  [SMALL_STATE(49)] = 2940,
  [SMALL_STATE(50)] = 3018,
  [SMALL_STATE(51)] = 3096,
  [SMALL_STATE(52)] = 3174,
  [SMALL_STATE(53)] = 3252,
  [SMALL_STATE(54)] = 3330,
  [SMALL_STATE(55)] = 3408,
  [SMALL_STATE(56)] = 3486,
  [SMALL_STATE(57)] = 3564,
  [SMALL_STATE(58)] = 3642,
  [SMALL_STATE(59)] = 3720,
  [SMALL_STATE(60)] = 3754,
  [SMALL_STATE(61)] = 3790,
  [SMALL_STATE(62)] = 3824,
  [SMALL_STATE(63)] = 3856,
  [SMALL_STATE(64)] = 3890,
  [SMALL_STATE(65)] = 3922,
  [SMALL_STATE(66)] = 3958,
  [SMALL_STATE(67)] = 4003,
  [SMALL_STATE(68)] = 4034,
  [SMALL_STATE(69)] = 4067,
  [SMALL_STATE(70)] = 4098,
  [SMALL_STATE(71)] = 4129,
  [SMALL_STATE(72)] = 4160,
  [SMALL_STATE(73)] = 4191,
  [SMALL_STATE(74)] = 4222,
  [SMALL_STATE(75)] = 4253,
  [SMALL_STATE(76)] = 4284,
  [SMALL_STATE(77)] = 4315,
  [SMALL_STATE(78)] = 4346,
  [SMALL_STATE(79)] = 4377,
  [SMALL_STATE(80)] = 4412,
  [SMALL_STATE(81)] = 4443,
  [SMALL_STATE(82)] = 4474,
  [SMALL_STATE(83)] = 4507,
  [SMALL_STATE(84)] = 4542,
  [SMALL_STATE(85)] = 4579,
  [SMALL_STATE(86)] = 4620,
  [SMALL_STATE(87)] = 4663,
  [SMALL_STATE(88)] = 4694,
  [SMALL_STATE(89)] = 4725,
  [SMALL_STATE(90)] = 4756,
  [SMALL_STATE(91)] = 4803,
  [SMALL_STATE(92)] = 4834,
  [SMALL_STATE(93)] = 4865,
  [SMALL_STATE(94)] = 4896,
  [SMALL_STATE(95)] = 4927,
  [SMALL_STATE(96)] = 4962,
  [SMALL_STATE(97)] = 4993,
  [SMALL_STATE(98)] = 5024,
  [SMALL_STATE(99)] = 5059,
  [SMALL_STATE(100)] = 5094,
  [SMALL_STATE(101)] = 5125,
  [SMALL_STATE(102)] = 5156,
  [SMALL_STATE(103)] = 5203,
  [SMALL_STATE(104)] = 5250,
  [SMALL_STATE(105)] = 5297,
  [SMALL_STATE(106)] = 5328,
  [SMALL_STATE(107)] = 5359,
  [SMALL_STATE(108)] = 5394,
  [SMALL_STATE(109)] = 5427,
  [SMALL_STATE(110)] = 5457,
  [SMALL_STATE(111)] = 5487,
  [SMALL_STATE(112)] = 5517,
  [SMALL_STATE(113)] = 5547,
  [SMALL_STATE(114)] = 5577,
  [SMALL_STATE(115)] = 5611,
  [SMALL_STATE(116)] = 5641,
  [SMALL_STATE(117)] = 5671,
  [SMALL_STATE(118)] = 5717,
  [SMALL_STATE(119)] = 5747,
  [SMALL_STATE(120)] = 5793,
  [SMALL_STATE(121)] = 5839,
  [SMALL_STATE(122)] = 5883,
  [SMALL_STATE(123)] = 5925,
  [SMALL_STATE(124)] = 5955,
  [SMALL_STATE(125)] = 5995,
  [SMALL_STATE(126)] = 6031,
  [SMALL_STATE(127)] = 6061,
  [SMALL_STATE(128)] = 6095,
  [SMALL_STATE(129)] = 6125,
  [SMALL_STATE(130)] = 6155,
  [SMALL_STATE(131)] = 6185,
  [SMALL_STATE(132)] = 6231,
  [SMALL_STATE(133)] = 6261,
  [SMALL_STATE(134)] = 6291,
  [SMALL_STATE(135)] = 6325,
  [SMALL_STATE(136)] = 6355,
  [SMALL_STATE(137)] = 6385,
  [SMALL_STATE(138)] = 6415,
  [SMALL_STATE(139)] = 6445,
  [SMALL_STATE(140)] = 6475,
  [SMALL_STATE(141)] = 6505,
  [SMALL_STATE(142)] = 6535,
  [SMALL_STATE(143)] = 6565,
  [SMALL_STATE(144)] = 6595,
  [SMALL_STATE(145)] = 6640,
  [SMALL_STATE(146)] = 6685,
  [SMALL_STATE(147)] = 6730,
  [SMALL_STATE(148)] = 6777,
  [SMALL_STATE(149)] = 6822,
  [SMALL_STATE(150)] = 6869,
  [SMALL_STATE(151)] = 6917,
  [SMALL_STATE(152)] = 6965,
  [SMALL_STATE(153)] = 7009,
  [SMALL_STATE(154)] = 7057,
  [SMALL_STATE(155)] = 7105,
  [SMALL_STATE(156)] = 7153,
  [SMALL_STATE(157)] = 7201,
  [SMALL_STATE(158)] = 7246,
  [SMALL_STATE(159)] = 7289,
  [SMALL_STATE(160)] = 7334,
  [SMALL_STATE(161)] = 7379,
  [SMALL_STATE(162)] = 7422,
  [SMALL_STATE(163)] = 7467,
  [SMALL_STATE(164)] = 7509,
  [SMALL_STATE(165)] = 7551,
  [SMALL_STATE(166)] = 7593,
  [SMALL_STATE(167)] = 7610,
  [SMALL_STATE(168)] = 7629,
  [SMALL_STATE(169)] = 7646,
  [SMALL_STATE(170)] = 7665,
  [SMALL_STATE(171)] = 7682,
  [SMALL_STATE(172)] = 7701,
  [SMALL_STATE(173)] = 7713,
  [SMALL_STATE(174)] = 7730,
  [SMALL_STATE(175)] = 7745,
  [SMALL_STATE(176)] = 7760,
  [SMALL_STATE(177)] = 7775,
  [SMALL_STATE(178)] = 7790,
  [SMALL_STATE(179)] = 7801,
  [SMALL_STATE(180)] = 7816,
  [SMALL_STATE(181)] = 7833,
  [SMALL_STATE(182)] = 7850,
  [SMALL_STATE(183)] = 7867,
  [SMALL_STATE(184)] = 7884,
  [SMALL_STATE(185)] = 7899,
  [SMALL_STATE(186)] = 7910,
  [SMALL_STATE(187)] = 7924,
  [SMALL_STATE(188)] = 7938,
  [SMALL_STATE(189)] = 7952,
  [SMALL_STATE(190)] = 7966,
  [SMALL_STATE(191)] = 7980,
  [SMALL_STATE(192)] = 7994,
  [SMALL_STATE(193)] = 8008,
  [SMALL_STATE(194)] = 8022,
  [SMALL_STATE(195)] = 8036,
  [SMALL_STATE(196)] = 8050,
  [SMALL_STATE(197)] = 8064,
  [SMALL_STATE(198)] = 8078,
  [SMALL_STATE(199)] = 8092,
  [SMALL_STATE(200)] = 8106,
  [SMALL_STATE(201)] = 8120,
  [SMALL_STATE(202)] = 8131,
  [SMALL_STATE(203)] = 8140,
  [SMALL_STATE(204)] = 8149,
  [SMALL_STATE(205)] = 8160,
  [SMALL_STATE(206)] = 8171,
  [SMALL_STATE(207)] = 8182,
  [SMALL_STATE(208)] = 8193,
  [SMALL_STATE(209)] = 8204,
  [SMALL_STATE(210)] = 8215,
  [SMALL_STATE(211)] = 8226,
  [SMALL_STATE(212)] = 8237,
  [SMALL_STATE(213)] = 8248,
  [SMALL_STATE(214)] = 8259,
  [SMALL_STATE(215)] = 8267,
  [SMALL_STATE(216)] = 8275,
  [SMALL_STATE(217)] = 8283,
  [SMALL_STATE(218)] = 8291,
  [SMALL_STATE(219)] = 8299,
  [SMALL_STATE(220)] = 8307,
  [SMALL_STATE(221)] = 8315,
  [SMALL_STATE(222)] = 8323,
  [SMALL_STATE(223)] = 8331,
  [SMALL_STATE(224)] = 8339,
  [SMALL_STATE(225)] = 8347,
  [SMALL_STATE(226)] = 8355,
  [SMALL_STATE(227)] = 8363,
  [SMALL_STATE(228)] = 8371,
  [SMALL_STATE(229)] = 8379,
  [SMALL_STATE(230)] = 8387,
  [SMALL_STATE(231)] = 8395,
  [SMALL_STATE(232)] = 8403,
  [SMALL_STATE(233)] = 8411,
  [SMALL_STATE(234)] = 8419,
  [SMALL_STATE(235)] = 8427,
  [SMALL_STATE(236)] = 8435,
  [SMALL_STATE(237)] = 8443,
  [SMALL_STATE(238)] = 8451,
  [SMALL_STATE(239)] = 8459,
  [SMALL_STATE(240)] = 8467,
  [SMALL_STATE(241)] = 8475,
  [SMALL_STATE(242)] = 8483,
  [SMALL_STATE(243)] = 8491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(215),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(224),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(223),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(11),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(173),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(206),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(46),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(225),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [594] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
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
