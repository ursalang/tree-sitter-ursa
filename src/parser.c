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
#define TOKEN_COUNT 65
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
  anon_sym_asm = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_COLON = 30,
  anon_sym_COLON_EQ = 31,
  anon_sym_or = 32,
  anon_sym_AMP = 33,
  anon_sym_CARET = 34,
  anon_sym_PIPE = 35,
  anon_sym_LT_LT = 36,
  anon_sym_GT_GT = 37,
  anon_sym_GT_GT_GT = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_BANG_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT = 43,
  anon_sym_GT_EQ = 44,
  anon_sym_PLUS = 45,
  anon_sym_DASH = 46,
  anon_sym_STAR = 47,
  anon_sym_SLASH = 48,
  anon_sym_PERCENT = 49,
  anon_sym_STAR_STAR = 50,
  anon_sym_not = 51,
  anon_sym_TILDE = 52,
  sym_identifier = 53,
  sym_number = 54,
  anon_sym_false = 55,
  anon_sym_true = 56,
  sym_null = 57,
  anon_sym_DQUOTE = 58,
  sym__unescaped_string_fragment = 59,
  sym__escape_sequence = 60,
  sym_line_comment = 61,
  sym__automatic_semicolon = 62,
  sym_block_comment = 63,
  sym_raw_string_literal = 64,
  sym_module = 65,
  sym__shebang = 66,
  sym__path = 67,
  sym__sequence = 68,
  sym__asm_sequence = 69,
  sym__asm_statement = 70,
  sym_asm_instruction = 71,
  sym__asm_block = 72,
  sym_block = 73,
  sym_statement = 74,
  sym_let = 75,
  sym_use = 76,
  sym__sc = 77,
  sym__primary = 78,
  sym__exp = 79,
  sym_break = 80,
  sym_return = 81,
  sym_await = 82,
  sym_launch = 83,
  sym_yield = 84,
  sym__if = 85,
  sym_if = 86,
  sym_fn = 87,
  sym_fn_type = 88,
  sym_params = 89,
  sym_loop = 90,
  sym_for = 91,
  sym_asm = 92,
  sym_list = 93,
  sym_map = 94,
  sym_object = 95,
  sym_member = 96,
  sym_assignment = 97,
  sym_binary_exp = 98,
  sym_unary_exp = 99,
  sym_call = 100,
  sym_property_exp = 101,
  sym_bool = 102,
  sym_string = 103,
  sym_named_type = 104,
  sym_type = 105,
  sym_type_args = 106,
  sym_type_annotation = 107,
  aux_sym__path_repeat1 = 108,
  aux_sym__sequence_repeat1 = 109,
  aux_sym__asm_sequence_repeat1 = 110,
  aux_sym_asm_instruction_repeat1 = 111,
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
  [sym_asm_instruction] = "asm_instruction",
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
  [aux_sym_asm_instruction_repeat1] = "asm_instruction_repeat1",
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
  [sym_asm_instruction] = sym_asm_instruction,
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
  [aux_sym_asm_instruction_repeat1] = aux_sym_asm_instruction_repeat1,
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
  [sym_asm_instruction] = {
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
  [aux_sym_asm_instruction_repeat1] = {
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
  [11] = 7,
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
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 30,
  [44] = 39,
  [45] = 36,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 31,
  [50] = 40,
  [51] = 51,
  [52] = 40,
  [53] = 31,
  [54] = 54,
  [55] = 55,
  [56] = 42,
  [57] = 30,
  [58] = 51,
  [59] = 28,
  [60] = 60,
  [61] = 32,
  [62] = 42,
  [63] = 34,
  [64] = 32,
  [65] = 29,
  [66] = 34,
  [67] = 35,
  [68] = 36,
  [69] = 54,
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
  [87] = 87,
  [88] = 73,
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
  [101] = 79,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 80,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 95,
  [112] = 107,
  [113] = 92,
  [114] = 106,
  [115] = 86,
  [116] = 104,
  [117] = 109,
  [118] = 102,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 87,
  [123] = 100,
  [124] = 83,
  [125] = 108,
  [126] = 89,
  [127] = 127,
  [128] = 128,
  [129] = 84,
  [130] = 130,
  [131] = 103,
  [132] = 99,
  [133] = 77,
  [134] = 85,
  [135] = 135,
  [136] = 98,
  [137] = 94,
  [138] = 96,
  [139] = 97,
  [140] = 91,
  [141] = 121,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 145,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 127,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 149,
  [162] = 154,
  [163] = 160,
  [164] = 156,
  [165] = 128,
  [166] = 153,
  [167] = 143,
  [168] = 159,
  [169] = 144,
  [170] = 158,
  [171] = 157,
  [172] = 110,
  [173] = 130,
  [174] = 174,
  [175] = 135,
  [176] = 174,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 183,
  [184] = 81,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 185,
  [191] = 186,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 195,
  [197] = 119,
  [198] = 160,
  [199] = 159,
  [200] = 200,
  [201] = 156,
  [202] = 148,
  [203] = 153,
  [204] = 200,
  [205] = 149,
  [206] = 154,
  [207] = 174,
  [208] = 157,
  [209] = 209,
  [210] = 158,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 216,
  [223] = 223,
  [224] = 217,
  [225] = 225,
  [226] = 215,
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 232,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 238,
  [250] = 250,
  [251] = 251,
  [252] = 218,
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
  [264] = 256,
  [265] = 257,
  [266] = 266,
  [267] = 254,
  [268] = 268,
  [269] = 269,
  [270] = 255,
  [271] = 263,
  [272] = 272,
  [273] = 260,
  [274] = 274,
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
  [288] = 281,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 279,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 283,
  [298] = 298,
  [299] = 296,
  [300] = 294,
  [301] = 286,
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
  [314] = 304,
  [315] = 315,
  [316] = 313,
  [317] = 302,
  [318] = 315,
  [319] = 319,
  [320] = 319,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 324,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 322,
  [341] = 341,
  [342] = 323,
  [343] = 334,
  [344] = 321,
  [345] = 345,
  [346] = 331,
  [347] = 327,
  [348] = 348,
  [349] = 328,
  [350] = 345,
  [351] = 333,
  [352] = 330,
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
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(32);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'y') ADVANCE(181);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(219);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(219);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(219);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(219);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(219);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(219);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(22);
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
      if (lookahead == '}') ADVANCE(233);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
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
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(32);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 78:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(181);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(219);
      END_STATE();
    case 79:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(181);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(219);
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '^') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'y') ADVANCE(181);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(219);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(181);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(219);
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
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_asm);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_asm);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(219);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(200);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(118);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(197);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(197);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(219);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(179);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(113);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(96);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(115);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(111);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(211);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(103);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(208);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(128);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(194);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(199);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(192);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(191);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(205);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(219);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
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
  [93] = {.lex_state = 80, .external_lex_state = 3},
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
  [109] = {.lex_state = 80, .external_lex_state = 4},
  [110] = {.lex_state = 80, .external_lex_state = 4},
  [111] = {.lex_state = 80, .external_lex_state = 3},
  [112] = {.lex_state = 80, .external_lex_state = 3},
  [113] = {.lex_state = 80, .external_lex_state = 3},
  [114] = {.lex_state = 80, .external_lex_state = 3},
  [115] = {.lex_state = 80, .external_lex_state = 3},
  [116] = {.lex_state = 80, .external_lex_state = 3},
  [117] = {.lex_state = 80, .external_lex_state = 3},
  [118] = {.lex_state = 80, .external_lex_state = 3},
  [119] = {.lex_state = 80, .external_lex_state = 3},
  [120] = {.lex_state = 80, .external_lex_state = 4},
  [121] = {.lex_state = 3, .external_lex_state = 2},
  [122] = {.lex_state = 80, .external_lex_state = 3},
  [123] = {.lex_state = 80, .external_lex_state = 3},
  [124] = {.lex_state = 80, .external_lex_state = 3},
  [125] = {.lex_state = 80, .external_lex_state = 3},
  [126] = {.lex_state = 80, .external_lex_state = 3},
  [127] = {.lex_state = 80, .external_lex_state = 4},
  [128] = {.lex_state = 80, .external_lex_state = 4},
  [129] = {.lex_state = 80, .external_lex_state = 3},
  [130] = {.lex_state = 80, .external_lex_state = 4},
  [131] = {.lex_state = 80, .external_lex_state = 3},
  [132] = {.lex_state = 80, .external_lex_state = 3},
  [133] = {.lex_state = 80, .external_lex_state = 3},
  [134] = {.lex_state = 80, .external_lex_state = 3},
  [135] = {.lex_state = 80, .external_lex_state = 4},
  [136] = {.lex_state = 80, .external_lex_state = 3},
  [137] = {.lex_state = 80, .external_lex_state = 3},
  [138] = {.lex_state = 80, .external_lex_state = 3},
  [139] = {.lex_state = 80, .external_lex_state = 3},
  [140] = {.lex_state = 80, .external_lex_state = 3},
  [141] = {.lex_state = 3, .external_lex_state = 2},
  [142] = {.lex_state = 80, .external_lex_state = 4},
  [143] = {.lex_state = 80, .external_lex_state = 4},
  [144] = {.lex_state = 80, .external_lex_state = 4},
  [145] = {.lex_state = 80, .external_lex_state = 4},
  [146] = {.lex_state = 80, .external_lex_state = 3},
  [147] = {.lex_state = 3, .external_lex_state = 2},
  [148] = {.lex_state = 80, .external_lex_state = 3},
  [149] = {.lex_state = 80, .external_lex_state = 3},
  [150] = {.lex_state = 80, .external_lex_state = 4},
  [151] = {.lex_state = 80, .external_lex_state = 3},
  [152] = {.lex_state = 3, .external_lex_state = 2},
  [153] = {.lex_state = 80, .external_lex_state = 3},
  [154] = {.lex_state = 80, .external_lex_state = 3},
  [155] = {.lex_state = 80, .external_lex_state = 3},
  [156] = {.lex_state = 80, .external_lex_state = 4},
  [157] = {.lex_state = 80, .external_lex_state = 4},
  [158] = {.lex_state = 80, .external_lex_state = 4},
  [159] = {.lex_state = 80, .external_lex_state = 4},
  [160] = {.lex_state = 80, .external_lex_state = 4},
  [161] = {.lex_state = 80, .external_lex_state = 4},
  [162] = {.lex_state = 80, .external_lex_state = 4},
  [163] = {.lex_state = 80, .external_lex_state = 3},
  [164] = {.lex_state = 80, .external_lex_state = 3},
  [165] = {.lex_state = 80, .external_lex_state = 3},
  [166] = {.lex_state = 80, .external_lex_state = 4},
  [167] = {.lex_state = 80, .external_lex_state = 3},
  [168] = {.lex_state = 80, .external_lex_state = 3},
  [169] = {.lex_state = 80, .external_lex_state = 3},
  [170] = {.lex_state = 80, .external_lex_state = 3},
  [171] = {.lex_state = 80, .external_lex_state = 3},
  [172] = {.lex_state = 80, .external_lex_state = 3},
  [173] = {.lex_state = 80, .external_lex_state = 3},
  [174] = {.lex_state = 80, .external_lex_state = 3},
  [175] = {.lex_state = 80, .external_lex_state = 3},
  [176] = {.lex_state = 80, .external_lex_state = 4},
  [177] = {.lex_state = 80, .external_lex_state = 3},
  [178] = {.lex_state = 3, .external_lex_state = 2},
  [179] = {.lex_state = 80, .external_lex_state = 3},
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
  [192] = {.lex_state = 80, .external_lex_state = 3},
  [193] = {.lex_state = 80, .external_lex_state = 4},
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
  [213] = {.lex_state = 7, .external_lex_state = 3},
  [214] = {.lex_state = 5, .external_lex_state = 4},
  [215] = {.lex_state = 5, .external_lex_state = 4},
  [216] = {.lex_state = 5, .external_lex_state = 4},
  [217] = {.lex_state = 5, .external_lex_state = 4},
  [218] = {.lex_state = 5, .external_lex_state = 4},
  [219] = {.lex_state = 5, .external_lex_state = 4},
  [220] = {.lex_state = 5, .external_lex_state = 4},
  [221] = {.lex_state = 82, .external_lex_state = 4},
  [222] = {.lex_state = 80, .external_lex_state = 3},
  [223] = {.lex_state = 82, .external_lex_state = 4},
  [224] = {.lex_state = 80, .external_lex_state = 3},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 80, .external_lex_state = 3},
  [227] = {.lex_state = 82, .external_lex_state = 4},
  [228] = {.lex_state = 82, .external_lex_state = 4},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 82, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 82, .external_lex_state = 4},
  [234] = {.lex_state = 82, .external_lex_state = 4},
  [235] = {.lex_state = 82, .external_lex_state = 4},
  [236] = {.lex_state = 82, .external_lex_state = 4},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 82, .external_lex_state = 4},
  [241] = {.lex_state = 7, .external_lex_state = 3},
  [242] = {.lex_state = 0, .external_lex_state = 4},
  [243] = {.lex_state = 82, .external_lex_state = 4},
  [244] = {.lex_state = 82, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 82, .external_lex_state = 4},
  [247] = {.lex_state = 82, .external_lex_state = 4},
  [248] = {.lex_state = 82, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 82, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 80, .external_lex_state = 3},
  [253] = {.lex_state = 7, .external_lex_state = 3},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 4, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 3},
  [257] = {.lex_state = 4, .external_lex_state = 4},
  [258] = {.lex_state = 82, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 3},
  [265] = {.lex_state = 4, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 4, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 3},
  [270] = {.lex_state = 4, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 3},
  [272] = {.lex_state = 82, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 0, .external_lex_state = 3},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 82, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 82, .external_lex_state = 4},
  [281] = {.lex_state = 7, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 3},
  [283] = {.lex_state = 7, .external_lex_state = 4},
  [284] = {.lex_state = 0, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 4},
  [286] = {.lex_state = 7, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 7, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 7, .external_lex_state = 4},
  [291] = {.lex_state = 7, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 82, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 4},
  [296] = {.lex_state = 0, .external_lex_state = 4},
  [297] = {.lex_state = 7, .external_lex_state = 4},
  [298] = {.lex_state = 82, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 7, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 7, .external_lex_state = 4},
  [304] = {.lex_state = 7, .external_lex_state = 4},
  [305] = {.lex_state = 7, .external_lex_state = 4},
  [306] = {.lex_state = 7, .external_lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 7, .external_lex_state = 4},
  [309] = {.lex_state = 7, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 3},
  [312] = {.lex_state = 82, .external_lex_state = 4},
  [313] = {.lex_state = 0, .external_lex_state = 4},
  [314] = {.lex_state = 7, .external_lex_state = 4},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 4},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 4},
  [322] = {.lex_state = 7, .external_lex_state = 4},
  [323] = {.lex_state = 80, .external_lex_state = 4},
  [324] = {.lex_state = 7, .external_lex_state = 4},
  [325] = {.lex_state = 0, .external_lex_state = 4},
  [326] = {.lex_state = 7, .external_lex_state = 4},
  [327] = {.lex_state = 0, .external_lex_state = 4},
  [328] = {.lex_state = 0, .external_lex_state = 4},
  [329] = {.lex_state = 0, .external_lex_state = 4},
  [330] = {.lex_state = 0, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 4},
  [332] = {.lex_state = 0, .external_lex_state = 4},
  [333] = {.lex_state = 7, .external_lex_state = 4},
  [334] = {.lex_state = 7, .external_lex_state = 4},
  [335] = {.lex_state = 82, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 4},
  [337] = {.lex_state = 7, .external_lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 7, .external_lex_state = 4},
  [340] = {.lex_state = 7, .external_lex_state = 4},
  [341] = {.lex_state = 0, .external_lex_state = 4},
  [342] = {.lex_state = 80, .external_lex_state = 4},
  [343] = {.lex_state = 7, .external_lex_state = 4},
  [344] = {.lex_state = 0, .external_lex_state = 4},
  [345] = {.lex_state = 0, .external_lex_state = 4},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 0, .external_lex_state = 4},
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
    [sym__shebang] = STATE(8),
    [sym__path] = STATE(221),
    [sym__sequence] = STATE(325),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym_block] = STATE(120),
    [sym__primary] = STATE(120),
    [sym__exp] = STATE(161),
    [sym_await] = STATE(161),
    [sym_launch] = STATE(161),
    [sym_yield] = STATE(161),
    [sym__if] = STATE(77),
    [sym_if] = STATE(161),
    [sym_fn] = STATE(120),
    [sym_fn_type] = STATE(318),
    [sym_loop] = STATE(161),
    [sym_for] = STATE(161),
    [sym_asm] = STATE(161),
    [sym_list] = STATE(120),
    [sym_map] = STATE(120),
    [sym_object] = STATE(120),
    [sym_assignment] = STATE(161),
    [sym_binary_exp] = STATE(161),
    [sym_unary_exp] = STATE(161),
    [sym_call] = STATE(120),
    [sym_property_exp] = STATE(120),
    [sym_bool] = STATE(120),
    [sym_string] = STATE(120),
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
    [sym__exp] = STATE(149),
    [sym_await] = STATE(149),
    [sym_launch] = STATE(149),
    [sym_yield] = STATE(149),
    [sym__if] = STATE(133),
    [sym_if] = STATE(149),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(149),
    [sym_for] = STATE(149),
    [sym_asm] = STATE(149),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(149),
    [sym_binary_exp] = STATE(149),
    [sym_unary_exp] = STATE(149),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym_block] = STATE(197),
    [sym__primary] = STATE(197),
    [sym__exp] = STATE(205),
    [sym_await] = STATE(205),
    [sym_launch] = STATE(205),
    [sym_yield] = STATE(205),
    [sym__if] = STATE(77),
    [sym_if] = STATE(205),
    [sym_fn] = STATE(197),
    [sym_fn_type] = STATE(318),
    [sym_loop] = STATE(205),
    [sym_for] = STATE(205),
    [sym_asm] = STATE(205),
    [sym_list] = STATE(197),
    [sym_map] = STATE(197),
    [sym_object] = STATE(197),
    [sym_assignment] = STATE(205),
    [sym_binary_exp] = STATE(205),
    [sym_unary_exp] = STATE(205),
    [sym_call] = STATE(197),
    [sym_property_exp] = STATE(197),
    [sym_bool] = STATE(197),
    [sym_string] = STATE(197),
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
    [sym__sequence] = STATE(347),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
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
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(181),
    [sym_for] = STATE(181),
    [sym_asm] = STATE(181),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_member] = STATE(273),
    [sym_assignment] = STATE(181),
    [sym_binary_exp] = STATE(181),
    [sym_unary_exp] = STATE(181),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym__sequence] = STATE(327),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(179),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(179),
    [sym_launch] = STATE(179),
    [sym_yield] = STATE(179),
    [sym__if] = STATE(133),
    [sym_if] = STATE(179),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(179),
    [sym_for] = STATE(179),
    [sym_asm] = STATE(179),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_member] = STATE(260),
    [sym_assignment] = STATE(179),
    [sym_binary_exp] = STATE(179),
    [sym_unary_exp] = STATE(179),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym__sequence] = STATE(327),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym__sequence] = STATE(336),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
    [ts_builtin_sym_end] = ACTIONS(123),
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
  [9] = {
    [sym__path] = STATE(221),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(269),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym_block] = STATE(119),
    [sym_statement] = STATE(269),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [sym__sequence] = STATE(347),
    [sym_block] = STATE(119),
    [sym_statement] = STATE(231),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    [sym_statement] = STATE(269),
    [sym_let] = STATE(262),
    [sym_use] = STATE(262),
    [sym__primary] = STATE(119),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(262),
    [sym_return] = STATE(262),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym__if] = STATE(133),
    [sym_if] = STATE(182),
    [sym_fn] = STATE(119),
    [sym_fn_type] = STATE(315),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_asm] = STATE(182),
    [sym_list] = STATE(119),
    [sym_map] = STATE(119),
    [sym_object] = STATE(119),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(119),
    [sym_property_exp] = STATE(119),
    [sym_bool] = STATE(119),
    [sym_string] = STATE(119),
    [sym_named_type] = STATE(330),
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(180), 11,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(261), 1,
      sym_let,
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(154), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(110), 11,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(168), 11,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(196), 11,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
  [2889] = 25,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(130), 11,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(207), 11,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
  [3293] = 25,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
  [3394] = 25,
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
    STATE(318), 1,
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
    STATE(197), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(156), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(150), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(164), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
  [4303] = 25,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(130), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(154), 11,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(170), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(110), 11,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    STATE(318), 1,
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
    STATE(120), 10,
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
    STATE(166), 11,
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
    STATE(215), 1,
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
    STATE(215), 1,
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
    STATE(215), 1,
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
  [6749] = 3,
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
  [6787] = 3,
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
  [6825] = 3,
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
  [6939] = 5,
    ACTIONS(246), 1,
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
  [6981] = 3,
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
  [7019] = 3,
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
  [7057] = 3,
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
  [7095] = 3,
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
  [7133] = 3,
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
  [7171] = 3,
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
  [7209] = 3,
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
  [7247] = 5,
    ACTIONS(276), 1,
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
  [7289] = 3,
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
  [7327] = 3,
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
  [7365] = 3,
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
  [7403] = 4,
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
  [7443] = 3,
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
  [7481] = 3,
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
  [7519] = 3,
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
  [7557] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(303), 23,
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
  [7595] = 5,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 21,
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
  [7636] = 3,
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
  [7673] = 3,
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
  [7710] = 3,
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
  [7747] = 3,
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
  [7784] = 3,
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
  [7821] = 3,
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
  [7858] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 6,
      anon_sym_COLON,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(303), 22,
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
  [7895] = 3,
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
  [7932] = 4,
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
  [7971] = 4,
    ACTIONS(321), 1,
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
  [8010] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(253), 1,
      aux_sym_asm_instruction_repeat1,
    STATE(315), 1,
      sym_fn_type,
    STATE(319), 1,
      sym__asm_sequence,
    STATE(330), 1,
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
    ACTIONS(327), 2,
      sym_number,
      sym_null,
    STATE(251), 10,
      sym__asm_statement,
      sym_asm_instruction,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [8075] = 3,
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
  [8112] = 3,
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
  [8149] = 3,
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
  [8186] = 3,
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
  [8223] = 3,
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
  [8260] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 23,
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
  [8297] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 23,
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
  [8334] = 3,
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
  [8371] = 5,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(339), 21,
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
  [8412] = 3,
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
  [8449] = 3,
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
  [8486] = 5,
    ACTIONS(343), 1,
      anon_sym_else,
    ACTIONS(345), 1,
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
  [8527] = 3,
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
  [8564] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 23,
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
  [8601] = 3,
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
  [8638] = 3,
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
  [8675] = 3,
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
  [8712] = 3,
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
  [8749] = 3,
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
  [8786] = 17,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_raw_string_literal,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym__path,
    STATE(253), 1,
      aux_sym_asm_instruction_repeat1,
    STATE(315), 1,
      sym_fn_type,
    STATE(320), 1,
      sym__asm_sequence,
    STATE(330), 1,
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
    ACTIONS(327), 2,
      sym_number,
      sym_null,
    STATE(251), 10,
      sym__asm_statement,
      sym_asm_instruction,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [8851] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(354), 23,
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
    ACTIONS(360), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 23,
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
    ACTIONS(364), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 23,
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
    ACTIONS(368), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(366), 23,
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
  [8999] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(354), 22,
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
  [9035] = 16,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(253), 1,
      aux_sym_asm_instruction_repeat1,
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(372), 2,
      sym_number,
      sym_null,
    STATE(282), 10,
      sym__asm_statement,
      sym_asm_instruction,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [9097] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9153] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(400), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9209] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(376), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9265] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(368), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(366), 22,
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
  [9301] = 16,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(374), 1,
      sym_raw_string_literal,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym__path,
    STATE(253), 1,
      aux_sym_asm_instruction_repeat1,
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(372), 2,
      sym_number,
      sym_null,
    STATE(282), 10,
      sym__asm_statement,
      sym_asm_instruction,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [9363] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
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
  [9419] = 12,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(309), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [9473] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 22,
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
  [9509] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
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
  [9565] = 6,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 19,
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
  [9607] = 8,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 18,
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
  [9653] = 9,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 16,
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
  [9701] = 11,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(309), 12,
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
  [9753] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [9809] = 12,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(309), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [9863] = 11,
    ACTIONS(313), 1,
      anon_sym_GT_GT,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(309), 12,
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
  [9915] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
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
  [9971] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 22,
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
  [10007] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
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
  [10063] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 22,
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
  [10099] = 9,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 16,
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
  [10147] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(362), 22,
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
  [10183] = 8,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 18,
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
  [10229] = 6,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 19,
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
  [10271] = 5,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 20,
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
  [10311] = 5,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(339), 20,
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
  [10351] = 12,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(339), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
  [10405] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(348), 22,
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
  [10441] = 12,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(339), 7,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
  [10495] = 15,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_or,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(428), 1,
      anon_sym_and,
    ACTIONS(430), 1,
      sym__automatic_semicolon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10554] = 15,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(374), 1,
      sym_raw_string_literal,
    STATE(221), 1,
      sym__path,
    STATE(253), 1,
      aux_sym_asm_instruction_repeat1,
    STATE(315), 1,
      sym_fn_type,
    STATE(330), 1,
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
    ACTIONS(372), 2,
      sym_number,
      sym_null,
    STATE(282), 10,
      sym__asm_statement,
      sym_asm_instruction,
      sym_block,
      sym__primary,
      sym_fn,
      sym_list,
      sym_map,
      sym_object,
      sym_bool,
      sym_string,
  [10613] = 14,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(433), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10670] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(437), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10725] = 14,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(433), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10782] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(433), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10837] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(441), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(384), 5,
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
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
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
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [10992] = 15,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11050] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(454), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11104] = 15,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11162] = 15,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11220] = 15,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11278] = 15,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11336] = 13,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_GT_GT,
    ACTIONS(396), 1,
      anon_sym_PERCENT,
    ACTIONS(398), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(390), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(470), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11389] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11442] = 14,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    STATE(75), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11497] = 14,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    STATE(169), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11552] = 14,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11607] = 4,
    ACTIONS(496), 1,
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
  [11642] = 11,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(309), 8,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11690] = 9,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 12,
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
  [11734] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11786] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11838] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11890] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11942] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [11994] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12046] = 12,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12096] = 12,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_GT_GT,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(339), 3,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(482), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12146] = 6,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 15,
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
  [12184] = 13,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_PERCENT,
    ACTIONS(418), 1,
      anon_sym_STAR_STAR,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(404), 5,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [12236] = 8,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(313), 3,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 14,
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
  [12278] = 9,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_GT,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(230), 1,
      sym_named_type,
    STATE(277), 1,
      sym_fn_type,
    STATE(298), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12308] = 8,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym__path,
    STATE(230), 1,
      sym_named_type,
    STATE(277), 1,
      sym_fn_type,
    STATE(312), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12335] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(215), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 2,
      anon_sym_LBRACE,
      anon_sym_LT,
    ACTIONS(514), 4,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [12356] = 8,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym__path,
    STATE(230), 1,
      sym_named_type,
    STATE(277), 1,
      sym_fn_type,
    STATE(312), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12383] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(518), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12402] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(215), 1,
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
  [12421] = 4,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(217), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12440] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
  [12454] = 7,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(230), 1,
      sym_named_type,
    STATE(277), 1,
      sym_fn_type,
    STATE(312), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12478] = 7,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(230), 1,
      sym_named_type,
    STATE(272), 1,
      sym_type,
    STATE(277), 1,
      sym_fn_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_fn,
      anon_sym_gen,
  [12502] = 4,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(240), 1,
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
  [12520] = 4,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(226), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12537] = 4,
    ACTIONS(533), 1,
      anon_sym_PLUS,
    STATE(228), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(531), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12554] = 4,
    ACTIONS(535), 1,
      anon_sym_DOT,
    STATE(224), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12571] = 5,
    STATE(12), 1,
      sym__sc,
    STATE(225), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(540), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12590] = 4,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(224), 1,
      aux_sym__path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(518), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12607] = 4,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(543), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12624] = 4,
    ACTIONS(549), 1,
      anon_sym_PLUS,
    STATE(228), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(547), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12641] = 5,
    STATE(10), 1,
      sym__sc,
    STATE(225), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(552), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12660] = 4,
    ACTIONS(533), 1,
      anon_sym_PLUS,
    STATE(223), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(554), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [12677] = 5,
    STATE(9), 1,
      sym__sc,
    STATE(229), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(558), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12696] = 5,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_if,
    STATE(133), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(146), 2,
      sym_block,
      sym_if,
  [12714] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(562), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12726] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(547), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12738] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(564), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12750] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(566), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12762] = 5,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym__sc,
    STATE(239), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(568), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12780] = 5,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(143), 2,
      sym_block,
      sym_if,
  [12798] = 5,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym__sc,
    STATE(239), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(572), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12816] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12828] = 4,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(241), 1,
      aux_sym_asm_instruction_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12844] = 5,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_if,
    STATE(77), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(142), 2,
      sym_block,
      sym_if,
  [12862] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(582), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(584), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12886] = 6,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      sym_type_annotation,
    STATE(289), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [12906] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(590), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12918] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(592), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(594), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_GT,
  [12942] = 5,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_if,
    STATE(133), 1,
      sym__if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(167), 2,
      sym_block,
      sym_if,
  [12960] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(596), 5,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
  [12972] = 5,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym__sc,
    STATE(237), 1,
      aux_sym__asm_sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(600), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [12990] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13002] = 4,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(241), 1,
      aux_sym_asm_instruction_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(602), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13018] = 4,
    STATE(274), 1,
      aux_sym_object_repeat1,
    STATE(281), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(606), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13033] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      sym_line_comment,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(610), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13050] = 4,
    STATE(254), 1,
      aux_sym_object_repeat1,
    STATE(283), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13065] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_line_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(270), 1,
      aux_sym_string_repeat1,
    ACTIONS(618), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13082] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13093] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13104] = 4,
    STATE(263), 1,
      aux_sym_object_repeat1,
    STATE(301), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13119] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(626), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13130] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13141] = 4,
    STATE(274), 1,
      aux_sym_object_repeat1,
    STATE(297), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(628), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13156] = 4,
    STATE(267), 1,
      aux_sym_object_repeat1,
    STATE(297), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(628), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13171] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_line_comment,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      aux_sym_string_repeat1,
    ACTIONS(632), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13188] = 4,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(454), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13203] = 4,
    STATE(274), 1,
      aux_sym_object_repeat1,
    STATE(288), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(637), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13218] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(641), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13235] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13246] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(610), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [13263] = 4,
    STATE(274), 1,
      aux_sym_object_repeat1,
    STATE(283), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13278] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13289] = 4,
    STATE(271), 1,
      aux_sym_object_repeat1,
    STATE(286), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(648), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13304] = 4,
    STATE(274), 1,
      aux_sym_object_repeat1,
    STATE(308), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(650), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13319] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(653), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13330] = 4,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(307), 1,
      sym_type_annotation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13345] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(554), 4,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [13356] = 4,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13370] = 4,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13384] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_GT,
    STATE(280), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13398] = 4,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13412] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(570), 3,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [13422] = 4,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13436] = 4,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13450] = 3,
    STATE(259), 1,
      sym_let,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_let,
      anon_sym_var,
  [13462] = 4,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13476] = 4,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13490] = 4,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13504] = 4,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13518] = 4,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13532] = 4,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(221), 1,
      sym__path,
    STATE(234), 1,
      sym_named_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13546] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13560] = 4,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13574] = 4,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13588] = 4,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_params_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13602] = 4,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13616] = 4,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13630] = 4,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(293), 1,
      aux_sym_type_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13644] = 4,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13658] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13672] = 4,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13686] = 3,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13697] = 3,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13708] = 3,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(264), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13719] = 3,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13730] = 3,
    ACTIONS(722), 1,
      sym_identifier,
    STATE(275), 1,
      sym__path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13741] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(724), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13750] = 3,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(311), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13761] = 3,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13772] = 3,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_params,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13783] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(730), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [13792] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13801] = 3,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym__asm_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13812] = 3,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(256), 1,
      sym_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13823] = 3,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13834] = 3,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym__asm_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13845] = 3,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13856] = 3,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13867] = 2,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13875] = 2,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13883] = 2,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13891] = 2,
    ACTIONS(742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13899] = 2,
    ACTIONS(744), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13907] = 2,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13915] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13923] = 2,
    ACTIONS(748), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13931] = 2,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13939] = 2,
    ACTIONS(752), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13947] = 2,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13955] = 2,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13963] = 2,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13971] = 2,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13979] = 2,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13987] = 2,
    ACTIONS(764), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [13995] = 2,
    ACTIONS(712), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14003] = 2,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14011] = 2,
    ACTIONS(768), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14019] = 2,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14027] = 2,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14035] = 2,
    ACTIONS(770), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14043] = 2,
    ACTIONS(772), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14051] = 2,
    ACTIONS(774), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14059] = 2,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14067] = 2,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14075] = 2,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14083] = 2,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14091] = 2,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14099] = 2,
    ACTIONS(784), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14107] = 2,
    ACTIONS(786), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14115] = 2,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14123] = 2,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [14131] = 2,
    ACTIONS(790), 1,
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
  [SMALL_STATE(94)] = 6981,
  [SMALL_STATE(95)] = 7019,
  [SMALL_STATE(96)] = 7057,
  [SMALL_STATE(97)] = 7095,
  [SMALL_STATE(98)] = 7133,
  [SMALL_STATE(99)] = 7171,
  [SMALL_STATE(100)] = 7209,
  [SMALL_STATE(101)] = 7247,
  [SMALL_STATE(102)] = 7289,
  [SMALL_STATE(103)] = 7327,
  [SMALL_STATE(104)] = 7365,
  [SMALL_STATE(105)] = 7403,
  [SMALL_STATE(106)] = 7443,
  [SMALL_STATE(107)] = 7481,
  [SMALL_STATE(108)] = 7519,
  [SMALL_STATE(109)] = 7557,
  [SMALL_STATE(110)] = 7595,
  [SMALL_STATE(111)] = 7636,
  [SMALL_STATE(112)] = 7673,
  [SMALL_STATE(113)] = 7710,
  [SMALL_STATE(114)] = 7747,
  [SMALL_STATE(115)] = 7784,
  [SMALL_STATE(116)] = 7821,
  [SMALL_STATE(117)] = 7858,
  [SMALL_STATE(118)] = 7895,
  [SMALL_STATE(119)] = 7932,
  [SMALL_STATE(120)] = 7971,
  [SMALL_STATE(121)] = 8010,
  [SMALL_STATE(122)] = 8075,
  [SMALL_STATE(123)] = 8112,
  [SMALL_STATE(124)] = 8149,
  [SMALL_STATE(125)] = 8186,
  [SMALL_STATE(126)] = 8223,
  [SMALL_STATE(127)] = 8260,
  [SMALL_STATE(128)] = 8297,
  [SMALL_STATE(129)] = 8334,
  [SMALL_STATE(130)] = 8371,
  [SMALL_STATE(131)] = 8412,
  [SMALL_STATE(132)] = 8449,
  [SMALL_STATE(133)] = 8486,
  [SMALL_STATE(134)] = 8527,
  [SMALL_STATE(135)] = 8564,
  [SMALL_STATE(136)] = 8601,
  [SMALL_STATE(137)] = 8638,
  [SMALL_STATE(138)] = 8675,
  [SMALL_STATE(139)] = 8712,
  [SMALL_STATE(140)] = 8749,
  [SMALL_STATE(141)] = 8786,
  [SMALL_STATE(142)] = 8851,
  [SMALL_STATE(143)] = 8888,
  [SMALL_STATE(144)] = 8925,
  [SMALL_STATE(145)] = 8962,
  [SMALL_STATE(146)] = 8999,
  [SMALL_STATE(147)] = 9035,
  [SMALL_STATE(148)] = 9097,
  [SMALL_STATE(149)] = 9153,
  [SMALL_STATE(150)] = 9209,
  [SMALL_STATE(151)] = 9265,
  [SMALL_STATE(152)] = 9301,
  [SMALL_STATE(153)] = 9363,
  [SMALL_STATE(154)] = 9419,
  [SMALL_STATE(155)] = 9473,
  [SMALL_STATE(156)] = 9509,
  [SMALL_STATE(157)] = 9565,
  [SMALL_STATE(158)] = 9607,
  [SMALL_STATE(159)] = 9653,
  [SMALL_STATE(160)] = 9701,
  [SMALL_STATE(161)] = 9753,
  [SMALL_STATE(162)] = 9809,
  [SMALL_STATE(163)] = 9863,
  [SMALL_STATE(164)] = 9915,
  [SMALL_STATE(165)] = 9971,
  [SMALL_STATE(166)] = 10007,
  [SMALL_STATE(167)] = 10063,
  [SMALL_STATE(168)] = 10099,
  [SMALL_STATE(169)] = 10147,
  [SMALL_STATE(170)] = 10183,
  [SMALL_STATE(171)] = 10229,
  [SMALL_STATE(172)] = 10271,
  [SMALL_STATE(173)] = 10311,
  [SMALL_STATE(174)] = 10351,
  [SMALL_STATE(175)] = 10405,
  [SMALL_STATE(176)] = 10441,
  [SMALL_STATE(177)] = 10495,
  [SMALL_STATE(178)] = 10554,
  [SMALL_STATE(179)] = 10613,
  [SMALL_STATE(180)] = 10670,
  [SMALL_STATE(181)] = 10725,
  [SMALL_STATE(182)] = 10782,
  [SMALL_STATE(183)] = 10837,
  [SMALL_STATE(184)] = 10892,
  [SMALL_STATE(185)] = 10934,
  [SMALL_STATE(186)] = 10992,
  [SMALL_STATE(187)] = 11050,
  [SMALL_STATE(188)] = 11104,
  [SMALL_STATE(189)] = 11162,
  [SMALL_STATE(190)] = 11220,
  [SMALL_STATE(191)] = 11278,
  [SMALL_STATE(192)] = 11336,
  [SMALL_STATE(193)] = 11389,
  [SMALL_STATE(194)] = 11442,
  [SMALL_STATE(195)] = 11497,
  [SMALL_STATE(196)] = 11552,
  [SMALL_STATE(197)] = 11607,
  [SMALL_STATE(198)] = 11642,
  [SMALL_STATE(199)] = 11690,
  [SMALL_STATE(200)] = 11734,
  [SMALL_STATE(201)] = 11786,
  [SMALL_STATE(202)] = 11838,
  [SMALL_STATE(203)] = 11890,
  [SMALL_STATE(204)] = 11942,
  [SMALL_STATE(205)] = 11994,
  [SMALL_STATE(206)] = 12046,
  [SMALL_STATE(207)] = 12096,
  [SMALL_STATE(208)] = 12146,
  [SMALL_STATE(209)] = 12184,
  [SMALL_STATE(210)] = 12236,
  [SMALL_STATE(211)] = 12278,
  [SMALL_STATE(212)] = 12308,
  [SMALL_STATE(213)] = 12335,
  [SMALL_STATE(214)] = 12356,
  [SMALL_STATE(215)] = 12383,
  [SMALL_STATE(216)] = 12402,
  [SMALL_STATE(217)] = 12421,
  [SMALL_STATE(218)] = 12440,
  [SMALL_STATE(219)] = 12454,
  [SMALL_STATE(220)] = 12478,
  [SMALL_STATE(221)] = 12502,
  [SMALL_STATE(222)] = 12520,
  [SMALL_STATE(223)] = 12537,
  [SMALL_STATE(224)] = 12554,
  [SMALL_STATE(225)] = 12571,
  [SMALL_STATE(226)] = 12590,
  [SMALL_STATE(227)] = 12607,
  [SMALL_STATE(228)] = 12624,
  [SMALL_STATE(229)] = 12641,
  [SMALL_STATE(230)] = 12660,
  [SMALL_STATE(231)] = 12677,
  [SMALL_STATE(232)] = 12696,
  [SMALL_STATE(233)] = 12714,
  [SMALL_STATE(234)] = 12726,
  [SMALL_STATE(235)] = 12738,
  [SMALL_STATE(236)] = 12750,
  [SMALL_STATE(237)] = 12762,
  [SMALL_STATE(238)] = 12780,
  [SMALL_STATE(239)] = 12798,
  [SMALL_STATE(240)] = 12816,
  [SMALL_STATE(241)] = 12828,
  [SMALL_STATE(242)] = 12844,
  [SMALL_STATE(243)] = 12862,
  [SMALL_STATE(244)] = 12874,
  [SMALL_STATE(245)] = 12886,
  [SMALL_STATE(246)] = 12906,
  [SMALL_STATE(247)] = 12918,
  [SMALL_STATE(248)] = 12930,
  [SMALL_STATE(249)] = 12942,
  [SMALL_STATE(250)] = 12960,
  [SMALL_STATE(251)] = 12972,
  [SMALL_STATE(252)] = 12990,
  [SMALL_STATE(253)] = 13002,
  [SMALL_STATE(254)] = 13018,
  [SMALL_STATE(255)] = 13033,
  [SMALL_STATE(256)] = 13050,
  [SMALL_STATE(257)] = 13065,
  [SMALL_STATE(258)] = 13082,
  [SMALL_STATE(259)] = 13093,
  [SMALL_STATE(260)] = 13104,
  [SMALL_STATE(261)] = 13119,
  [SMALL_STATE(262)] = 13130,
  [SMALL_STATE(263)] = 13141,
  [SMALL_STATE(264)] = 13156,
  [SMALL_STATE(265)] = 13171,
  [SMALL_STATE(266)] = 13188,
  [SMALL_STATE(267)] = 13203,
  [SMALL_STATE(268)] = 13218,
  [SMALL_STATE(269)] = 13235,
  [SMALL_STATE(270)] = 13246,
  [SMALL_STATE(271)] = 13263,
  [SMALL_STATE(272)] = 13278,
  [SMALL_STATE(273)] = 13289,
  [SMALL_STATE(274)] = 13304,
  [SMALL_STATE(275)] = 13319,
  [SMALL_STATE(276)] = 13330,
  [SMALL_STATE(277)] = 13345,
  [SMALL_STATE(278)] = 13356,
  [SMALL_STATE(279)] = 13370,
  [SMALL_STATE(280)] = 13384,
  [SMALL_STATE(281)] = 13398,
  [SMALL_STATE(282)] = 13412,
  [SMALL_STATE(283)] = 13422,
  [SMALL_STATE(284)] = 13436,
  [SMALL_STATE(285)] = 13450,
  [SMALL_STATE(286)] = 13462,
  [SMALL_STATE(287)] = 13476,
  [SMALL_STATE(288)] = 13490,
  [SMALL_STATE(289)] = 13504,
  [SMALL_STATE(290)] = 13518,
  [SMALL_STATE(291)] = 13532,
  [SMALL_STATE(292)] = 13546,
  [SMALL_STATE(293)] = 13560,
  [SMALL_STATE(294)] = 13574,
  [SMALL_STATE(295)] = 13588,
  [SMALL_STATE(296)] = 13602,
  [SMALL_STATE(297)] = 13616,
  [SMALL_STATE(298)] = 13630,
  [SMALL_STATE(299)] = 13644,
  [SMALL_STATE(300)] = 13658,
  [SMALL_STATE(301)] = 13672,
  [SMALL_STATE(302)] = 13686,
  [SMALL_STATE(303)] = 13697,
  [SMALL_STATE(304)] = 13708,
  [SMALL_STATE(305)] = 13719,
  [SMALL_STATE(306)] = 13730,
  [SMALL_STATE(307)] = 13741,
  [SMALL_STATE(308)] = 13750,
  [SMALL_STATE(309)] = 13761,
  [SMALL_STATE(310)] = 13772,
  [SMALL_STATE(311)] = 13783,
  [SMALL_STATE(312)] = 13792,
  [SMALL_STATE(313)] = 13801,
  [SMALL_STATE(314)] = 13812,
  [SMALL_STATE(315)] = 13823,
  [SMALL_STATE(316)] = 13834,
  [SMALL_STATE(317)] = 13845,
  [SMALL_STATE(318)] = 13856,
  [SMALL_STATE(319)] = 13867,
  [SMALL_STATE(320)] = 13875,
  [SMALL_STATE(321)] = 13883,
  [SMALL_STATE(322)] = 13891,
  [SMALL_STATE(323)] = 13899,
  [SMALL_STATE(324)] = 13907,
  [SMALL_STATE(325)] = 13915,
  [SMALL_STATE(326)] = 13923,
  [SMALL_STATE(327)] = 13931,
  [SMALL_STATE(328)] = 13939,
  [SMALL_STATE(329)] = 13947,
  [SMALL_STATE(330)] = 13955,
  [SMALL_STATE(331)] = 13963,
  [SMALL_STATE(332)] = 13971,
  [SMALL_STATE(333)] = 13979,
  [SMALL_STATE(334)] = 13987,
  [SMALL_STATE(335)] = 13995,
  [SMALL_STATE(336)] = 14003,
  [SMALL_STATE(337)] = 14011,
  [SMALL_STATE(338)] = 14019,
  [SMALL_STATE(339)] = 14027,
  [SMALL_STATE(340)] = 14035,
  [SMALL_STATE(341)] = 14043,
  [SMALL_STATE(342)] = 14051,
  [SMALL_STATE(343)] = 14059,
  [SMALL_STATE(344)] = 14067,
  [SMALL_STATE(345)] = 14075,
  [SMALL_STATE(346)] = 14083,
  [SMALL_STATE(347)] = 14091,
  [SMALL_STATE(348)] = 14099,
  [SMALL_STATE(349)] = 14107,
  [SMALL_STATE(350)] = 14115,
  [SMALL_STATE(351)] = 14123,
  [SMALL_STATE(352)] = 14131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary, 1), SHIFT(334),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 1),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(326),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(324),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asm, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asm, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_if, 1), SHIFT(323),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_block, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__asm_block, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_block, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__asm_block, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 4), SHIFT(341),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__path, 1), REDUCE(sym__primary, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asm_instruction_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(334),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(343),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(12),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(291),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__asm_sequence_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__asm_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asm_instruction_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asm_instruction_repeat1, 2), SHIFT_REPEAT(241),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_args, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__asm_sequence, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asm_instruction, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 7, .production_id = 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 6, .production_id = 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(268),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(308),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2), SHIFT_REPEAT(219),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_args_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(48),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(339),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [754] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
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
