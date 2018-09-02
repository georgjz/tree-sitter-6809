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

        // line breaks terminates a line
        _line_break: $ => '\n',

        // Labels and symbols
        label:  $ => seq(optional(/[\@\?]/), $._identifier, ':'),
        symbol: $ => $._identifier,
        _identifier: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,

        // Instructions are either 6809 opcodes or assembler directives
        _instruction: $ => choice(
            $.opcode,
            $.assembler_directive
        ),

        opcode: $ => seq(
            $.memnonic,                             // memnonic
            optional($._operand),                   // first operand
            optional(seq( ',', $._register_exp ))   // second operand
        ),

        assembler_directive: $ => choice(
            $.pseudo_opcode,
            seq($.symbol, $.pseudo_opcode),
            seq(
                $.pseudo_opcode,
                $._expression,
                repeat(seq(",", $._expression))
            )
        ),

        // TODO: add all memnonics, replace with regex
        memnonic: $ => 'abx',
        pseudo_opcode: $ => 'equ',

        _operand: $ => choice(
            $.register,
            seq(
                optional($.imm_marker),
                $._expression
            )
        ),

        // mark expressions for immediate addressing
        imm_marker: $ => /\#/,

        // numbers, including immediate addressing
        constant: $ => choice(
            $._decimal,
            $._octal,
            $._hexadecimal,
            $._binary
        ),
        // number formats
        // TODO: add other formats
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
        _comment: $ => choice($.semicolon_comment, $.asterisk_comment),
        semicolon_comment: $ => /;.*/,
        asterisk_comment:  $ => /\*.*/,

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
        _expression: $ => choice(
            seq(
                $._expression,
                $.operator,
                $._term
            ),
            $._term
        ),

        _term: $ => choice(
            seq( '(', $._expression, ')' ),
            $.symbol,
            $.constant,
            $.string
        ),

        string: $ => /\".*\"/,

    } // rules
})
