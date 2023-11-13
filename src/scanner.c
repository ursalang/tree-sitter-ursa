#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    AUTOMATIC_SEMICOLON,
    BLOCK_COMMENT,
};

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

void *tree_sitter_ursa_external_scanner_create()
{
    return NULL;
}

void tree_sitter_ursa_external_scanner_destroy(void *p)
{
}

void tree_sitter_ursa_external_scanner_reset(void *p)
{
}

unsigned tree_sitter_ursa_external_scanner_serialize(void *p, char *buffer)
{
    return 0;
}

void tree_sitter_ursa_external_scanner_deserialize(void *p, const char *b, unsigned n)
{
}

static void skip(TSLexer *lexer)
{
    lexer->advance(lexer, true);
}

static bool scan_automatic_semicolon(TSLexer *lexer)
{
    lexer->result_symbol = AUTOMATIC_SEMICOLON;
    lexer->mark_end(lexer);

    for (;;) {
        if (lexer->lookahead == 0)
            return true;
        if (lexer->lookahead == '}')
            return true;
        if (lexer->is_at_included_range_start(lexer))
            return true;
        if (lexer->lookahead == '\n')
            break;
        if (!iswspace(lexer->lookahead))
            return false;
        skip(lexer);
    }

    skip(lexer);

    return true;
}

bool tree_sitter_ursa_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols)
{
    if (valid_symbols[AUTOMATIC_SEMICOLON]) {
        return scan_automatic_semicolon(lexer);
    }

    while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

    if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead != '*') return false;
        advance(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
            case '\0':
                return false;
            case '*':
                advance(lexer);
                after_star = true;
                break;
            case '/':
                if (after_star) {
                    advance(lexer);
                    after_star = false;
                    nesting_depth--;
                    if (nesting_depth == 0) {
                        lexer->result_symbol = BLOCK_COMMENT;
                        return true;
                    }
                } else {
                    advance(lexer);
                    after_star = false;
                    if (lexer->lookahead == '*') {
                        nesting_depth++;
                        advance(lexer);
                    }
                }
                break;
            default:
                advance(lexer);
                after_star = false;
                break;
            }
        }
    }

    return false;
}
