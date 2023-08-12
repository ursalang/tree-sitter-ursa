#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    AUTOMATIC_SEMICOLON,
};

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

static void advance(TSLexer *lexer)
{
    lexer->advance(lexer, false);
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

    return false;
}
