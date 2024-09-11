#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 324
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym__shebang_token1 = 1,
  anon_sym_DOT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_let = 5,
  anon_sym_var = 6,
  anon_sym_EQ = 7,
  anon_sym_and = 8,
  anon_sym_use = 9,
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
  sym__path = 59,
  sym__sequence = 60,
  sym_block = 61,
  sym_statement = 62,
  sym_let = 63,
  sym_use = 64,
  sym__sc = 65,
  sym__primary = 66,
  sym__exp = 67,
  sym_break = 68,
  sym_return = 69,
  sym_await = 70,
  sym_launch = 71,
  sym_yield = 72,
  sym__if = 73,
  sym_if = 74,
  sym_fn = 75,
  sym_fn_type = 76,
  sym_params = 77,
  sym_loop = 78,
  sym_for = 79,
  sym_list = 80,
  sym_map = 81,
  sym_object = 82,
  sym_member = 83,
  sym_assignment = 84,
  sym_binary_exp = 85,
  sym_unary_exp = 86,
  sym_call = 87,
  sym_property_exp = 88,
  sym_bool = 89,
  sym_string = 90,
  sym_named_type = 91,
  sym_type = 92,
  sym_type_args = 93,
  sym_type_annotation = 94,
  aux_sym__path_repeat1 = 95,
  aux_sym__sequence_repeat1 = 96,
  aux_sym_params_repeat1 = 97,
  aux_sym_list_repeat1 = 98,
  aux_sym_map_repeat1 = 99,
  aux_sym_object_repeat1 = 100,
  aux_sym_property_exp_repeat1 = 101,
  aux_sym_string_repeat1 = 102,
  aux_sym_type_repeat1 = 103,
  aux_sym_type_args_repeat1 = 104,
  alias_sym_property_identifier = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_and] = "and",
  [anon_sym_use] = "use",
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
  [sym__path] = "_path",
  [sym__sequence] = "_sequence",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_let] = "let",
  [sym_use] = "use",
  [sym__sc] = "_sc",
  [sym__primary] = "_primary",
  [sym__exp] = "_exp",
  [sym_break] = "break",
  [sym_return] = "return",
  [sym_await] = "await",
  [sym_launch] = "launch",
  [sym_yield] = "yield",
  [sym__if] = "_if",
  [sym_if] = "if",
  [sym_fn] = "fn",
  [sym_fn_type] = "fn_type",
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
  [sym_named_type] = "named_type",
  [sym_type] = "type",
  [sym_type_args] = "type_args",
  [sym_type_annotation] = "type_annotation",
  [aux_sym__path_repeat1] = "_path_repeat1",
  [aux_sym__sequence_repeat1] = "_sequence_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_property_exp_repeat1] = "property_exp_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_args_repeat1] = "type_args_repeat1",
  [alias_sym_property_identifier] = "property_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__shebang_token1] = sym_line_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_use] = anon_sym_use,
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
  [sym__path] = sym__path,
  [sym__sequence] = sym__sequence,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_let] = sym_let,
  [sym_use] = sym_use,
  [sym__sc] = sym__sc,
  [sym__primary] = sym__primary,
  [sym__exp] = sym__exp,
  [sym_break] = sym_break,
  [sym_return] = sym_return,
  [sym_await] = sym_await,
  [sym_launch] = sym_launch,
  [sym_yield] = sym_yield,
  [sym__if] = sym__if,
  [sym_if] = sym_if,
  [sym_fn] = sym_fn,
  [sym_fn_type] = sym_fn_type,
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
  [sym_named_type] = sym_named_type,
  [sym_type] = sym_type,
  [sym_type_args] = sym_type_args,
  [sym_type_annotation] = sym_type_annotation,
  [aux_sym__path_repeat1] = aux_sym__path_repeat1,
  [aux_sym__sequence_repeat1] = aux_sym__sequence_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_property_exp_repeat1] = aux_sym_property_exp_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_type_args_repeat1] = aux_sym_type_args_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym__path] = {
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
  [sym__primary] = {
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
  [sym__if] = {
    .visible = false,
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
  [sym_fn_type] = {
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
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_args] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sequence_repeat1] = {
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
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_args_repeat1] = {
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
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 18,
  [25] = 21,
  [26] = 20,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 38,
  [45] = 35,
  [46] = 46,
  [47] = 47,
  [48] = 29,
  [49] = 30,
  [50] = 30,
  [51] = 42,
  [52] = 52,
  [53] = 40,
  [54] = 54,
  [55] = 42,
  [56] = 52,
  [57] = 28,
  [58] = 58,
  [59] = 59,
  [60] = 32,
  [61] = 33,
  [62] = 32,
  [63] = 33,
  [64] = 34,
  [65] = 35,
  [66] = 59,
  [67] = 28,
  [68] = 37,
  [69] = 37,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 70,
  [86] = 86,
  [87] = 71,
  [88] = 88,
  [89] = 89,
  [90] = 73,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 76,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 77,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 82,
  [108] = 92,
  [109] = 109,
  [110] = 97,
  [111] = 111,
  [112] = 112,
  [113] = 98,
  [114] = 96,
  [115] = 80,
  [116] = 101,
  [117] = 89,
  [118] = 95,
  [119] = 93,
  [120] = 94,
  [121] = 121,
  [122] = 102,
  [123] = 84,
  [124] = 124,
  [125] = 125,
  [126] = 86,
  [127] = 91,
  [128] = 83,
  [129] = 106,
  [130] = 130,
  [131] = 131,
  [132] = 79,
  [133] = 81,
  [134] = 105,
  [135] = 124,
  [136] = 88,
  [137] = 104,
  [138] = 100,
  [139] = 112,
  [140] = 131,
  [141] = 141,
  [142] = 121,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 125,
  [149] = 130,
  [150] = 150,
  [151] = 109,
  [152] = 146,
  [153] = 111,
  [154] = 143,
  [155] = 150,
  [156] = 144,
  [157] = 157,
  [158] = 158,
  [159] = 141,
  [160] = 158,
  [161] = 157,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 168,
  [172] = 170,
  [173] = 74,
  [174] = 169,
  [175] = 175,
  [176] = 124,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 145,
  [184] = 146,
  [185] = 150,
  [186] = 186,
  [187] = 158,
  [188] = 144,
  [189] = 143,
  [190] = 141,
  [191] = 157,
  [192] = 186,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 197,
  [206] = 206,
  [207] = 207,
  [208] = 195,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 196,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 215,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 202,
  [228] = 228,
  [229] = 216,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 230,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 237,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 235,
  [247] = 231,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 243,
  [252] = 234,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 254,
  [265] = 256,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 267,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 258,
  [276] = 269,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 279,
  [284] = 284,
  [285] = 285,
  [286] = 282,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 280,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 296,
  [301] = 301,
  [302] = 302,
  [303] = 293,
  [304] = 304,
  [305] = 305,
  [306] = 292,
  [307] = 294,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 301,
  [314] = 314,
  [315] = 311,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 308,
  [320] = 304,
  [321] = 310,
  [322] = 305,
  [323] = 316,
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
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(29);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(202);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(202);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 67:
      if (lookahead == '{') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '}') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(29);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 74:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 75:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 76:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 77:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(202);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(202);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(184);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(181);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(181);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(167);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(202);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(164);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(109);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(92);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(206);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(111);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(107);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(179);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(150);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(119);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(189);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(158);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(150);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(202);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78, .external_lex_state = 2},
  [2] = {.lex_state = 74, .external_lex_state = 2},
  [3] = {.lex_state = 74, .external_lex_state = 1},
  [4] = {.lex_state = 78, .external_lex_state = 2},
  [5] = {.lex_state = 78, .external_lex_state = 2},
  [6] = {.lex_state = 78, .external_lex_state = 2},
  [7] = {.lex_state = 78, .external_lex_state = 2},
  [8] = {.lex_state = 78, .external_lex_state = 2},
  [9] = {.lex_state = 78, .external_lex_state = 2},
  [10] = {.lex_state = 78, .external_lex_state = 2},
  [11] = {.lex_state = 74, .external_lex_state = 2},
  [12] = {.lex_state = 78, .external_lex_state = 2},
  [13] = {.lex_state = 79, .external_lex_state = 1},
  [14] = {.lex_state = 79, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 79, .external_lex_state = 2},
  [17] = {.lex_state = 79, .external_lex_state = 2},
  [18] = {.lex_state = 79, .external_lex_state = 2},
  [19] = {.lex_state = 79, .external_lex_state = 2},
  [20] = {.lex_state = 79, .external_lex_state = 2},
  [21] = {.lex_state = 79, .external_lex_state = 2},
  [22] = {.lex_state = 79, .external_lex_state = 2},
  [23] = {.lex_state = 79, .external_lex_state = 2},
  [24] = {.lex_state = 79, .external_lex_state = 2},
  [25] = {.lex_state = 79, .external_lex_state = 2},
  [26] = {.lex_state = 79, .external_lex_state = 2},
  [27] = {.lex_state = 79, .external_lex_state = 2},
  [28] = {.lex_state = 79, .external_lex_state = 2},
  [29] = {.lex_state = 79, .external_lex_state = 2},
  [30] = {.lex_state = 79, .external_lex_state = 2},
  [31] = {.lex_state = 79, .external_lex_state = 2},
  [32] = {.lex_state = 79, .external_lex_state = 2},
  [33] = {.lex_state = 79, .external_lex_state = 2},
  [34] = {.lex_state = 79, .external_lex_state = 2},
  [35] = {.lex_state = 79, .external_lex_state = 2},
  [36] = {.lex_state = 79, .external_lex_state = 2},
  [37] = {.lex_state = 79, .external_lex_state = 2},
  [38] = {.lex_state = 79, .external_lex_state = 2},
  [39] = {.lex_state = 79, .external_lex_state = 2},
  [40] = {.lex_state = 79, .external_lex_state = 2},
  [41] = {.lex_state = 79, .external_lex_state = 2},
  [42] = {.lex_state = 79, .external_lex_state = 2},
  [43] = {.lex_state = 79, .external_lex_state = 2},
  [44] = {.lex_state = 79, .external_lex_state = 2},
  [45] = {.lex_state = 79, .external_lex_state = 2},
  [46] = {.lex_state = 79, .external_lex_state = 2},
  [47] = {.lex_state = 79, .external_lex_state = 2},
  [48] = {.lex_state = 79, .external_lex_state = 2},
  [49] = {.lex_state = 79, .external_lex_state = 2},
  [50] = {.lex_state = 79, .external_lex_state = 2},
  [51] = {.lex_state = 79, .external_lex_state = 2},
  [52] = {.lex_state = 79, .external_lex_state = 2},
  [53] = {.lex_state = 79, .external_lex_state = 2},
  [54] = {.lex_state = 79, .external_lex_state = 2},
  [55] = {.lex_state = 79, .external_lex_state = 2},
  [56] = {.lex_state = 79, .external_lex_state = 2},
  [57] = {.lex_state = 79, .external_lex_state = 2},
  [58] = {.lex_state = 79, .external_lex_state = 2},
  [59] = {.lex_state = 79, .external_lex_state = 2},
  [60] = {.lex_state = 79, .external_lex_state = 2},
  [61] = {.lex_state = 79, .external_lex_state = 2},
  [62] = {.lex_state = 79, .external_lex_state = 2},
  [63] = {.lex_state = 79, .external_lex_state = 2},
  [64] = {.lex_state = 79, .external_lex_state = 2},
  [65] = {.lex_state = 79, .external_lex_state = 2},
  [66] = {.lex_state = 79, .external_lex_state = 2},
  [67] = {.lex_state = 79, .external_lex_state = 2},
  [68] = {.lex_state = 79, .external_lex_state = 2},
  [69] = {.lex_state = 79, .external_lex_state = 2},
  [70] = {.lex_state = 76, .external_lex_state = 3},
  [71] = {.lex_state = 76, .external_lex_state = 3},
  [72] = {.lex_state = 76, .external_lex_state = 3},
  [73] = {.lex_state = 76, .external_lex_state = 4},
  [74] = {.lex_state = 76, .external_lex_state = 3},
  [75] = {.lex_state = 76, .external_lex_state = 3},
  [76] = {.lex_state = 76, .external_lex_state = 4},
  [77] = {.lex_state = 76, .external_lex_state = 4},
  [78] = {.lex_state = 76, .external_lex_state = 4},
  [79] = {.lex_state = 76, .external_lex_state = 3},
  [80] = {.lex_state = 76, .external_lex_state = 4},
  [81] = {.lex_state = 76, .external_lex_state = 4},
  [82] = {.lex_state = 76, .external_lex_state = 4},
  [83] = {.lex_state = 76, .external_lex_state = 4},
  [84] = {.lex_state = 76, .external_lex_state = 4},
  [85] = {.lex_state = 76, .external_lex_state = 4},
  [86] = {.lex_state = 76, .external_lex_state = 4},
  [87] = {.lex_state = 76, .external_lex_state = 4},
  [88] = {.lex_state = 76, .external_lex_state = 4},
  [89] = {.lex_state = 76, .external_lex_state = 4},
  [90] = {.lex_state = 76, .external_lex_state = 3},
  [91] = {.lex_state = 76, .external_lex_state = 4},
  [92] = {.lex_state = 76, .external_lex_state = 4},
  [93] = {.lex_state = 76, .external_lex_state = 4},
  [94] = {.lex_state = 76, .external_lex_state = 4},
  [95] = {.lex_state = 76, .external_lex_state = 4},
  [96] = {.lex_state = 76, .external_lex_state = 4},
  [97] = {.lex_state = 76, .external_lex_state = 4},
  [98] = {.lex_state = 76, .external_lex_state = 4},
  [99] = {.lex_state = 76, .external_lex_state = 3},
  [100] = {.lex_state = 76, .external_lex_state = 4},
  [101] = {.lex_state = 76, .external_lex_state = 4},
  [102] = {.lex_state = 76, .external_lex_state = 4},
  [103] = {.lex_state = 76, .external_lex_state = 3},
  [104] = {.lex_state = 76, .external_lex_state = 4},
  [105] = {.lex_state = 76, .external_lex_state = 4},
  [106] = {.lex_state = 76, .external_lex_state = 4},
  [107] = {.lex_state = 76, .external_lex_state = 3},
  [108] = {.lex_state = 76, .external_lex_state = 3},
  [109] = {.lex_state = 76, .external_lex_state = 4},
  [110] = {.lex_state = 76, .external_lex_state = 3},
  [111] = {.lex_state = 76, .external_lex_state = 4},
  [112] = {.lex_state = 76, .external_lex_state = 4},
  [113] = {.lex_state = 76, .external_lex_state = 3},
  [114] = {.lex_state = 76, .external_lex_state = 3},
  [115] = {.lex_state = 76, .external_lex_state = 3},
  [116] = {.lex_state = 76, .external_lex_state = 3},
  [117] = {.lex_state = 76, .external_lex_state = 3},
  [118] = {.lex_state = 76, .external_lex_state = 3},
  [119] = {.lex_state = 76, .external_lex_state = 3},
  [120] = {.lex_state = 76, .external_lex_state = 3},
  [121] = {.lex_state = 76, .external_lex_state = 4},
  [122] = {.lex_state = 76, .external_lex_state = 3},
  [123] = {.lex_state = 76, .external_lex_state = 3},
  [124] = {.lex_state = 76, .external_lex_state = 4},
  [125] = {.lex_state = 76, .external_lex_state = 4},
  [126] = {.lex_state = 76, .external_lex_state = 3},
  [127] = {.lex_state = 76, .external_lex_state = 3},
  [128] = {.lex_state = 76, .external_lex_state = 3},
  [129] = {.lex_state = 76, .external_lex_state = 3},
  [130] = {.lex_state = 76, .external_lex_state = 4},
  [131] = {.lex_state = 76, .external_lex_state = 4},
  [132] = {.lex_state = 76, .external_lex_state = 3},
  [133] = {.lex_state = 76, .external_lex_state = 3},
  [134] = {.lex_state = 76, .external_lex_state = 3},
  [135] = {.lex_state = 76, .external_lex_state = 3},
  [136] = {.lex_state = 76, .external_lex_state = 3},
  [137] = {.lex_state = 76, .external_lex_state = 3},
  [138] = {.lex_state = 76, .external_lex_state = 3},
  [139] = {.lex_state = 76, .external_lex_state = 3},
  [140] = {.lex_state = 76, .external_lex_state = 3},
  [141] = {.lex_state = 76, .external_lex_state = 4},
  [142] = {.lex_state = 76, .external_lex_state = 3},
  [143] = {.lex_state = 76, .external_lex_state = 4},
  [144] = {.lex_state = 76, .external_lex_state = 4},
  [145] = {.lex_state = 76, .external_lex_state = 4},
  [146] = {.lex_state = 76, .external_lex_state = 4},
  [147] = {.lex_state = 76, .external_lex_state = 3},
  [148] = {.lex_state = 76, .external_lex_state = 3},
  [149] = {.lex_state = 76, .external_lex_state = 3},
  [150] = {.lex_state = 76, .external_lex_state = 4},
  [151] = {.lex_state = 76, .external_lex_state = 3},
  [152] = {.lex_state = 76, .external_lex_state = 3},
  [153] = {.lex_state = 76, .external_lex_state = 3},
  [154] = {.lex_state = 76, .external_lex_state = 3},
  [155] = {.lex_state = 76, .external_lex_state = 3},
  [156] = {.lex_state = 76, .external_lex_state = 3},
  [157] = {.lex_state = 76, .external_lex_state = 4},
  [158] = {.lex_state = 76, .external_lex_state = 3},
  [159] = {.lex_state = 76, .external_lex_state = 3},
  [160] = {.lex_state = 76, .external_lex_state = 4},
  [161] = {.lex_state = 76, .external_lex_state = 3},
  [162] = {.lex_state = 76, .external_lex_state = 3},
  [163] = {.lex_state = 76, .external_lex_state = 3},
  [164] = {.lex_state = 76, .external_lex_state = 3},
  [165] = {.lex_state = 76, .external_lex_state = 3},
  [166] = {.lex_state = 76, .external_lex_state = 3},
  [167] = {.lex_state = 76, .external_lex_state = 3},
  [168] = {.lex_state = 76, .external_lex_state = 4},
  [169] = {.lex_state = 76, .external_lex_state = 4},
  [170] = {.lex_state = 76, .external_lex_state = 4},
  [171] = {.lex_state = 76, .external_lex_state = 4},
  [172] = {.lex_state = 76, .external_lex_state = 4},
  [173] = {.lex_state = 76, .external_lex_state = 4},
  [174] = {.lex_state = 76, .external_lex_state = 4},
  [175] = {.lex_state = 76, .external_lex_state = 4},
  [176] = {.lex_state = 76, .external_lex_state = 4},
  [177] = {.lex_state = 76, .external_lex_state = 4},
  [178] = {.lex_state = 76, .external_lex_state = 3},
  [179] = {.lex_state = 76, .external_lex_state = 4},
  [180] = {.lex_state = 76, .external_lex_state = 4},
  [181] = {.lex_state = 76, .external_lex_state = 4},
  [182] = {.lex_state = 76, .external_lex_state = 4},
  [183] = {.lex_state = 76, .external_lex_state = 4},
  [184] = {.lex_state = 76, .external_lex_state = 4},
  [185] = {.lex_state = 76, .external_lex_state = 4},
  [186] = {.lex_state = 76, .external_lex_state = 4},
  [187] = {.lex_state = 76, .external_lex_state = 4},
  [188] = {.lex_state = 76, .external_lex_state = 4},
  [189] = {.lex_state = 76, .external_lex_state = 4},
  [190] = {.lex_state = 76, .external_lex_state = 4},
  [191] = {.lex_state = 76, .external_lex_state = 4},
  [192] = {.lex_state = 76, .external_lex_state = 4},
  [193] = {.lex_state = 5, .external_lex_state = 4},
  [194] = {.lex_state = 5, .external_lex_state = 4},
  [195] = {.lex_state = 76, .external_lex_state = 4},
  [196] = {.lex_state = 76, .external_lex_state = 4},
  [197] = {.lex_state = 76, .external_lex_state = 4},
  [198] = {.lex_state = 5, .external_lex_state = 4},
  [199] = {.lex_state = 5, .external_lex_state = 4},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 5, .external_lex_state = 4},
  [202] = {.lex_state = 76, .external_lex_state = 4},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 76, .external_lex_state = 3},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 4},
  [208] = {.lex_state = 76, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 4},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 76, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0, .external_lex_state = 4},
  [215] = {.lex_state = 0, .external_lex_state = 4},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 4},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 4},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0, .external_lex_state = 4},
  [224] = {.lex_state = 0, .external_lex_state = 4},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 76, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 0, .external_lex_state = 4},
  [230] = {.lex_state = 3, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0, .external_lex_state = 3},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 3},
  [236] = {.lex_state = 3, .external_lex_state = 4},
  [237] = {.lex_state = 3, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0, .external_lex_state = 3},
  [242] = {.lex_state = 3, .external_lex_state = 4},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 3, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 0, .external_lex_state = 3},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 4, .external_lex_state = 4},
  [255] = {.lex_state = 0, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 4},
  [258] = {.lex_state = 4, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 4},
  [260] = {.lex_state = 0, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 0, .external_lex_state = 4},
  [263] = {.lex_state = 0, .external_lex_state = 4},
  [264] = {.lex_state = 4, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 4, .external_lex_state = 4},
  [269] = {.lex_state = 4, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 4, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 4, .external_lex_state = 4},
  [276] = {.lex_state = 4, .external_lex_state = 4},
  [277] = {.lex_state = 4, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 4, .external_lex_state = 4},
  [281] = {.lex_state = 4, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 4, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 3},
  [286] = {.lex_state = 0, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 4, .external_lex_state = 4},
  [290] = {.lex_state = 4, .external_lex_state = 4},
  [291] = {.lex_state = 4, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 4},
  [296] = {.lex_state = 4, .external_lex_state = 4},
  [297] = {.lex_state = 0, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 4, .external_lex_state = 4},
  [301] = {.lex_state = 76, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 4, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 4, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 4, .external_lex_state = 4},
  [312] = {.lex_state = 4, .external_lex_state = 4},
  [313] = {.lex_state = 76, .external_lex_state = 4},
  [314] = {.lex_state = 4, .external_lex_state = 4},
  [315] = {.lex_state = 4, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 4},
  [319] = {.lex_state = 4, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 4},
  [322] = {.lex_state = 4, .external_lex_state = 4},
  [323] = {.lex_state = 0, .external_lex_state = 4},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_raw_string_literal] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token_raw_string_literal] = true,
  },
  [3] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__shebang_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
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
    [sym_module] = STATE(302),
    [sym__shebang] = STATE(6),
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(298),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [2] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(124),
    [sym__primary] = STATE(124),
    [sym__exp] = STATE(150),
    [sym_await] = STATE(150),
    [sym_launch] = STATE(150),
    [sym_yield] = STATE(150),
    [sym__if] = STATE(79),
    [sym_if] = STATE(150),
    [sym_fn] = STATE(124),
    [sym_fn_type] = STATE(283),
    [sym_loop] = STATE(150),
    [sym_for] = STATE(150),
    [sym_list] = STATE(124),
    [sym_map] = STATE(124),
    [sym_object] = STATE(124),
    [sym_assignment] = STATE(150),
    [sym_binary_exp] = STATE(150),
    [sym_unary_exp] = STATE(150),
    [sym_call] = STATE(124),
    [sym_property_exp] = STATE(124),
    [sym_bool] = STATE(124),
    [sym_string] = STATE(124),
    [sym_named_type] = STATE(323),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_await] = ACTIONS(61),
    [anon_sym_launch] = ACTIONS(63),
    [anon_sym_yield] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_loop] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [sym_number] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [sym_null] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(85),
  },
  [3] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(135),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(155),
    [sym_await] = STATE(155),
    [sym_launch] = STATE(155),
    [sym_yield] = STATE(155),
    [sym__if] = STATE(132),
    [sym_if] = STATE(155),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(155),
    [sym_for] = STATE(155),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(155),
    [sym_binary_exp] = STATE(155),
    [sym_unary_exp] = STATE(155),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(57),
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
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [4] = {
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(293),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(166),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(166),
    [sym_launch] = STATE(166),
    [sym_yield] = STATE(166),
    [sym__if] = STATE(132),
    [sym_if] = STATE(166),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(166),
    [sym_for] = STATE(166),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_member] = STATE(252),
    [sym_assignment] = STATE(166),
    [sym_binary_exp] = STATE(166),
    [sym_unary_exp] = STATE(166),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(89),
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
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [5] = {
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(303),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(167),
    [sym_launch] = STATE(167),
    [sym_yield] = STATE(167),
    [sym__if] = STATE(132),
    [sym_if] = STATE(167),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(167),
    [sym_for] = STATE(167),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_member] = STATE(234),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(97),
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
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [sym_null] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [6] = {
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(318),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [ts_builtin_sym_end] = ACTIONS(101),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [7] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(253),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [8] = {
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(293),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(105),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [9] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(253),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [10] = {
    [sym__path] = STATE(200),
    [sym__sequence] = STATE(303),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(206),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
  [11] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(176),
    [sym__primary] = STATE(176),
    [sym__exp] = STATE(185),
    [sym_await] = STATE(185),
    [sym_launch] = STATE(185),
    [sym_yield] = STATE(185),
    [sym__if] = STATE(79),
    [sym_if] = STATE(185),
    [sym_fn] = STATE(176),
    [sym_fn_type] = STATE(283),
    [sym_loop] = STATE(185),
    [sym_for] = STATE(185),
    [sym_list] = STATE(176),
    [sym_map] = STATE(176),
    [sym_object] = STATE(176),
    [sym_assignment] = STATE(185),
    [sym_binary_exp] = STATE(185),
    [sym_unary_exp] = STATE(185),
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [sym_named_type] = STATE(323),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_await] = ACTIONS(111),
    [anon_sym_launch] = ACTIONS(113),
    [anon_sym_yield] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [sym_null] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(125),
  },
  [12] = {
    [sym__path] = STATE(200),
    [sym_block] = STATE(135),
    [sym_statement] = STATE(253),
    [sym_let] = STATE(241),
    [sym_use] = STATE(241),
    [sym__primary] = STATE(135),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(241),
    [sym_return] = STATE(241),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym__if] = STATE(132),
    [sym_if] = STATE(165),
    [sym_fn] = STATE(135),
    [sym_fn_type] = STATE(279),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(135),
    [sym_map] = STATE(135),
    [sym_object] = STATE(135),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(135),
    [sym_property_exp] = STATE(135),
    [sym_bool] = STATE(135),
    [sym_string] = STATE(135),
    [sym_named_type] = STATE(316),
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
    [sym_raw_string_literal] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(127), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(163), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [102] = 25,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(129), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(164), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [204] = 26,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(240), 1,
      sym_let,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
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
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(154), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [307] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(169), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [409] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(174), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [511] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(182), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [610] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(170), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [709] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(175), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [808] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(175), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [907] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(182), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1006] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(182), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1105] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(182), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1204] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(175), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1303] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(175), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1402] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(172), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1501] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(189), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1597] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(161), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1693] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(187), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1789] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(191), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1885] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(131), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [1981] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(184), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2077] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(183), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2173] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(188), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2269] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(147), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2365] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(190), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2461] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(180), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2557] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(175), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2653] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(142), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2749] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(121), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2845] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(125), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [2941] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(177), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3037] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_await,
    ACTIONS(113), 1,
      anon_sym_launch,
    ACTIONS(115), 1,
      anon_sym_yield,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      sym_number,
      sym_null,
    STATE(176), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(181), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3133] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(156), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3229] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(179), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3325] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(182), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3421] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(157), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3517] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(160), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3613] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(158), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3709] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(148), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3805] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(168), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3901] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(121), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
  [3997] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(162), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4093] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(125), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4189] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(171), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4285] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(154), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4381] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(178), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4477] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(186), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4573] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(140), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4669] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(152), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4765] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(131), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4861] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(146), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4957] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(145), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5053] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(144), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5149] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(192), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5245] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(143), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5341] = 24,
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
    ACTIONS(51), 1,
      sym_raw_string_literal,
    STATE(132), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(279), 1,
      sym_fn_type,
    STATE(316), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(135), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(159), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5437] = 24,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_await,
    ACTIONS(63), 1,
      anon_sym_launch,
    ACTIONS(65), 1,
      anon_sym_yield,
    ACTIONS(67), 1,
      anon_sym_loop,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_raw_string_literal,
    STATE(79), 1,
      sym__if,
    STATE(200), 1,
      sym__path,
    STATE(283), 1,
      sym_fn_type,
    STATE(323), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 10,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_call,
      sym_property_exp,
      sym_bool,
      sym_string,
    STATE(141), 10,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5533] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(159), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5569] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5605] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(167), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
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
  [5640] = 5,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5677] = 7,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LT,
    STATE(197), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 4,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5718] = 8,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(189), 1,
      anon_sym_EQ,
    STATE(197), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 4,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5761] = 5,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5798] = 4,
    STATE(76), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(198), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5833] = 7,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LT,
    STATE(197), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 4,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 16,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5874] = 5,
    ACTIONS(204), 1,
      anon_sym_else,
    ACTIONS(208), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(202), 18,
      anon_sym_DOT,
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
  [5911] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5943] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(214), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5975] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(220), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(218), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6007] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6039] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6071] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(159), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6103] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6135] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6167] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6199] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6231] = 5,
    ACTIONS(242), 1,
      anon_sym_DOT,
    STATE(103), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6267] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6299] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6331] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6363] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6395] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6427] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6459] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6491] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6523] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6559] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6591] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6623] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6655] = 4,
    STATE(99), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(198), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6689] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6721] = 3,
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
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6753] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6785] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(220), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(218), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6816] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6847] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(303), 18,
      anon_sym_DOT,
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
  [6878] = 3,
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
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6909] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 18,
      anon_sym_DOT,
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
  [6940] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(311), 18,
      anon_sym_DOT,
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
  [6971] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7002] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7033] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7064] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7095] = 3,
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
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7126] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7157] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7188] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7219] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 16,
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
  [7254] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7285] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7316] = 4,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 16,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
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
  [7349] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 16,
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
  [7384] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7415] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7446] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7477] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7508] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 18,
      anon_sym_DOT,
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
  [7539] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 16,
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
  [7574] = 5,
    ACTIONS(337), 1,
      anon_sym_else,
    ACTIONS(339), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(202), 16,
      ts_builtin_sym_end,
      anon_sym_DOT,
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
  [7609] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(214), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7640] = 3,
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
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7671] = 4,
    ACTIONS(342), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
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
  [7704] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7735] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7766] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7797] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(311), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
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
  [7827] = 5,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 15,
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
  [7861] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [7907] = 5,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 15,
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
  [7941] = 10,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(333), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [7985] = 9,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 11,
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
  [8027] = 8,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 13,
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
  [8067] = 6,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 14,
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
  [8103] = 8,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 13,
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
  [8143] = 5,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 15,
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
  [8177] = 3,
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
      anon_sym_DOT,
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
  [8207] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(370), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [8253] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(303), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
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
  [8283] = 6,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 14,
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
  [8319] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
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
  [8349] = 10,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(333), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [8393] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(370), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8439] = 9,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 11,
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
  [8481] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(380), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [8527] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8573] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
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
  [8619] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [8665] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(380), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8711] = 13,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(378), 1,
      anon_sym_or,
    ACTIONS(386), 1,
      anon_sym_and,
    ACTIONS(388), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8760] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(391), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8805] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(393), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8850] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(395), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8895] = 12,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(395), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8942] = 12,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(395), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8989] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9037] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9085] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9133] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9181] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9229] = 7,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 3,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 12,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [9265] = 13,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9313] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9357] = 4,
    ACTIONS(428), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 13,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_and,
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
  [9386] = 12,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9431] = 11,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_PERCENT,
    ACTIONS(368), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(372), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9474] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(448), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9517] = 12,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9562] = 12,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    STATE(153), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9607] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(452), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9649] = 8,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 9,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9685] = 6,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 10,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [9717] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9759] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9801] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9843] = 9,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 7,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9881] = 10,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(333), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9921] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9963] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(434), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10005] = 11,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(358), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(352), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10047] = 9,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_GT,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(200), 1,
      sym__path,
    STATE(210), 1,
      sym_named_type,
    STATE(249), 1,
      sym_fn_type,
    STATE(266), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [10077] = 8,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_GT,
    STATE(200), 1,
      sym__path,
    STATE(210), 1,
      sym_named_type,
    STATE(249), 1,
      sym_fn_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [10104] = 4,
    ACTIONS(466), 1,
      anon_sym_DOT,
    STATE(197), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(182), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [10123] = 4,
    ACTIONS(468), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [10142] = 4,
    ACTIONS(466), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [10161] = 8,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_GT,
    STATE(200), 1,
      sym__path,
    STATE(210), 1,
      sym_named_type,
    STATE(249), 1,
      sym_fn_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [10188] = 7,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(200), 1,
      sym__path,
    STATE(210), 1,
      sym_named_type,
    STATE(249), 1,
      sym_fn_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [10212] = 4,
    ACTIONS(479), 1,
      anon_sym_LT,
    STATE(221), 1,
      sym_type_args,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10230] = 7,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(200), 1,
      sym__path,
    STATE(210), 1,
      sym_named_type,
    STATE(244), 1,
      sym_type,
    STATE(249), 1,
      sym_fn_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [10254] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [10268] = 4,
    ACTIONS(483), 1,
      anon_sym_PLUS,
    STATE(209), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(481), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10285] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(211), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(485), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10304] = 4,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10321] = 5,
    STATE(7), 1,
      sym__sc,
    STATE(204), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(491), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10340] = 4,
    ACTIONS(495), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(493), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10357] = 4,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(182), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10374] = 4,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    STATE(209), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10391] = 4,
    ACTIONS(483), 1,
      anon_sym_PLUS,
    STATE(203), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10408] = 5,
    STATE(12), 1,
      sym__sc,
    STATE(211), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(506), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10427] = 4,
    ACTIONS(509), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10444] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [10456] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10468] = 5,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_if,
    STATE(79), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(130), 2,
      sym_block,
      sym_if,
  [10486] = 5,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_if,
    STATE(79), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(112), 2,
      sym_block,
      sym_if,
  [10504] = 5,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_if,
    STATE(132), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(149), 2,
      sym_block,
      sym_if,
  [10522] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(518), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [10534] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10546] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10558] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(522), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10570] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(524), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [10582] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(526), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10594] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(528), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [10606] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [10618] = 6,
    ACTIONS(495), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      sym_type_annotation,
    STATE(263), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10638] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [10662] = 5,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_if,
    STATE(132), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(139), 2,
      sym_block,
      sym_if,
  [10680] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      sym_line_comment,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(540), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [10697] = 4,
    STATE(239), 1,
      aux_sym_object_repeat1,
    STATE(258), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10712] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(546), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10723] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(548), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10734] = 4,
    STATE(231), 1,
      aux_sym_object_repeat1,
    STATE(269), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10749] = 4,
    STATE(243), 1,
      aux_sym_object_repeat1,
    STATE(275), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10764] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(540), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [10781] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(558), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [10798] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(426), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [10813] = 4,
    STATE(239), 1,
      aux_sym_object_repeat1,
    STATE(290), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(563), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10828] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(566), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10839] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10850] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    STATE(236), 1,
      aux_sym_string_repeat1,
    ACTIONS(570), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [10867] = 4,
    STATE(239), 1,
      aux_sym_object_repeat1,
    STATE(254), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(572), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10882] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(574), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10893] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(578), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [10910] = 4,
    STATE(251), 1,
      aux_sym_object_repeat1,
    STATE(258), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10925] = 4,
    STATE(239), 1,
      aux_sym_object_repeat1,
    STATE(275), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10940] = 4,
    ACTIONS(495), 1,
      anon_sym_COLON,
    STATE(287), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(581), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10955] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [10966] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10977] = 4,
    STATE(239), 1,
      aux_sym_object_repeat1,
    STATE(264), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [10992] = 4,
    STATE(247), 1,
      aux_sym_object_repeat1,
    STATE(276), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(587), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [11007] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11018] = 4,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11032] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11046] = 4,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11060] = 4,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11074] = 4,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11088] = 4,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11102] = 4,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11116] = 4,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11130] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11144] = 4,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11158] = 4,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11172] = 4,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11186] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_GT,
    STATE(271), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11200] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11214] = 4,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11228] = 4,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11242] = 4,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11256] = 4,
    ACTIONS(464), 1,
      anon_sym_GT,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11270] = 4,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(200), 1,
      sym__path,
    STATE(219), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11284] = 4,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11298] = 3,
    STATE(232), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 2,
      anon_sym_let,
      anon_sym_var,
  [11310] = 4,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11324] = 4,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11338] = 3,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11349] = 3,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11360] = 3,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11371] = 3,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(246), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11382] = 3,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(250), 1,
      sym__path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11393] = 3,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11404] = 3,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11415] = 3,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11426] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(660), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [11435] = 3,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11446] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(662), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11455] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11464] = 3,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11475] = 3,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(285), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11486] = 3,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(235), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11497] = 2,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11505] = 2,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11513] = 2,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11521] = 2,
    ACTIONS(623), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11529] = 2,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11537] = 2,
    ACTIONS(672), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11545] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11553] = 2,
    ACTIONS(674), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11561] = 2,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11569] = 2,
    ACTIONS(678), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11577] = 2,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11585] = 2,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11593] = 2,
    ACTIONS(684), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11601] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11609] = 2,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11617] = 2,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11625] = 2,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11633] = 2,
    ACTIONS(694), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11641] = 2,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11649] = 2,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11657] = 2,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11665] = 2,
    ACTIONS(698), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11673] = 2,
    ACTIONS(700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11681] = 2,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11689] = 2,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11697] = 2,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11705] = 2,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11713] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11721] = 2,
    ACTIONS(710), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11729] = 2,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11737] = 2,
    ACTIONS(712), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11745] = 2,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 102,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 511,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 709,
  [SMALL_STATE(21)] = 808,
  [SMALL_STATE(22)] = 907,
  [SMALL_STATE(23)] = 1006,
  [SMALL_STATE(24)] = 1105,
  [SMALL_STATE(25)] = 1204,
  [SMALL_STATE(26)] = 1303,
  [SMALL_STATE(27)] = 1402,
  [SMALL_STATE(28)] = 1501,
  [SMALL_STATE(29)] = 1597,
  [SMALL_STATE(30)] = 1693,
  [SMALL_STATE(31)] = 1789,
  [SMALL_STATE(32)] = 1885,
  [SMALL_STATE(33)] = 1981,
  [SMALL_STATE(34)] = 2077,
  [SMALL_STATE(35)] = 2173,
  [SMALL_STATE(36)] = 2269,
  [SMALL_STATE(37)] = 2365,
  [SMALL_STATE(38)] = 2461,
  [SMALL_STATE(39)] = 2557,
  [SMALL_STATE(40)] = 2653,
  [SMALL_STATE(41)] = 2749,
  [SMALL_STATE(42)] = 2845,
  [SMALL_STATE(43)] = 2941,
  [SMALL_STATE(44)] = 3037,
  [SMALL_STATE(45)] = 3133,
  [SMALL_STATE(46)] = 3229,
  [SMALL_STATE(47)] = 3325,
  [SMALL_STATE(48)] = 3421,
  [SMALL_STATE(49)] = 3517,
  [SMALL_STATE(50)] = 3613,
  [SMALL_STATE(51)] = 3709,
  [SMALL_STATE(52)] = 3805,
  [SMALL_STATE(53)] = 3901,
  [SMALL_STATE(54)] = 3997,
  [SMALL_STATE(55)] = 4093,
  [SMALL_STATE(56)] = 4189,
  [SMALL_STATE(57)] = 4285,
  [SMALL_STATE(58)] = 4381,
  [SMALL_STATE(59)] = 4477,
  [SMALL_STATE(60)] = 4573,
  [SMALL_STATE(61)] = 4669,
  [SMALL_STATE(62)] = 4765,
  [SMALL_STATE(63)] = 4861,
  [SMALL_STATE(64)] = 4957,
  [SMALL_STATE(65)] = 5053,
  [SMALL_STATE(66)] = 5149,
  [SMALL_STATE(67)] = 5245,
  [SMALL_STATE(68)] = 5341,
  [SMALL_STATE(69)] = 5437,
  [SMALL_STATE(70)] = 5533,
  [SMALL_STATE(71)] = 5569,
  [SMALL_STATE(72)] = 5605,
  [SMALL_STATE(73)] = 5640,
  [SMALL_STATE(74)] = 5677,
  [SMALL_STATE(75)] = 5718,
  [SMALL_STATE(76)] = 5761,
  [SMALL_STATE(77)] = 5798,
  [SMALL_STATE(78)] = 5833,
  [SMALL_STATE(79)] = 5874,
  [SMALL_STATE(80)] = 5911,
  [SMALL_STATE(81)] = 5943,
  [SMALL_STATE(82)] = 5975,
  [SMALL_STATE(83)] = 6007,
  [SMALL_STATE(84)] = 6039,
  [SMALL_STATE(85)] = 6071,
  [SMALL_STATE(86)] = 6103,
  [SMALL_STATE(87)] = 6135,
  [SMALL_STATE(88)] = 6167,
  [SMALL_STATE(89)] = 6199,
  [SMALL_STATE(90)] = 6231,
  [SMALL_STATE(91)] = 6267,
  [SMALL_STATE(92)] = 6299,
  [SMALL_STATE(93)] = 6331,
  [SMALL_STATE(94)] = 6363,
  [SMALL_STATE(95)] = 6395,
  [SMALL_STATE(96)] = 6427,
  [SMALL_STATE(97)] = 6459,
  [SMALL_STATE(98)] = 6491,
  [SMALL_STATE(99)] = 6523,
  [SMALL_STATE(100)] = 6559,
  [SMALL_STATE(101)] = 6591,
  [SMALL_STATE(102)] = 6623,
  [SMALL_STATE(103)] = 6655,
  [SMALL_STATE(104)] = 6689,
  [SMALL_STATE(105)] = 6721,
  [SMALL_STATE(106)] = 6753,
  [SMALL_STATE(107)] = 6785,
  [SMALL_STATE(108)] = 6816,
  [SMALL_STATE(109)] = 6847,
  [SMALL_STATE(110)] = 6878,
  [SMALL_STATE(111)] = 6909,
  [SMALL_STATE(112)] = 6940,
  [SMALL_STATE(113)] = 6971,
  [SMALL_STATE(114)] = 7002,
  [SMALL_STATE(115)] = 7033,
  [SMALL_STATE(116)] = 7064,
  [SMALL_STATE(117)] = 7095,
  [SMALL_STATE(118)] = 7126,
  [SMALL_STATE(119)] = 7157,
  [SMALL_STATE(120)] = 7188,
  [SMALL_STATE(121)] = 7219,
  [SMALL_STATE(122)] = 7254,
  [SMALL_STATE(123)] = 7285,
  [SMALL_STATE(124)] = 7316,
  [SMALL_STATE(125)] = 7349,
  [SMALL_STATE(126)] = 7384,
  [SMALL_STATE(127)] = 7415,
  [SMALL_STATE(128)] = 7446,
  [SMALL_STATE(129)] = 7477,
  [SMALL_STATE(130)] = 7508,
  [SMALL_STATE(131)] = 7539,
  [SMALL_STATE(132)] = 7574,
  [SMALL_STATE(133)] = 7609,
  [SMALL_STATE(134)] = 7640,
  [SMALL_STATE(135)] = 7671,
  [SMALL_STATE(136)] = 7704,
  [SMALL_STATE(137)] = 7735,
  [SMALL_STATE(138)] = 7766,
  [SMALL_STATE(139)] = 7797,
  [SMALL_STATE(140)] = 7827,
  [SMALL_STATE(141)] = 7861,
  [SMALL_STATE(142)] = 7907,
  [SMALL_STATE(143)] = 7941,
  [SMALL_STATE(144)] = 7985,
  [SMALL_STATE(145)] = 8027,
  [SMALL_STATE(146)] = 8067,
  [SMALL_STATE(147)] = 8103,
  [SMALL_STATE(148)] = 8143,
  [SMALL_STATE(149)] = 8177,
  [SMALL_STATE(150)] = 8207,
  [SMALL_STATE(151)] = 8253,
  [SMALL_STATE(152)] = 8283,
  [SMALL_STATE(153)] = 8319,
  [SMALL_STATE(154)] = 8349,
  [SMALL_STATE(155)] = 8393,
  [SMALL_STATE(156)] = 8439,
  [SMALL_STATE(157)] = 8481,
  [SMALL_STATE(158)] = 8527,
  [SMALL_STATE(159)] = 8573,
  [SMALL_STATE(160)] = 8619,
  [SMALL_STATE(161)] = 8665,
  [SMALL_STATE(162)] = 8711,
  [SMALL_STATE(163)] = 8760,
  [SMALL_STATE(164)] = 8805,
  [SMALL_STATE(165)] = 8850,
  [SMALL_STATE(166)] = 8895,
  [SMALL_STATE(167)] = 8942,
  [SMALL_STATE(168)] = 8989,
  [SMALL_STATE(169)] = 9037,
  [SMALL_STATE(170)] = 9085,
  [SMALL_STATE(171)] = 9133,
  [SMALL_STATE(172)] = 9181,
  [SMALL_STATE(173)] = 9229,
  [SMALL_STATE(174)] = 9265,
  [SMALL_STATE(175)] = 9313,
  [SMALL_STATE(176)] = 9357,
  [SMALL_STATE(177)] = 9386,
  [SMALL_STATE(178)] = 9431,
  [SMALL_STATE(179)] = 9474,
  [SMALL_STATE(180)] = 9517,
  [SMALL_STATE(181)] = 9562,
  [SMALL_STATE(182)] = 9607,
  [SMALL_STATE(183)] = 9649,
  [SMALL_STATE(184)] = 9685,
  [SMALL_STATE(185)] = 9717,
  [SMALL_STATE(186)] = 9759,
  [SMALL_STATE(187)] = 9801,
  [SMALL_STATE(188)] = 9843,
  [SMALL_STATE(189)] = 9881,
  [SMALL_STATE(190)] = 9921,
  [SMALL_STATE(191)] = 9963,
  [SMALL_STATE(192)] = 10005,
  [SMALL_STATE(193)] = 10047,
  [SMALL_STATE(194)] = 10077,
  [SMALL_STATE(195)] = 10104,
  [SMALL_STATE(196)] = 10123,
  [SMALL_STATE(197)] = 10142,
  [SMALL_STATE(198)] = 10161,
  [SMALL_STATE(199)] = 10188,
  [SMALL_STATE(200)] = 10212,
  [SMALL_STATE(201)] = 10230,
  [SMALL_STATE(202)] = 10254,
  [SMALL_STATE(203)] = 10268,
  [SMALL_STATE(204)] = 10285,
  [SMALL_STATE(205)] = 10304,
  [SMALL_STATE(206)] = 10321,
  [SMALL_STATE(207)] = 10340,
  [SMALL_STATE(208)] = 10357,
  [SMALL_STATE(209)] = 10374,
  [SMALL_STATE(210)] = 10391,
  [SMALL_STATE(211)] = 10408,
  [SMALL_STATE(212)] = 10427,
  [SMALL_STATE(213)] = 10444,
  [SMALL_STATE(214)] = 10456,
  [SMALL_STATE(215)] = 10468,
  [SMALL_STATE(216)] = 10486,
  [SMALL_STATE(217)] = 10504,
  [SMALL_STATE(218)] = 10522,
  [SMALL_STATE(219)] = 10534,
  [SMALL_STATE(220)] = 10546,
  [SMALL_STATE(221)] = 10558,
  [SMALL_STATE(222)] = 10570,
  [SMALL_STATE(223)] = 10582,
  [SMALL_STATE(224)] = 10594,
  [SMALL_STATE(225)] = 10606,
  [SMALL_STATE(226)] = 10618,
  [SMALL_STATE(227)] = 10638,
  [SMALL_STATE(228)] = 10650,
  [SMALL_STATE(229)] = 10662,
  [SMALL_STATE(230)] = 10680,
  [SMALL_STATE(231)] = 10697,
  [SMALL_STATE(232)] = 10712,
  [SMALL_STATE(233)] = 10723,
  [SMALL_STATE(234)] = 10734,
  [SMALL_STATE(235)] = 10749,
  [SMALL_STATE(236)] = 10764,
  [SMALL_STATE(237)] = 10781,
  [SMALL_STATE(238)] = 10798,
  [SMALL_STATE(239)] = 10813,
  [SMALL_STATE(240)] = 10828,
  [SMALL_STATE(241)] = 10839,
  [SMALL_STATE(242)] = 10850,
  [SMALL_STATE(243)] = 10867,
  [SMALL_STATE(244)] = 10882,
  [SMALL_STATE(245)] = 10893,
  [SMALL_STATE(246)] = 10910,
  [SMALL_STATE(247)] = 10925,
  [SMALL_STATE(248)] = 10940,
  [SMALL_STATE(249)] = 10955,
  [SMALL_STATE(250)] = 10966,
  [SMALL_STATE(251)] = 10977,
  [SMALL_STATE(252)] = 10992,
  [SMALL_STATE(253)] = 11007,
  [SMALL_STATE(254)] = 11018,
  [SMALL_STATE(255)] = 11032,
  [SMALL_STATE(256)] = 11046,
  [SMALL_STATE(257)] = 11060,
  [SMALL_STATE(258)] = 11074,
  [SMALL_STATE(259)] = 11088,
  [SMALL_STATE(260)] = 11102,
  [SMALL_STATE(261)] = 11116,
  [SMALL_STATE(262)] = 11130,
  [SMALL_STATE(263)] = 11144,
  [SMALL_STATE(264)] = 11158,
  [SMALL_STATE(265)] = 11172,
  [SMALL_STATE(266)] = 11186,
  [SMALL_STATE(267)] = 11200,
  [SMALL_STATE(268)] = 11214,
  [SMALL_STATE(269)] = 11228,
  [SMALL_STATE(270)] = 11242,
  [SMALL_STATE(271)] = 11256,
  [SMALL_STATE(272)] = 11270,
  [SMALL_STATE(273)] = 11284,
  [SMALL_STATE(274)] = 11298,
  [SMALL_STATE(275)] = 11310,
  [SMALL_STATE(276)] = 11324,
  [SMALL_STATE(277)] = 11338,
  [SMALL_STATE(278)] = 11349,
  [SMALL_STATE(279)] = 11360,
  [SMALL_STATE(280)] = 11371,
  [SMALL_STATE(281)] = 11382,
  [SMALL_STATE(282)] = 11393,
  [SMALL_STATE(283)] = 11404,
  [SMALL_STATE(284)] = 11415,
  [SMALL_STATE(285)] = 11426,
  [SMALL_STATE(286)] = 11435,
  [SMALL_STATE(287)] = 11446,
  [SMALL_STATE(288)] = 11455,
  [SMALL_STATE(289)] = 11464,
  [SMALL_STATE(290)] = 11475,
  [SMALL_STATE(291)] = 11486,
  [SMALL_STATE(292)] = 11497,
  [SMALL_STATE(293)] = 11505,
  [SMALL_STATE(294)] = 11513,
  [SMALL_STATE(295)] = 11521,
  [SMALL_STATE(296)] = 11529,
  [SMALL_STATE(297)] = 11537,
  [SMALL_STATE(298)] = 11545,
  [SMALL_STATE(299)] = 11553,
  [SMALL_STATE(300)] = 11561,
  [SMALL_STATE(301)] = 11569,
  [SMALL_STATE(302)] = 11577,
  [SMALL_STATE(303)] = 11585,
  [SMALL_STATE(304)] = 11593,
  [SMALL_STATE(305)] = 11601,
  [SMALL_STATE(306)] = 11609,
  [SMALL_STATE(307)] = 11617,
  [SMALL_STATE(308)] = 11625,
  [SMALL_STATE(309)] = 11633,
  [SMALL_STATE(310)] = 11641,
  [SMALL_STATE(311)] = 11649,
  [SMALL_STATE(312)] = 11657,
  [SMALL_STATE(313)] = 11665,
  [SMALL_STATE(314)] = 11673,
  [SMALL_STATE(315)] = 11681,
  [SMALL_STATE(316)] = 11689,
  [SMALL_STATE(317)] = 11697,
  [SMALL_STATE(318)] = 11705,
  [SMALL_STATE(319)] = 11713,
  [SMALL_STATE(320)] = 11721,
  [SMALL_STATE(321)] = 11729,
  [SMALL_STATE(322)] = 11737,
  [SMALL_STATE(323)] = 11745,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 1),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary, 1), SHIFT(315),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(296),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(300),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_if, 1), SHIFT(301),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3), SHIFT(299),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(315),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(272),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(12),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(311),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 6),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, .production_id = 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(290),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, .production_id = 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(245),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(312),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2), SHIFT_REPEAT(199),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(47),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [680] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
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
