/**
 * Tree-sitter grammar for Ursa
 * © 2023-2024 Reuben Thomas
 * It is distributed under the ISC licence.
 */

// The reference grammar is:
// https://github.com/ursalang/ursa/blob/main/src/grammar/ursa.ohm

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

  conflicts: $ => [[$.let, $.let], [$.if, $.if]],

  rules: {
    module: $ => seq(
      optional($._shebang),
      optional($._sequence),
    ),

    _shebang: $ => alias(token(seq("#!", /.*/)), $.line_comment),

    _sequence: $ => seq(sep1($.statement, $._sc), optional($._sc)),

    block: $ => seq('{', optional($._sequence), '}'),

    statement: $ => choice(
      $.let,
      $.use,
      $.break,
      $.continue,
      $.return,
      $._exp,
    ),

    // Spell out the rule with and without 'and' and add it to 'conflicts'
    // in order to prevent the use of '_automatic_semicolon' from making `if
    // let {…}\nand let {…}` from parsing as `let {…};and let {…}` and hence
    // giving an error.
    let: $ => choice(
      seq(
        choice('let', 'var'),
        field('identifier', $.identifier),
        '=',
        field('value', $._exp),
        optional($._automatic_semicolon),
        seq('and', $.let),
      ),
      seq(
        choice('let', 'var'),
        field('identifier', $.identifier),
        '=',
        field('value', $._exp),
      ),
    ),

    use: $ => prec.right(seq('use', sep1($.identifier, token.immediate('.')))),

    _sc: $ => choice($._automatic_semicolon, ';'),

    _exp: $ => choice(
      $.identifier,
      $.binary_exp,
      $.unary_exp,
      $.if,
      $.fn,
      $.for,
      $.loop,
      $.assignment,
      seq('(', $._exp, ')'),
      $.block,
      $.call,
      $.property_exp,
      $.list,
      $.map,
      $.object,
      $.await,
      $.launch,
      $.yield,
      $.null,
      $.bool,
      $.string,
      $.number,
    ),

    break: $ => prec.right(seq('break', optional($._exp))),
    continue: () => 'continue',

    return: $ => prec.right(seq('return', optional($._exp))),

    await: $ => prec.right(seq('await', $._exp)),
    launch: $ => prec.right(seq('launch', $._exp)),
    yield: $ => prec.right(seq('yield', optional($._exp))),

    // Spell out the rule with and without 'else' and add it to 'conflicts'
    // in order to prevent the use of '_automatic_semicolon' from making `if
    // foo {…}\nelse {…}` from parsing as `if foo {…};else {…}` and hence
    // giving an error.
    if: $ => choice(
      seq(
        'if',
        $._exp,
        $.block,
        optional($._automatic_semicolon),
        seq('else', choice($.block, $.if)),
      ),
      seq(
        'if',
        $._exp,
        $.block,
      ),
    ),

    fn: $ => seq(choice('fn', 'gen'), $.params, $.block),

    params: $ => seq(
      '(',
      sep($.identifier, ','),
      optional(','),
      ')',
    ),

    loop: $ => seq('loop', $.block),

    for: $ => seq(
      'for',
      field('identifier', $.identifier),
      'in',
      field('iterator', $._exp),
      $.block,
    ),

    list: $ => seq('[', sep($._exp, ','), optional(','), ']'),

    map: $ => prec(2, seq('{', sep(seq($._exp, ':', $._exp), ','), optional(','), '}')),

    // This rule is complicated by the need not to match `{}` (which is any empty map).
    // Match an object with at least one member, or containing just `;`.
    // We do not match $._sc because external symbols are matched preferentially, and that would mean
    // we could not use precedence to force `map` to be preferred to `object`.
    object: $ => prec(1,
      choice(
        seq('{', sep1($.member, $._sc), $._sc, '}'),
        seq('{', ';', '}'),
      ),
    ),

    member: $ => seq($.identifier, '=', $._exp),

    assignment: $ => prec.right(seq($.identifier, ':=', $._exp)),

    binary_exp: $ => choice(
      prec.left(1, seq($._exp, choice('or', 'and'), $._exp)),
      prec.left(2, seq($._exp, choice('==', '!=', '<', '<=', '>', '>='), $._exp)),
      prec.left(3, seq($._exp, choice('+', '-'), $._exp)),
      prec.left(4, seq($._exp, choice('*', '/', '%'), $._exp)),
      prec.left(5, seq($._exp, '**', $._exp)),
    ),

    unary_exp: $ => choice(
      prec.left(6, seq('not', $._exp)),
      prec.left(7, seq('+', $._exp)),
      prec.left(7, seq('-', $._exp)),
    ),

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
