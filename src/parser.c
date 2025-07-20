#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 331
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_AMP = 32,
  anon_sym_CARET = 33,
  anon_sym_PIPE = 34,
  anon_sym_LT_LT = 35,
  anon_sym_GT_GT = 36,
  anon_sym_GT_GT_GT = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_PLUS = 44,
  anon_sym_DASH = 45,
  anon_sym_STAR = 46,
  anon_sym_SLASH = 47,
  anon_sym_PERCENT = 48,
  anon_sym_STAR_STAR = 49,
  anon_sym_not = 50,
  anon_sym_TILDE = 51,
  sym_identifier = 52,
  sym_number = 53,
  anon_sym_false = 54,
  anon_sym_true = 55,
  sym_null = 56,
  anon_sym_DQUOTE = 57,
  sym__unescaped_string_fragment = 58,
  sym__escape_sequence = 59,
  sym_line_comment = 60,
  sym__automatic_semicolon = 61,
  sym_block_comment = 62,
  sym_raw_string_literal = 63,
  sym_module = 64,
  sym__shebang = 65,
  sym__path = 66,
  sym__sequence = 67,
  sym_block = 68,
  sym_statement = 69,
  sym_let = 70,
  sym_use = 71,
  sym__sc = 72,
  sym__primary = 73,
  sym__exp = 74,
  sym_break = 75,
  sym_return = 76,
  sym_await = 77,
  sym_launch = 78,
  sym_yield = 79,
  sym__if = 80,
  sym_if = 81,
  sym_fn = 82,
  sym_fn_type = 83,
  sym_params = 84,
  sym_loop = 85,
  sym_for = 86,
  sym_list = 87,
  sym_map = 88,
  sym_object = 89,
  sym_member = 90,
  sym_assignment = 91,
  sym_binary_exp = 92,
  sym_unary_exp = 93,
  sym_call = 94,
  sym_property_exp = 95,
  sym_bool = 96,
  sym_string = 97,
  sym_named_type = 98,
  sym_type = 99,
  sym_type_args = 100,
  sym_type_annotation = 101,
  aux_sym__path_repeat1 = 102,
  aux_sym__sequence_repeat1 = 103,
  aux_sym_params_repeat1 = 104,
  aux_sym_list_repeat1 = 105,
  aux_sym_map_repeat1 = 106,
  aux_sym_object_repeat1 = 107,
  aux_sym_property_exp_repeat1 = 108,
  aux_sym_string_repeat1 = 109,
  aux_sym_type_repeat1 = 110,
  aux_sym_type_args_repeat1 = 111,
  alias_sym_property_identifier = 112,
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
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
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
  [anon_sym_TILDE] = "~",
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
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
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
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
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
  [anon_sym_TILDE] = {
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
  field_operator = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_iterator] = "iterator",
  [field_operator] = "operator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_identifier, 1},
    {field_value, 3},
  [4] =
    {field_identifier, 1},
    {field_iterator, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_property_identifier,
  },
  [6] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
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
  [22] = 20,
  [23] = 23,
  [24] = 18,
  [25] = 21,
  [26] = 23,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 39,
  [48] = 33,
  [49] = 31,
  [50] = 29,
  [51] = 43,
  [52] = 31,
  [53] = 53,
  [54] = 41,
  [55] = 43,
  [56] = 34,
  [57] = 57,
  [58] = 58,
  [59] = 35,
  [60] = 60,
  [61] = 38,
  [62] = 28,
  [63] = 36,
  [64] = 32,
  [65] = 33,
  [66] = 53,
  [67] = 34,
  [68] = 38,
  [69] = 35,
  [70] = 28,
  [71] = 58,
  [72] = 36,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 73,
  [88] = 88,
  [89] = 89,
  [90] = 74,
  [91] = 91,
  [92] = 92,
  [93] = 76,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 79,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 80,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 85,
  [113] = 113,
  [114] = 114,
  [115] = 88,
  [116] = 83,
  [117] = 91,
  [118] = 108,
  [119] = 107,
  [120] = 77,
  [121] = 121,
  [122] = 105,
  [123] = 109,
  [124] = 104,
  [125] = 92,
  [126] = 101,
  [127] = 114,
  [128] = 84,
  [129] = 94,
  [130] = 100,
  [131] = 103,
  [132] = 99,
  [133] = 89,
  [134] = 86,
  [135] = 135,
  [136] = 98,
  [137] = 96,
  [138] = 138,
  [139] = 97,
  [140] = 95,
  [141] = 141,
  [142] = 135,
  [143] = 143,
  [144] = 144,
  [145] = 141,
  [146] = 113,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 150,
  [155] = 151,
  [156] = 138,
  [157] = 148,
  [158] = 144,
  [159] = 149,
  [160] = 110,
  [161] = 161,
  [162] = 143,
  [163] = 121,
  [164] = 161,
  [165] = 147,
  [166] = 111,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 167,
  [173] = 173,
  [174] = 81,
  [175] = 175,
  [176] = 173,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 177,
  [181] = 181,
  [182] = 181,
  [183] = 183,
  [184] = 114,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 150,
  [190] = 149,
  [191] = 187,
  [192] = 147,
  [193] = 148,
  [194] = 152,
  [195] = 141,
  [196] = 151,
  [197] = 143,
  [198] = 144,
  [199] = 161,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 202,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 205,
  [218] = 218,
  [219] = 204,
  [220] = 220,
  [221] = 221,
  [222] = 220,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 225,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 206,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 239,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 243,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 240,
  [255] = 255,
  [256] = 251,
  [257] = 253,
  [258] = 238,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 271,
  [274] = 270,
  [275] = 262,
  [276] = 276,
  [277] = 263,
  [278] = 278,
  [279] = 279,
  [280] = 266,
  [281] = 272,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 296,
  [297] = 297,
  [298] = 286,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 303,
  [316] = 316,
  [317] = 314,
  [318] = 310,
  [319] = 301,
  [320] = 306,
  [321] = 309,
  [322] = 322,
  [323] = 323,
  [324] = 322,
  [325] = 323,
  [326] = 326,
  [327] = 299,
  [328] = 328,
  [329] = 311,
  [330] = 304,
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
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(30);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(227);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == '{') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '}') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(30);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(211);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(228);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(211);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(193);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(190);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(190);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(211);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(110);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(112);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(108);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(203);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(100);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(120);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(208);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(169);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(166);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(88);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(184);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(198);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(211);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 79, .external_lex_state = 2},
  [2] = {.lex_state = 75, .external_lex_state = 2},
  [3] = {.lex_state = 75, .external_lex_state = 1},
  [4] = {.lex_state = 75, .external_lex_state = 2},
  [5] = {.lex_state = 79, .external_lex_state = 2},
  [6] = {.lex_state = 79, .external_lex_state = 2},
  [7] = {.lex_state = 79, .external_lex_state = 2},
  [8] = {.lex_state = 79, .external_lex_state = 2},
  [9] = {.lex_state = 79, .external_lex_state = 2},
  [10] = {.lex_state = 79, .external_lex_state = 2},
  [11] = {.lex_state = 79, .external_lex_state = 2},
  [12] = {.lex_state = 79, .external_lex_state = 2},
  [13] = {.lex_state = 80, .external_lex_state = 1},
  [14] = {.lex_state = 80, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 80, .external_lex_state = 2},
  [17] = {.lex_state = 80, .external_lex_state = 2},
  [18] = {.lex_state = 80, .external_lex_state = 2},
  [19] = {.lex_state = 80, .external_lex_state = 2},
  [20] = {.lex_state = 80, .external_lex_state = 2},
  [21] = {.lex_state = 80, .external_lex_state = 2},
  [22] = {.lex_state = 80, .external_lex_state = 2},
  [23] = {.lex_state = 80, .external_lex_state = 2},
  [24] = {.lex_state = 80, .external_lex_state = 2},
  [25] = {.lex_state = 80, .external_lex_state = 2},
  [26] = {.lex_state = 80, .external_lex_state = 2},
  [27] = {.lex_state = 80, .external_lex_state = 2},
  [28] = {.lex_state = 80, .external_lex_state = 2},
  [29] = {.lex_state = 80, .external_lex_state = 2},
  [30] = {.lex_state = 80, .external_lex_state = 2},
  [31] = {.lex_state = 80, .external_lex_state = 2},
  [32] = {.lex_state = 80, .external_lex_state = 2},
  [33] = {.lex_state = 80, .external_lex_state = 2},
  [34] = {.lex_state = 80, .external_lex_state = 2},
  [35] = {.lex_state = 80, .external_lex_state = 2},
  [36] = {.lex_state = 80, .external_lex_state = 2},
  [37] = {.lex_state = 80, .external_lex_state = 2},
  [38] = {.lex_state = 80, .external_lex_state = 2},
  [39] = {.lex_state = 80, .external_lex_state = 2},
  [40] = {.lex_state = 80, .external_lex_state = 2},
  [41] = {.lex_state = 80, .external_lex_state = 2},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 80, .external_lex_state = 2},
  [44] = {.lex_state = 80, .external_lex_state = 2},
  [45] = {.lex_state = 80, .external_lex_state = 2},
  [46] = {.lex_state = 80, .external_lex_state = 2},
  [47] = {.lex_state = 80, .external_lex_state = 2},
  [48] = {.lex_state = 80, .external_lex_state = 2},
  [49] = {.lex_state = 80, .external_lex_state = 2},
  [50] = {.lex_state = 80, .external_lex_state = 2},
  [51] = {.lex_state = 80, .external_lex_state = 2},
  [52] = {.lex_state = 80, .external_lex_state = 2},
  [53] = {.lex_state = 80, .external_lex_state = 2},
  [54] = {.lex_state = 80, .external_lex_state = 2},
  [55] = {.lex_state = 80, .external_lex_state = 2},
  [56] = {.lex_state = 80, .external_lex_state = 2},
  [57] = {.lex_state = 80, .external_lex_state = 2},
  [58] = {.lex_state = 80, .external_lex_state = 2},
  [59] = {.lex_state = 80, .external_lex_state = 2},
  [60] = {.lex_state = 80, .external_lex_state = 2},
  [61] = {.lex_state = 80, .external_lex_state = 2},
  [62] = {.lex_state = 80, .external_lex_state = 2},
  [63] = {.lex_state = 80, .external_lex_state = 2},
  [64] = {.lex_state = 80, .external_lex_state = 2},
  [65] = {.lex_state = 80, .external_lex_state = 2},
  [66] = {.lex_state = 80, .external_lex_state = 2},
  [67] = {.lex_state = 80, .external_lex_state = 2},
  [68] = {.lex_state = 80, .external_lex_state = 2},
  [69] = {.lex_state = 80, .external_lex_state = 2},
  [70] = {.lex_state = 80, .external_lex_state = 2},
  [71] = {.lex_state = 80, .external_lex_state = 2},
  [72] = {.lex_state = 80, .external_lex_state = 2},
  [73] = {.lex_state = 77, .external_lex_state = 3},
  [74] = {.lex_state = 77, .external_lex_state = 3},
  [75] = {.lex_state = 77, .external_lex_state = 3},
  [76] = {.lex_state = 77, .external_lex_state = 4},
  [77] = {.lex_state = 77, .external_lex_state = 3},
  [78] = {.lex_state = 77, .external_lex_state = 3},
  [79] = {.lex_state = 77, .external_lex_state = 4},
  [80] = {.lex_state = 77, .external_lex_state = 4},
  [81] = {.lex_state = 77, .external_lex_state = 4},
  [82] = {.lex_state = 77, .external_lex_state = 3},
  [83] = {.lex_state = 77, .external_lex_state = 4},
  [84] = {.lex_state = 77, .external_lex_state = 4},
  [85] = {.lex_state = 77, .external_lex_state = 4},
  [86] = {.lex_state = 77, .external_lex_state = 4},
  [87] = {.lex_state = 77, .external_lex_state = 4},
  [88] = {.lex_state = 77, .external_lex_state = 4},
  [89] = {.lex_state = 77, .external_lex_state = 4},
  [90] = {.lex_state = 77, .external_lex_state = 4},
  [91] = {.lex_state = 77, .external_lex_state = 4},
  [92] = {.lex_state = 77, .external_lex_state = 4},
  [93] = {.lex_state = 77, .external_lex_state = 3},
  [94] = {.lex_state = 77, .external_lex_state = 4},
  [95] = {.lex_state = 77, .external_lex_state = 4},
  [96] = {.lex_state = 77, .external_lex_state = 4},
  [97] = {.lex_state = 77, .external_lex_state = 4},
  [98] = {.lex_state = 77, .external_lex_state = 4},
  [99] = {.lex_state = 77, .external_lex_state = 4},
  [100] = {.lex_state = 77, .external_lex_state = 4},
  [101] = {.lex_state = 77, .external_lex_state = 4},
  [102] = {.lex_state = 77, .external_lex_state = 3},
  [103] = {.lex_state = 77, .external_lex_state = 4},
  [104] = {.lex_state = 77, .external_lex_state = 4},
  [105] = {.lex_state = 77, .external_lex_state = 4},
  [106] = {.lex_state = 77, .external_lex_state = 3},
  [107] = {.lex_state = 77, .external_lex_state = 4},
  [108] = {.lex_state = 77, .external_lex_state = 4},
  [109] = {.lex_state = 77, .external_lex_state = 4},
  [110] = {.lex_state = 77, .external_lex_state = 4},
  [111] = {.lex_state = 77, .external_lex_state = 4},
  [112] = {.lex_state = 77, .external_lex_state = 3},
  [113] = {.lex_state = 77, .external_lex_state = 4},
  [114] = {.lex_state = 77, .external_lex_state = 4},
  [115] = {.lex_state = 77, .external_lex_state = 3},
  [116] = {.lex_state = 77, .external_lex_state = 3},
  [117] = {.lex_state = 77, .external_lex_state = 3},
  [118] = {.lex_state = 77, .external_lex_state = 3},
  [119] = {.lex_state = 77, .external_lex_state = 3},
  [120] = {.lex_state = 77, .external_lex_state = 3},
  [121] = {.lex_state = 77, .external_lex_state = 4},
  [122] = {.lex_state = 77, .external_lex_state = 3},
  [123] = {.lex_state = 77, .external_lex_state = 3},
  [124] = {.lex_state = 77, .external_lex_state = 3},
  [125] = {.lex_state = 77, .external_lex_state = 3},
  [126] = {.lex_state = 77, .external_lex_state = 3},
  [127] = {.lex_state = 77, .external_lex_state = 3},
  [128] = {.lex_state = 77, .external_lex_state = 3},
  [129] = {.lex_state = 77, .external_lex_state = 3},
  [130] = {.lex_state = 77, .external_lex_state = 3},
  [131] = {.lex_state = 77, .external_lex_state = 3},
  [132] = {.lex_state = 77, .external_lex_state = 3},
  [133] = {.lex_state = 77, .external_lex_state = 3},
  [134] = {.lex_state = 77, .external_lex_state = 3},
  [135] = {.lex_state = 77, .external_lex_state = 4},
  [136] = {.lex_state = 77, .external_lex_state = 3},
  [137] = {.lex_state = 77, .external_lex_state = 3},
  [138] = {.lex_state = 77, .external_lex_state = 4},
  [139] = {.lex_state = 77, .external_lex_state = 3},
  [140] = {.lex_state = 77, .external_lex_state = 3},
  [141] = {.lex_state = 77, .external_lex_state = 3},
  [142] = {.lex_state = 77, .external_lex_state = 3},
  [143] = {.lex_state = 77, .external_lex_state = 3},
  [144] = {.lex_state = 77, .external_lex_state = 4},
  [145] = {.lex_state = 77, .external_lex_state = 4},
  [146] = {.lex_state = 77, .external_lex_state = 3},
  [147] = {.lex_state = 77, .external_lex_state = 4},
  [148] = {.lex_state = 77, .external_lex_state = 4},
  [149] = {.lex_state = 77, .external_lex_state = 3},
  [150] = {.lex_state = 77, .external_lex_state = 3},
  [151] = {.lex_state = 77, .external_lex_state = 4},
  [152] = {.lex_state = 77, .external_lex_state = 3},
  [153] = {.lex_state = 77, .external_lex_state = 4},
  [154] = {.lex_state = 77, .external_lex_state = 4},
  [155] = {.lex_state = 77, .external_lex_state = 3},
  [156] = {.lex_state = 77, .external_lex_state = 3},
  [157] = {.lex_state = 77, .external_lex_state = 3},
  [158] = {.lex_state = 77, .external_lex_state = 3},
  [159] = {.lex_state = 77, .external_lex_state = 4},
  [160] = {.lex_state = 77, .external_lex_state = 3},
  [161] = {.lex_state = 77, .external_lex_state = 4},
  [162] = {.lex_state = 77, .external_lex_state = 4},
  [163] = {.lex_state = 77, .external_lex_state = 3},
  [164] = {.lex_state = 77, .external_lex_state = 3},
  [165] = {.lex_state = 77, .external_lex_state = 3},
  [166] = {.lex_state = 77, .external_lex_state = 3},
  [167] = {.lex_state = 77, .external_lex_state = 3},
  [168] = {.lex_state = 77, .external_lex_state = 3},
  [169] = {.lex_state = 77, .external_lex_state = 3},
  [170] = {.lex_state = 77, .external_lex_state = 3},
  [171] = {.lex_state = 77, .external_lex_state = 3},
  [172] = {.lex_state = 77, .external_lex_state = 3},
  [173] = {.lex_state = 77, .external_lex_state = 4},
  [174] = {.lex_state = 77, .external_lex_state = 4},
  [175] = {.lex_state = 77, .external_lex_state = 4},
  [176] = {.lex_state = 77, .external_lex_state = 4},
  [177] = {.lex_state = 77, .external_lex_state = 4},
  [178] = {.lex_state = 77, .external_lex_state = 4},
  [179] = {.lex_state = 77, .external_lex_state = 4},
  [180] = {.lex_state = 77, .external_lex_state = 4},
  [181] = {.lex_state = 77, .external_lex_state = 4},
  [182] = {.lex_state = 77, .external_lex_state = 4},
  [183] = {.lex_state = 77, .external_lex_state = 4},
  [184] = {.lex_state = 77, .external_lex_state = 4},
  [185] = {.lex_state = 77, .external_lex_state = 4},
  [186] = {.lex_state = 77, .external_lex_state = 3},
  [187] = {.lex_state = 77, .external_lex_state = 4},
  [188] = {.lex_state = 77, .external_lex_state = 4},
  [189] = {.lex_state = 77, .external_lex_state = 4},
  [190] = {.lex_state = 77, .external_lex_state = 4},
  [191] = {.lex_state = 77, .external_lex_state = 4},
  [192] = {.lex_state = 77, .external_lex_state = 4},
  [193] = {.lex_state = 77, .external_lex_state = 4},
  [194] = {.lex_state = 77, .external_lex_state = 4},
  [195] = {.lex_state = 77, .external_lex_state = 4},
  [196] = {.lex_state = 77, .external_lex_state = 4},
  [197] = {.lex_state = 77, .external_lex_state = 4},
  [198] = {.lex_state = 77, .external_lex_state = 4},
  [199] = {.lex_state = 77, .external_lex_state = 4},
  [200] = {.lex_state = 4, .external_lex_state = 4},
  [201] = {.lex_state = 4, .external_lex_state = 4},
  [202] = {.lex_state = 4, .external_lex_state = 4},
  [203] = {.lex_state = 4, .external_lex_state = 4},
  [204] = {.lex_state = 4, .external_lex_state = 4},
  [205] = {.lex_state = 4, .external_lex_state = 4},
  [206] = {.lex_state = 4, .external_lex_state = 4},
  [207] = {.lex_state = 79, .external_lex_state = 4},
  [208] = {.lex_state = 4, .external_lex_state = 4},
  [209] = {.lex_state = 4, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 77, .external_lex_state = 3},
  [213] = {.lex_state = 79, .external_lex_state = 4},
  [214] = {.lex_state = 79, .external_lex_state = 4},
  [215] = {.lex_state = 79, .external_lex_state = 4},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 77, .external_lex_state = 3},
  [218] = {.lex_state = 79, .external_lex_state = 4},
  [219] = {.lex_state = 77, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 4},
  [221] = {.lex_state = 79, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 79, .external_lex_state = 4},
  [224] = {.lex_state = 79, .external_lex_state = 4},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 79, .external_lex_state = 4},
  [228] = {.lex_state = 79, .external_lex_state = 4},
  [229] = {.lex_state = 79, .external_lex_state = 4},
  [230] = {.lex_state = 79, .external_lex_state = 4},
  [231] = {.lex_state = 79, .external_lex_state = 4},
  [232] = {.lex_state = 77, .external_lex_state = 3},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 79, .external_lex_state = 4},
  [235] = {.lex_state = 79, .external_lex_state = 4},
  [236] = {.lex_state = 79, .external_lex_state = 4},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 3, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 79, .external_lex_state = 4},
  [242] = {.lex_state = 3, .external_lex_state = 4},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 79, .external_lex_state = 4},
  [245] = {.lex_state = 3, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 79, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0, .external_lex_state = 3},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 3, .external_lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 3, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 6, .external_lex_state = 4},
  [263] = {.lex_state = 6, .external_lex_state = 4},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 6, .external_lex_state = 4},
  [268] = {.lex_state = 79, .external_lex_state = 4},
  [269] = {.lex_state = 6, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 6, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 6, .external_lex_state = 4},
  [276] = {.lex_state = 79, .external_lex_state = 4},
  [277] = {.lex_state = 6, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 79, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 6, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 0, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 4},
  [286] = {.lex_state = 6, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 3},
  [288] = {.lex_state = 6, .external_lex_state = 4},
  [289] = {.lex_state = 6, .external_lex_state = 4},
  [290] = {.lex_state = 6, .external_lex_state = 4},
  [291] = {.lex_state = 0, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 6, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 4},
  [296] = {.lex_state = 6, .external_lex_state = 4},
  [297] = {.lex_state = 79, .external_lex_state = 4},
  [298] = {.lex_state = 6, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 6, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 77, .external_lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 6, .external_lex_state = 4},
  [311] = {.lex_state = 6, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 4},
  [313] = {.lex_state = 79, .external_lex_state = 4},
  [314] = {.lex_state = 0, .external_lex_state = 4},
  [315] = {.lex_state = 6, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 6, .external_lex_state = 4},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 77, .external_lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 4},
  [322] = {.lex_state = 0, .external_lex_state = 4},
  [323] = {.lex_state = 6, .external_lex_state = 4},
  [324] = {.lex_state = 0, .external_lex_state = 4},
  [325] = {.lex_state = 6, .external_lex_state = 4},
  [326] = {.lex_state = 6, .external_lex_state = 4},
  [327] = {.lex_state = 0, .external_lex_state = 4},
  [328] = {.lex_state = 6, .external_lex_state = 4},
  [329] = {.lex_state = 6, .external_lex_state = 4},
  [330] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
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
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_module] = STATE(308),
    [sym__shebang] = STATE(7),
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(305),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym_block] = STATE(114),
    [sym__primary] = STATE(114),
    [sym__exp] = STATE(144),
    [sym_await] = STATE(144),
    [sym_launch] = STATE(144),
    [sym_yield] = STATE(144),
    [sym__if] = STATE(77),
    [sym_if] = STATE(144),
    [sym_fn] = STATE(114),
    [sym_fn_type] = STATE(284),
    [sym_loop] = STATE(144),
    [sym_for] = STATE(144),
    [sym_list] = STATE(114),
    [sym_map] = STATE(114),
    [sym_object] = STATE(114),
    [sym_assignment] = STATE(144),
    [sym_binary_exp] = STATE(144),
    [sym_unary_exp] = STATE(144),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
    [sym_named_type] = STATE(330),
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
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(57),
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
    [anon_sym_TILDE] = ACTIONS(73),
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
    [sym__path] = STATE(207),
    [sym_block] = STATE(127),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(158),
    [sym_await] = STATE(158),
    [sym_launch] = STATE(158),
    [sym_yield] = STATE(158),
    [sym__if] = STATE(120),
    [sym_if] = STATE(158),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(158),
    [sym_for] = STATE(158),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(158),
    [sym_binary_exp] = STATE(158),
    [sym_unary_exp] = STATE(158),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
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
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(57),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym_block] = STATE(184),
    [sym__primary] = STATE(184),
    [sym__exp] = STATE(198),
    [sym_await] = STATE(198),
    [sym_launch] = STATE(198),
    [sym_yield] = STATE(198),
    [sym__if] = STATE(77),
    [sym_if] = STATE(198),
    [sym_fn] = STATE(184),
    [sym_fn_type] = STATE(284),
    [sym_loop] = STATE(198),
    [sym_for] = STATE(198),
    [sym_list] = STATE(184),
    [sym_map] = STATE(184),
    [sym_object] = STATE(184),
    [sym_assignment] = STATE(198),
    [sym_binary_exp] = STATE(198),
    [sym_unary_exp] = STATE(198),
    [sym_call] = STATE(184),
    [sym_property_exp] = STATE(184),
    [sym_bool] = STATE(184),
    [sym_string] = STATE(184),
    [sym_named_type] = STATE(330),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_await] = ACTIONS(87),
    [anon_sym_launch] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(93),
    [sym_identifier] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [sym_null] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(101),
  },
  [5] = {
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(321),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(167),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(167),
    [sym_launch] = STATE(167),
    [sym_yield] = STATE(167),
    [sym__if] = STATE(120),
    [sym_if] = STATE(167),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(167),
    [sym_for] = STATE(167),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_member] = STATE(258),
    [sym_assignment] = STATE(167),
    [sym_binary_exp] = STATE(167),
    [sym_unary_exp] = STATE(167),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(105),
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
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(109),
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
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(309),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(172),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(172),
    [sym_launch] = STATE(172),
    [sym_yield] = STATE(172),
    [sym__if] = STATE(120),
    [sym_if] = STATE(172),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(172),
    [sym_for] = STATE(172),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_member] = STATE(238),
    [sym_assignment] = STATE(172),
    [sym_binary_exp] = STATE(172),
    [sym_unary_exp] = STATE(172),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(113),
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
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(109),
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
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(316),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [ts_builtin_sym_end] = ACTIONS(117),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(259),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(119),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(321),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(121),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(259),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(123),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    [sym__path] = STATE(207),
    [sym__sequence] = STATE(309),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(216),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(125),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
  [12] = {
    [sym__path] = STATE(207),
    [sym_block] = STATE(127),
    [sym_statement] = STATE(259),
    [sym_let] = STATE(249),
    [sym_use] = STATE(249),
    [sym__primary] = STATE(127),
    [sym__exp] = STATE(171),
    [sym_break] = STATE(249),
    [sym_return] = STATE(249),
    [sym_await] = STATE(171),
    [sym_launch] = STATE(171),
    [sym_yield] = STATE(171),
    [sym__if] = STATE(120),
    [sym_if] = STATE(171),
    [sym_fn] = STATE(127),
    [sym_fn_type] = STATE(285),
    [sym_loop] = STATE(171),
    [sym_for] = STATE(171),
    [sym_list] = STATE(127),
    [sym_map] = STATE(127),
    [sym_object] = STATE(127),
    [sym_assignment] = STATE(171),
    [sym_binary_exp] = STATE(171),
    [sym_unary_exp] = STATE(171),
    [sym_call] = STATE(127),
    [sym_property_exp] = STATE(127),
    [sym_bool] = STATE(127),
    [sym_string] = STATE(127),
    [sym_named_type] = STATE(304),
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
    [anon_sym_TILDE] = ACTIONS(39),
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(127), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(127), 10,
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
  [103] = 25,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(129), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(127), 10,
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
  [206] = 26,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(260), 1,
      sym_let,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
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
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
    STATE(149), 10,
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
  [310] = 26,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [413] = 26,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [516] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [616] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [716] = 25,
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
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [816] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [916] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1016] = 25,
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
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1116] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1216] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1316] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1416] = 25,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [1516] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
  [1613] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [1710] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(195), 10,
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
  [1807] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
  [1904] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(110), 10,
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
    STATE(184), 10,
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
  [2001] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(193), 10,
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
  [2098] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(196), 10,
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
  [2195] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(194), 10,
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
  [2292] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
  [2389] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [2486] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(197), 10,
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
  [2583] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
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
    STATE(184), 10,
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
  [2680] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [2777] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [2874] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
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
    STATE(184), 10,
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
  [2971] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(184), 10,
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
    STATE(199), 10,
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
  [3068] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
    STATE(185), 10,
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
  [3165] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
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
    STATE(184), 10,
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
  [3262] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [3359] = 24,
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
    ACTIONS(87), 1,
      anon_sym_await,
    ACTIONS(89), 1,
      anon_sym_launch,
    ACTIONS(91), 1,
      anon_sym_yield,
    ACTIONS(95), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(99), 2,
      sym_number,
      sym_null,
    ACTIONS(93), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
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
    STATE(184), 10,
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
  [3456] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [3553] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [3650] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [3747] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [3844] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
    STATE(165), 10,
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
  [3941] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [4038] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [4135] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [4232] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
    STATE(155), 10,
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
  [4329] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [4426] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
    STATE(173), 10,
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
  [4523] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [4620] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [4717] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [4814] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [4911] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [5008] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(110), 10,
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
    STATE(114), 10,
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
  [5105] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [5202] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
  [5299] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
    STATE(151), 10,
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
  [5396] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
  [5493] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
    STATE(153), 10,
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
  [5590] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
    STATE(149), 10,
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
  [5687] = 24,
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
    STATE(77), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(284), 1,
      sym_fn_type,
    STATE(330), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(79), 2,
      sym_number,
      sym_null,
    ACTIONS(81), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(114), 10,
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
    STATE(176), 10,
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
  [5784] = 24,
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
    STATE(120), 1,
      sym__if,
    STATE(207), 1,
      sym__path,
    STATE(285), 1,
      sym_fn_type,
    STATE(304), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(45), 2,
      sym_number,
      sym_null,
    ACTIONS(47), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(127), 10,
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
    STATE(150), 10,
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
  [5881] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(159), 27,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5923] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 27,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [5965] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(167), 27,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6006] = 5,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6049] = 5,
    ACTIONS(179), 1,
      anon_sym_else,
    ACTIONS(183), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6092] = 8,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(196), 1,
      anon_sym_LT,
    STATE(204), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(190), 20,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6141] = 5,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(204), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(202), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6184] = 4,
    STATE(79), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(208), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(206), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6225] = 7,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_LT,
    STATE(204), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(190), 21,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6272] = 7,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_LT,
    STATE(204), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(190), 21,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6319] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6357] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(214), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
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
    ACTIONS(220), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(218), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6433] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6471] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(159), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6509] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6547] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6585] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
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
    ACTIONS(236), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6661] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6699] = 5,
    ACTIONS(242), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 21,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6741] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6779] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6817] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6855] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6893] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6931] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [6969] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7007] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7045] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(204), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(202), 21,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7087] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7125] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7163] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7201] = 4,
    STATE(102), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(208), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(206), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7241] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7279] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7317] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7355] = 5,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7396] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(311), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7433] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(220), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(218), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7470] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7507] = 4,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 21,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7546] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(226), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7583] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(234), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7657] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7694] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7731] = 5,
    ACTIONS(325), 1,
      anon_sym_else,
    ACTIONS(327), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 21,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7772] = 5,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(332), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(330), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7813] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7850] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7887] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7924] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(238), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7961] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [7998] = 4,
    ACTIONS(334), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 21,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8037] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(214), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8074] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8111] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(268), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8148] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8185] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8222] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8259] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8296] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8333] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8370] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(252), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8407] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(340), 23,
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
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8444] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(256), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8481] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(248), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8518] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(344), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8574] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8610] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(368), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8666] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
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
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8722] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(344), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8778] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [8814] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [8870] = 6,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 19,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [8912] = 12,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(305), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [8966] = 11,
    ACTIONS(309), 1,
      anon_sym_GT_GT,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(305), 12,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9018] = 8,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 18,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9064] = 9,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9112] = 9,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 16,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9160] = 11,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(305), 12,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9212] = 8,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9258] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(340), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [9294] = 6,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 19,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [9336] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(370), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9392] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(305), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [9446] = 5,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 20,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [9486] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [9540] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9596] = 5,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(332), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(330), 20,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [9636] = 12,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [9690] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(390), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9746] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(311), 22,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [9782] = 14,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(392), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9839] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(396), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9894] = 15,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(400), 1,
      anon_sym_and,
    ACTIONS(402), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9953] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10008] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(392), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10063] = 14,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(392), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10120] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10178] = 7,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_LT,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 4,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(190), 17,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [10220] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(416), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10274] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10332] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10390] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10448] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10506] = 15,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10564] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    STATE(142), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10619] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10674] = 14,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    STATE(75), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10729] = 4,
    ACTIONS(458), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 18,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [10764] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(460), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10817] = 13,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_GT_GT,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(462), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(356), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10870] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10922] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(466), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10974] = 11,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(305), 8,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11022] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11072] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT_GT,
    ACTIONS(386), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11124] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11176] = 6,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(305), 15,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [11214] = 9,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 12,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11258] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11310] = 8,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 14,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11352] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11404] = 13,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11456] = 12,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_GT_GT,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(330), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(440), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11506] = 9,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_GT,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(207), 1,
      sym__path,
    STATE(215), 1,
      sym_named_type,
    STATE(241), 1,
      sym_fn_type,
    STATE(276), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [11536] = 8,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_GT,
    STATE(207), 1,
      sym__path,
    STATE(215), 1,
      sym_named_type,
    STATE(241), 1,
      sym_fn_type,
    STATE(297), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [11563] = 4,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(188), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [11582] = 8,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_GT,
    STATE(207), 1,
      sym__path,
    STATE(215), 1,
      sym_named_type,
    STATE(241), 1,
      sym_fn_type,
    STATE(297), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [11609] = 4,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(482), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [11628] = 4,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [11647] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [11661] = 4,
    ACTIONS(491), 1,
      anon_sym_LT,
    STATE(228), 1,
      sym_type_args,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [11679] = 7,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(207), 1,
      sym__path,
    STATE(215), 1,
      sym_named_type,
    STATE(241), 1,
      sym_fn_type,
    STATE(297), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [11703] = 7,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(207), 1,
      sym__path,
    STATE(215), 1,
      sym_named_type,
    STATE(241), 1,
      sym_fn_type,
    STATE(247), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [11727] = 5,
    STATE(10), 1,
      sym__sc,
    STATE(211), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(493), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [11746] = 5,
    STATE(12), 1,
      sym__sc,
    STATE(211), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(497), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [11765] = 4,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(219), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(188), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11782] = 4,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [11799] = 4,
    ACTIONS(508), 1,
      anon_sym_PLUS,
    STATE(218), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(506), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [11816] = 4,
    ACTIONS(508), 1,
      anon_sym_PLUS,
    STATE(214), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(510), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [11833] = 5,
    STATE(8), 1,
      sym__sc,
    STATE(210), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(514), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [11852] = 4,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11869] = 4,
    ACTIONS(521), 1,
      anon_sym_PLUS,
    STATE(218), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [11886] = 4,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(482), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11903] = 5,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(138), 2,
      sym_block,
      sym_if,
  [11921] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(526), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [11933] = 5,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_if,
    STATE(120), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_block,
      sym_if,
  [11951] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(528), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [11963] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [11975] = 5,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(111), 2,
      sym_block,
      sym_if,
  [11993] = 5,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_if,
    STATE(120), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(166), 2,
      sym_block,
      sym_if,
  [12011] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(532), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12023] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12035] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12047] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12059] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12071] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12083] = 6,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      sym_type_annotation,
    STATE(265), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12103] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12115] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(546), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12127] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(548), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12139] = 4,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(292), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12154] = 4,
    STATE(250), 1,
      aux_sym_object_repeat1,
    STATE(262), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12169] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(558), 1,
      sym_line_comment,
    STATE(251), 1,
      aux_sym_string_repeat1,
    ACTIONS(556), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [12186] = 4,
    STATE(252), 1,
      aux_sym_object_repeat1,
    STATE(281), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12201] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(510), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12212] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_repeat1,
    ACTIONS(564), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [12229] = 4,
    STATE(252), 1,
      aux_sym_object_repeat1,
    STATE(263), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(566), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12244] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(568), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12255] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(572), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [12272] = 4,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12287] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(578), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12298] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(580), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12309] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(392), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12320] = 4,
    STATE(252), 1,
      aux_sym_object_repeat1,
    STATE(277), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(582), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12335] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(586), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [12352] = 4,
    STATE(252), 1,
      aux_sym_object_repeat1,
    STATE(294), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(588), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12367] = 4,
    STATE(254), 1,
      aux_sym_object_repeat1,
    STATE(277), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(582), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12382] = 4,
    STATE(252), 1,
      aux_sym_object_repeat1,
    STATE(272), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12397] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12408] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(586), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [12425] = 4,
    STATE(240), 1,
      aux_sym_object_repeat1,
    STATE(263), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(566), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12440] = 4,
    STATE(243), 1,
      aux_sym_object_repeat1,
    STATE(275), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(597), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12455] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(495), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12466] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(599), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12477] = 4,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12491] = 4,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12505] = 4,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12519] = 4,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12533] = 4,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12547] = 4,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12561] = 4,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(207), 1,
      sym__path,
    STATE(229), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12575] = 4,
    ACTIONS(476), 1,
      anon_sym_GT,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12589] = 4,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12603] = 4,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12617] = 4,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12631] = 4,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12645] = 4,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12659] = 4,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12673] = 4,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12687] = 4,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(268), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12701] = 4,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12715] = 4,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12729] = 4,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_GT,
    STATE(279), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12743] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12757] = 4,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12771] = 3,
    STATE(248), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_let,
      anon_sym_var,
  [12783] = 4,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12797] = 3,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12808] = 3,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12819] = 3,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(253), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12830] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12839] = 3,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12850] = 3,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(255), 1,
      sym__path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12861] = 3,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12872] = 3,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12883] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(674), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12892] = 3,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12903] = 3,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(287), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12914] = 3,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12925] = 3,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12936] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12945] = 3,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(257), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12956] = 2,
    ACTIONS(676), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12964] = 2,
    ACTIONS(678), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12972] = 2,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12980] = 2,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12988] = 2,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12996] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13004] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13012] = 2,
    ACTIONS(686), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13020] = 2,
    ACTIONS(688), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13028] = 2,
    ACTIONS(690), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13036] = 2,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13044] = 2,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13052] = 2,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13060] = 2,
    ACTIONS(698), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13068] = 2,
    ACTIONS(641), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13076] = 2,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13084] = 2,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13092] = 2,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13100] = 2,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13108] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13116] = 2,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13124] = 2,
    ACTIONS(712), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13132] = 2,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13140] = 2,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13148] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13156] = 2,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13164] = 2,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13172] = 2,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13180] = 2,
    ACTIONS(720), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13188] = 2,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13196] = 2,
    ACTIONS(724), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13204] = 2,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 413,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 616,
  [SMALL_STATE(20)] = 716,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 916,
  [SMALL_STATE(23)] = 1016,
  [SMALL_STATE(24)] = 1116,
  [SMALL_STATE(25)] = 1216,
  [SMALL_STATE(26)] = 1316,
  [SMALL_STATE(27)] = 1416,
  [SMALL_STATE(28)] = 1516,
  [SMALL_STATE(29)] = 1613,
  [SMALL_STATE(30)] = 1710,
  [SMALL_STATE(31)] = 1807,
  [SMALL_STATE(32)] = 1904,
  [SMALL_STATE(33)] = 2001,
  [SMALL_STATE(34)] = 2098,
  [SMALL_STATE(35)] = 2195,
  [SMALL_STATE(36)] = 2292,
  [SMALL_STATE(37)] = 2389,
  [SMALL_STATE(38)] = 2486,
  [SMALL_STATE(39)] = 2583,
  [SMALL_STATE(40)] = 2680,
  [SMALL_STATE(41)] = 2777,
  [SMALL_STATE(42)] = 2874,
  [SMALL_STATE(43)] = 2971,
  [SMALL_STATE(44)] = 3068,
  [SMALL_STATE(45)] = 3165,
  [SMALL_STATE(46)] = 3262,
  [SMALL_STATE(47)] = 3359,
  [SMALL_STATE(48)] = 3456,
  [SMALL_STATE(49)] = 3553,
  [SMALL_STATE(50)] = 3650,
  [SMALL_STATE(51)] = 3747,
  [SMALL_STATE(52)] = 3844,
  [SMALL_STATE(53)] = 3941,
  [SMALL_STATE(54)] = 4038,
  [SMALL_STATE(55)] = 4135,
  [SMALL_STATE(56)] = 4232,
  [SMALL_STATE(57)] = 4329,
  [SMALL_STATE(58)] = 4426,
  [SMALL_STATE(59)] = 4523,
  [SMALL_STATE(60)] = 4620,
  [SMALL_STATE(61)] = 4717,
  [SMALL_STATE(62)] = 4814,
  [SMALL_STATE(63)] = 4911,
  [SMALL_STATE(64)] = 5008,
  [SMALL_STATE(65)] = 5105,
  [SMALL_STATE(66)] = 5202,
  [SMALL_STATE(67)] = 5299,
  [SMALL_STATE(68)] = 5396,
  [SMALL_STATE(69)] = 5493,
  [SMALL_STATE(70)] = 5590,
  [SMALL_STATE(71)] = 5687,
  [SMALL_STATE(72)] = 5784,
  [SMALL_STATE(73)] = 5881,
  [SMALL_STATE(74)] = 5923,
  [SMALL_STATE(75)] = 5965,
  [SMALL_STATE(76)] = 6006,
  [SMALL_STATE(77)] = 6049,
  [SMALL_STATE(78)] = 6092,
  [SMALL_STATE(79)] = 6141,
  [SMALL_STATE(80)] = 6184,
  [SMALL_STATE(81)] = 6225,
  [SMALL_STATE(82)] = 6272,
  [SMALL_STATE(83)] = 6319,
  [SMALL_STATE(84)] = 6357,
  [SMALL_STATE(85)] = 6395,
  [SMALL_STATE(86)] = 6433,
  [SMALL_STATE(87)] = 6471,
  [SMALL_STATE(88)] = 6509,
  [SMALL_STATE(89)] = 6547,
  [SMALL_STATE(90)] = 6585,
  [SMALL_STATE(91)] = 6623,
  [SMALL_STATE(92)] = 6661,
  [SMALL_STATE(93)] = 6699,
  [SMALL_STATE(94)] = 6741,
  [SMALL_STATE(95)] = 6779,
  [SMALL_STATE(96)] = 6817,
  [SMALL_STATE(97)] = 6855,
  [SMALL_STATE(98)] = 6893,
  [SMALL_STATE(99)] = 6931,
  [SMALL_STATE(100)] = 6969,
  [SMALL_STATE(101)] = 7007,
  [SMALL_STATE(102)] = 7045,
  [SMALL_STATE(103)] = 7087,
  [SMALL_STATE(104)] = 7125,
  [SMALL_STATE(105)] = 7163,
  [SMALL_STATE(106)] = 7201,
  [SMALL_STATE(107)] = 7241,
  [SMALL_STATE(108)] = 7279,
  [SMALL_STATE(109)] = 7317,
  [SMALL_STATE(110)] = 7355,
  [SMALL_STATE(111)] = 7396,
  [SMALL_STATE(112)] = 7433,
  [SMALL_STATE(113)] = 7470,
  [SMALL_STATE(114)] = 7507,
  [SMALL_STATE(115)] = 7546,
  [SMALL_STATE(116)] = 7583,
  [SMALL_STATE(117)] = 7620,
  [SMALL_STATE(118)] = 7657,
  [SMALL_STATE(119)] = 7694,
  [SMALL_STATE(120)] = 7731,
  [SMALL_STATE(121)] = 7772,
  [SMALL_STATE(122)] = 7813,
  [SMALL_STATE(123)] = 7850,
  [SMALL_STATE(124)] = 7887,
  [SMALL_STATE(125)] = 7924,
  [SMALL_STATE(126)] = 7961,
  [SMALL_STATE(127)] = 7998,
  [SMALL_STATE(128)] = 8037,
  [SMALL_STATE(129)] = 8074,
  [SMALL_STATE(130)] = 8111,
  [SMALL_STATE(131)] = 8148,
  [SMALL_STATE(132)] = 8185,
  [SMALL_STATE(133)] = 8222,
  [SMALL_STATE(134)] = 8259,
  [SMALL_STATE(135)] = 8296,
  [SMALL_STATE(136)] = 8333,
  [SMALL_STATE(137)] = 8370,
  [SMALL_STATE(138)] = 8407,
  [SMALL_STATE(139)] = 8444,
  [SMALL_STATE(140)] = 8481,
  [SMALL_STATE(141)] = 8518,
  [SMALL_STATE(142)] = 8574,
  [SMALL_STATE(143)] = 8610,
  [SMALL_STATE(144)] = 8666,
  [SMALL_STATE(145)] = 8722,
  [SMALL_STATE(146)] = 8778,
  [SMALL_STATE(147)] = 8814,
  [SMALL_STATE(148)] = 8870,
  [SMALL_STATE(149)] = 8912,
  [SMALL_STATE(150)] = 8966,
  [SMALL_STATE(151)] = 9018,
  [SMALL_STATE(152)] = 9064,
  [SMALL_STATE(153)] = 9112,
  [SMALL_STATE(154)] = 9160,
  [SMALL_STATE(155)] = 9212,
  [SMALL_STATE(156)] = 9258,
  [SMALL_STATE(157)] = 9294,
  [SMALL_STATE(158)] = 9336,
  [SMALL_STATE(159)] = 9392,
  [SMALL_STATE(160)] = 9446,
  [SMALL_STATE(161)] = 9486,
  [SMALL_STATE(162)] = 9540,
  [SMALL_STATE(163)] = 9596,
  [SMALL_STATE(164)] = 9636,
  [SMALL_STATE(165)] = 9690,
  [SMALL_STATE(166)] = 9746,
  [SMALL_STATE(167)] = 9782,
  [SMALL_STATE(168)] = 9839,
  [SMALL_STATE(169)] = 9894,
  [SMALL_STATE(170)] = 9953,
  [SMALL_STATE(171)] = 10008,
  [SMALL_STATE(172)] = 10063,
  [SMALL_STATE(173)] = 10120,
  [SMALL_STATE(174)] = 10178,
  [SMALL_STATE(175)] = 10220,
  [SMALL_STATE(176)] = 10274,
  [SMALL_STATE(177)] = 10332,
  [SMALL_STATE(178)] = 10390,
  [SMALL_STATE(179)] = 10448,
  [SMALL_STATE(180)] = 10506,
  [SMALL_STATE(181)] = 10564,
  [SMALL_STATE(182)] = 10619,
  [SMALL_STATE(183)] = 10674,
  [SMALL_STATE(184)] = 10729,
  [SMALL_STATE(185)] = 10764,
  [SMALL_STATE(186)] = 10817,
  [SMALL_STATE(187)] = 10870,
  [SMALL_STATE(188)] = 10922,
  [SMALL_STATE(189)] = 10974,
  [SMALL_STATE(190)] = 11022,
  [SMALL_STATE(191)] = 11072,
  [SMALL_STATE(192)] = 11124,
  [SMALL_STATE(193)] = 11176,
  [SMALL_STATE(194)] = 11214,
  [SMALL_STATE(195)] = 11258,
  [SMALL_STATE(196)] = 11310,
  [SMALL_STATE(197)] = 11352,
  [SMALL_STATE(198)] = 11404,
  [SMALL_STATE(199)] = 11456,
  [SMALL_STATE(200)] = 11506,
  [SMALL_STATE(201)] = 11536,
  [SMALL_STATE(202)] = 11563,
  [SMALL_STATE(203)] = 11582,
  [SMALL_STATE(204)] = 11609,
  [SMALL_STATE(205)] = 11628,
  [SMALL_STATE(206)] = 11647,
  [SMALL_STATE(207)] = 11661,
  [SMALL_STATE(208)] = 11679,
  [SMALL_STATE(209)] = 11703,
  [SMALL_STATE(210)] = 11727,
  [SMALL_STATE(211)] = 11746,
  [SMALL_STATE(212)] = 11765,
  [SMALL_STATE(213)] = 11782,
  [SMALL_STATE(214)] = 11799,
  [SMALL_STATE(215)] = 11816,
  [SMALL_STATE(216)] = 11833,
  [SMALL_STATE(217)] = 11852,
  [SMALL_STATE(218)] = 11869,
  [SMALL_STATE(219)] = 11886,
  [SMALL_STATE(220)] = 11903,
  [SMALL_STATE(221)] = 11921,
  [SMALL_STATE(222)] = 11933,
  [SMALL_STATE(223)] = 11951,
  [SMALL_STATE(224)] = 11963,
  [SMALL_STATE(225)] = 11975,
  [SMALL_STATE(226)] = 11993,
  [SMALL_STATE(227)] = 12011,
  [SMALL_STATE(228)] = 12023,
  [SMALL_STATE(229)] = 12035,
  [SMALL_STATE(230)] = 12047,
  [SMALL_STATE(231)] = 12059,
  [SMALL_STATE(232)] = 12071,
  [SMALL_STATE(233)] = 12083,
  [SMALL_STATE(234)] = 12103,
  [SMALL_STATE(235)] = 12115,
  [SMALL_STATE(236)] = 12127,
  [SMALL_STATE(237)] = 12139,
  [SMALL_STATE(238)] = 12154,
  [SMALL_STATE(239)] = 12169,
  [SMALL_STATE(240)] = 12186,
  [SMALL_STATE(241)] = 12201,
  [SMALL_STATE(242)] = 12212,
  [SMALL_STATE(243)] = 12229,
  [SMALL_STATE(244)] = 12244,
  [SMALL_STATE(245)] = 12255,
  [SMALL_STATE(246)] = 12272,
  [SMALL_STATE(247)] = 12287,
  [SMALL_STATE(248)] = 12298,
  [SMALL_STATE(249)] = 12309,
  [SMALL_STATE(250)] = 12320,
  [SMALL_STATE(251)] = 12335,
  [SMALL_STATE(252)] = 12352,
  [SMALL_STATE(253)] = 12367,
  [SMALL_STATE(254)] = 12382,
  [SMALL_STATE(255)] = 12397,
  [SMALL_STATE(256)] = 12408,
  [SMALL_STATE(257)] = 12425,
  [SMALL_STATE(258)] = 12440,
  [SMALL_STATE(259)] = 12455,
  [SMALL_STATE(260)] = 12466,
  [SMALL_STATE(261)] = 12477,
  [SMALL_STATE(262)] = 12491,
  [SMALL_STATE(263)] = 12505,
  [SMALL_STATE(264)] = 12519,
  [SMALL_STATE(265)] = 12533,
  [SMALL_STATE(266)] = 12547,
  [SMALL_STATE(267)] = 12561,
  [SMALL_STATE(268)] = 12575,
  [SMALL_STATE(269)] = 12589,
  [SMALL_STATE(270)] = 12603,
  [SMALL_STATE(271)] = 12617,
  [SMALL_STATE(272)] = 12631,
  [SMALL_STATE(273)] = 12645,
  [SMALL_STATE(274)] = 12659,
  [SMALL_STATE(275)] = 12673,
  [SMALL_STATE(276)] = 12687,
  [SMALL_STATE(277)] = 12701,
  [SMALL_STATE(278)] = 12715,
  [SMALL_STATE(279)] = 12729,
  [SMALL_STATE(280)] = 12743,
  [SMALL_STATE(281)] = 12757,
  [SMALL_STATE(282)] = 12771,
  [SMALL_STATE(283)] = 12783,
  [SMALL_STATE(284)] = 12797,
  [SMALL_STATE(285)] = 12808,
  [SMALL_STATE(286)] = 12819,
  [SMALL_STATE(287)] = 12830,
  [SMALL_STATE(288)] = 12839,
  [SMALL_STATE(289)] = 12850,
  [SMALL_STATE(290)] = 12861,
  [SMALL_STATE(291)] = 12872,
  [SMALL_STATE(292)] = 12883,
  [SMALL_STATE(293)] = 12892,
  [SMALL_STATE(294)] = 12903,
  [SMALL_STATE(295)] = 12914,
  [SMALL_STATE(296)] = 12925,
  [SMALL_STATE(297)] = 12936,
  [SMALL_STATE(298)] = 12945,
  [SMALL_STATE(299)] = 12956,
  [SMALL_STATE(300)] = 12964,
  [SMALL_STATE(301)] = 12972,
  [SMALL_STATE(302)] = 12980,
  [SMALL_STATE(303)] = 12988,
  [SMALL_STATE(304)] = 12996,
  [SMALL_STATE(305)] = 13004,
  [SMALL_STATE(306)] = 13012,
  [SMALL_STATE(307)] = 13020,
  [SMALL_STATE(308)] = 13028,
  [SMALL_STATE(309)] = 13036,
  [SMALL_STATE(310)] = 13044,
  [SMALL_STATE(311)] = 13052,
  [SMALL_STATE(312)] = 13060,
  [SMALL_STATE(313)] = 13068,
  [SMALL_STATE(314)] = 13076,
  [SMALL_STATE(315)] = 13084,
  [SMALL_STATE(316)] = 13092,
  [SMALL_STATE(317)] = 13100,
  [SMALL_STATE(318)] = 13108,
  [SMALL_STATE(319)] = 13116,
  [SMALL_STATE(320)] = 13124,
  [SMALL_STATE(321)] = 13132,
  [SMALL_STATE(322)] = 13140,
  [SMALL_STATE(323)] = 13148,
  [SMALL_STATE(324)] = 13156,
  [SMALL_STATE(325)] = 13164,
  [SMALL_STATE(326)] = 13172,
  [SMALL_STATE(327)] = 13180,
  [SMALL_STATE(328)] = 13188,
  [SMALL_STATE(329)] = 13196,
  [SMALL_STATE(330)] = 13204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary, 1), SHIFT(325),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(303),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(315),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_if, 1), SHIFT(306),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4), SHIFT(307),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(325),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(12),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(323),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(267),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 6),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(245),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(294),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, .production_id = 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(326),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2), SHIFT_REPEAT(208),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(46),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [690] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
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
