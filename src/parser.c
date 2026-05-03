#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym__shebang_token1 = 1,
  anon_sym_DOT = 2,
  anon_sym_trap = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_let = 6,
  anon_sym_var = 7,
  anon_sym_EQ = 8,
  anon_sym_and = 9,
  anon_sym_use = 10,
  anon_sym_SEMI = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_break = 14,
  sym_continue = 15,
  anon_sym_return = 16,
  anon_sym_await = 17,
  anon_sym_launch = 18,
  anon_sym_yield = 19,
  anon_sym_if = 20,
  anon_sym_else = 21,
  anon_sym_fn = 22,
  anon_sym_gen = 23,
  anon_sym_COMMA = 24,
  anon_sym_loop = 25,
  anon_sym_for = 26,
  anon_sym_in = 27,
  anon_sym_asm = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_COLON = 31,
  anon_sym_COLON_EQ = 32,
  anon_sym_or = 33,
  anon_sym_AMP = 34,
  anon_sym_CARET = 35,
  anon_sym_PIPE = 36,
  anon_sym_LT_LT = 37,
  anon_sym_GT_GT = 38,
  anon_sym_GT_GT_GT = 39,
  anon_sym_EQ_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_PLUS = 46,
  anon_sym_DASH = 47,
  anon_sym_STAR = 48,
  anon_sym_SLASH = 49,
  anon_sym_PERCENT = 50,
  anon_sym_STAR_STAR = 51,
  anon_sym_not = 52,
  anon_sym_TILDE = 53,
  sym_identifier = 54,
  sym_number = 55,
  anon_sym_false = 56,
  anon_sym_true = 57,
  sym_null = 58,
  anon_sym_DQUOTE = 59,
  sym__unescaped_string_fragment = 60,
  sym__escape_sequence = 61,
  sym_line_comment = 62,
  sym__automatic_semicolon = 63,
  sym_block_comment = 64,
  sym_raw_string_literal = 65,
  sym_module = 66,
  sym__shebang = 67,
  sym__path = 68,
  sym__sequence = 69,
  sym__asm_sequence = 70,
  sym__asm_statement = 71,
  sym_trap = 72,
  sym__asm_block = 73,
  sym_block = 74,
  sym_statement = 75,
  sym_let = 76,
  sym_use = 77,
  sym__sc = 78,
  sym__primary = 79,
  sym__exp = 80,
  sym_break = 81,
  sym_return = 82,
  sym_await = 83,
  sym_launch = 84,
  sym_yield = 85,
  sym__if = 86,
  sym_if = 87,
  sym_fn = 88,
  sym_fn_type = 89,
  sym_params = 90,
  sym_loop = 91,
  sym_for = 92,
  sym_asm = 93,
  sym_list = 94,
  sym_map = 95,
  sym_object = 96,
  sym_member = 97,
  sym_assignment = 98,
  sym_binary_exp = 99,
  sym_unary_exp = 100,
  sym_call = 101,
  sym_property_exp = 102,
  sym_bool = 103,
  sym_string = 104,
  sym_named_type = 105,
  sym_type = 106,
  sym_type_args = 107,
  sym_type_annotation = 108,
  aux_sym__path_repeat1 = 109,
  aux_sym__sequence_repeat1 = 110,
  aux_sym__asm_sequence_repeat1 = 111,
  aux_sym_params_repeat1 = 112,
  aux_sym_list_repeat1 = 113,
  aux_sym_map_repeat1 = 114,
  aux_sym_object_repeat1 = 115,
  aux_sym_property_exp_repeat1 = 116,
  aux_sym_string_repeat1 = 117,
  aux_sym_type_repeat1 = 118,
  aux_sym_type_args_repeat1 = 119,
  alias_sym_property_identifier = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_DOT] = ".",
  [anon_sym_trap] = "trap",
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
  [anon_sym_asm] = "asm",
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
  [sym__asm_sequence] = "_asm_sequence",
  [sym__asm_statement] = "_asm_statement",
  [sym_trap] = "trap",
  [sym__asm_block] = "_asm_block",
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
  [sym_asm] = "asm",
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
  [aux_sym__asm_sequence_repeat1] = "_asm_sequence_repeat1",
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
  [anon_sym_trap] = anon_sym_trap,
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
  [anon_sym_asm] = anon_sym_asm,
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
  [sym__asm_sequence] = sym__asm_sequence,
  [sym__asm_statement] = sym__asm_statement,
  [sym_trap] = sym_trap,
  [sym__asm_block] = sym__asm_block,
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
  [sym_asm] = sym_asm,
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
  [aux_sym__asm_sequence_repeat1] = aux_sym__asm_sequence_repeat1,
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
  [anon_sym_trap] = {
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
  [anon_sym_asm] = {
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
  [sym__asm_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__asm_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_trap] = {
    .visible = true,
    .named = true,
  },
  [sym__asm_block] = {
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
  [sym_asm] = {
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
  [aux_sym__asm_sequence_repeat1] = {
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
  [11] = 10,
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
  [23] = 21,
  [24] = 18,
  [25] = 22,
  [26] = 20,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 36,
  [45] = 30,
  [46] = 46,
  [47] = 47,
  [48] = 31,
  [49] = 41,
  [50] = 50,
  [51] = 42,
  [52] = 41,
  [53] = 31,
  [54] = 54,
  [55] = 55,
  [56] = 42,
  [57] = 30,
  [58] = 50,
  [59] = 28,
  [60] = 60,
  [61] = 32,
  [62] = 33,
  [63] = 34,
  [64] = 32,
  [65] = 33,
  [66] = 34,
  [67] = 35,
  [68] = 36,
  [69] = 55,
  [70] = 28,
  [71] = 38,
  [72] = 38,
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
  [89] = 74,
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
  [101] = 79,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 80,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 76,
  [110] = 110,
  [111] = 88,
  [112] = 91,
  [113] = 106,
  [114] = 104,
  [115] = 85,
  [116] = 103,
  [117] = 100,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 108,
  [122] = 119,
  [123] = 92,
  [124] = 99,
  [125] = 86,
  [126] = 93,
  [127] = 127,
  [128] = 102,
  [129] = 107,
  [130] = 130,
  [131] = 131,
  [132] = 98,
  [133] = 77,
  [134] = 95,
  [135] = 97,
  [136] = 83,
  [137] = 96,
  [138] = 90,
  [139] = 84,
  [140] = 130,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 94,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 142,
  [152] = 152,
  [153] = 153,
  [154] = 131,
  [155] = 155,
  [156] = 120,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 147,
  [161] = 161,
  [162] = 161,
  [163] = 153,
  [164] = 164,
  [165] = 157,
  [166] = 143,
  [167] = 118,
  [168] = 150,
  [169] = 155,
  [170] = 144,
  [171] = 159,
  [172] = 158,
  [173] = 146,
  [174] = 127,
  [175] = 110,
  [176] = 141,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 81,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 186,
  [189] = 185,
  [190] = 187,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 119,
  [197] = 195,
  [198] = 147,
  [199] = 199,
  [200] = 158,
  [201] = 199,
  [202] = 153,
  [203] = 155,
  [204] = 148,
  [205] = 159,
  [206] = 157,
  [207] = 150,
  [208] = 208,
  [209] = 161,
  [210] = 146,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 81,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 216,
  [223] = 213,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 212,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 234,
  [249] = 249,
  [250] = 250,
  [251] = 220,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 263,
  [265] = 256,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 266,
  [271] = 261,
  [272] = 272,
  [273] = 253,
  [274] = 252,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 279,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 286,
  [298] = 289,
  [299] = 285,
  [300] = 284,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 301,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 303,
  [312] = 308,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 307,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 321,
  [327] = 318,
  [328] = 325,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 331,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 324,
  [342] = 319,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 340,
  [347] = 339,
  [348] = 348,
  [349] = 343,
  [350] = 338,
  [351] = 333,
  [352] = 345,
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
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(32);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(241);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == '}') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(32);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 78:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 79:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == 'v') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(224);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_trap);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_trap);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_asm);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_asm);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(241);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(224);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(204);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(120);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(200);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(200);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(174);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(224);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(182);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(98);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(113);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(198);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(105);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(130);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(189);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(125);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(95);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(189);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(194);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(224);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 82, .external_lex_state = 2},
  [2] = {.lex_state = 78, .external_lex_state = 2},
  [3] = {.lex_state = 78, .external_lex_state = 1},
  [4] = {.lex_state = 78, .external_lex_state = 2},
  [5] = {.lex_state = 82, .external_lex_state = 2},
  [6] = {.lex_state = 82, .external_lex_state = 2},
  [7] = {.lex_state = 82, .external_lex_state = 2},
  [8] = {.lex_state = 82, .external_lex_state = 2},
  [9] = {.lex_state = 82, .external_lex_state = 2},
  [10] = {.lex_state = 82, .external_lex_state = 2},
  [11] = {.lex_state = 82, .external_lex_state = 2},
  [12] = {.lex_state = 82, .external_lex_state = 2},
  [13] = {.lex_state = 83, .external_lex_state = 1},
  [14] = {.lex_state = 83, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 83, .external_lex_state = 2},
  [17] = {.lex_state = 83, .external_lex_state = 2},
  [18] = {.lex_state = 83, .external_lex_state = 2},
  [19] = {.lex_state = 83, .external_lex_state = 2},
  [20] = {.lex_state = 83, .external_lex_state = 2},
  [21] = {.lex_state = 83, .external_lex_state = 2},
  [22] = {.lex_state = 83, .external_lex_state = 2},
  [23] = {.lex_state = 83, .external_lex_state = 2},
  [24] = {.lex_state = 83, .external_lex_state = 2},
  [25] = {.lex_state = 83, .external_lex_state = 2},
  [26] = {.lex_state = 83, .external_lex_state = 2},
  [27] = {.lex_state = 83, .external_lex_state = 2},
  [28] = {.lex_state = 83, .external_lex_state = 2},
  [29] = {.lex_state = 83, .external_lex_state = 2},
  [30] = {.lex_state = 83, .external_lex_state = 2},
  [31] = {.lex_state = 83, .external_lex_state = 2},
  [32] = {.lex_state = 83, .external_lex_state = 2},
  [33] = {.lex_state = 83, .external_lex_state = 2},
  [34] = {.lex_state = 83, .external_lex_state = 2},
  [35] = {.lex_state = 83, .external_lex_state = 2},
  [36] = {.lex_state = 83, .external_lex_state = 2},
  [37] = {.lex_state = 83, .external_lex_state = 2},
  [38] = {.lex_state = 83, .external_lex_state = 2},
  [39] = {.lex_state = 83, .external_lex_state = 2},
  [40] = {.lex_state = 83, .external_lex_state = 2},
  [41] = {.lex_state = 83, .external_lex_state = 2},
  [42] = {.lex_state = 83, .external_lex_state = 2},
  [43] = {.lex_state = 83, .external_lex_state = 2},
  [44] = {.lex_state = 83, .external_lex_state = 2},
  [45] = {.lex_state = 83, .external_lex_state = 2},
  [46] = {.lex_state = 83, .external_lex_state = 2},
  [47] = {.lex_state = 83, .external_lex_state = 2},
  [48] = {.lex_state = 83, .external_lex_state = 2},
  [49] = {.lex_state = 83, .external_lex_state = 2},
  [50] = {.lex_state = 83, .external_lex_state = 2},
  [51] = {.lex_state = 83, .external_lex_state = 2},
  [52] = {.lex_state = 83, .external_lex_state = 2},
  [53] = {.lex_state = 83, .external_lex_state = 2},
  [54] = {.lex_state = 83, .external_lex_state = 2},
  [55] = {.lex_state = 83, .external_lex_state = 2},
  [56] = {.lex_state = 83, .external_lex_state = 2},
  [57] = {.lex_state = 83, .external_lex_state = 2},
  [58] = {.lex_state = 83, .external_lex_state = 2},
  [59] = {.lex_state = 83, .external_lex_state = 2},
  [60] = {.lex_state = 83, .external_lex_state = 2},
  [61] = {.lex_state = 83, .external_lex_state = 2},
  [62] = {.lex_state = 83, .external_lex_state = 2},
  [63] = {.lex_state = 83, .external_lex_state = 2},
  [64] = {.lex_state = 83, .external_lex_state = 2},
  [65] = {.lex_state = 83, .external_lex_state = 2},
  [66] = {.lex_state = 83, .external_lex_state = 2},
  [67] = {.lex_state = 83, .external_lex_state = 2},
  [68] = {.lex_state = 83, .external_lex_state = 2},
  [69] = {.lex_state = 83, .external_lex_state = 2},
  [70] = {.lex_state = 83, .external_lex_state = 2},
  [71] = {.lex_state = 83, .external_lex_state = 2},
  [72] = {.lex_state = 83, .external_lex_state = 2},
  [73] = {.lex_state = 80, .external_lex_state = 3},
  [74] = {.lex_state = 80, .external_lex_state = 3},
  [75] = {.lex_state = 80, .external_lex_state = 3},
  [76] = {.lex_state = 80, .external_lex_state = 4},
  [77] = {.lex_state = 80, .external_lex_state = 3},
  [78] = {.lex_state = 80, .external_lex_state = 3},
  [79] = {.lex_state = 80, .external_lex_state = 4},
  [80] = {.lex_state = 80, .external_lex_state = 4},
  [81] = {.lex_state = 80, .external_lex_state = 3},
  [82] = {.lex_state = 80, .external_lex_state = 4},
  [83] = {.lex_state = 80, .external_lex_state = 4},
  [84] = {.lex_state = 80, .external_lex_state = 4},
  [85] = {.lex_state = 80, .external_lex_state = 4},
  [86] = {.lex_state = 80, .external_lex_state = 4},
  [87] = {.lex_state = 80, .external_lex_state = 4},
  [88] = {.lex_state = 80, .external_lex_state = 4},
  [89] = {.lex_state = 80, .external_lex_state = 4},
  [90] = {.lex_state = 80, .external_lex_state = 4},
  [91] = {.lex_state = 80, .external_lex_state = 4},
  [92] = {.lex_state = 80, .external_lex_state = 4},
  [93] = {.lex_state = 80, .external_lex_state = 4},
  [94] = {.lex_state = 80, .external_lex_state = 4},
  [95] = {.lex_state = 80, .external_lex_state = 4},
  [96] = {.lex_state = 80, .external_lex_state = 4},
  [97] = {.lex_state = 80, .external_lex_state = 4},
  [98] = {.lex_state = 80, .external_lex_state = 4},
  [99] = {.lex_state = 80, .external_lex_state = 4},
  [100] = {.lex_state = 80, .external_lex_state = 4},
  [101] = {.lex_state = 80, .external_lex_state = 3},
  [102] = {.lex_state = 80, .external_lex_state = 4},
  [103] = {.lex_state = 80, .external_lex_state = 4},
  [104] = {.lex_state = 80, .external_lex_state = 4},
  [105] = {.lex_state = 80, .external_lex_state = 3},
  [106] = {.lex_state = 80, .external_lex_state = 4},
  [107] = {.lex_state = 80, .external_lex_state = 4},
  [108] = {.lex_state = 80, .external_lex_state = 4},
  [109] = {.lex_state = 80, .external_lex_state = 3},
  [110] = {.lex_state = 80, .external_lex_state = 4},
  [111] = {.lex_state = 80, .external_lex_state = 3},
  [112] = {.lex_state = 80, .external_lex_state = 3},
  [113] = {.lex_state = 80, .external_lex_state = 3},
  [114] = {.lex_state = 80, .external_lex_state = 3},
  [115] = {.lex_state = 80, .external_lex_state = 3},
  [116] = {.lex_state = 80, .external_lex_state = 3},
  [117] = {.lex_state = 80, .external_lex_state = 3},
  [118] = {.lex_state = 80, .external_lex_state = 4},
  [119] = {.lex_state = 80, .external_lex_state = 3},
  [120] = {.lex_state = 80, .external_lex_state = 4},
  [121] = {.lex_state = 80, .external_lex_state = 3},
  [122] = {.lex_state = 80, .external_lex_state = 4},
  [123] = {.lex_state = 80, .external_lex_state = 3},
  [124] = {.lex_state = 80, .external_lex_state = 3},
  [125] = {.lex_state = 80, .external_lex_state = 3},
  [126] = {.lex_state = 80, .external_lex_state = 3},
  [127] = {.lex_state = 80, .external_lex_state = 4},
  [128] = {.lex_state = 80, .external_lex_state = 3},
  [129] = {.lex_state = 80, .external_lex_state = 3},
  [130] = {.lex_state = 3, .external_lex_state = 2},
  [131] = {.lex_state = 80, .external_lex_state = 4},
  [132] = {.lex_state = 80, .external_lex_state = 3},
  [133] = {.lex_state = 80, .external_lex_state = 3},
  [134] = {.lex_state = 80, .external_lex_state = 3},
  [135] = {.lex_state = 80, .external_lex_state = 3},
  [136] = {.lex_state = 80, .external_lex_state = 3},
  [137] = {.lex_state = 80, .external_lex_state = 3},
  [138] = {.lex_state = 80, .external_lex_state = 3},
  [139] = {.lex_state = 80, .external_lex_state = 3},
  [140] = {.lex_state = 3, .external_lex_state = 2},
  [141] = {.lex_state = 80, .external_lex_state = 4},
  [142] = {.lex_state = 80, .external_lex_state = 4},
  [143] = {.lex_state = 80, .external_lex_state = 4},
  [144] = {.lex_state = 80, .external_lex_state = 4},
  [145] = {.lex_state = 80, .external_lex_state = 3},
  [146] = {.lex_state = 80, .external_lex_state = 3},
  [147] = {.lex_state = 80, .external_lex_state = 3},
  [148] = {.lex_state = 80, .external_lex_state = 3},
  [149] = {.lex_state = 80, .external_lex_state = 4},
  [150] = {.lex_state = 80, .external_lex_state = 3},
  [151] = {.lex_state = 80, .external_lex_state = 3},
  [152] = {.lex_state = 3, .external_lex_state = 2},
  [153] = {.lex_state = 80, .external_lex_state = 4},
  [154] = {.lex_state = 80, .external_lex_state = 3},
  [155] = {.lex_state = 80, .external_lex_state = 3},
  [156] = {.lex_state = 80, .external_lex_state = 3},
  [157] = {.lex_state = 80, .external_lex_state = 3},
  [158] = {.lex_state = 80, .external_lex_state = 4},
  [159] = {.lex_state = 80, .external_lex_state = 4},
  [160] = {.lex_state = 80, .external_lex_state = 4},
  [161] = {.lex_state = 80, .external_lex_state = 4},
  [162] = {.lex_state = 80, .external_lex_state = 3},
  [163] = {.lex_state = 80, .external_lex_state = 3},
  [164] = {.lex_state = 3, .external_lex_state = 2},
  [165] = {.lex_state = 80, .external_lex_state = 4},
  [166] = {.lex_state = 80, .external_lex_state = 3},
  [167] = {.lex_state = 80, .external_lex_state = 3},
  [168] = {.lex_state = 80, .external_lex_state = 4},
  [169] = {.lex_state = 80, .external_lex_state = 4},
  [170] = {.lex_state = 80, .external_lex_state = 3},
  [171] = {.lex_state = 80, .external_lex_state = 3},
  [172] = {.lex_state = 80, .external_lex_state = 3},
  [173] = {.lex_state = 80, .external_lex_state = 4},
  [174] = {.lex_state = 80, .external_lex_state = 3},
  [175] = {.lex_state = 80, .external_lex_state = 3},
  [176] = {.lex_state = 80, .external_lex_state = 3},
  [177] = {.lex_state = 80, .external_lex_state = 3},
  [178] = {.lex_state = 80, .external_lex_state = 3},
  [179] = {.lex_state = 3, .external_lex_state = 2},
  [180] = {.lex_state = 80, .external_lex_state = 3},
  [181] = {.lex_state = 80, .external_lex_state = 3},
  [182] = {.lex_state = 80, .external_lex_state = 3},
  [183] = {.lex_state = 80, .external_lex_state = 3},
  [184] = {.lex_state = 80, .external_lex_state = 4},
  [185] = {.lex_state = 80, .external_lex_state = 4},
  [186] = {.lex_state = 80, .external_lex_state = 4},
  [187] = {.lex_state = 80, .external_lex_state = 4},
  [188] = {.lex_state = 80, .external_lex_state = 4},
  [189] = {.lex_state = 80, .external_lex_state = 4},
  [190] = {.lex_state = 80, .external_lex_state = 4},
  [191] = {.lex_state = 80, .external_lex_state = 4},
  [192] = {.lex_state = 80, .external_lex_state = 4},
  [193] = {.lex_state = 80, .external_lex_state = 3},
  [194] = {.lex_state = 80, .external_lex_state = 4},
  [195] = {.lex_state = 80, .external_lex_state = 4},
  [196] = {.lex_state = 80, .external_lex_state = 4},
  [197] = {.lex_state = 80, .external_lex_state = 4},
  [198] = {.lex_state = 80, .external_lex_state = 4},
  [199] = {.lex_state = 80, .external_lex_state = 4},
  [200] = {.lex_state = 80, .external_lex_state = 4},
  [201] = {.lex_state = 80, .external_lex_state = 4},
  [202] = {.lex_state = 80, .external_lex_state = 4},
  [203] = {.lex_state = 80, .external_lex_state = 4},
  [204] = {.lex_state = 80, .external_lex_state = 4},
  [205] = {.lex_state = 80, .external_lex_state = 4},
  [206] = {.lex_state = 80, .external_lex_state = 4},
  [207] = {.lex_state = 80, .external_lex_state = 4},
  [208] = {.lex_state = 80, .external_lex_state = 4},
  [209] = {.lex_state = 80, .external_lex_state = 4},
  [210] = {.lex_state = 80, .external_lex_state = 4},
  [211] = {.lex_state = 5, .external_lex_state = 4},
  [212] = {.lex_state = 5, .external_lex_state = 4},
  [213] = {.lex_state = 5, .external_lex_state = 4},
  [214] = {.lex_state = 5, .external_lex_state = 4},
  [215] = {.lex_state = 5, .external_lex_state = 4},
  [216] = {.lex_state = 5, .external_lex_state = 4},
  [217] = {.lex_state = 80, .external_lex_state = 3},
  [218] = {.lex_state = 5, .external_lex_state = 4},
  [219] = {.lex_state = 5, .external_lex_state = 4},
  [220] = {.lex_state = 5, .external_lex_state = 4},
  [221] = {.lex_state = 82, .external_lex_state = 4},
  [222] = {.lex_state = 80, .external_lex_state = 3},
  [223] = {.lex_state = 80, .external_lex_state = 3},
  [224] = {.lex_state = 82, .external_lex_state = 4},
  [225] = {.lex_state = 82, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 82, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 82, .external_lex_state = 4},
  [231] = {.lex_state = 80, .external_lex_state = 3},
  [232] = {.lex_state = 82, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 82, .external_lex_state = 4},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 82, .external_lex_state = 4},
  [239] = {.lex_state = 82, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 82, .external_lex_state = 4},
  [243] = {.lex_state = 82, .external_lex_state = 4},
  [244] = {.lex_state = 82, .external_lex_state = 4},
  [245] = {.lex_state = 82, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 82, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 82, .external_lex_state = 4},
  [250] = {.lex_state = 82, .external_lex_state = 4},
  [251] = {.lex_state = 80, .external_lex_state = 3},
  [252] = {.lex_state = 4, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 4, .external_lex_state = 4},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 0, .external_lex_state = 3},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 82, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 4},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 3},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 4, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 82, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 4, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 3},
  [272] = {.lex_state = 82, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 4, .external_lex_state = 4},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 7, .external_lex_state = 4},
  [278] = {.lex_state = 82, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 3},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 3},
  [283] = {.lex_state = 82, .external_lex_state = 4},
  [284] = {.lex_state = 7, .external_lex_state = 4},
  [285] = {.lex_state = 7, .external_lex_state = 4},
  [286] = {.lex_state = 7, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 7, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 0, .external_lex_state = 4},
  [291] = {.lex_state = 82, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 4},
  [296] = {.lex_state = 0, .external_lex_state = 4},
  [297] = {.lex_state = 7, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 7, .external_lex_state = 4},
  [300] = {.lex_state = 7, .external_lex_state = 4},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 7, .external_lex_state = 4},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 7, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 3},
  [307] = {.lex_state = 7, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 7, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 4},
  [313] = {.lex_state = 7, .external_lex_state = 4},
  [314] = {.lex_state = 0, .external_lex_state = 4},
  [315] = {.lex_state = 82, .external_lex_state = 4},
  [316] = {.lex_state = 7, .external_lex_state = 4},
  [317] = {.lex_state = 7, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 4},
  [319] = {.lex_state = 80, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 7, .external_lex_state = 4},
  [322] = {.lex_state = 0, .external_lex_state = 4},
  [323] = {.lex_state = 0, .external_lex_state = 4},
  [324] = {.lex_state = 7, .external_lex_state = 4},
  [325] = {.lex_state = 7, .external_lex_state = 4},
  [326] = {.lex_state = 7, .external_lex_state = 4},
  [327] = {.lex_state = 0, .external_lex_state = 4},
  [328] = {.lex_state = 7, .external_lex_state = 4},
  [329] = {.lex_state = 0, .external_lex_state = 4},
  [330] = {.lex_state = 0, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 4},
  [332] = {.lex_state = 0, .external_lex_state = 4},
  [333] = {.lex_state = 7, .external_lex_state = 4},
  [334] = {.lex_state = 0, .external_lex_state = 4},
  [335] = {.lex_state = 7, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 4},
  [337] = {.lex_state = 7, .external_lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 0, .external_lex_state = 4},
  [340] = {.lex_state = 0, .external_lex_state = 4},
  [341] = {.lex_state = 7, .external_lex_state = 4},
  [342] = {.lex_state = 80, .external_lex_state = 4},
  [343] = {.lex_state = 0, .external_lex_state = 4},
  [344] = {.lex_state = 7, .external_lex_state = 4},
  [345] = {.lex_state = 0, .external_lex_state = 4},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 82, .external_lex_state = 4},
  [349] = {.lex_state = 0, .external_lex_state = 4},
  [350] = {.lex_state = 0, .external_lex_state = 4},
  [351] = {.lex_state = 7, .external_lex_state = 4},
  [352] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_trap] = ACTIONS(1),
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
    [anon_sym_asm] = ACTIONS(1),
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
    [sym_module] = STATE(329),
    [sym__shebang] = STATE(7),
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(323),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [2] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(122),
    [sym__primary] = STATE(122),
    [sym__exp] = STATE(168),
    [sym_await] = STATE(168),
    [sym_launch] = STATE(168),
    [sym_yield] = STATE(168),
    [sym__if] = STATE(77),
    [sym_if] = STATE(168),
    [sym_fn] = STATE(122),
    [sym_fn_type] = STATE(308),
    [sym_loop] = STATE(168),
    [sym_for] = STATE(168),
    [sym_asm] = STATE(168),
    [sym_list] = STATE(122),
    [sym_map] = STATE(122),
    [sym_object] = STATE(122),
    [sym_assignment] = STATE(168),
    [sym_binary_exp] = STATE(168),
    [sym_unary_exp] = STATE(168),
    [sym_call] = STATE(122),
    [sym_property_exp] = STATE(122),
    [sym_bool] = STATE(122),
    [sym_string] = STATE(122),
    [sym_named_type] = STATE(352),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_await] = ACTIONS(63),
    [anon_sym_launch] = ACTIONS(65),
    [anon_sym_yield] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_loop] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_asm] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_STAR_STAR] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(81),
    [sym_number] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [sym_null] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(89),
  },
  [3] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(119),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(150),
    [sym_await] = STATE(150),
    [sym_launch] = STATE(150),
    [sym_yield] = STATE(150),
    [sym__if] = STATE(133),
    [sym_if] = STATE(150),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(150),
    [sym_for] = STATE(150),
    [sym_asm] = STATE(150),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(150),
    [sym_binary_exp] = STATE(150),
    [sym_unary_exp] = STATE(150),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_STAR_STAR] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(59),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [4] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(196),
    [sym__primary] = STATE(196),
    [sym__exp] = STATE(207),
    [sym_await] = STATE(207),
    [sym_launch] = STATE(207),
    [sym_yield] = STATE(207),
    [sym__if] = STATE(77),
    [sym_if] = STATE(207),
    [sym_fn] = STATE(196),
    [sym_fn_type] = STATE(308),
    [sym_loop] = STATE(207),
    [sym_for] = STATE(207),
    [sym_asm] = STATE(207),
    [sym_list] = STATE(196),
    [sym_map] = STATE(196),
    [sym_object] = STATE(196),
    [sym_assignment] = STATE(207),
    [sym_binary_exp] = STATE(207),
    [sym_unary_exp] = STATE(207),
    [sym_call] = STATE(196),
    [sym_property_exp] = STATE(196),
    [sym_bool] = STATE(196),
    [sym_string] = STATE(196),
    [sym_named_type] = STATE(352),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_await] = ACTIONS(91),
    [anon_sym_launch] = ACTIONS(93),
    [anon_sym_yield] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_asm] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_STAR_STAR] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(97),
    [sym_identifier] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [sym_null] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(105),
  },
  [5] = {
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(350),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(181),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(181),
    [sym_launch] = STATE(181),
    [sym_yield] = STATE(181),
    [sym__if] = STATE(133),
    [sym_if] = STATE(181),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(181),
    [sym_for] = STATE(181),
    [sym_asm] = STATE(181),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_member] = STATE(271),
    [sym_assignment] = STATE(181),
    [sym_binary_exp] = STATE(181),
    [sym_unary_exp] = STATE(181),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(109),
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
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [6] = {
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(338),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(180),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(180),
    [sym_launch] = STATE(180),
    [sym_yield] = STATE(180),
    [sym__if] = STATE(133),
    [sym_if] = STATE(180),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(180),
    [sym_for] = STATE(180),
    [sym_asm] = STATE(180),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_member] = STATE(261),
    [sym_assignment] = STATE(180),
    [sym_binary_exp] = STATE(180),
    [sym_unary_exp] = STATE(180),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(117),
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
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [7] = {
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(320),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [ts_builtin_sym_end] = ACTIONS(121),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [8] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(255),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [9] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(255),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [ts_builtin_sym_end] = ACTIONS(125),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [10] = {
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(338),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(127),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [11] = {
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(350),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(229),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(129),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
  [12] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(255),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym__if] = STATE(133),
    [sym_if] = STATE(178),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(312),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_asm] = STATE(178),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(345),
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
    [anon_sym_asm] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [sym_null] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(131), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(119), 10,
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
    STATE(182), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [107] = 26,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(133), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(119), 10,
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
    STATE(177), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [214] = 27,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(260), 1,
      sym_let,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
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
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(157), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [322] = 27,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(186), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [429] = 27,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(188), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [536] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(208), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [640] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(185), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [744] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(191), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [848] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(208), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [952] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(191), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1056] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(208), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1160] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(208), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1264] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(191), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1368] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(191), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1472] = 26,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(189), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1576] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(206), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1677] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(194), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1778] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(146), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1879] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(202), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [1980] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(141), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2081] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(200), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2182] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(205), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2283] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(198), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2384] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(209), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2485] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(147), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2586] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(203), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2687] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(195), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2788] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(191), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2889] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(204), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [2990] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(127), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3091] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(197), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3192] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(162), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3293] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_await,
    ACTIONS(93), 1,
      anon_sym_launch,
    ACTIONS(95), 1,
      anon_sym_yield,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym_number,
      sym_null,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(196), 10,
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
    STATE(210), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3394] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(192), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3495] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(208), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3596] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(153), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3697] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(149), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3798] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(190), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [3899] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(174), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4000] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(148), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4101] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(163), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4202] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(183), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4303] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(199), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4404] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(127), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4505] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(173), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4606] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(187), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4707] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(157), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4808] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(193), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [4909] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(176), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5010] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(172), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5111] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(171), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5212] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(141), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5313] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(158), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5414] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(159), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5515] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(160), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5616] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(161), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5717] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(201), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5818] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(165), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [5919] = 25,
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
      anon_sym_asm,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_not,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_raw_string_literal,
    STATE(133), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(47), 2,
      sym_number,
      sym_null,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(119), 10,
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
    STATE(155), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [6020] = 25,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_await,
    ACTIONS(65), 1,
      anon_sym_launch,
    ACTIONS(67), 1,
      anon_sym_yield,
    ACTIONS(69), 1,
      anon_sym_loop,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_asm,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_raw_string_literal,
    STATE(77), 1,
      sym__if,
    STATE(221), 1,
      sym__path,
    STATE(308), 1,
      sym_fn_type,
    STATE(352), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(83), 2,
      sym_number,
      sym_null,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(77), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(122), 10,
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
    STATE(169), 11,
      sym__exp,
      sym_await,
      sym_launch,
      sym_yield,
      sym_if,
      sym_loop,
      sym_for,
      sym_asm,
      sym_assignment,
      sym_binary_exp,
      sym_unary_exp,
  [6121] = 3,
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
  [6163] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 6,
      anon_sym_COLON,
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
  [6205] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(171), 27,
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
  [6246] = 5,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 22,
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
  [6289] = 5,
    ACTIONS(183), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(185), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 23,
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
  [6332] = 8,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(200), 1,
      anon_sym_LT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 20,
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
  [6381] = 5,
    ACTIONS(203), 1,
      anon_sym_DOT,
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
    ACTIONS(206), 22,
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
  [6424] = 4,
    STATE(79), 1,
      aux_sym_property_exp_repeat1,
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
  [6465] = 7,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_LT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 21,
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
  [6512] = 7,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_LT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 21,
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
  [6559] = 3,
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
  [6597] = 3,
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
  [6635] = 3,
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
  [6673] = 3,
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
  [6711] = 3,
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
  [6749] = 3,
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
  [6787] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(167), 23,
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
  [6825] = 3,
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
  [6863] = 3,
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
  [6901] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 23,
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
  [6939] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(246), 23,
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
  [6977] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(250), 23,
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
  [7015] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(254), 23,
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
  [7053] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 23,
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
  [7091] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(262), 23,
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
  [7129] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 23,
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
  [7167] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(270), 23,
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
  [7205] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 23,
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
  [7243] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(101), 1,
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
    ACTIONS(206), 21,
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
  [7285] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(283), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(281), 23,
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
  [7323] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(287), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 23,
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
  [7361] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 23,
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
  [7399] = 4,
    STATE(101), 1,
      aux_sym_property_exp_repeat1,
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
  [7439] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 23,
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
  [7477] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(297), 23,
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
  [7515] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 23,
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
  [7553] = 5,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(105), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(177), 21,
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
  [7595] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 23,
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
  [7632] = 3,
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
  [7669] = 3,
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
  [7706] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 22,
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
  [7743] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(289), 22,
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
  [7780] = 3,
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
  [7817] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(287), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 22,
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
  [7854] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 22,
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
  [7891] = 3,
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
  [7928] = 4,
    ACTIONS(319), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 21,
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
  [7967] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 23,
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
  [8004] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(301), 22,
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
  [8041] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 21,
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
  [8080] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 22,
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
  [8117] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(270), 22,
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
  [8154] = 3,
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
  [8191] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(246), 22,
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
  [8228] = 5,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 21,
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
  [8269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(283), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(281), 22,
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
  [8306] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(297), 22,
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
  [8343] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_trap,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(343), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(318), 1,
      sym__asm_sequence,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(341), 2,
      sym_number,
      sym_null,
    STATE(246), 10,
      sym__asm_statement,
      sym_trap,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [8408] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(347), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(345), 23,
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
  [8445] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(266), 22,
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
  [8482] = 5,
    ACTIONS(349), 1,
      anon_sym_else,
    ACTIONS(351), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(185), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 21,
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
  [8523] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(254), 22,
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
  [8560] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(262), 22,
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
  [8597] = 3,
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
  [8634] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(258), 22,
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
  [8671] = 3,
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
  [8708] = 3,
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
  [8745] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_trap,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(343), 1,
      sym_raw_string_literal,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(327), 1,
      sym__asm_sequence,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(341), 2,
      sym_number,
      sym_null,
    STATE(246), 10,
      sym__asm_statement,
      sym_trap,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [8810] = 5,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 21,
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
  [8851] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 23,
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
  [8888] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(364), 23,
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
  [8925] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(368), 23,
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
  [8962] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(250), 22,
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
  [8999] = 12,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(329), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [9053] = 9,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 16,
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
  [9101] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(392), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9157] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(392), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9213] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(414), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(360), 22,
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
  [9305] = 16,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_trap,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(418), 2,
      sym_number,
      sym_null,
    STATE(280), 10,
      sym__asm_statement,
      sym_trap,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [9367] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(422), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [9423] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(347), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(345), 22,
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
  [9459] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(424), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9515] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 22,
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
  [9551] = 12,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(356), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [9605] = 6,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 19,
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
  [9647] = 8,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 18,
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
  [9693] = 9,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 16,
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
  [9741] = 11,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 12,
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
  [9793] = 11,
    ACTIONS(358), 1,
      anon_sym_GT_GT,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 12,
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
  [9845] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(422), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9901] = 16,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_trap,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(420), 1,
      sym_raw_string_literal,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(418), 2,
      sym_number,
      sym_null,
    STATE(280), 10,
      sym__asm_statement,
      sym_trap,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [9963] = 12,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(356), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [10017] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(364), 22,
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
  [10053] = 3,
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
  [10089] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(414), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [10145] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(424), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [10201] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(368), 22,
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
  [10237] = 8,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 18,
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
  [10283] = 6,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 19,
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
  [10325] = 12,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(329), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [10379] = 5,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 20,
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
  [10419] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 22,
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
  [10455] = 5,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 20,
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
  [10495] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10550] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10605] = 15,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_trap,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(420), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(312), 1,
      sym_fn_type,
    STATE(345), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
    ACTIONS(49), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(418), 2,
      sym_number,
      sym_null,
    STATE(280), 10,
      sym__asm_statement,
      sym_trap,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [10664] = 14,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(432), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(430), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10721] = 14,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(430), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10778] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(436), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10833] = 15,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_or,
    ACTIONS(440), 1,
      anon_sym_and,
    ACTIONS(442), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10892] = 7,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 4,
      anon_sym_GT_GT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(194), 17,
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
  [10934] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10992] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11050] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11108] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11166] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11224] = 15,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11282] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11336] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11389] = 13,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_GT_GT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(394), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(474), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(380), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11442] = 14,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    STATE(75), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11497] = 14,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11552] = 4,
    ACTIONS(498), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 18,
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
  [11587] = 14,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    STATE(170), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11642] = 9,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 12,
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
  [11686] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11738] = 6,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(358), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 15,
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
  [11776] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11828] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11880] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11932] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11984] = 8,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 14,
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
  [12026] = 12,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(356), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12076] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12128] = 13,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_GT_GT,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_STAR_STAR,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(402), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12180] = 11,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 8,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12228] = 12,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(329), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12278] = 9,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_GT,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(224), 1,
      sym_named_type,
    STATE(268), 1,
      sym_fn_type,
    STATE(278), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12308] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12327] = 4,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12346] = 8,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(521), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym__path,
    STATE(224), 1,
      sym_named_type,
    STATE(268), 1,
      sym_fn_type,
    STATE(315), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12373] = 8,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(523), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym__path,
    STATE(224), 1,
      sym_named_type,
    STATE(268), 1,
      sym_fn_type,
    STATE(315), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12400] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12419] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 2,
      anon_sym_LBRACE,
      anon_sym_LT,
    ACTIONS(194), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12439] = 7,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(224), 1,
      sym_named_type,
    STATE(268), 1,
      sym_fn_type,
    STATE(315), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12463] = 7,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(224), 1,
      sym_named_type,
    STATE(268), 1,
      sym_fn_type,
    STATE(272), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12487] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12501] = 4,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(239), 1,
      sym_type_args,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(525), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12519] = 4,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12536] = 4,
    ACTIONS(531), 1,
      anon_sym_DOT,
    STATE(223), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12553] = 4,
    ACTIONS(536), 1,
      anon_sym_PLUS,
    STATE(225), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12570] = 4,
    ACTIONS(536), 1,
      anon_sym_PLUS,
    STATE(230), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12587] = 5,
    STATE(12), 1,
      sym__sc,
    STATE(226), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(542), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12606] = 4,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(545), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12623] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(226), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(549), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12642] = 5,
    STATE(8), 1,
      sym__sc,
    STATE(228), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(553), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12661] = 4,
    ACTIONS(557), 1,
      anon_sym_PLUS,
    STATE(230), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(555), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12678] = 4,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(223), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12695] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12707] = 6,
    ACTIONS(547), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      sym_type_annotation,
    STATE(281), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12727] = 5,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(143), 2,
      sym_block,
      sym_if,
  [12745] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_if,
    STATE(133), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(175), 2,
      sym_block,
      sym_if,
  [12763] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12775] = 5,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym__sc,
    STATE(237), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(570), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12793] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12805] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12817] = 5,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__sc,
    STATE(237), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12835] = 5,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(110), 2,
      sym_block,
      sym_if,
  [12853] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(579), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12865] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(581), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12877] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12889] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12901] = 5,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym__sc,
    STATE(240), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(589), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12919] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12931] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_if,
    STATE(133), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(166), 2,
      sym_block,
      sym_if,
  [12949] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12961] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(595), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12973] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12985] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    ACTIONS(601), 1,
      sym_line_comment,
    STATE(266), 1,
      aux_sym_string_repeat1,
    ACTIONS(599), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13002] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(297), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13017] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(601), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym_string_repeat1,
    ACTIONS(607), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13034] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(540), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13045] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(284), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(610), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13060] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(612), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13071] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13082] = 4,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(309), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(616), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13097] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13108] = 4,
    STATE(253), 1,
      aux_sym_object_repeat1,
    STATE(285), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13123] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13134] = 4,
    STATE(256), 1,
      aux_sym_object_repeat1,
    STATE(286), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13149] = 4,
    STATE(265), 1,
      aux_sym_object_repeat1,
    STATE(297), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13164] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(300), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13179] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(601), 1,
      sym_line_comment,
    ACTIONS(626), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym_string_repeat1,
    ACTIONS(628), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13196] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(305), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(630), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13211] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13222] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(470), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13237] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(601), 1,
      sym_line_comment,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym_string_repeat1,
    ACTIONS(628), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13254] = 4,
    STATE(273), 1,
      aux_sym_object_repeat1,
    STATE(299), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(638), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13269] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(640), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13280] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(286), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13295] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(601), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    STATE(270), 1,
      aux_sym_string_repeat1,
    ACTIONS(644), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13312] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13323] = 4,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13337] = 4,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(236), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13351] = 4,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_GT,
    STATE(291), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13365] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13379] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(568), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13389] = 4,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13403] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(660), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13413] = 4,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_GT,
    STATE(283), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13427] = 4,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13441] = 4,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13455] = 4,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13469] = 4,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13483] = 4,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13497] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13511] = 3,
    STATE(257), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(688), 2,
      anon_sym_let,
      anon_sym_var,
  [13523] = 4,
    ACTIONS(521), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13537] = 4,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13551] = 4,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13565] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13579] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13593] = 4,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13607] = 4,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13621] = 4,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13635] = 4,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13649] = 4,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13663] = 3,
    ACTIONS(713), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__asm_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13674] = 3,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13685] = 3,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13696] = 3,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym__asm_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13707] = 3,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(306), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13718] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13727] = 3,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(263), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13738] = 3,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13749] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13758] = 3,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13769] = 3,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13780] = 3,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13791] = 3,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13802] = 3,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13813] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13822] = 3,
    ACTIONS(727), 1,
      sym_identifier,
    STATE(275), 1,
      sym__path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13833] = 3,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(264), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13844] = 2,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13852] = 2,
    ACTIONS(731), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13860] = 2,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13868] = 2,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13876] = 2,
    ACTIONS(737), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13884] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13892] = 2,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13900] = 2,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13908] = 2,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13916] = 2,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13924] = 2,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13932] = 2,
    ACTIONS(749), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13940] = 2,
    ACTIONS(751), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13948] = 2,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13956] = 2,
    ACTIONS(753), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13964] = 2,
    ACTIONS(755), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13972] = 2,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13980] = 2,
    ACTIONS(757), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13988] = 2,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13996] = 2,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14004] = 2,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14012] = 2,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14020] = 2,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14028] = 2,
    ACTIONS(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14036] = 2,
    ACTIONS(767), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14044] = 2,
    ACTIONS(769), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14052] = 2,
    ACTIONS(771), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14060] = 2,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14068] = 2,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14076] = 2,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14084] = 2,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14092] = 2,
    ACTIONS(779), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14100] = 2,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14108] = 2,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14116] = 2,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 322,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 536,
  [SMALL_STATE(19)] = 640,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 848,
  [SMALL_STATE(22)] = 952,
  [SMALL_STATE(23)] = 1056,
  [SMALL_STATE(24)] = 1160,
  [SMALL_STATE(25)] = 1264,
  [SMALL_STATE(26)] = 1368,
  [SMALL_STATE(27)] = 1472,
  [SMALL_STATE(28)] = 1576,
  [SMALL_STATE(29)] = 1677,
  [SMALL_STATE(30)] = 1778,
  [SMALL_STATE(31)] = 1879,
  [SMALL_STATE(32)] = 1980,
  [SMALL_STATE(33)] = 2081,
  [SMALL_STATE(34)] = 2182,
  [SMALL_STATE(35)] = 2283,
  [SMALL_STATE(36)] = 2384,
  [SMALL_STATE(37)] = 2485,
  [SMALL_STATE(38)] = 2586,
  [SMALL_STATE(39)] = 2687,
  [SMALL_STATE(40)] = 2788,
  [SMALL_STATE(41)] = 2889,
  [SMALL_STATE(42)] = 2990,
  [SMALL_STATE(43)] = 3091,
  [SMALL_STATE(44)] = 3192,
  [SMALL_STATE(45)] = 3293,
  [SMALL_STATE(46)] = 3394,
  [SMALL_STATE(47)] = 3495,
  [SMALL_STATE(48)] = 3596,
  [SMALL_STATE(49)] = 3697,
  [SMALL_STATE(50)] = 3798,
  [SMALL_STATE(51)] = 3899,
  [SMALL_STATE(52)] = 4000,
  [SMALL_STATE(53)] = 4101,
  [SMALL_STATE(54)] = 4202,
  [SMALL_STATE(55)] = 4303,
  [SMALL_STATE(56)] = 4404,
  [SMALL_STATE(57)] = 4505,
  [SMALL_STATE(58)] = 4606,
  [SMALL_STATE(59)] = 4707,
  [SMALL_STATE(60)] = 4808,
  [SMALL_STATE(61)] = 4909,
  [SMALL_STATE(62)] = 5010,
  [SMALL_STATE(63)] = 5111,
  [SMALL_STATE(64)] = 5212,
  [SMALL_STATE(65)] = 5313,
  [SMALL_STATE(66)] = 5414,
  [SMALL_STATE(67)] = 5515,
  [SMALL_STATE(68)] = 5616,
  [SMALL_STATE(69)] = 5717,
  [SMALL_STATE(70)] = 5818,
  [SMALL_STATE(71)] = 5919,
  [SMALL_STATE(72)] = 6020,
  [SMALL_STATE(73)] = 6121,
  [SMALL_STATE(74)] = 6163,
  [SMALL_STATE(75)] = 6205,
  [SMALL_STATE(76)] = 6246,
  [SMALL_STATE(77)] = 6289,
  [SMALL_STATE(78)] = 6332,
  [SMALL_STATE(79)] = 6381,
  [SMALL_STATE(80)] = 6424,
  [SMALL_STATE(81)] = 6465,
  [SMALL_STATE(82)] = 6512,
  [SMALL_STATE(83)] = 6559,
  [SMALL_STATE(84)] = 6597,
  [SMALL_STATE(85)] = 6635,
  [SMALL_STATE(86)] = 6673,
  [SMALL_STATE(87)] = 6711,
  [SMALL_STATE(88)] = 6749,
  [SMALL_STATE(89)] = 6787,
  [SMALL_STATE(90)] = 6825,
  [SMALL_STATE(91)] = 6863,
  [SMALL_STATE(92)] = 6901,
  [SMALL_STATE(93)] = 6939,
  [SMALL_STATE(94)] = 6977,
  [SMALL_STATE(95)] = 7015,
  [SMALL_STATE(96)] = 7053,
  [SMALL_STATE(97)] = 7091,
  [SMALL_STATE(98)] = 7129,
  [SMALL_STATE(99)] = 7167,
  [SMALL_STATE(100)] = 7205,
  [SMALL_STATE(101)] = 7243,
  [SMALL_STATE(102)] = 7285,
  [SMALL_STATE(103)] = 7323,
  [SMALL_STATE(104)] = 7361,
  [SMALL_STATE(105)] = 7399,
  [SMALL_STATE(106)] = 7439,
  [SMALL_STATE(107)] = 7477,
  [SMALL_STATE(108)] = 7515,
  [SMALL_STATE(109)] = 7553,
  [SMALL_STATE(110)] = 7595,
  [SMALL_STATE(111)] = 7632,
  [SMALL_STATE(112)] = 7669,
  [SMALL_STATE(113)] = 7706,
  [SMALL_STATE(114)] = 7743,
  [SMALL_STATE(115)] = 7780,
  [SMALL_STATE(116)] = 7817,
  [SMALL_STATE(117)] = 7854,
  [SMALL_STATE(118)] = 7891,
  [SMALL_STATE(119)] = 7928,
  [SMALL_STATE(120)] = 7967,
  [SMALL_STATE(121)] = 8004,
  [SMALL_STATE(122)] = 8041,
  [SMALL_STATE(123)] = 8080,
  [SMALL_STATE(124)] = 8117,
  [SMALL_STATE(125)] = 8154,
  [SMALL_STATE(126)] = 8191,
  [SMALL_STATE(127)] = 8228,
  [SMALL_STATE(128)] = 8269,
  [SMALL_STATE(129)] = 8306,
  [SMALL_STATE(130)] = 8343,
  [SMALL_STATE(131)] = 8408,
  [SMALL_STATE(132)] = 8445,
  [SMALL_STATE(133)] = 8482,
  [SMALL_STATE(134)] = 8523,
  [SMALL_STATE(135)] = 8560,
  [SMALL_STATE(136)] = 8597,
  [SMALL_STATE(137)] = 8634,
  [SMALL_STATE(138)] = 8671,
  [SMALL_STATE(139)] = 8708,
  [SMALL_STATE(140)] = 8745,
  [SMALL_STATE(141)] = 8810,
  [SMALL_STATE(142)] = 8851,
  [SMALL_STATE(143)] = 8888,
  [SMALL_STATE(144)] = 8925,
  [SMALL_STATE(145)] = 8962,
  [SMALL_STATE(146)] = 8999,
  [SMALL_STATE(147)] = 9053,
  [SMALL_STATE(148)] = 9101,
  [SMALL_STATE(149)] = 9157,
  [SMALL_STATE(150)] = 9213,
  [SMALL_STATE(151)] = 9269,
  [SMALL_STATE(152)] = 9305,
  [SMALL_STATE(153)] = 9367,
  [SMALL_STATE(154)] = 9423,
  [SMALL_STATE(155)] = 9459,
  [SMALL_STATE(156)] = 9515,
  [SMALL_STATE(157)] = 9551,
  [SMALL_STATE(158)] = 9605,
  [SMALL_STATE(159)] = 9647,
  [SMALL_STATE(160)] = 9693,
  [SMALL_STATE(161)] = 9741,
  [SMALL_STATE(162)] = 9793,
  [SMALL_STATE(163)] = 9845,
  [SMALL_STATE(164)] = 9901,
  [SMALL_STATE(165)] = 9963,
  [SMALL_STATE(166)] = 10017,
  [SMALL_STATE(167)] = 10053,
  [SMALL_STATE(168)] = 10089,
  [SMALL_STATE(169)] = 10145,
  [SMALL_STATE(170)] = 10201,
  [SMALL_STATE(171)] = 10237,
  [SMALL_STATE(172)] = 10283,
  [SMALL_STATE(173)] = 10325,
  [SMALL_STATE(174)] = 10379,
  [SMALL_STATE(175)] = 10419,
  [SMALL_STATE(176)] = 10455,
  [SMALL_STATE(177)] = 10495,
  [SMALL_STATE(178)] = 10550,
  [SMALL_STATE(179)] = 10605,
  [SMALL_STATE(180)] = 10664,
  [SMALL_STATE(181)] = 10721,
  [SMALL_STATE(182)] = 10778,
  [SMALL_STATE(183)] = 10833,
  [SMALL_STATE(184)] = 10892,
  [SMALL_STATE(185)] = 10934,
  [SMALL_STATE(186)] = 10992,
  [SMALL_STATE(187)] = 11050,
  [SMALL_STATE(188)] = 11108,
  [SMALL_STATE(189)] = 11166,
  [SMALL_STATE(190)] = 11224,
  [SMALL_STATE(191)] = 11282,
  [SMALL_STATE(192)] = 11336,
  [SMALL_STATE(193)] = 11389,
  [SMALL_STATE(194)] = 11442,
  [SMALL_STATE(195)] = 11497,
  [SMALL_STATE(196)] = 11552,
  [SMALL_STATE(197)] = 11587,
  [SMALL_STATE(198)] = 11642,
  [SMALL_STATE(199)] = 11686,
  [SMALL_STATE(200)] = 11738,
  [SMALL_STATE(201)] = 11776,
  [SMALL_STATE(202)] = 11828,
  [SMALL_STATE(203)] = 11880,
  [SMALL_STATE(204)] = 11932,
  [SMALL_STATE(205)] = 11984,
  [SMALL_STATE(206)] = 12026,
  [SMALL_STATE(207)] = 12076,
  [SMALL_STATE(208)] = 12128,
  [SMALL_STATE(209)] = 12180,
  [SMALL_STATE(210)] = 12228,
  [SMALL_STATE(211)] = 12278,
  [SMALL_STATE(212)] = 12308,
  [SMALL_STATE(213)] = 12327,
  [SMALL_STATE(214)] = 12346,
  [SMALL_STATE(215)] = 12373,
  [SMALL_STATE(216)] = 12400,
  [SMALL_STATE(217)] = 12419,
  [SMALL_STATE(218)] = 12439,
  [SMALL_STATE(219)] = 12463,
  [SMALL_STATE(220)] = 12487,
  [SMALL_STATE(221)] = 12501,
  [SMALL_STATE(222)] = 12519,
  [SMALL_STATE(223)] = 12536,
  [SMALL_STATE(224)] = 12553,
  [SMALL_STATE(225)] = 12570,
  [SMALL_STATE(226)] = 12587,
  [SMALL_STATE(227)] = 12606,
  [SMALL_STATE(228)] = 12623,
  [SMALL_STATE(229)] = 12642,
  [SMALL_STATE(230)] = 12661,
  [SMALL_STATE(231)] = 12678,
  [SMALL_STATE(232)] = 12695,
  [SMALL_STATE(233)] = 12707,
  [SMALL_STATE(234)] = 12727,
  [SMALL_STATE(235)] = 12745,
  [SMALL_STATE(236)] = 12763,
  [SMALL_STATE(237)] = 12775,
  [SMALL_STATE(238)] = 12793,
  [SMALL_STATE(239)] = 12805,
  [SMALL_STATE(240)] = 12817,
  [SMALL_STATE(241)] = 12835,
  [SMALL_STATE(242)] = 12853,
  [SMALL_STATE(243)] = 12865,
  [SMALL_STATE(244)] = 12877,
  [SMALL_STATE(245)] = 12889,
  [SMALL_STATE(246)] = 12901,
  [SMALL_STATE(247)] = 12919,
  [SMALL_STATE(248)] = 12931,
  [SMALL_STATE(249)] = 12949,
  [SMALL_STATE(250)] = 12961,
  [SMALL_STATE(251)] = 12973,
  [SMALL_STATE(252)] = 12985,
  [SMALL_STATE(253)] = 13002,
  [SMALL_STATE(254)] = 13017,
  [SMALL_STATE(255)] = 13034,
  [SMALL_STATE(256)] = 13045,
  [SMALL_STATE(257)] = 13060,
  [SMALL_STATE(258)] = 13071,
  [SMALL_STATE(259)] = 13082,
  [SMALL_STATE(260)] = 13097,
  [SMALL_STATE(261)] = 13108,
  [SMALL_STATE(262)] = 13123,
  [SMALL_STATE(263)] = 13134,
  [SMALL_STATE(264)] = 13149,
  [SMALL_STATE(265)] = 13164,
  [SMALL_STATE(266)] = 13179,
  [SMALL_STATE(267)] = 13196,
  [SMALL_STATE(268)] = 13211,
  [SMALL_STATE(269)] = 13222,
  [SMALL_STATE(270)] = 13237,
  [SMALL_STATE(271)] = 13254,
  [SMALL_STATE(272)] = 13269,
  [SMALL_STATE(273)] = 13280,
  [SMALL_STATE(274)] = 13295,
  [SMALL_STATE(275)] = 13312,
  [SMALL_STATE(276)] = 13323,
  [SMALL_STATE(277)] = 13337,
  [SMALL_STATE(278)] = 13351,
  [SMALL_STATE(279)] = 13365,
  [SMALL_STATE(280)] = 13379,
  [SMALL_STATE(281)] = 13389,
  [SMALL_STATE(282)] = 13403,
  [SMALL_STATE(283)] = 13413,
  [SMALL_STATE(284)] = 13427,
  [SMALL_STATE(285)] = 13441,
  [SMALL_STATE(286)] = 13455,
  [SMALL_STATE(287)] = 13469,
  [SMALL_STATE(288)] = 13483,
  [SMALL_STATE(289)] = 13497,
  [SMALL_STATE(290)] = 13511,
  [SMALL_STATE(291)] = 13523,
  [SMALL_STATE(292)] = 13537,
  [SMALL_STATE(293)] = 13551,
  [SMALL_STATE(294)] = 13565,
  [SMALL_STATE(295)] = 13579,
  [SMALL_STATE(296)] = 13593,
  [SMALL_STATE(297)] = 13607,
  [SMALL_STATE(298)] = 13621,
  [SMALL_STATE(299)] = 13635,
  [SMALL_STATE(300)] = 13649,
  [SMALL_STATE(301)] = 13663,
  [SMALL_STATE(302)] = 13674,
  [SMALL_STATE(303)] = 13685,
  [SMALL_STATE(304)] = 13696,
  [SMALL_STATE(305)] = 13707,
  [SMALL_STATE(306)] = 13718,
  [SMALL_STATE(307)] = 13727,
  [SMALL_STATE(308)] = 13738,
  [SMALL_STATE(309)] = 13749,
  [SMALL_STATE(310)] = 13758,
  [SMALL_STATE(311)] = 13769,
  [SMALL_STATE(312)] = 13780,
  [SMALL_STATE(313)] = 13791,
  [SMALL_STATE(314)] = 13802,
  [SMALL_STATE(315)] = 13813,
  [SMALL_STATE(316)] = 13822,
  [SMALL_STATE(317)] = 13833,
  [SMALL_STATE(318)] = 13844,
  [SMALL_STATE(319)] = 13852,
  [SMALL_STATE(320)] = 13860,
  [SMALL_STATE(321)] = 13868,
  [SMALL_STATE(322)] = 13876,
  [SMALL_STATE(323)] = 13884,
  [SMALL_STATE(324)] = 13892,
  [SMALL_STATE(325)] = 13900,
  [SMALL_STATE(326)] = 13908,
  [SMALL_STATE(327)] = 13916,
  [SMALL_STATE(328)] = 13924,
  [SMALL_STATE(329)] = 13932,
  [SMALL_STATE(330)] = 13940,
  [SMALL_STATE(331)] = 13948,
  [SMALL_STATE(332)] = 13956,
  [SMALL_STATE(333)] = 13964,
  [SMALL_STATE(334)] = 13972,
  [SMALL_STATE(335)] = 13980,
  [SMALL_STATE(336)] = 13988,
  [SMALL_STATE(337)] = 13996,
  [SMALL_STATE(338)] = 14004,
  [SMALL_STATE(339)] = 14012,
  [SMALL_STATE(340)] = 14020,
  [SMALL_STATE(341)] = 14028,
  [SMALL_STATE(342)] = 14036,
  [SMALL_STATE(343)] = 14044,
  [SMALL_STATE(344)] = 14052,
  [SMALL_STATE(345)] = 14060,
  [SMALL_STATE(346)] = 14068,
  [SMALL_STATE(347)] = 14076,
  [SMALL_STATE(348)] = 14084,
  [SMALL_STATE(349)] = 14092,
  [SMALL_STATE(350)] = 14100,
  [SMALL_STATE(351)] = 14108,
  [SMALL_STATE(352)] = 14116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary, 1), SHIFT(325),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(324),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 3),
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
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(341),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asm, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asm, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_block, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__asm_block, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_if, 1), SHIFT(319),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_block, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__asm_block, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4), SHIFT(330),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(325),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(328),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(12),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(277),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__asm_sequence_repeat1, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__asm_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(254),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, .production_id = 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(305),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trap, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2), SHIFT_REPEAT(218),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(47),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(337),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [749] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
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
