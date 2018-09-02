module.exports = grammar({
    name: 'asm6809',

    rules: {
        // 6809 assembly is processed line by line
        source_file: $ => repeat1($._line),

        // a line has up to three fields:
        _line: $ =>seq(
            optional($.label),
            optional($._instruction),
            optional($._comment),
            $._line_break
        ),

        _line_break: $ => '\n',

        // Labels and symbols
        label:  $ => seq(optional(/[\@\?]/), $._identifier, ':'),
        symbol: $ => $._identifier,
        _identifier: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,

        // Instructions are either 6809 opcodes or assembler directives
        _instruction: $ => choice(
            $.opcode
        ),

        opcode: $ => seq(
            $.memnonic,
            // first operand
            optional($._operand),
            // second operand
            optional(
                seq(
                    ',', $._register_exp
                )
            )
        ),

        // TODO: add all memnonics, replace with regex
        memnonic: $ => 'abx',

        _operand: $ => choice(
            $.constant,
            $.register,
            $.symbol
        ),

        // numbers, including immediate addressing
        constant: $ => seq(
            seq(
                optional('#'),
                choice(
                    $._decimal,
                    $._octal,
                    $._hexadecimal,
                    $._binary
                )
            )
        ),
        // number formats
        _decimal: $ => /[0-9]+/,
        _octal: $ => /\@[0-7]+/,
        _hexadecimal: $ => /\$[a-fA-Z0-9]+/,
        _binary: $ => /\%[01]+/,

        // 6809 registers
        register: $ => choice(
            'A', 'B', 'X', 'Y', 'U',
            'S', 'PC', 'CC', 'DP', 'D'
        ),

        // comments
        // TODO: asterisk comments
        _comment: $ => choice(
            $.semicolon_comment
        ),

        semicolon_comment: $ => /;.*/,

        // this are the pre- and suffix operator for registers
        _register_exp: $ => choice(
            // prefix
            seq(
                $.operator,
                optional($.operator),
                $.register
            ),
            // suffix
            seq(
                $.register,
                $.operator,
                optional($.operator)
            ),
            $.register
        ),

        // arithmetic and logical operators
        // TODO: add all operators
        operator: $ => choice(
            '+', '-'
        ),

        // expression
        // _expression: $ => choice(
        //     seq(
        //         $._expression,
        //         $._operator,
        //         $._term
        //     ),
        //     $._term
        // ),
        //
        // _term: $ => choice(
        //     seq( '(', $._expression, ')' ),
        //     $.symbol,
        //     $.constant
        // ),

        // _factor: $ => choice(
            // $.constant,
            // seq(
                // '(',
                // $._expression,
                // ')'
            // )
        // ),


        // _identifier: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,
        // symbol: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,

        // _operator: $ => choice(
            // $.pseudo_opcode,
            // $.operator
        // ),

        // TODO: add all pseudo opcodes
        // pseudo_opcode: $ => 'equ',

        // operator: $ => choice(
            // '+', '-', '*', '/'
        // )

    } // rules

})
