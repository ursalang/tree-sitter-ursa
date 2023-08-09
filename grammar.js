module.exports = grammar({
  name: 'ursa',

  extras: $ => [
    $.comment,
    /[\s]/,
  ],

  // externals: $ => [
  //   $._automatic_semicolon,
  // ],

  rules: {
    module: $ => optional($.sequence),

    sequence: $ => repeat1(seq($._statement, $._sc)),

    _statement: $ => choice(
      $.let,
      $._exp,
    ),

    _block: $ => seq('{', optional($.sequence), '}'),

    let: $ => choice(
      seq(
        'let',
        field('ident', $.ident),
        '=',
        field('value', $._exp)
      ),
      seq(
        'let', 'fn',
        field('ident', $.ident),
        '(',
        commaSep($.ident),
        optional(','),
        ')',
        $._block,
      )
    ),
    //   | "use" ListOf<ident, #".">                          -- use

    _sc: $ => ';', // TODO: make semi-colons optional

    _exp: $ => choice(
      $.ident,
      $.binary_exp,
      $.unary_exp,
      // = If
      // | Fn
      // | Loop
      // | Assignment
      // | LogicExp
      // IndexExp = CallExp "[" Exp "]" -- index
      // = PropertyExp "(" ListOf<Exp, ","> ")"  -- call
      seq('(', $._exp, ')'),
      $._block,
      // | List
      // | Object
      // | Map
      // | "break" Exp?      -- break
      // | "return" Exp?     -- return
      // | "continue"        -- continue
      // | "null"            -- null
      // | bool
      $.string,
      $.number,
      // | ident             -- ident
    ),

    // If
    //   = "if" Exp Block ("else" Block)?

    // Fn
    //   = "fn" "(" ListOf<ident, ","> ")" Block        -- anon
    //   | "fn" ident "(" ListOf<ident, ","> ")" Block  -- named

    // Loop = "loop" Block

    // Assignment
    //   = CallExp "[" Exp "]" "=" Exp  -- index
    //   | ident "=" Exp                -- ident

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
      prec.left(4, seq($._exp, '//', $._exp)),
      prec.left(5, seq($._exp, '**', $._exp)),
    ),

    unary_exp: $ => choice(
      prec.left(1, seq('not', $._exp)),
      prec.left(2, seq('+', $._exp)),
      prec.left(2, seq('-', $._exp)),
    ),

    ident: $ => /[A-Za-z][A-Za-z0-9]*/, // TODO: make more precise

    number: $ => /[0-9.eE]+/,

    // Here we tolerate unescaped newlines in double-quoted and
    // single-quoted string literals.
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
    //
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

    comment: $ => token(seq('//', /.*/)),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
