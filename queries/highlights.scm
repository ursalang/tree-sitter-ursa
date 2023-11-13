; Special identifiers
;--------------------

((identifier) @variable.builtin
 (#match? @variable.builtin "^(pi)$")
 (#is-not? local))

((identifier) @function.builtin
 (#eq? @function.builtin "print")
 (#is-not? local))

; Function definitions
;---------------------

(named_fn
  (identifier) @function)

(let
  (identifier) @function (lambda))

; Function and calls
;-------------------

(call
  function: (identifier) @function)

; (call
;   (member_expression
;     property: (property_identifier) @function.method))

; Variables
;----------

(identifier) @variable

; Properties
;-----------

(property_identifier) @property

; Literals
;---------

[
  (bool)
  (null)
] @constant.builtin

(string) @string

(number) @number

; Comments
;---------

(line_comment) @comment
(block_comment) @comment

; Tokens
;-------

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "-"
  "+"
  "*"
  "**"
  "/"
  "%"
  "<"
  "<="
  "="
  "=="
  "!="
  ">"
  ">="
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  "break"
  (continue)
  "else"
  "fn"
  "if"
  "let"
  "loop"
  "return"
  "use"
  "and"
  "or"
  "not"
] @keyword
