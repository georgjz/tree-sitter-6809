module.exports = grammar({
    name: 'asm6809',

    rules: {
        source_file: $ => repeat($._line),

        // a line has up to three fields:
        // _label: a label
        // _instruction: either a memnonic/opcode or assembler instruction
        // _comment: a comment preceded by a semicolon
        _line: $ => prec.left(seq(
            optional($.label),
            optional($._instruction),
            optional($._comment),
            $._line_break
        )),

        _line_break: $ => '\n',

        // lwtools accepts global an local labels
        label: $ => prec.right(seq(
            $._identifier,
            ':'
        )),

        // _global_label: $ => seq(
        //     $._identifier,
        //     ':'
        // ),
        //
        // _local_label: $ => seq(
        //     /[\?\@]/,
        //     $._identifier,
        //     ':'
        // ),

        _identifier: $ => /[a-zA-Z\._][a-zA-Z0-9\._\$]*/,

        // instructions
        // TODO: operands, etc.
        _instruction: $ => choice(
            $.opcode,
            $.pseudo_opcode
        ),

        // TODO: preliminar
        opcode: $ => 'opcode',
        // opcode: $ => seq(
            // $.memnonic
        // ),

        // (P): Operand containing immediate, extended,
        //      direct, or indexed addressing

        // (Q): Operand containing extended, direct, or indexed addressing

        // (T): Operand containing indexed addressing only

        // R: Any register specification: A, B, X, Y, U, S, PC, CC, DP, or D

        // dd: 8-bit value

        // dddd: 16-bit value

        // all valid 6809 memnonics
        // TODO: improve code with regex'
        // memnonic: $ => choice(
        //     /abx/i,
        //     /adc[ab]?/i
        // ),

        // TODO: preliminar
        pseudo_opcode: $ => 'pseudo_opcode',

        // comments
        _comment: $ => seq(
            $.semicolon_comment
        ),

        semicolon_comment: $ => /;.*/

    }

})
