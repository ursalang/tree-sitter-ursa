module.exports = grammar({
  name: 'ursa',

  extras: $ => [
    $.comment,
    /[\s]/,
  ],

  externals: $ => [
    $._automatic_semicolon,
  ],

  rules: {
    module: $ => seq(
      optional($._shebang),
      optional($._sequence),
    ),

    _shebang: $ => alias(token(seq("#!", /.*/)), $.comment),

    _sequence: $ => seq(sep1($._statement, $._sc), optional($._sc)),

    _statement: $ => choice(
      $.let,
      $.use,
      $._exp,
    ),

    block: $ => seq('{', $._sequence, '}'),

    let: $ => choice(
      seq(
        'let',
        field('identifier', $.identifier),
        '=',
        field('value', $._exp)
      ),
      seq('let', $.named_fn),
    ),

    use: $ => seq('use', sep1($.identifier, token.immediate('.'))),

    _sc: $ => choice($._automatic_semicolon, ';'),

    _exp: $ => choice(
      $.identifier,
      $.binary_exp,
      $.unary_exp,
      $.if,
      $._fn,
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

    _fn: $ => choice(
      seq('fn', $.lambda),
      $.named_fn,
    ),

    named_fn: $ => seq(
      'fn',
      field('identifier', $.identifier),
      $.lambda,
    ),

    lambda: $ => seq(
      '(',
      sep($.identifier, ','),
      optional(','),
      ')',
      $.block,
    ),

    loop: $ => seq('loop', $.block),

    list: $ => seq('[', sep($._exp, ','), ']'),

    object: $ => prec(1, seq('{', sep(seq($.identifier, ':', $._exp), ','), '}')),

    map: $ => seq('{', sep(seq($._exp, ':', $._exp), ','), '}'),

    assignment: $ => prec.right(choice(
      seq($.identifier, '=', $._exp),
      seq($.index_exp, '=', $._exp),
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

    // Here we tolerate unescaped newlines in string literals.
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

    comment: () => token(seq('//', /.*/)),
  },
});

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}
