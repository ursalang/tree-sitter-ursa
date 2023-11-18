/**
 * Tree-sitter grammar for Ursa
 * © 2023 Reuben Thomas
 * It is distributed under the ISC licence.
 */

// The reference grammar is https://github.com/ursalang/ohm-grammar

module.exports = grammar({
  name: 'ursa',

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /[\s]/,
  ],

  externals: $ => [
    $._automatic_semicolon,
    $.block_comment,
    $.raw_string_literal,
  ],

  rules: {
    module: $ => seq(
      optional($._shebang),
      optional($._sequence),
    ),

    _shebang: $ => alias(token(seq("#!", /.*/)), $.line_comment),

    _sequence: $ => seq(sep1($._exp, $._sc), optional($._sc)),

    block: $ => seq('{', optional($._sequence), '}'),

    let: $ => seq(
      'let',
      field('identifier', $.identifier),
      '=',
      field('value', $._exp)
    ),

    use: $ => prec.right(seq('use', sep1($.identifier, token.immediate('.')))),

    _sc: $ => choice($._automatic_semicolon, ';'),

    _exp: $ => choice(
      $.let,
      $.use,
      $.identifier,
      $.binary_exp,
      $.unary_exp,
      $.if,
      $._fn,
      $.for,
      $.loop,
      $.assignment,
      seq('(', $._exp, ')'),
      $.block,
      $.call,
      $.index_exp,
      $.property_exp,
      $.list,
      $.object,
      $.map,
      $.break,
      $.return,
      $.continue,
      $.null,
      $.bool,
      $.string,
      $.number,
    ),

    break: $ => prec.right(seq('break', optional($._exp))),
    continue: () => 'continue',

    return: $ => prec.right(seq('return', optional($._exp))),

    if: $ => seq('if', $._exp, $.block, optional(seq('else', $.block))),

    _fn: $ => seq('fn', $.lambda),

    lambda: $ => seq(
      '(',
      sep($.identifier, ','),
      optional(','),
      ')',
      $.block,
    ),

    loop: $ => seq('loop', $.block),

    for: $ => seq(
      'for',
      field('identifier', $.identifier),
      'of',
      field('iterator', $._exp),
      $.block,
    ),

    list: $ => seq('[', sep($._exp, ','), ']'),

    object: $ => prec(1, seq('{', sep(seq($.identifier, ':', $._exp), ','), '}')),

    map: $ => seq('{', sep(seq($._exp, ':', $._exp), ','), '}'),

    assignment: $ => prec.right(choice(
      seq($.identifier, ':=', $._exp),
      seq($.index_exp, ':=', $._exp),
    )),

    binary_exp: $ => choice(
      prec.left(1, seq($._exp, 'or', $._exp)),
      prec.left(1, seq($._exp, 'and', $._exp)),
      prec.left(2, seq($._exp, '==', $._exp)),
      prec.left(2, seq($._exp, '!=', $._exp)),
      prec.left(2, seq($._exp, '<', $._exp)),
      prec.left(2, seq($._exp, '<=', $._exp)),
      prec.left(2, seq($._exp, '>', $._exp)),
      prec.left(2, seq($._exp, '>=', $._exp)),
      prec.left(3, seq($._exp, '+', $._exp)),
      prec.left(3, seq($._exp, '-', $._exp)),
      prec.left(4, seq($._exp, '*', $._exp)),
      prec.left(4, seq($._exp, '/', $._exp)),
      prec.left(4, seq($._exp, '%', $._exp)),
      prec.left(5, seq($._exp, '**', $._exp)),
    ),

    unary_exp: $ => choice(
      prec.left(6, seq('not', $._exp)),
      prec.left(7, seq('+', $._exp)),
      prec.left(7, seq('-', $._exp)),
    ),

    index_exp: $ => prec.right(8, seq($._exp, '[', $._exp, ']')),

    call: $ => prec.left(9, seq(field('function', $._exp), '(', sep($._exp, ','), ')')),

    property_exp: $ => prec.right(10, seq(
      $._exp,
      token.immediate('.'),
      sep1(alias($.identifier, $.property_identifier), token.immediate('.'))
    )),

    identifier: $ => /\p{ID_Start}\p{ID_Continue}*/,

    number: $ => /[0-9.eE]+/,

    bool: () => choice('false', 'true'),

    null: () => 'null',

    // FIXME: Here we tolerate unescaped newlines in string literals.
    string: $ => seq(
      '"',
      repeat(choice(
        $._unescaped_string_fragment,
        $._escape_sequence
      )),
      '"'
    ),

    // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
    // We give names to the token() constructs containing a regexp
    // so as to obtain a node in the CST.
    _unescaped_string_fragment: $ =>
      token.immediate(prec(1, /[^"\\]+/)),

    _escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: () => token(seq('//', /.*/)),
  },
});

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}
