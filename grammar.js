module.exports = grammar({
    name: 'asm6809',

    rules: {
        // starter rule!
        source_file: $ => repeat($._line),

        // a line has up to three fields:
        _line: $ =>seq(
            $._expression,
            $._line_break
        ),

        _line_break: $ => '\n',


        // expression
        _expression: $ => choice(
            seq(
                $._expression,
                $._operator,
                $._term
            ),
            $._term
        ),

        _term: $ => choice(
            seq( '(', $._expression, ')' ),
            $.symbol,
            $.constant
        ),

        // _factor: $ => choice(
            // $.constant,
            // seq(
                // '(',
                // $._expression,
                // ')'
            // )
        // ),

        constant: $ => choice(
            $._decimal,
            $._octal,
            $._hexadecimal,
            $._binary
        ),

        _decimal: $ => /[0-9]+/,
        _octal: $ => /\@[0-7]+/,
        _hexadecimal: $ => /\$[a-fA-Z0-9]+/,
        _binary: $ => /\%[01]+/,

        // _identifier: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,
        symbol: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,

        _operator: $ => choice(
            // $.pseudo_opcode,
            $.operator
        ),

        // TODO: add all pseudo opcodes
        // pseudo_opcode: $ => 'equ',

        operator: $ => choice(
            '+', '-', '*', '/'
        )

    } // rules

})
