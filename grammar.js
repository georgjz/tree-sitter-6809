module.exports = grammar({
    name: 'asm6809',

    rules: {
        // 6809 assembly is processed line by line
        source_file: $ => repeat1($._line),

        // a line has up to three fields:
        _line: $ =>seq(
            optional(seq($.label, ':')),
            optional($._instruction),
            optional($._comment),
            $._line_break
        ),

        // line breaks terminates a line
        _line_break: $ => '\n',

        // Labels and symbols
        // TODO: exclude colon
        label:  $ => seq(optional(/[\@\?]/), $._identifier),
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
            seq($.symbol, $.pseudo_opcode, optional($._expression)),
            seq(
                $.pseudo_opcode,
                $._expression,
                repeat(seq(",", $._expression))
            )
        ),

        // TODO: add all memnonics, replace with regex
        // memnonic: $ => 'abx',
        // pseudo_opcode: $ => 'equ',

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
        _decimal: $ => /\-?\&?[0-9]+/,
        _octal: $ => choice(/\-?\@[0-7]+/, /\-?[0-7]+[qQoO]/),
        _hexadecimal: $ => choice(/(\-?\$|0[xX])[a-fA-Z0-9]+/, /\-?[a-fA-F0-9]+H/),
        _binary: $ => choice(/\%[01]+/, /[01]+[bB]/),

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

        // All 6809 memnonics
        // WARNING: highly ineffective, but tree-sitter cli doesn't seem to be
        // able to process regex correctly yet
        memnonic: $ => choice(
            'abx',
            // add with carry
            'adca', 'adcb',
            // add
            'adda', 'addb', 'addd',
            // logical AND
            'anda', 'andb', 'andcc',
            // arithmetic shift left
            'asla', 'aslb', 'asl',
            'asra', 'asrb', 'asr',
            // bit test
            'bita', 'bitb',
            // branch
            'bra', 'bcc', 'bcs', 'beq', 'bge', 'bgt', 'bhi',
            'bhs', 'ble', 'blo', 'bls', 'blt', 'bmi', 'bne',
            'bpl', 'bra', 'brn', 'bsr', 'bvc', 'bvs',
            // long branch
            'lbra', 'lbcc', 'lbcs', 'lbeq', 'lbge', 'lbgt',
            'lbhi', 'lbhs', 'lble', 'lblo', 'lbls', 'lblt',
            'lbmi', 'lbne', 'lbpl', 'lbra', 'lbrn', 'lbsr',
            'lbvc', 'lbvs',
            // clear register
            'clra', 'clrb', 'clr',
            // compare register
            'cmpa', 'cmpb', 'cmpd', 'cmps', 'cmpu', 'cmpx', 'cmpy',
            // complement register
            'coma', 'comb', 'com',
            // wait for interrupt
            'cwai',
            // decimal ajust A, BCD
            'daa',
            // decrement register
            'deca', 'decb', 'dec',
            // logical XOR
            'eora', 'eorb',
            // exchange registers
            'exg',
            // increment register
            'inca', 'incb', 'inc',
            // jump opcodes
            'jmp', 'jsr',
            // load register
            'lda', 'ldb', 'ldd', 'lds', 'ldu', 'ldx', 'ldy',
            // load effective address
            'leas', 'leau', 'leax', 'leay',
            // logical shift left
            'lsla', 'lslb', 'lsl',
            // logical shift right
            'lsra', 'lsrb', 'lsr',
            // multiply A * B
            'mul',
            // negate register
            'nega', 'negb', 'neg',
            // not an operation
            'nop',
            // logical OR
            'ora', 'orb', 'orcc',
            // push to stack
            'pshs', 'pshu',
            // pull from stack
            'puls', 'pulu',
            // rotate left register
            'rola', 'rolb', 'rol',
            // rotate right register
            'rora', 'rorb', 'ror',
            // return from interrupt
            'rti',
            // return from subroutine
            'rts',
            // subtract with carry
            'sbca', 'sbcb',
            // sign exchange A-B
            'sex',
            // store register
            'sta', 'stb', 'std', 'sts', 'stu', 'stx', 'sty',
            // subtract
            'suba', 'subb', 'subd',
            // software interrupts
            'swi', 'swi2', 'swi3',
            // synchronize to interrupt
            'sync',
            // transfer register to register
            'tfr',
            // test register
            'tsta', 'tstb', 'tst',
        ), // memnonics

        pseudo_opcode: $ => choice(
            // data directives
            'fcb', '.db', '.byte',
            'fdb', '.dw', '.word',
            'fqb', '.quad', '.4byte',
            // strings
            'fcc', '.ascii', '.str',
            'fcn', '.asciz', '.strz',
            'fcs', '.ascis', '.strs',
            // fill bytes
            'zmb', 'zmd', 'zmq',
            'rmb', '.blkb', '.ds', '.rs',
            'rmd', 'rmq', 'fill',
            // files
            'includebin', 'include',
            'import', 'export',
            'extern', 'external', '.globl',
            'extdep',
            // address definition
            'org', 'reorg', 'equ', 'set',
            'setdp', 'align',
            // conditional
            'ifeq', 'ifne', 'if',
            'ifgt', 'ifge', 'iflt', 'ifle',
            'ifdef', 'ifpragma', 'ifndef', 'else',
            'endc',
            // OS targets
            'os9', 'mod', 'emod',
            // misc
            'end', 'error', 'warning', '.module',
            // macros
            'macro', 'endm',
            // struct
            'struct', 'endstruct', 'ends',
            // section
            'section', 'sect', '.area',
            'endsection', 'endsect',
            // pragma
            'pragma', '*pragma',
            '*pragmapush', '*pragmapop',
            // cycle count
            'opt'
        ), // pseudo_opcode

        // TODO: add missing assembler constants/commands, pragmas, etc.
    } // rules
})
