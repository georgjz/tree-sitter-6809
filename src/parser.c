#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 61
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 0
#define TOKEN_COUNT 168
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 2,
  anon_sym_COLON = 3,
  sym__identifier = 4,
  anon_sym_COMMA = 5,
  sym_pseudo_opcode = 6,
  sym_imm_marker = 7,
  sym__decimal = 8,
  sym__octal = 9,
  sym__hexadecimal = 10,
  sym__binary = 11,
  anon_sym_A = 12,
  anon_sym_B = 13,
  anon_sym_X = 14,
  anon_sym_Y = 15,
  anon_sym_U = 16,
  anon_sym_S = 17,
  anon_sym_PC = 18,
  anon_sym_CC = 19,
  anon_sym_DP = 20,
  anon_sym_D = 21,
  sym_semicolon_comment = 22,
  sym_asterisk_comment = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_string = 28,
  anon_sym_abx = 29,
  anon_sym_adca = 30,
  anon_sym_adcb = 31,
  anon_sym_adda = 32,
  anon_sym_addb = 33,
  anon_sym_addd = 34,
  anon_sym_anda = 35,
  anon_sym_andb = 36,
  anon_sym_andcc = 37,
  anon_sym_asla = 38,
  anon_sym_aslb = 39,
  anon_sym_asl = 40,
  anon_sym_asra = 41,
  anon_sym_asrb = 42,
  anon_sym_asr = 43,
  anon_sym_bita = 44,
  anon_sym_bitb = 45,
  anon_sym_bra = 46,
  anon_sym_bcc = 47,
  anon_sym_bcs = 48,
  anon_sym_beq = 49,
  anon_sym_bge = 50,
  anon_sym_bgt = 51,
  anon_sym_bhi = 52,
  anon_sym_bhs = 53,
  anon_sym_ble = 54,
  anon_sym_blo = 55,
  anon_sym_bls = 56,
  anon_sym_blt = 57,
  anon_sym_bmi = 58,
  anon_sym_bne = 59,
  anon_sym_bpl = 60,
  anon_sym_brn = 61,
  anon_sym_bsr = 62,
  anon_sym_bvc = 63,
  anon_sym_bvs = 64,
  anon_sym_lbra = 65,
  anon_sym_lbcc = 66,
  anon_sym_lbcs = 67,
  anon_sym_lbeq = 68,
  anon_sym_lbge = 69,
  anon_sym_lbgt = 70,
  anon_sym_lbhi = 71,
  anon_sym_lbhs = 72,
  anon_sym_lble = 73,
  anon_sym_lblo = 74,
  anon_sym_lbls = 75,
  anon_sym_lblt = 76,
  anon_sym_lbmi = 77,
  anon_sym_lbne = 78,
  anon_sym_lbpl = 79,
  anon_sym_lbrn = 80,
  anon_sym_lbsr = 81,
  anon_sym_lbvc = 82,
  anon_sym_lbvs = 83,
  anon_sym_clra = 84,
  anon_sym_clrb = 85,
  anon_sym_clr = 86,
  anon_sym_cmpa = 87,
  anon_sym_cmpb = 88,
  anon_sym_cmpd = 89,
  anon_sym_cmps = 90,
  anon_sym_cmpu = 91,
  anon_sym_cmpx = 92,
  anon_sym_cmpy = 93,
  anon_sym_coma = 94,
  anon_sym_comb = 95,
  anon_sym_com = 96,
  anon_sym_cwai = 97,
  anon_sym_daa = 98,
  anon_sym_deca = 99,
  anon_sym_decb = 100,
  anon_sym_dec = 101,
  anon_sym_eora = 102,
  anon_sym_eorb = 103,
  anon_sym_exg = 104,
  anon_sym_inca = 105,
  anon_sym_incb = 106,
  anon_sym_inc = 107,
  anon_sym_jmp = 108,
  anon_sym_jsr = 109,
  anon_sym_lda = 110,
  anon_sym_ldb = 111,
  anon_sym_ldd = 112,
  anon_sym_lds = 113,
  anon_sym_ldu = 114,
  anon_sym_ldx = 115,
  anon_sym_ldy = 116,
  anon_sym_leas = 117,
  anon_sym_leau = 118,
  anon_sym_leax = 119,
  anon_sym_leay = 120,
  anon_sym_lsla = 121,
  anon_sym_lslb = 122,
  anon_sym_lsl = 123,
  anon_sym_lsra = 124,
  anon_sym_lsrb = 125,
  anon_sym_lsr = 126,
  anon_sym_mul = 127,
  anon_sym_nega = 128,
  anon_sym_negb = 129,
  anon_sym_neg = 130,
  anon_sym_nop = 131,
  anon_sym_ora = 132,
  anon_sym_orb = 133,
  anon_sym_orcc = 134,
  anon_sym_pshs = 135,
  anon_sym_pshu = 136,
  anon_sym_puls = 137,
  anon_sym_pulu = 138,
  anon_sym_rola = 139,
  anon_sym_rolb = 140,
  anon_sym_rol = 141,
  anon_sym_rora = 142,
  anon_sym_rorb = 143,
  anon_sym_ror = 144,
  anon_sym_rti = 145,
  anon_sym_rts = 146,
  anon_sym_sbca = 147,
  anon_sym_sbcb = 148,
  anon_sym_sex = 149,
  anon_sym_sta = 150,
  anon_sym_stb = 151,
  anon_sym_std = 152,
  anon_sym_sts = 153,
  anon_sym_stu = 154,
  anon_sym_stx = 155,
  anon_sym_sty = 156,
  anon_sym_suba = 157,
  anon_sym_subb = 158,
  anon_sym_subd = 159,
  anon_sym_swi = 160,
  anon_sym_swi2 = 161,
  anon_sym_swi3 = 162,
  anon_sym_sync = 163,
  anon_sym_tfr = 164,
  anon_sym_tsta = 165,
  anon_sym_tstb = 166,
  anon_sym_tst = 167,
  sym_source_file = 168,
  sym__line = 169,
  sym_label = 170,
  sym_symbol = 171,
  sym__instruction = 172,
  sym_opcode = 173,
  sym_assembler_directive = 174,
  sym__operand = 175,
  sym_constant = 176,
  sym_register = 177,
  sym__comment = 178,
  sym__register_exp = 179,
  sym_operator = 180,
  sym__expression = 181,
  sym__term = 182,
  sym_memnonic = 183,
  aux_sym_source_file_repeat1 = 184,
  aux_sym_assembler_directive_repeat1 = 185,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [sym_pseudo_opcode] = "pseudo_opcode",
  [sym_imm_marker] = "imm_marker",
  [sym__decimal] = "_decimal",
  [sym__octal] = "_octal",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__binary] = "_binary",
  [anon_sym_A] = "A",
  [anon_sym_B] = "B",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_U] = "U",
  [anon_sym_S] = "S",
  [anon_sym_PC] = "PC",
  [anon_sym_CC] = "CC",
  [anon_sym_DP] = "DP",
  [anon_sym_D] = "D",
  [sym_semicolon_comment] = "semicolon_comment",
  [sym_asterisk_comment] = "asterisk_comment",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [anon_sym_abx] = "abx",
  [anon_sym_adca] = "adca",
  [anon_sym_adcb] = "adcb",
  [anon_sym_adda] = "adda",
  [anon_sym_addb] = "addb",
  [anon_sym_addd] = "addd",
  [anon_sym_anda] = "anda",
  [anon_sym_andb] = "andb",
  [anon_sym_andcc] = "andcc",
  [anon_sym_asla] = "asla",
  [anon_sym_aslb] = "aslb",
  [anon_sym_asl] = "asl",
  [anon_sym_asra] = "asra",
  [anon_sym_asrb] = "asrb",
  [anon_sym_asr] = "asr",
  [anon_sym_bita] = "bita",
  [anon_sym_bitb] = "bitb",
  [anon_sym_bra] = "bra",
  [anon_sym_bcc] = "bcc",
  [anon_sym_bcs] = "bcs",
  [anon_sym_beq] = "beq",
  [anon_sym_bge] = "bge",
  [anon_sym_bgt] = "bgt",
  [anon_sym_bhi] = "bhi",
  [anon_sym_bhs] = "bhs",
  [anon_sym_ble] = "ble",
  [anon_sym_blo] = "blo",
  [anon_sym_bls] = "bls",
  [anon_sym_blt] = "blt",
  [anon_sym_bmi] = "bmi",
  [anon_sym_bne] = "bne",
  [anon_sym_bpl] = "bpl",
  [anon_sym_brn] = "brn",
  [anon_sym_bsr] = "bsr",
  [anon_sym_bvc] = "bvc",
  [anon_sym_bvs] = "bvs",
  [anon_sym_lbra] = "lbra",
  [anon_sym_lbcc] = "lbcc",
  [anon_sym_lbcs] = "lbcs",
  [anon_sym_lbeq] = "lbeq",
  [anon_sym_lbge] = "lbge",
  [anon_sym_lbgt] = "lbgt",
  [anon_sym_lbhi] = "lbhi",
  [anon_sym_lbhs] = "lbhs",
  [anon_sym_lble] = "lble",
  [anon_sym_lblo] = "lblo",
  [anon_sym_lbls] = "lbls",
  [anon_sym_lblt] = "lblt",
  [anon_sym_lbmi] = "lbmi",
  [anon_sym_lbne] = "lbne",
  [anon_sym_lbpl] = "lbpl",
  [anon_sym_lbrn] = "lbrn",
  [anon_sym_lbsr] = "lbsr",
  [anon_sym_lbvc] = "lbvc",
  [anon_sym_lbvs] = "lbvs",
  [anon_sym_clra] = "clra",
  [anon_sym_clrb] = "clrb",
  [anon_sym_clr] = "clr",
  [anon_sym_cmpa] = "cmpa",
  [anon_sym_cmpb] = "cmpb",
  [anon_sym_cmpd] = "cmpd",
  [anon_sym_cmps] = "cmps",
  [anon_sym_cmpu] = "cmpu",
  [anon_sym_cmpx] = "cmpx",
  [anon_sym_cmpy] = "cmpy",
  [anon_sym_coma] = "coma",
  [anon_sym_comb] = "comb",
  [anon_sym_com] = "com",
  [anon_sym_cwai] = "cwai",
  [anon_sym_daa] = "daa",
  [anon_sym_deca] = "deca",
  [anon_sym_decb] = "decb",
  [anon_sym_dec] = "dec",
  [anon_sym_eora] = "eora",
  [anon_sym_eorb] = "eorb",
  [anon_sym_exg] = "exg",
  [anon_sym_inca] = "inca",
  [anon_sym_incb] = "incb",
  [anon_sym_inc] = "inc",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jsr] = "jsr",
  [anon_sym_lda] = "lda",
  [anon_sym_ldb] = "ldb",
  [anon_sym_ldd] = "ldd",
  [anon_sym_lds] = "lds",
  [anon_sym_ldu] = "ldu",
  [anon_sym_ldx] = "ldx",
  [anon_sym_ldy] = "ldy",
  [anon_sym_leas] = "leas",
  [anon_sym_leau] = "leau",
  [anon_sym_leax] = "leax",
  [anon_sym_leay] = "leay",
  [anon_sym_lsla] = "lsla",
  [anon_sym_lslb] = "lslb",
  [anon_sym_lsl] = "lsl",
  [anon_sym_lsra] = "lsra",
  [anon_sym_lsrb] = "lsrb",
  [anon_sym_lsr] = "lsr",
  [anon_sym_mul] = "mul",
  [anon_sym_nega] = "nega",
  [anon_sym_negb] = "negb",
  [anon_sym_neg] = "neg",
  [anon_sym_nop] = "nop",
  [anon_sym_ora] = "ora",
  [anon_sym_orb] = "orb",
  [anon_sym_orcc] = "orcc",
  [anon_sym_pshs] = "pshs",
  [anon_sym_pshu] = "pshu",
  [anon_sym_puls] = "puls",
  [anon_sym_pulu] = "pulu",
  [anon_sym_rola] = "rola",
  [anon_sym_rolb] = "rolb",
  [anon_sym_rol] = "rol",
  [anon_sym_rora] = "rora",
  [anon_sym_rorb] = "rorb",
  [anon_sym_ror] = "ror",
  [anon_sym_rti] = "rti",
  [anon_sym_rts] = "rts",
  [anon_sym_sbca] = "sbca",
  [anon_sym_sbcb] = "sbcb",
  [anon_sym_sex] = "sex",
  [anon_sym_sta] = "sta",
  [anon_sym_stb] = "stb",
  [anon_sym_std] = "std",
  [anon_sym_sts] = "sts",
  [anon_sym_stu] = "stu",
  [anon_sym_stx] = "stx",
  [anon_sym_sty] = "sty",
  [anon_sym_suba] = "suba",
  [anon_sym_subb] = "subb",
  [anon_sym_subd] = "subd",
  [anon_sym_swi] = "swi",
  [anon_sym_swi2] = "swi2",
  [anon_sym_swi3] = "swi3",
  [anon_sym_sync] = "sync",
  [anon_sym_tfr] = "tfr",
  [anon_sym_tsta] = "tsta",
  [anon_sym_tstb] = "tstb",
  [anon_sym_tst] = "tst",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label] = "label",
  [sym_symbol] = "symbol",
  [sym__instruction] = "_instruction",
  [sym_opcode] = "opcode",
  [sym_assembler_directive] = "assembler_directive",
  [sym__operand] = "_operand",
  [sym_constant] = "constant",
  [sym_register] = "register",
  [sym__comment] = "_comment",
  [sym__register_exp] = "_register_exp",
  [sym_operator] = "operator",
  [sym__expression] = "_expression",
  [sym__term] = "_term",
  [sym_memnonic] = "memnonic",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_assembler_directive_repeat1] = "assembler_directive_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_pseudo_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [sym_semicolon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_abx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adcb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aslb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bita] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bhi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bhs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bmi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbhi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbhs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lblo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lblt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbmi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbrn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbvc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbvs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_com] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwai] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eorb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lslb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_puls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pulu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rola] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rolb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbcb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swi2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swi3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sync] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tfr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tstb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tst] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_assembler_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__register_exp] = {
    .visible = false,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_memnonic] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assembler_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'C')
        ADVANCE(23);
      if (lookahead == 'D')
        ADVANCE(25);
      if (lookahead == 'P')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(29);
      if (lookahead == 'U')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(31);
      if (lookahead == 'Y')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'j')
        ADVANCE(134);
      if (lookahead == 'l')
        ADVANCE(139);
      if (lookahead == 'm')
        ADVANCE(192);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(208);
      if (lookahead == 'r')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_imm_marker);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(28);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'd')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(35);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_abx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'd')
        ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_adca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_adcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(42);
      if (lookahead == 'd')
        ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_adda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_addb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_addd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(47);
      if (lookahead == 'c')
        ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_anda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_andb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_andcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(51);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_asl);
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_asla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_aslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_asr);
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_asra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_asrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'g')
        ADVANCE(63);
      if (lookahead == 'h')
        ADVANCE(66);
      if (lookahead == 'i')
        ADVANCE(69);
      if (lookahead == 'l')
        ADVANCE(73);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(80);
      if (lookahead == 'p')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 's')
        ADVANCE(87);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(59);
      if (lookahead == 's')
        ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(70);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bita);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bitb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_blo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(85);
      if (lookahead == 'n')
        ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_brn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(90);
      if (lookahead == 's')
        ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'm')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(106);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_clr);
      if (lookahead == 'a')
        ADVANCE(95);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_clra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_clrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(99);
      if (lookahead == 'b')
        ADVANCE(100);
      if (lookahead == 'd')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(102);
      if (lookahead == 'u')
        ADVANCE(103);
      if (lookahead == 'x')
        ADVANCE(104);
      if (lookahead == 'y')
        ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_cmpa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_cmpb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_cmpd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_cmps);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_cmpu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_cmpx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_cmpy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_com);
      if (lookahead == 'a')
        ADVANCE(108);
      if (lookahead == 'b')
        ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_coma);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_comb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_cwai);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_daa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_dec);
      if (lookahead == 'a')
        ADVANCE(118);
      if (lookahead == 'b')
        ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_deca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_decb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(121);
      if (lookahead == 'q')
        ADVANCE(125);
      if (lookahead == 'x')
        ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(123);
      if (lookahead == 'b')
        ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_eora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_eorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_exg);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 'b')
        ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_inca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_incb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(135);
      if (lookahead == 's')
        ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(140);
      if (lookahead == 'd')
        ADVANCE(171);
      if (lookahead == 'e')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(141);
      if (lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'g')
        ADVANCE(146);
      if (lookahead == 'h')
        ADVANCE(149);
      if (lookahead == 'l')
        ADVANCE(152);
      if (lookahead == 'm')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(161);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(142);
      if (lookahead == 's')
        ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_lbcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_lbcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_lbeq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_lbge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lbgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(150);
      if (lookahead == 's')
        ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_lbhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_lbhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(153);
      if (lookahead == 'o')
        ADVANCE(154);
      if (lookahead == 's')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_lble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_lblo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_lbls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_lblt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_lbmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_lbne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_lbpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead == 'n')
        ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_lbra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_lbrn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_lbsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_lbvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_lbvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(172);
      if (lookahead == 'b')
        ADVANCE(173);
      if (lookahead == 'd')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(176);
      if (lookahead == 'x')
        ADVANCE(177);
      if (lookahead == 'y')
        ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_lda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ldb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ldd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_lds);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ldu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == 'u')
        ADVANCE(182);
      if (lookahead == 'x')
        ADVANCE(183);
      if (lookahead == 'y')
        ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_leas);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_leau);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_leax);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_leay);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'r')
        ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_lsl);
      if (lookahead == 'a')
        ADVANCE(187);
      if (lookahead == 'b')
        ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_lsla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_lslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'b')
        ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_lsra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_lsrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'b')
        ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_nega);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_negb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(204);
      if (lookahead == 'b')
        ADVANCE(205);
      if (lookahead == 'c')
        ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_orb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_orcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(211);
      if (lookahead == 'u')
        ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_pshs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_pshu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(215);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_puls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_pulu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == 'b')
        ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_rola);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_rolb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'b')
        ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_rora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_rorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(226);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_rti);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_rts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(233);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(243);
      if (lookahead == 'w')
        ADVANCE(248);
      if (lookahead == 'y')
        ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'b')
        ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_sbca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_sbcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_sex);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(236);
      if (lookahead == 'b')
        ADVANCE(237);
      if (lookahead == 'd')
        ADVANCE(238);
      if (lookahead == 's')
        ADVANCE(239);
      if (lookahead == 'u')
        ADVANCE(240);
      if (lookahead == 'x')
        ADVANCE(241);
      if (lookahead == 'y')
        ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_sta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_stb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_std);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_sts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_stu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_stx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sty);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(245);
      if (lookahead == 'b')
        ADVANCE(246);
      if (lookahead == 'd')
        ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_suba);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_subb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_subd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_swi);
      if (lookahead == '2')
        ADVANCE(250);
      if (lookahead == '3')
        ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_swi2);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_swi3);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_sync);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(256);
      if (lookahead == 's')
        ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tfr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_tst);
      if (lookahead == 'a')
        ADVANCE(260);
      if (lookahead == 'b')
        ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_tsta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_tstb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'j')
        ADVANCE(134);
      if (lookahead == 'l')
        ADVANCE(139);
      if (lookahead == 'm')
        ADVANCE(192);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(208);
      if (lookahead == 'r')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 265:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(265);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 267:
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      END_STATE();
    case 268:
      if (lookahead == 'q')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'u')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      END_STATE();
    case 271:
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 272:
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(266);
      if (lookahead == 'A')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'C')
        ADVANCE(23);
      if (lookahead == 'D')
        ADVANCE(25);
      if (lookahead == 'P')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(29);
      if (lookahead == 'U')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(31);
      if (lookahead == 'Y')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 273:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      END_STATE();
    case 274:
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    case 276:
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == 'A')
        ADVANCE(277);
      if (lookahead == 'B')
        ADVANCE(278);
      if (lookahead == 'C')
        ADVANCE(279);
      if (lookahead == 'D')
        ADVANCE(281);
      if (lookahead == 'P')
        ADVANCE(283);
      if (lookahead == 'S')
        ADVANCE(285);
      if (lookahead == 'U')
        ADVANCE(286);
      if (lookahead == 'X')
        ADVANCE(287);
      if (lookahead == 'Y')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 279:
      if (lookahead == 'C')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 283:
      if (lookahead == 'C')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 289:
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
  [2] = {.lex_state = 265},
  [3] = {.lex_state = 267},
  [4] = {.lex_state = 271},
  [5] = {.lex_state = 272},
  [6] = {.lex_state = 273},
  [7] = {.lex_state = 263},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 263},
  [11] = {.lex_state = 272},
  [12] = {.lex_state = 263},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 263},
  [15] = {.lex_state = 274},
  [16] = {.lex_state = 274},
  [17] = {.lex_state = 265},
  [18] = {.lex_state = 274},
  [19] = {.lex_state = 263},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 263},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 276},
  [25] = {.lex_state = 265},
  [26] = {.lex_state = 274},
  [27] = {.lex_state = 271},
  [28] = {.lex_state = 274},
  [29] = {.lex_state = 263},
  [30] = {.lex_state = 263},
  [31] = {.lex_state = 289},
  [32] = {.lex_state = 265},
  [33] = {.lex_state = 289},
  [34] = {.lex_state = 265},
  [35] = {.lex_state = 265},
  [36] = {.lex_state = 265},
  [37] = {.lex_state = 271},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 263},
  [40] = {.lex_state = 276},
  [41] = {.lex_state = 274},
  [42] = {.lex_state = 263},
  [43] = {.lex_state = 276},
  [44] = {.lex_state = 274},
  [45] = {.lex_state = 276},
  [46] = {.lex_state = 289},
  [47] = {.lex_state = 274},
  [48] = {.lex_state = 265},
  [49] = {.lex_state = 274},
  [50] = {.lex_state = 274},
  [51] = {.lex_state = 271},
  [52] = {.lex_state = 263},
  [53] = {.lex_state = 274},
  [54] = {.lex_state = 274},
  [55] = {.lex_state = 263},
  [56] = {.lex_state = 276},
  [57] = {.lex_state = 263},
  [58] = {.lex_state = 289},
  [59] = {.lex_state = 289},
  [60] = {.lex_state = 263},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_pseudo_opcode] = ACTIONS(3),
    [sym_imm_marker] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(3),
    [anon_sym_B] = ACTIONS(3),
    [anon_sym_X] = ACTIONS(3),
    [anon_sym_Y] = ACTIONS(3),
    [anon_sym_U] = ACTIONS(3),
    [anon_sym_S] = ACTIONS(3),
    [anon_sym_PC] = ACTIONS(3),
    [anon_sym_CC] = ACTIONS(3),
    [anon_sym_DP] = ACTIONS(3),
    [anon_sym_D] = ACTIONS(3),
    [sym_semicolon_comment] = ACTIONS(1),
    [sym_asterisk_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_abx] = ACTIONS(3),
    [anon_sym_adca] = ACTIONS(3),
    [anon_sym_adcb] = ACTIONS(3),
    [anon_sym_adda] = ACTIONS(3),
    [anon_sym_addb] = ACTIONS(3),
    [anon_sym_addd] = ACTIONS(3),
    [anon_sym_anda] = ACTIONS(3),
    [anon_sym_andb] = ACTIONS(3),
    [anon_sym_andcc] = ACTIONS(3),
    [anon_sym_asla] = ACTIONS(3),
    [anon_sym_aslb] = ACTIONS(3),
    [anon_sym_asl] = ACTIONS(3),
    [anon_sym_asra] = ACTIONS(3),
    [anon_sym_asrb] = ACTIONS(3),
    [anon_sym_asr] = ACTIONS(3),
    [anon_sym_bita] = ACTIONS(3),
    [anon_sym_bitb] = ACTIONS(3),
    [anon_sym_bra] = ACTIONS(3),
    [anon_sym_bcc] = ACTIONS(3),
    [anon_sym_bcs] = ACTIONS(3),
    [anon_sym_beq] = ACTIONS(3),
    [anon_sym_bge] = ACTIONS(3),
    [anon_sym_bgt] = ACTIONS(3),
    [anon_sym_bhi] = ACTIONS(3),
    [anon_sym_bhs] = ACTIONS(3),
    [anon_sym_ble] = ACTIONS(3),
    [anon_sym_blo] = ACTIONS(3),
    [anon_sym_bls] = ACTIONS(3),
    [anon_sym_blt] = ACTIONS(3),
    [anon_sym_bmi] = ACTIONS(3),
    [anon_sym_bne] = ACTIONS(3),
    [anon_sym_bpl] = ACTIONS(3),
    [anon_sym_brn] = ACTIONS(3),
    [anon_sym_bsr] = ACTIONS(3),
    [anon_sym_bvc] = ACTIONS(3),
    [anon_sym_bvs] = ACTIONS(3),
    [anon_sym_lbra] = ACTIONS(3),
    [anon_sym_lbcc] = ACTIONS(3),
    [anon_sym_lbcs] = ACTIONS(3),
    [anon_sym_lbeq] = ACTIONS(3),
    [anon_sym_lbge] = ACTIONS(3),
    [anon_sym_lbgt] = ACTIONS(3),
    [anon_sym_lbhi] = ACTIONS(3),
    [anon_sym_lbhs] = ACTIONS(3),
    [anon_sym_lble] = ACTIONS(3),
    [anon_sym_lblo] = ACTIONS(3),
    [anon_sym_lbls] = ACTIONS(3),
    [anon_sym_lblt] = ACTIONS(3),
    [anon_sym_lbmi] = ACTIONS(3),
    [anon_sym_lbne] = ACTIONS(3),
    [anon_sym_lbpl] = ACTIONS(3),
    [anon_sym_lbrn] = ACTIONS(3),
    [anon_sym_lbsr] = ACTIONS(3),
    [anon_sym_lbvc] = ACTIONS(3),
    [anon_sym_lbvs] = ACTIONS(3),
    [anon_sym_clra] = ACTIONS(3),
    [anon_sym_clrb] = ACTIONS(3),
    [anon_sym_clr] = ACTIONS(3),
    [anon_sym_cmpa] = ACTIONS(3),
    [anon_sym_cmpb] = ACTIONS(3),
    [anon_sym_cmpd] = ACTIONS(3),
    [anon_sym_cmps] = ACTIONS(3),
    [anon_sym_cmpu] = ACTIONS(3),
    [anon_sym_cmpx] = ACTIONS(3),
    [anon_sym_cmpy] = ACTIONS(3),
    [anon_sym_coma] = ACTIONS(3),
    [anon_sym_comb] = ACTIONS(3),
    [anon_sym_com] = ACTIONS(3),
    [anon_sym_cwai] = ACTIONS(3),
    [anon_sym_daa] = ACTIONS(3),
    [anon_sym_deca] = ACTIONS(3),
    [anon_sym_decb] = ACTIONS(3),
    [anon_sym_dec] = ACTIONS(3),
    [anon_sym_eora] = ACTIONS(3),
    [anon_sym_eorb] = ACTIONS(3),
    [anon_sym_exg] = ACTIONS(3),
    [anon_sym_inca] = ACTIONS(3),
    [anon_sym_incb] = ACTIONS(3),
    [anon_sym_inc] = ACTIONS(3),
    [anon_sym_jmp] = ACTIONS(3),
    [anon_sym_jsr] = ACTIONS(3),
    [anon_sym_lda] = ACTIONS(3),
    [anon_sym_ldb] = ACTIONS(3),
    [anon_sym_ldd] = ACTIONS(3),
    [anon_sym_lds] = ACTIONS(3),
    [anon_sym_ldu] = ACTIONS(3),
    [anon_sym_ldx] = ACTIONS(3),
    [anon_sym_ldy] = ACTIONS(3),
    [anon_sym_leas] = ACTIONS(3),
    [anon_sym_leau] = ACTIONS(3),
    [anon_sym_leax] = ACTIONS(3),
    [anon_sym_leay] = ACTIONS(3),
    [anon_sym_lsla] = ACTIONS(3),
    [anon_sym_lslb] = ACTIONS(3),
    [anon_sym_lsl] = ACTIONS(3),
    [anon_sym_lsra] = ACTIONS(3),
    [anon_sym_lsrb] = ACTIONS(3),
    [anon_sym_lsr] = ACTIONS(3),
    [anon_sym_mul] = ACTIONS(3),
    [anon_sym_nega] = ACTIONS(3),
    [anon_sym_negb] = ACTIONS(3),
    [anon_sym_neg] = ACTIONS(3),
    [anon_sym_nop] = ACTIONS(3),
    [anon_sym_ora] = ACTIONS(3),
    [anon_sym_orb] = ACTIONS(3),
    [anon_sym_orcc] = ACTIONS(3),
    [anon_sym_pshs] = ACTIONS(3),
    [anon_sym_pshu] = ACTIONS(3),
    [anon_sym_puls] = ACTIONS(3),
    [anon_sym_pulu] = ACTIONS(3),
    [anon_sym_rola] = ACTIONS(3),
    [anon_sym_rolb] = ACTIONS(3),
    [anon_sym_rol] = ACTIONS(3),
    [anon_sym_rora] = ACTIONS(3),
    [anon_sym_rorb] = ACTIONS(3),
    [anon_sym_ror] = ACTIONS(3),
    [anon_sym_rti] = ACTIONS(3),
    [anon_sym_rts] = ACTIONS(3),
    [anon_sym_sbca] = ACTIONS(3),
    [anon_sym_sbcb] = ACTIONS(3),
    [anon_sym_sex] = ACTIONS(3),
    [anon_sym_sta] = ACTIONS(3),
    [anon_sym_stb] = ACTIONS(3),
    [anon_sym_std] = ACTIONS(3),
    [anon_sym_sts] = ACTIONS(3),
    [anon_sym_stu] = ACTIONS(3),
    [anon_sym_stx] = ACTIONS(3),
    [anon_sym_sty] = ACTIONS(3),
    [anon_sym_suba] = ACTIONS(3),
    [anon_sym_subb] = ACTIONS(3),
    [anon_sym_subd] = ACTIONS(3),
    [anon_sym_swi] = ACTIONS(3),
    [anon_sym_swi2] = ACTIONS(3),
    [anon_sym_swi3] = ACTIONS(3),
    [anon_sym_sync] = ACTIONS(3),
    [anon_sym_tfr] = ACTIONS(3),
    [anon_sym_tsta] = ACTIONS(3),
    [anon_sym_tstb] = ACTIONS(3),
    [anon_sym_tst] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__line] = STATE(12),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [sym_memnonic] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_pseudo_opcode] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
    [sym_asterisk_comment] = ACTIONS(13),
    [anon_sym_abx] = ACTIONS(15),
    [anon_sym_adca] = ACTIONS(15),
    [anon_sym_adcb] = ACTIONS(15),
    [anon_sym_adda] = ACTIONS(15),
    [anon_sym_addb] = ACTIONS(15),
    [anon_sym_addd] = ACTIONS(15),
    [anon_sym_anda] = ACTIONS(15),
    [anon_sym_andb] = ACTIONS(15),
    [anon_sym_andcc] = ACTIONS(15),
    [anon_sym_asla] = ACTIONS(15),
    [anon_sym_aslb] = ACTIONS(15),
    [anon_sym_asl] = ACTIONS(15),
    [anon_sym_asra] = ACTIONS(15),
    [anon_sym_asrb] = ACTIONS(15),
    [anon_sym_asr] = ACTIONS(15),
    [anon_sym_bita] = ACTIONS(15),
    [anon_sym_bitb] = ACTIONS(15),
    [anon_sym_bra] = ACTIONS(15),
    [anon_sym_bcc] = ACTIONS(15),
    [anon_sym_bcs] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bhi] = ACTIONS(15),
    [anon_sym_bhs] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_blo] = ACTIONS(15),
    [anon_sym_bls] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bmi] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bpl] = ACTIONS(15),
    [anon_sym_brn] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bvc] = ACTIONS(15),
    [anon_sym_bvs] = ACTIONS(15),
    [anon_sym_lbra] = ACTIONS(15),
    [anon_sym_lbcc] = ACTIONS(15),
    [anon_sym_lbcs] = ACTIONS(15),
    [anon_sym_lbeq] = ACTIONS(15),
    [anon_sym_lbge] = ACTIONS(15),
    [anon_sym_lbgt] = ACTIONS(15),
    [anon_sym_lbhi] = ACTIONS(15),
    [anon_sym_lbhs] = ACTIONS(15),
    [anon_sym_lble] = ACTIONS(15),
    [anon_sym_lblo] = ACTIONS(15),
    [anon_sym_lbls] = ACTIONS(15),
    [anon_sym_lblt] = ACTIONS(15),
    [anon_sym_lbmi] = ACTIONS(15),
    [anon_sym_lbne] = ACTIONS(15),
    [anon_sym_lbpl] = ACTIONS(15),
    [anon_sym_lbrn] = ACTIONS(15),
    [anon_sym_lbsr] = ACTIONS(15),
    [anon_sym_lbvc] = ACTIONS(15),
    [anon_sym_lbvs] = ACTIONS(15),
    [anon_sym_clra] = ACTIONS(15),
    [anon_sym_clrb] = ACTIONS(15),
    [anon_sym_clr] = ACTIONS(15),
    [anon_sym_cmpa] = ACTIONS(15),
    [anon_sym_cmpb] = ACTIONS(15),
    [anon_sym_cmpd] = ACTIONS(15),
    [anon_sym_cmps] = ACTIONS(15),
    [anon_sym_cmpu] = ACTIONS(15),
    [anon_sym_cmpx] = ACTIONS(15),
    [anon_sym_cmpy] = ACTIONS(15),
    [anon_sym_coma] = ACTIONS(15),
    [anon_sym_comb] = ACTIONS(15),
    [anon_sym_com] = ACTIONS(15),
    [anon_sym_cwai] = ACTIONS(15),
    [anon_sym_daa] = ACTIONS(15),
    [anon_sym_deca] = ACTIONS(15),
    [anon_sym_decb] = ACTIONS(15),
    [anon_sym_dec] = ACTIONS(15),
    [anon_sym_eora] = ACTIONS(15),
    [anon_sym_eorb] = ACTIONS(15),
    [anon_sym_exg] = ACTIONS(15),
    [anon_sym_inca] = ACTIONS(15),
    [anon_sym_incb] = ACTIONS(15),
    [anon_sym_inc] = ACTIONS(15),
    [anon_sym_jmp] = ACTIONS(15),
    [anon_sym_jsr] = ACTIONS(15),
    [anon_sym_lda] = ACTIONS(15),
    [anon_sym_ldb] = ACTIONS(15),
    [anon_sym_ldd] = ACTIONS(15),
    [anon_sym_lds] = ACTIONS(15),
    [anon_sym_ldu] = ACTIONS(15),
    [anon_sym_ldx] = ACTIONS(15),
    [anon_sym_ldy] = ACTIONS(15),
    [anon_sym_leas] = ACTIONS(15),
    [anon_sym_leau] = ACTIONS(15),
    [anon_sym_leax] = ACTIONS(15),
    [anon_sym_leay] = ACTIONS(15),
    [anon_sym_lsla] = ACTIONS(15),
    [anon_sym_lslb] = ACTIONS(15),
    [anon_sym_lsl] = ACTIONS(15),
    [anon_sym_lsra] = ACTIONS(15),
    [anon_sym_lsrb] = ACTIONS(15),
    [anon_sym_lsr] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nega] = ACTIONS(15),
    [anon_sym_negb] = ACTIONS(15),
    [anon_sym_neg] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(15),
    [anon_sym_ora] = ACTIONS(15),
    [anon_sym_orb] = ACTIONS(15),
    [anon_sym_orcc] = ACTIONS(15),
    [anon_sym_pshs] = ACTIONS(15),
    [anon_sym_pshu] = ACTIONS(15),
    [anon_sym_puls] = ACTIONS(15),
    [anon_sym_pulu] = ACTIONS(15),
    [anon_sym_rola] = ACTIONS(15),
    [anon_sym_rolb] = ACTIONS(15),
    [anon_sym_rol] = ACTIONS(15),
    [anon_sym_rora] = ACTIONS(15),
    [anon_sym_rorb] = ACTIONS(15),
    [anon_sym_ror] = ACTIONS(15),
    [anon_sym_rti] = ACTIONS(15),
    [anon_sym_rts] = ACTIONS(15),
    [anon_sym_sbca] = ACTIONS(15),
    [anon_sym_sbcb] = ACTIONS(15),
    [anon_sym_sex] = ACTIONS(15),
    [anon_sym_sta] = ACTIONS(15),
    [anon_sym_stb] = ACTIONS(15),
    [anon_sym_std] = ACTIONS(15),
    [anon_sym_sts] = ACTIONS(15),
    [anon_sym_stu] = ACTIONS(15),
    [anon_sym_stx] = ACTIONS(15),
    [anon_sym_sty] = ACTIONS(15),
    [anon_sym_suba] = ACTIONS(15),
    [anon_sym_subb] = ACTIONS(15),
    [anon_sym_subd] = ACTIONS(15),
    [anon_sym_swi] = ACTIONS(15),
    [anon_sym_swi2] = ACTIONS(15),
    [anon_sym_swi3] = ACTIONS(15),
    [anon_sym_sync] = ACTIONS(15),
    [anon_sym_tfr] = ACTIONS(15),
    [anon_sym_tsta] = ACTIONS(15),
    [anon_sym_tstb] = ACTIONS(15),
    [anon_sym_tst] = ACTIONS(15),
  },
  [2] = {
    [sym__identifier] = ACTIONS(17),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(19),
    [sym_pseudo_opcode] = ACTIONS(21),
  },
  [4] = {
    [sym_symbol] = STATE(18),
    [sym_constant] = STATE(18),
    [sym__expression] = STATE(18),
    [sym__term] = STATE(18),
    [sym__line_break] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
    [sym__decimal] = ACTIONS(27),
    [sym__octal] = ACTIONS(27),
    [sym__hexadecimal] = ACTIONS(27),
    [sym__binary] = ACTIONS(27),
    [sym_semicolon_comment] = ACTIONS(29),
    [sym_asterisk_comment] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
  },
  [5] = {
    [sym__line_break] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_imm_marker] = ACTIONS(37),
    [sym__decimal] = ACTIONS(37),
    [sym__octal] = ACTIONS(37),
    [sym__hexadecimal] = ACTIONS(37),
    [sym__binary] = ACTIONS(37),
    [anon_sym_A] = ACTIONS(37),
    [anon_sym_B] = ACTIONS(37),
    [anon_sym_X] = ACTIONS(37),
    [anon_sym_Y] = ACTIONS(37),
    [anon_sym_U] = ACTIONS(37),
    [anon_sym_S] = ACTIONS(37),
    [anon_sym_PC] = ACTIONS(37),
    [anon_sym_CC] = ACTIONS(37),
    [anon_sym_DP] = ACTIONS(37),
    [anon_sym_D] = ACTIONS(37),
    [sym_semicolon_comment] = ACTIONS(37),
    [sym_asterisk_comment] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [7] = {
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(21),
    [sym_opcode] = STATE(21),
    [sym_assembler_directive] = STATE(21),
    [sym__comment] = STATE(22),
    [sym_memnonic] = STATE(11),
    [sym__line_break] = ACTIONS(41),
    [sym__identifier] = ACTIONS(43),
    [sym_pseudo_opcode] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(45),
    [sym_asterisk_comment] = ACTIONS(45),
    [anon_sym_abx] = ACTIONS(15),
    [anon_sym_adca] = ACTIONS(15),
    [anon_sym_adcb] = ACTIONS(15),
    [anon_sym_adda] = ACTIONS(15),
    [anon_sym_addb] = ACTIONS(15),
    [anon_sym_addd] = ACTIONS(15),
    [anon_sym_anda] = ACTIONS(15),
    [anon_sym_andb] = ACTIONS(15),
    [anon_sym_andcc] = ACTIONS(15),
    [anon_sym_asla] = ACTIONS(15),
    [anon_sym_aslb] = ACTIONS(15),
    [anon_sym_asl] = ACTIONS(15),
    [anon_sym_asra] = ACTIONS(15),
    [anon_sym_asrb] = ACTIONS(15),
    [anon_sym_asr] = ACTIONS(15),
    [anon_sym_bita] = ACTIONS(15),
    [anon_sym_bitb] = ACTIONS(15),
    [anon_sym_bra] = ACTIONS(15),
    [anon_sym_bcc] = ACTIONS(15),
    [anon_sym_bcs] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bhi] = ACTIONS(15),
    [anon_sym_bhs] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_blo] = ACTIONS(15),
    [anon_sym_bls] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bmi] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bpl] = ACTIONS(15),
    [anon_sym_brn] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bvc] = ACTIONS(15),
    [anon_sym_bvs] = ACTIONS(15),
    [anon_sym_lbra] = ACTIONS(15),
    [anon_sym_lbcc] = ACTIONS(15),
    [anon_sym_lbcs] = ACTIONS(15),
    [anon_sym_lbeq] = ACTIONS(15),
    [anon_sym_lbge] = ACTIONS(15),
    [anon_sym_lbgt] = ACTIONS(15),
    [anon_sym_lbhi] = ACTIONS(15),
    [anon_sym_lbhs] = ACTIONS(15),
    [anon_sym_lble] = ACTIONS(15),
    [anon_sym_lblo] = ACTIONS(15),
    [anon_sym_lbls] = ACTIONS(15),
    [anon_sym_lblt] = ACTIONS(15),
    [anon_sym_lbmi] = ACTIONS(15),
    [anon_sym_lbne] = ACTIONS(15),
    [anon_sym_lbpl] = ACTIONS(15),
    [anon_sym_lbrn] = ACTIONS(15),
    [anon_sym_lbsr] = ACTIONS(15),
    [anon_sym_lbvc] = ACTIONS(15),
    [anon_sym_lbvs] = ACTIONS(15),
    [anon_sym_clra] = ACTIONS(15),
    [anon_sym_clrb] = ACTIONS(15),
    [anon_sym_clr] = ACTIONS(15),
    [anon_sym_cmpa] = ACTIONS(15),
    [anon_sym_cmpb] = ACTIONS(15),
    [anon_sym_cmpd] = ACTIONS(15),
    [anon_sym_cmps] = ACTIONS(15),
    [anon_sym_cmpu] = ACTIONS(15),
    [anon_sym_cmpx] = ACTIONS(15),
    [anon_sym_cmpy] = ACTIONS(15),
    [anon_sym_coma] = ACTIONS(15),
    [anon_sym_comb] = ACTIONS(15),
    [anon_sym_com] = ACTIONS(15),
    [anon_sym_cwai] = ACTIONS(15),
    [anon_sym_daa] = ACTIONS(15),
    [anon_sym_deca] = ACTIONS(15),
    [anon_sym_decb] = ACTIONS(15),
    [anon_sym_dec] = ACTIONS(15),
    [anon_sym_eora] = ACTIONS(15),
    [anon_sym_eorb] = ACTIONS(15),
    [anon_sym_exg] = ACTIONS(15),
    [anon_sym_inca] = ACTIONS(15),
    [anon_sym_incb] = ACTIONS(15),
    [anon_sym_inc] = ACTIONS(15),
    [anon_sym_jmp] = ACTIONS(15),
    [anon_sym_jsr] = ACTIONS(15),
    [anon_sym_lda] = ACTIONS(15),
    [anon_sym_ldb] = ACTIONS(15),
    [anon_sym_ldd] = ACTIONS(15),
    [anon_sym_lds] = ACTIONS(15),
    [anon_sym_ldu] = ACTIONS(15),
    [anon_sym_ldx] = ACTIONS(15),
    [anon_sym_ldy] = ACTIONS(15),
    [anon_sym_leas] = ACTIONS(15),
    [anon_sym_leau] = ACTIONS(15),
    [anon_sym_leax] = ACTIONS(15),
    [anon_sym_leay] = ACTIONS(15),
    [anon_sym_lsla] = ACTIONS(15),
    [anon_sym_lslb] = ACTIONS(15),
    [anon_sym_lsl] = ACTIONS(15),
    [anon_sym_lsra] = ACTIONS(15),
    [anon_sym_lsrb] = ACTIONS(15),
    [anon_sym_lsr] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nega] = ACTIONS(15),
    [anon_sym_negb] = ACTIONS(15),
    [anon_sym_neg] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(15),
    [anon_sym_ora] = ACTIONS(15),
    [anon_sym_orb] = ACTIONS(15),
    [anon_sym_orcc] = ACTIONS(15),
    [anon_sym_pshs] = ACTIONS(15),
    [anon_sym_pshu] = ACTIONS(15),
    [anon_sym_puls] = ACTIONS(15),
    [anon_sym_pulu] = ACTIONS(15),
    [anon_sym_rola] = ACTIONS(15),
    [anon_sym_rolb] = ACTIONS(15),
    [anon_sym_rol] = ACTIONS(15),
    [anon_sym_rora] = ACTIONS(15),
    [anon_sym_rorb] = ACTIONS(15),
    [anon_sym_ror] = ACTIONS(15),
    [anon_sym_rti] = ACTIONS(15),
    [anon_sym_rts] = ACTIONS(15),
    [anon_sym_sbca] = ACTIONS(15),
    [anon_sym_sbcb] = ACTIONS(15),
    [anon_sym_sex] = ACTIONS(15),
    [anon_sym_sta] = ACTIONS(15),
    [anon_sym_stb] = ACTIONS(15),
    [anon_sym_std] = ACTIONS(15),
    [anon_sym_sts] = ACTIONS(15),
    [anon_sym_stu] = ACTIONS(15),
    [anon_sym_stx] = ACTIONS(15),
    [anon_sym_sty] = ACTIONS(15),
    [anon_sym_suba] = ACTIONS(15),
    [anon_sym_subb] = ACTIONS(15),
    [anon_sym_subd] = ACTIONS(15),
    [anon_sym_swi] = ACTIONS(15),
    [anon_sym_swi2] = ACTIONS(15),
    [anon_sym_swi3] = ACTIONS(15),
    [anon_sym_sync] = ACTIONS(15),
    [anon_sym_tfr] = ACTIONS(15),
    [anon_sym_tsta] = ACTIONS(15),
    [anon_sym_tstb] = ACTIONS(15),
    [anon_sym_tst] = ACTIONS(15),
  },
  [8] = {
    [sym_pseudo_opcode] = ACTIONS(47),
  },
  [9] = {
    [sym__comment] = STATE(22),
    [sym__line_break] = ACTIONS(41),
    [sym_semicolon_comment] = ACTIONS(45),
    [sym_asterisk_comment] = ACTIONS(45),
  },
  [10] = {
    [sym__line_break] = ACTIONS(41),
  },
  [11] = {
    [sym_symbol] = STATE(28),
    [sym__operand] = STATE(27),
    [sym_constant] = STATE(28),
    [sym_register] = STATE(27),
    [sym__expression] = STATE(28),
    [sym__term] = STATE(28),
    [sym__line_break] = ACTIONS(49),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_imm_marker] = ACTIONS(53),
    [sym__decimal] = ACTIONS(27),
    [sym__octal] = ACTIONS(27),
    [sym__hexadecimal] = ACTIONS(27),
    [sym__binary] = ACTIONS(27),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_PC] = ACTIONS(55),
    [anon_sym_CC] = ACTIONS(55),
    [anon_sym_DP] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(55),
    [sym_semicolon_comment] = ACTIONS(57),
    [sym_asterisk_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_string] = ACTIONS(59),
  },
  [12] = {
    [sym__line] = STATE(29),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [sym_memnonic] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__line_break] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_pseudo_opcode] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
    [sym_asterisk_comment] = ACTIONS(13),
    [anon_sym_abx] = ACTIONS(15),
    [anon_sym_adca] = ACTIONS(15),
    [anon_sym_adcb] = ACTIONS(15),
    [anon_sym_adda] = ACTIONS(15),
    [anon_sym_addb] = ACTIONS(15),
    [anon_sym_addd] = ACTIONS(15),
    [anon_sym_anda] = ACTIONS(15),
    [anon_sym_andb] = ACTIONS(15),
    [anon_sym_andcc] = ACTIONS(15),
    [anon_sym_asla] = ACTIONS(15),
    [anon_sym_aslb] = ACTIONS(15),
    [anon_sym_asl] = ACTIONS(15),
    [anon_sym_asra] = ACTIONS(15),
    [anon_sym_asrb] = ACTIONS(15),
    [anon_sym_asr] = ACTIONS(15),
    [anon_sym_bita] = ACTIONS(15),
    [anon_sym_bitb] = ACTIONS(15),
    [anon_sym_bra] = ACTIONS(15),
    [anon_sym_bcc] = ACTIONS(15),
    [anon_sym_bcs] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bhi] = ACTIONS(15),
    [anon_sym_bhs] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_blo] = ACTIONS(15),
    [anon_sym_bls] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bmi] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bpl] = ACTIONS(15),
    [anon_sym_brn] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bvc] = ACTIONS(15),
    [anon_sym_bvs] = ACTIONS(15),
    [anon_sym_lbra] = ACTIONS(15),
    [anon_sym_lbcc] = ACTIONS(15),
    [anon_sym_lbcs] = ACTIONS(15),
    [anon_sym_lbeq] = ACTIONS(15),
    [anon_sym_lbge] = ACTIONS(15),
    [anon_sym_lbgt] = ACTIONS(15),
    [anon_sym_lbhi] = ACTIONS(15),
    [anon_sym_lbhs] = ACTIONS(15),
    [anon_sym_lble] = ACTIONS(15),
    [anon_sym_lblo] = ACTIONS(15),
    [anon_sym_lbls] = ACTIONS(15),
    [anon_sym_lblt] = ACTIONS(15),
    [anon_sym_lbmi] = ACTIONS(15),
    [anon_sym_lbne] = ACTIONS(15),
    [anon_sym_lbpl] = ACTIONS(15),
    [anon_sym_lbrn] = ACTIONS(15),
    [anon_sym_lbsr] = ACTIONS(15),
    [anon_sym_lbvc] = ACTIONS(15),
    [anon_sym_lbvs] = ACTIONS(15),
    [anon_sym_clra] = ACTIONS(15),
    [anon_sym_clrb] = ACTIONS(15),
    [anon_sym_clr] = ACTIONS(15),
    [anon_sym_cmpa] = ACTIONS(15),
    [anon_sym_cmpb] = ACTIONS(15),
    [anon_sym_cmpd] = ACTIONS(15),
    [anon_sym_cmps] = ACTIONS(15),
    [anon_sym_cmpu] = ACTIONS(15),
    [anon_sym_cmpx] = ACTIONS(15),
    [anon_sym_cmpy] = ACTIONS(15),
    [anon_sym_coma] = ACTIONS(15),
    [anon_sym_comb] = ACTIONS(15),
    [anon_sym_com] = ACTIONS(15),
    [anon_sym_cwai] = ACTIONS(15),
    [anon_sym_daa] = ACTIONS(15),
    [anon_sym_deca] = ACTIONS(15),
    [anon_sym_decb] = ACTIONS(15),
    [anon_sym_dec] = ACTIONS(15),
    [anon_sym_eora] = ACTIONS(15),
    [anon_sym_eorb] = ACTIONS(15),
    [anon_sym_exg] = ACTIONS(15),
    [anon_sym_inca] = ACTIONS(15),
    [anon_sym_incb] = ACTIONS(15),
    [anon_sym_inc] = ACTIONS(15),
    [anon_sym_jmp] = ACTIONS(15),
    [anon_sym_jsr] = ACTIONS(15),
    [anon_sym_lda] = ACTIONS(15),
    [anon_sym_ldb] = ACTIONS(15),
    [anon_sym_ldd] = ACTIONS(15),
    [anon_sym_lds] = ACTIONS(15),
    [anon_sym_ldu] = ACTIONS(15),
    [anon_sym_ldx] = ACTIONS(15),
    [anon_sym_ldy] = ACTIONS(15),
    [anon_sym_leas] = ACTIONS(15),
    [anon_sym_leau] = ACTIONS(15),
    [anon_sym_leax] = ACTIONS(15),
    [anon_sym_leay] = ACTIONS(15),
    [anon_sym_lsla] = ACTIONS(15),
    [anon_sym_lslb] = ACTIONS(15),
    [anon_sym_lsl] = ACTIONS(15),
    [anon_sym_lsra] = ACTIONS(15),
    [anon_sym_lsrb] = ACTIONS(15),
    [anon_sym_lsr] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nega] = ACTIONS(15),
    [anon_sym_negb] = ACTIONS(15),
    [anon_sym_neg] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(15),
    [anon_sym_ora] = ACTIONS(15),
    [anon_sym_orb] = ACTIONS(15),
    [anon_sym_orcc] = ACTIONS(15),
    [anon_sym_pshs] = ACTIONS(15),
    [anon_sym_pshu] = ACTIONS(15),
    [anon_sym_puls] = ACTIONS(15),
    [anon_sym_pulu] = ACTIONS(15),
    [anon_sym_rola] = ACTIONS(15),
    [anon_sym_rolb] = ACTIONS(15),
    [anon_sym_rol] = ACTIONS(15),
    [anon_sym_rora] = ACTIONS(15),
    [anon_sym_rorb] = ACTIONS(15),
    [anon_sym_ror] = ACTIONS(15),
    [anon_sym_rti] = ACTIONS(15),
    [anon_sym_rts] = ACTIONS(15),
    [anon_sym_sbca] = ACTIONS(15),
    [anon_sym_sbcb] = ACTIONS(15),
    [anon_sym_sex] = ACTIONS(15),
    [anon_sym_sta] = ACTIONS(15),
    [anon_sym_stb] = ACTIONS(15),
    [anon_sym_std] = ACTIONS(15),
    [anon_sym_sts] = ACTIONS(15),
    [anon_sym_stu] = ACTIONS(15),
    [anon_sym_stx] = ACTIONS(15),
    [anon_sym_sty] = ACTIONS(15),
    [anon_sym_suba] = ACTIONS(15),
    [anon_sym_subb] = ACTIONS(15),
    [anon_sym_subd] = ACTIONS(15),
    [anon_sym_swi] = ACTIONS(15),
    [anon_sym_swi2] = ACTIONS(15),
    [anon_sym_swi3] = ACTIONS(15),
    [anon_sym_sync] = ACTIONS(15),
    [anon_sym_tfr] = ACTIONS(15),
    [anon_sym_tsta] = ACTIONS(15),
    [anon_sym_tstb] = ACTIONS(15),
    [anon_sym_tst] = ACTIONS(15),
  },
  [13] = {
    [anon_sym_COLON] = ACTIONS(65),
  },
  [14] = {
    [sym__line_break] = ACTIONS(67),
    [sym__identifier] = ACTIONS(69),
    [sym_pseudo_opcode] = ACTIONS(69),
    [sym_semicolon_comment] = ACTIONS(69),
    [sym_asterisk_comment] = ACTIONS(69),
    [anon_sym_abx] = ACTIONS(69),
    [anon_sym_adca] = ACTIONS(69),
    [anon_sym_adcb] = ACTIONS(69),
    [anon_sym_adda] = ACTIONS(69),
    [anon_sym_addb] = ACTIONS(69),
    [anon_sym_addd] = ACTIONS(69),
    [anon_sym_anda] = ACTIONS(69),
    [anon_sym_andb] = ACTIONS(69),
    [anon_sym_andcc] = ACTIONS(69),
    [anon_sym_asla] = ACTIONS(69),
    [anon_sym_aslb] = ACTIONS(69),
    [anon_sym_asl] = ACTIONS(69),
    [anon_sym_asra] = ACTIONS(69),
    [anon_sym_asrb] = ACTIONS(69),
    [anon_sym_asr] = ACTIONS(69),
    [anon_sym_bita] = ACTIONS(69),
    [anon_sym_bitb] = ACTIONS(69),
    [anon_sym_bra] = ACTIONS(69),
    [anon_sym_bcc] = ACTIONS(69),
    [anon_sym_bcs] = ACTIONS(69),
    [anon_sym_beq] = ACTIONS(69),
    [anon_sym_bge] = ACTIONS(69),
    [anon_sym_bgt] = ACTIONS(69),
    [anon_sym_bhi] = ACTIONS(69),
    [anon_sym_bhs] = ACTIONS(69),
    [anon_sym_ble] = ACTIONS(69),
    [anon_sym_blo] = ACTIONS(69),
    [anon_sym_bls] = ACTIONS(69),
    [anon_sym_blt] = ACTIONS(69),
    [anon_sym_bmi] = ACTIONS(69),
    [anon_sym_bne] = ACTIONS(69),
    [anon_sym_bpl] = ACTIONS(69),
    [anon_sym_brn] = ACTIONS(69),
    [anon_sym_bsr] = ACTIONS(69),
    [anon_sym_bvc] = ACTIONS(69),
    [anon_sym_bvs] = ACTIONS(69),
    [anon_sym_lbra] = ACTIONS(69),
    [anon_sym_lbcc] = ACTIONS(69),
    [anon_sym_lbcs] = ACTIONS(69),
    [anon_sym_lbeq] = ACTIONS(69),
    [anon_sym_lbge] = ACTIONS(69),
    [anon_sym_lbgt] = ACTIONS(69),
    [anon_sym_lbhi] = ACTIONS(69),
    [anon_sym_lbhs] = ACTIONS(69),
    [anon_sym_lble] = ACTIONS(69),
    [anon_sym_lblo] = ACTIONS(69),
    [anon_sym_lbls] = ACTIONS(69),
    [anon_sym_lblt] = ACTIONS(69),
    [anon_sym_lbmi] = ACTIONS(69),
    [anon_sym_lbne] = ACTIONS(69),
    [anon_sym_lbpl] = ACTIONS(69),
    [anon_sym_lbrn] = ACTIONS(69),
    [anon_sym_lbsr] = ACTIONS(69),
    [anon_sym_lbvc] = ACTIONS(69),
    [anon_sym_lbvs] = ACTIONS(69),
    [anon_sym_clra] = ACTIONS(69),
    [anon_sym_clrb] = ACTIONS(69),
    [anon_sym_clr] = ACTIONS(69),
    [anon_sym_cmpa] = ACTIONS(69),
    [anon_sym_cmpb] = ACTIONS(69),
    [anon_sym_cmpd] = ACTIONS(69),
    [anon_sym_cmps] = ACTIONS(69),
    [anon_sym_cmpu] = ACTIONS(69),
    [anon_sym_cmpx] = ACTIONS(69),
    [anon_sym_cmpy] = ACTIONS(69),
    [anon_sym_coma] = ACTIONS(69),
    [anon_sym_comb] = ACTIONS(69),
    [anon_sym_com] = ACTIONS(69),
    [anon_sym_cwai] = ACTIONS(69),
    [anon_sym_daa] = ACTIONS(69),
    [anon_sym_deca] = ACTIONS(69),
    [anon_sym_decb] = ACTIONS(69),
    [anon_sym_dec] = ACTIONS(69),
    [anon_sym_eora] = ACTIONS(69),
    [anon_sym_eorb] = ACTIONS(69),
    [anon_sym_exg] = ACTIONS(69),
    [anon_sym_inca] = ACTIONS(69),
    [anon_sym_incb] = ACTIONS(69),
    [anon_sym_inc] = ACTIONS(69),
    [anon_sym_jmp] = ACTIONS(69),
    [anon_sym_jsr] = ACTIONS(69),
    [anon_sym_lda] = ACTIONS(69),
    [anon_sym_ldb] = ACTIONS(69),
    [anon_sym_ldd] = ACTIONS(69),
    [anon_sym_lds] = ACTIONS(69),
    [anon_sym_ldu] = ACTIONS(69),
    [anon_sym_ldx] = ACTIONS(69),
    [anon_sym_ldy] = ACTIONS(69),
    [anon_sym_leas] = ACTIONS(69),
    [anon_sym_leau] = ACTIONS(69),
    [anon_sym_leax] = ACTIONS(69),
    [anon_sym_leay] = ACTIONS(69),
    [anon_sym_lsla] = ACTIONS(69),
    [anon_sym_lslb] = ACTIONS(69),
    [anon_sym_lsl] = ACTIONS(69),
    [anon_sym_lsra] = ACTIONS(69),
    [anon_sym_lsrb] = ACTIONS(69),
    [anon_sym_lsr] = ACTIONS(69),
    [anon_sym_mul] = ACTIONS(69),
    [anon_sym_nega] = ACTIONS(69),
    [anon_sym_negb] = ACTIONS(69),
    [anon_sym_neg] = ACTIONS(69),
    [anon_sym_nop] = ACTIONS(69),
    [anon_sym_ora] = ACTIONS(69),
    [anon_sym_orb] = ACTIONS(69),
    [anon_sym_orcc] = ACTIONS(69),
    [anon_sym_pshs] = ACTIONS(69),
    [anon_sym_pshu] = ACTIONS(69),
    [anon_sym_puls] = ACTIONS(69),
    [anon_sym_pulu] = ACTIONS(69),
    [anon_sym_rola] = ACTIONS(69),
    [anon_sym_rolb] = ACTIONS(69),
    [anon_sym_rol] = ACTIONS(69),
    [anon_sym_rora] = ACTIONS(69),
    [anon_sym_rorb] = ACTIONS(69),
    [anon_sym_ror] = ACTIONS(69),
    [anon_sym_rti] = ACTIONS(69),
    [anon_sym_rts] = ACTIONS(69),
    [anon_sym_sbca] = ACTIONS(69),
    [anon_sym_sbcb] = ACTIONS(69),
    [anon_sym_sex] = ACTIONS(69),
    [anon_sym_sta] = ACTIONS(69),
    [anon_sym_stb] = ACTIONS(69),
    [anon_sym_std] = ACTIONS(69),
    [anon_sym_sts] = ACTIONS(69),
    [anon_sym_stu] = ACTIONS(69),
    [anon_sym_stx] = ACTIONS(69),
    [anon_sym_sty] = ACTIONS(69),
    [anon_sym_suba] = ACTIONS(69),
    [anon_sym_subb] = ACTIONS(69),
    [anon_sym_subd] = ACTIONS(69),
    [anon_sym_swi] = ACTIONS(69),
    [anon_sym_swi2] = ACTIONS(69),
    [anon_sym_swi3] = ACTIONS(69),
    [anon_sym_sync] = ACTIONS(69),
    [anon_sym_tfr] = ACTIONS(69),
    [anon_sym_tsta] = ACTIONS(69),
    [anon_sym_tstb] = ACTIONS(69),
    [anon_sym_tst] = ACTIONS(69),
  },
  [15] = {
    [sym__line_break] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_semicolon_comment] = ACTIONS(71),
    [sym_asterisk_comment] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
  },
  [16] = {
    [sym__line_break] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym_semicolon_comment] = ACTIONS(75),
    [sym_asterisk_comment] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
  },
  [17] = {
    [sym_symbol] = STATE(33),
    [sym_constant] = STATE(33),
    [sym__expression] = STATE(33),
    [sym__term] = STATE(33),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [sym__octal] = ACTIONS(79),
    [sym__hexadecimal] = ACTIONS(79),
    [sym__binary] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
  },
  [18] = {
    [sym_operator] = STATE(36),
    [aux_sym_assembler_directive_repeat1] = STATE(37),
    [sym__line_break] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_semicolon_comment] = ACTIONS(89),
    [sym_asterisk_comment] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym__line_break] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(95),
    [sym__identifier] = ACTIONS(95),
    [sym_pseudo_opcode] = ACTIONS(95),
    [sym_semicolon_comment] = ACTIONS(95),
    [sym_asterisk_comment] = ACTIONS(95),
    [anon_sym_abx] = ACTIONS(95),
    [anon_sym_adca] = ACTIONS(95),
    [anon_sym_adcb] = ACTIONS(95),
    [anon_sym_adda] = ACTIONS(95),
    [anon_sym_addb] = ACTIONS(95),
    [anon_sym_addd] = ACTIONS(95),
    [anon_sym_anda] = ACTIONS(95),
    [anon_sym_andb] = ACTIONS(95),
    [anon_sym_andcc] = ACTIONS(95),
    [anon_sym_asla] = ACTIONS(95),
    [anon_sym_aslb] = ACTIONS(95),
    [anon_sym_asl] = ACTIONS(95),
    [anon_sym_asra] = ACTIONS(95),
    [anon_sym_asrb] = ACTIONS(95),
    [anon_sym_asr] = ACTIONS(95),
    [anon_sym_bita] = ACTIONS(95),
    [anon_sym_bitb] = ACTIONS(95),
    [anon_sym_bra] = ACTIONS(95),
    [anon_sym_bcc] = ACTIONS(95),
    [anon_sym_bcs] = ACTIONS(95),
    [anon_sym_beq] = ACTIONS(95),
    [anon_sym_bge] = ACTIONS(95),
    [anon_sym_bgt] = ACTIONS(95),
    [anon_sym_bhi] = ACTIONS(95),
    [anon_sym_bhs] = ACTIONS(95),
    [anon_sym_ble] = ACTIONS(95),
    [anon_sym_blo] = ACTIONS(95),
    [anon_sym_bls] = ACTIONS(95),
    [anon_sym_blt] = ACTIONS(95),
    [anon_sym_bmi] = ACTIONS(95),
    [anon_sym_bne] = ACTIONS(95),
    [anon_sym_bpl] = ACTIONS(95),
    [anon_sym_brn] = ACTIONS(95),
    [anon_sym_bsr] = ACTIONS(95),
    [anon_sym_bvc] = ACTIONS(95),
    [anon_sym_bvs] = ACTIONS(95),
    [anon_sym_lbra] = ACTIONS(95),
    [anon_sym_lbcc] = ACTIONS(95),
    [anon_sym_lbcs] = ACTIONS(95),
    [anon_sym_lbeq] = ACTIONS(95),
    [anon_sym_lbge] = ACTIONS(95),
    [anon_sym_lbgt] = ACTIONS(95),
    [anon_sym_lbhi] = ACTIONS(95),
    [anon_sym_lbhs] = ACTIONS(95),
    [anon_sym_lble] = ACTIONS(95),
    [anon_sym_lblo] = ACTIONS(95),
    [anon_sym_lbls] = ACTIONS(95),
    [anon_sym_lblt] = ACTIONS(95),
    [anon_sym_lbmi] = ACTIONS(95),
    [anon_sym_lbne] = ACTIONS(95),
    [anon_sym_lbpl] = ACTIONS(95),
    [anon_sym_lbrn] = ACTIONS(95),
    [anon_sym_lbsr] = ACTIONS(95),
    [anon_sym_lbvc] = ACTIONS(95),
    [anon_sym_lbvs] = ACTIONS(95),
    [anon_sym_clra] = ACTIONS(95),
    [anon_sym_clrb] = ACTIONS(95),
    [anon_sym_clr] = ACTIONS(95),
    [anon_sym_cmpa] = ACTIONS(95),
    [anon_sym_cmpb] = ACTIONS(95),
    [anon_sym_cmpd] = ACTIONS(95),
    [anon_sym_cmps] = ACTIONS(95),
    [anon_sym_cmpu] = ACTIONS(95),
    [anon_sym_cmpx] = ACTIONS(95),
    [anon_sym_cmpy] = ACTIONS(95),
    [anon_sym_coma] = ACTIONS(95),
    [anon_sym_comb] = ACTIONS(95),
    [anon_sym_com] = ACTIONS(95),
    [anon_sym_cwai] = ACTIONS(95),
    [anon_sym_daa] = ACTIONS(95),
    [anon_sym_deca] = ACTIONS(95),
    [anon_sym_decb] = ACTIONS(95),
    [anon_sym_dec] = ACTIONS(95),
    [anon_sym_eora] = ACTIONS(95),
    [anon_sym_eorb] = ACTIONS(95),
    [anon_sym_exg] = ACTIONS(95),
    [anon_sym_inca] = ACTIONS(95),
    [anon_sym_incb] = ACTIONS(95),
    [anon_sym_inc] = ACTIONS(95),
    [anon_sym_jmp] = ACTIONS(95),
    [anon_sym_jsr] = ACTIONS(95),
    [anon_sym_lda] = ACTIONS(95),
    [anon_sym_ldb] = ACTIONS(95),
    [anon_sym_ldd] = ACTIONS(95),
    [anon_sym_lds] = ACTIONS(95),
    [anon_sym_ldu] = ACTIONS(95),
    [anon_sym_ldx] = ACTIONS(95),
    [anon_sym_ldy] = ACTIONS(95),
    [anon_sym_leas] = ACTIONS(95),
    [anon_sym_leau] = ACTIONS(95),
    [anon_sym_leax] = ACTIONS(95),
    [anon_sym_leay] = ACTIONS(95),
    [anon_sym_lsla] = ACTIONS(95),
    [anon_sym_lslb] = ACTIONS(95),
    [anon_sym_lsl] = ACTIONS(95),
    [anon_sym_lsra] = ACTIONS(95),
    [anon_sym_lsrb] = ACTIONS(95),
    [anon_sym_lsr] = ACTIONS(95),
    [anon_sym_mul] = ACTIONS(95),
    [anon_sym_nega] = ACTIONS(95),
    [anon_sym_negb] = ACTIONS(95),
    [anon_sym_neg] = ACTIONS(95),
    [anon_sym_nop] = ACTIONS(95),
    [anon_sym_ora] = ACTIONS(95),
    [anon_sym_orb] = ACTIONS(95),
    [anon_sym_orcc] = ACTIONS(95),
    [anon_sym_pshs] = ACTIONS(95),
    [anon_sym_pshu] = ACTIONS(95),
    [anon_sym_puls] = ACTIONS(95),
    [anon_sym_pulu] = ACTIONS(95),
    [anon_sym_rola] = ACTIONS(95),
    [anon_sym_rolb] = ACTIONS(95),
    [anon_sym_rol] = ACTIONS(95),
    [anon_sym_rora] = ACTIONS(95),
    [anon_sym_rorb] = ACTIONS(95),
    [anon_sym_ror] = ACTIONS(95),
    [anon_sym_rti] = ACTIONS(95),
    [anon_sym_rts] = ACTIONS(95),
    [anon_sym_sbca] = ACTIONS(95),
    [anon_sym_sbcb] = ACTIONS(95),
    [anon_sym_sex] = ACTIONS(95),
    [anon_sym_sta] = ACTIONS(95),
    [anon_sym_stb] = ACTIONS(95),
    [anon_sym_std] = ACTIONS(95),
    [anon_sym_sts] = ACTIONS(95),
    [anon_sym_stu] = ACTIONS(95),
    [anon_sym_stx] = ACTIONS(95),
    [anon_sym_sty] = ACTIONS(95),
    [anon_sym_suba] = ACTIONS(95),
    [anon_sym_subb] = ACTIONS(95),
    [anon_sym_subd] = ACTIONS(95),
    [anon_sym_swi] = ACTIONS(95),
    [anon_sym_swi2] = ACTIONS(95),
    [anon_sym_swi3] = ACTIONS(95),
    [anon_sym_sync] = ACTIONS(95),
    [anon_sym_tfr] = ACTIONS(95),
    [anon_sym_tsta] = ACTIONS(95),
    [anon_sym_tstb] = ACTIONS(95),
    [anon_sym_tst] = ACTIONS(95),
  },
  [20] = {
    [sym_pseudo_opcode] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [21] = {
    [sym__comment] = STATE(39),
    [sym__line_break] = ACTIONS(97),
    [sym_semicolon_comment] = ACTIONS(99),
    [sym_asterisk_comment] = ACTIONS(99),
  },
  [22] = {
    [sym__line_break] = ACTIONS(97),
  },
  [23] = {
    [sym__line_break] = ACTIONS(85),
    [sym_semicolon_comment] = ACTIONS(89),
    [sym_asterisk_comment] = ACTIONS(89),
  },
  [24] = {
    [sym_register] = STATE(41),
    [sym__register_exp] = STATE(42),
    [sym_operator] = STATE(43),
    [anon_sym_A] = ACTIONS(101),
    [anon_sym_B] = ACTIONS(101),
    [anon_sym_X] = ACTIONS(101),
    [anon_sym_Y] = ACTIONS(101),
    [anon_sym_U] = ACTIONS(101),
    [anon_sym_S] = ACTIONS(101),
    [anon_sym_PC] = ACTIONS(101),
    [anon_sym_CC] = ACTIONS(101),
    [anon_sym_DP] = ACTIONS(101),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
  },
  [25] = {
    [sym_symbol] = STATE(44),
    [sym_constant] = STATE(44),
    [sym__expression] = STATE(44),
    [sym__term] = STATE(44),
    [sym__identifier] = ACTIONS(105),
    [sym__decimal] = ACTIONS(107),
    [sym__octal] = ACTIONS(107),
    [sym__hexadecimal] = ACTIONS(107),
    [sym__binary] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_string] = ACTIONS(111),
  },
  [26] = {
    [sym__line_break] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(115),
    [sym_semicolon_comment] = ACTIONS(115),
    [sym_asterisk_comment] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
  },
  [27] = {
    [sym__line_break] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_semicolon_comment] = ACTIONS(121),
    [sym_asterisk_comment] = ACTIONS(121),
  },
  [28] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_semicolon_comment] = ACTIONS(125),
    [sym_asterisk_comment] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
  },
  [29] = {
    [sym__line] = STATE(29),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [sym_memnonic] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym__line_break] = ACTIONS(129),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(132),
    [sym__identifier] = ACTIONS(135),
    [sym_pseudo_opcode] = ACTIONS(138),
    [sym_semicolon_comment] = ACTIONS(141),
    [sym_asterisk_comment] = ACTIONS(141),
    [anon_sym_abx] = ACTIONS(144),
    [anon_sym_adca] = ACTIONS(144),
    [anon_sym_adcb] = ACTIONS(144),
    [anon_sym_adda] = ACTIONS(144),
    [anon_sym_addb] = ACTIONS(144),
    [anon_sym_addd] = ACTIONS(144),
    [anon_sym_anda] = ACTIONS(144),
    [anon_sym_andb] = ACTIONS(144),
    [anon_sym_andcc] = ACTIONS(144),
    [anon_sym_asla] = ACTIONS(144),
    [anon_sym_aslb] = ACTIONS(144),
    [anon_sym_asl] = ACTIONS(144),
    [anon_sym_asra] = ACTIONS(144),
    [anon_sym_asrb] = ACTIONS(144),
    [anon_sym_asr] = ACTIONS(144),
    [anon_sym_bita] = ACTIONS(144),
    [anon_sym_bitb] = ACTIONS(144),
    [anon_sym_bra] = ACTIONS(144),
    [anon_sym_bcc] = ACTIONS(144),
    [anon_sym_bcs] = ACTIONS(144),
    [anon_sym_beq] = ACTIONS(144),
    [anon_sym_bge] = ACTIONS(144),
    [anon_sym_bgt] = ACTIONS(144),
    [anon_sym_bhi] = ACTIONS(144),
    [anon_sym_bhs] = ACTIONS(144),
    [anon_sym_ble] = ACTIONS(144),
    [anon_sym_blo] = ACTIONS(144),
    [anon_sym_bls] = ACTIONS(144),
    [anon_sym_blt] = ACTIONS(144),
    [anon_sym_bmi] = ACTIONS(144),
    [anon_sym_bne] = ACTIONS(144),
    [anon_sym_bpl] = ACTIONS(144),
    [anon_sym_brn] = ACTIONS(144),
    [anon_sym_bsr] = ACTIONS(144),
    [anon_sym_bvc] = ACTIONS(144),
    [anon_sym_bvs] = ACTIONS(144),
    [anon_sym_lbra] = ACTIONS(144),
    [anon_sym_lbcc] = ACTIONS(144),
    [anon_sym_lbcs] = ACTIONS(144),
    [anon_sym_lbeq] = ACTIONS(144),
    [anon_sym_lbge] = ACTIONS(144),
    [anon_sym_lbgt] = ACTIONS(144),
    [anon_sym_lbhi] = ACTIONS(144),
    [anon_sym_lbhs] = ACTIONS(144),
    [anon_sym_lble] = ACTIONS(144),
    [anon_sym_lblo] = ACTIONS(144),
    [anon_sym_lbls] = ACTIONS(144),
    [anon_sym_lblt] = ACTIONS(144),
    [anon_sym_lbmi] = ACTIONS(144),
    [anon_sym_lbne] = ACTIONS(144),
    [anon_sym_lbpl] = ACTIONS(144),
    [anon_sym_lbrn] = ACTIONS(144),
    [anon_sym_lbsr] = ACTIONS(144),
    [anon_sym_lbvc] = ACTIONS(144),
    [anon_sym_lbvs] = ACTIONS(144),
    [anon_sym_clra] = ACTIONS(144),
    [anon_sym_clrb] = ACTIONS(144),
    [anon_sym_clr] = ACTIONS(144),
    [anon_sym_cmpa] = ACTIONS(144),
    [anon_sym_cmpb] = ACTIONS(144),
    [anon_sym_cmpd] = ACTIONS(144),
    [anon_sym_cmps] = ACTIONS(144),
    [anon_sym_cmpu] = ACTIONS(144),
    [anon_sym_cmpx] = ACTIONS(144),
    [anon_sym_cmpy] = ACTIONS(144),
    [anon_sym_coma] = ACTIONS(144),
    [anon_sym_comb] = ACTIONS(144),
    [anon_sym_com] = ACTIONS(144),
    [anon_sym_cwai] = ACTIONS(144),
    [anon_sym_daa] = ACTIONS(144),
    [anon_sym_deca] = ACTIONS(144),
    [anon_sym_decb] = ACTIONS(144),
    [anon_sym_dec] = ACTIONS(144),
    [anon_sym_eora] = ACTIONS(144),
    [anon_sym_eorb] = ACTIONS(144),
    [anon_sym_exg] = ACTIONS(144),
    [anon_sym_inca] = ACTIONS(144),
    [anon_sym_incb] = ACTIONS(144),
    [anon_sym_inc] = ACTIONS(144),
    [anon_sym_jmp] = ACTIONS(144),
    [anon_sym_jsr] = ACTIONS(144),
    [anon_sym_lda] = ACTIONS(144),
    [anon_sym_ldb] = ACTIONS(144),
    [anon_sym_ldd] = ACTIONS(144),
    [anon_sym_lds] = ACTIONS(144),
    [anon_sym_ldu] = ACTIONS(144),
    [anon_sym_ldx] = ACTIONS(144),
    [anon_sym_ldy] = ACTIONS(144),
    [anon_sym_leas] = ACTIONS(144),
    [anon_sym_leau] = ACTIONS(144),
    [anon_sym_leax] = ACTIONS(144),
    [anon_sym_leay] = ACTIONS(144),
    [anon_sym_lsla] = ACTIONS(144),
    [anon_sym_lslb] = ACTIONS(144),
    [anon_sym_lsl] = ACTIONS(144),
    [anon_sym_lsra] = ACTIONS(144),
    [anon_sym_lsrb] = ACTIONS(144),
    [anon_sym_lsr] = ACTIONS(144),
    [anon_sym_mul] = ACTIONS(144),
    [anon_sym_nega] = ACTIONS(144),
    [anon_sym_negb] = ACTIONS(144),
    [anon_sym_neg] = ACTIONS(144),
    [anon_sym_nop] = ACTIONS(144),
    [anon_sym_ora] = ACTIONS(144),
    [anon_sym_orb] = ACTIONS(144),
    [anon_sym_orcc] = ACTIONS(144),
    [anon_sym_pshs] = ACTIONS(144),
    [anon_sym_pshu] = ACTIONS(144),
    [anon_sym_puls] = ACTIONS(144),
    [anon_sym_pulu] = ACTIONS(144),
    [anon_sym_rola] = ACTIONS(144),
    [anon_sym_rolb] = ACTIONS(144),
    [anon_sym_rol] = ACTIONS(144),
    [anon_sym_rora] = ACTIONS(144),
    [anon_sym_rorb] = ACTIONS(144),
    [anon_sym_ror] = ACTIONS(144),
    [anon_sym_rti] = ACTIONS(144),
    [anon_sym_rts] = ACTIONS(144),
    [anon_sym_sbca] = ACTIONS(144),
    [anon_sym_sbcb] = ACTIONS(144),
    [anon_sym_sex] = ACTIONS(144),
    [anon_sym_sta] = ACTIONS(144),
    [anon_sym_stb] = ACTIONS(144),
    [anon_sym_std] = ACTIONS(144),
    [anon_sym_sts] = ACTIONS(144),
    [anon_sym_stu] = ACTIONS(144),
    [anon_sym_stx] = ACTIONS(144),
    [anon_sym_sty] = ACTIONS(144),
    [anon_sym_suba] = ACTIONS(144),
    [anon_sym_subb] = ACTIONS(144),
    [anon_sym_subd] = ACTIONS(144),
    [anon_sym_swi] = ACTIONS(144),
    [anon_sym_swi2] = ACTIONS(144),
    [anon_sym_swi3] = ACTIONS(144),
    [anon_sym_sync] = ACTIONS(144),
    [anon_sym_tfr] = ACTIONS(144),
    [anon_sym_tsta] = ACTIONS(144),
    [anon_sym_tstb] = ACTIONS(144),
    [anon_sym_tst] = ACTIONS(144),
  },
  [30] = {
    [sym__line_break] = ACTIONS(147),
    [sym__identifier] = ACTIONS(149),
    [sym_pseudo_opcode] = ACTIONS(149),
    [sym_semicolon_comment] = ACTIONS(149),
    [sym_asterisk_comment] = ACTIONS(149),
    [anon_sym_abx] = ACTIONS(149),
    [anon_sym_adca] = ACTIONS(149),
    [anon_sym_adcb] = ACTIONS(149),
    [anon_sym_adda] = ACTIONS(149),
    [anon_sym_addb] = ACTIONS(149),
    [anon_sym_addd] = ACTIONS(149),
    [anon_sym_anda] = ACTIONS(149),
    [anon_sym_andb] = ACTIONS(149),
    [anon_sym_andcc] = ACTIONS(149),
    [anon_sym_asla] = ACTIONS(149),
    [anon_sym_aslb] = ACTIONS(149),
    [anon_sym_asl] = ACTIONS(149),
    [anon_sym_asra] = ACTIONS(149),
    [anon_sym_asrb] = ACTIONS(149),
    [anon_sym_asr] = ACTIONS(149),
    [anon_sym_bita] = ACTIONS(149),
    [anon_sym_bitb] = ACTIONS(149),
    [anon_sym_bra] = ACTIONS(149),
    [anon_sym_bcc] = ACTIONS(149),
    [anon_sym_bcs] = ACTIONS(149),
    [anon_sym_beq] = ACTIONS(149),
    [anon_sym_bge] = ACTIONS(149),
    [anon_sym_bgt] = ACTIONS(149),
    [anon_sym_bhi] = ACTIONS(149),
    [anon_sym_bhs] = ACTIONS(149),
    [anon_sym_ble] = ACTIONS(149),
    [anon_sym_blo] = ACTIONS(149),
    [anon_sym_bls] = ACTIONS(149),
    [anon_sym_blt] = ACTIONS(149),
    [anon_sym_bmi] = ACTIONS(149),
    [anon_sym_bne] = ACTIONS(149),
    [anon_sym_bpl] = ACTIONS(149),
    [anon_sym_brn] = ACTIONS(149),
    [anon_sym_bsr] = ACTIONS(149),
    [anon_sym_bvc] = ACTIONS(149),
    [anon_sym_bvs] = ACTIONS(149),
    [anon_sym_lbra] = ACTIONS(149),
    [anon_sym_lbcc] = ACTIONS(149),
    [anon_sym_lbcs] = ACTIONS(149),
    [anon_sym_lbeq] = ACTIONS(149),
    [anon_sym_lbge] = ACTIONS(149),
    [anon_sym_lbgt] = ACTIONS(149),
    [anon_sym_lbhi] = ACTIONS(149),
    [anon_sym_lbhs] = ACTIONS(149),
    [anon_sym_lble] = ACTIONS(149),
    [anon_sym_lblo] = ACTIONS(149),
    [anon_sym_lbls] = ACTIONS(149),
    [anon_sym_lblt] = ACTIONS(149),
    [anon_sym_lbmi] = ACTIONS(149),
    [anon_sym_lbne] = ACTIONS(149),
    [anon_sym_lbpl] = ACTIONS(149),
    [anon_sym_lbrn] = ACTIONS(149),
    [anon_sym_lbsr] = ACTIONS(149),
    [anon_sym_lbvc] = ACTIONS(149),
    [anon_sym_lbvs] = ACTIONS(149),
    [anon_sym_clra] = ACTIONS(149),
    [anon_sym_clrb] = ACTIONS(149),
    [anon_sym_clr] = ACTIONS(149),
    [anon_sym_cmpa] = ACTIONS(149),
    [anon_sym_cmpb] = ACTIONS(149),
    [anon_sym_cmpd] = ACTIONS(149),
    [anon_sym_cmps] = ACTIONS(149),
    [anon_sym_cmpu] = ACTIONS(149),
    [anon_sym_cmpx] = ACTIONS(149),
    [anon_sym_cmpy] = ACTIONS(149),
    [anon_sym_coma] = ACTIONS(149),
    [anon_sym_comb] = ACTIONS(149),
    [anon_sym_com] = ACTIONS(149),
    [anon_sym_cwai] = ACTIONS(149),
    [anon_sym_daa] = ACTIONS(149),
    [anon_sym_deca] = ACTIONS(149),
    [anon_sym_decb] = ACTIONS(149),
    [anon_sym_dec] = ACTIONS(149),
    [anon_sym_eora] = ACTIONS(149),
    [anon_sym_eorb] = ACTIONS(149),
    [anon_sym_exg] = ACTIONS(149),
    [anon_sym_inca] = ACTIONS(149),
    [anon_sym_incb] = ACTIONS(149),
    [anon_sym_inc] = ACTIONS(149),
    [anon_sym_jmp] = ACTIONS(149),
    [anon_sym_jsr] = ACTIONS(149),
    [anon_sym_lda] = ACTIONS(149),
    [anon_sym_ldb] = ACTIONS(149),
    [anon_sym_ldd] = ACTIONS(149),
    [anon_sym_lds] = ACTIONS(149),
    [anon_sym_ldu] = ACTIONS(149),
    [anon_sym_ldx] = ACTIONS(149),
    [anon_sym_ldy] = ACTIONS(149),
    [anon_sym_leas] = ACTIONS(149),
    [anon_sym_leau] = ACTIONS(149),
    [anon_sym_leax] = ACTIONS(149),
    [anon_sym_leay] = ACTIONS(149),
    [anon_sym_lsla] = ACTIONS(149),
    [anon_sym_lslb] = ACTIONS(149),
    [anon_sym_lsl] = ACTIONS(149),
    [anon_sym_lsra] = ACTIONS(149),
    [anon_sym_lsrb] = ACTIONS(149),
    [anon_sym_lsr] = ACTIONS(149),
    [anon_sym_mul] = ACTIONS(149),
    [anon_sym_nega] = ACTIONS(149),
    [anon_sym_negb] = ACTIONS(149),
    [anon_sym_neg] = ACTIONS(149),
    [anon_sym_nop] = ACTIONS(149),
    [anon_sym_ora] = ACTIONS(149),
    [anon_sym_orb] = ACTIONS(149),
    [anon_sym_orcc] = ACTIONS(149),
    [anon_sym_pshs] = ACTIONS(149),
    [anon_sym_pshu] = ACTIONS(149),
    [anon_sym_puls] = ACTIONS(149),
    [anon_sym_pulu] = ACTIONS(149),
    [anon_sym_rola] = ACTIONS(149),
    [anon_sym_rolb] = ACTIONS(149),
    [anon_sym_rol] = ACTIONS(149),
    [anon_sym_rora] = ACTIONS(149),
    [anon_sym_rorb] = ACTIONS(149),
    [anon_sym_ror] = ACTIONS(149),
    [anon_sym_rti] = ACTIONS(149),
    [anon_sym_rts] = ACTIONS(149),
    [anon_sym_sbca] = ACTIONS(149),
    [anon_sym_sbcb] = ACTIONS(149),
    [anon_sym_sex] = ACTIONS(149),
    [anon_sym_sta] = ACTIONS(149),
    [anon_sym_stb] = ACTIONS(149),
    [anon_sym_std] = ACTIONS(149),
    [anon_sym_sts] = ACTIONS(149),
    [anon_sym_stu] = ACTIONS(149),
    [anon_sym_stx] = ACTIONS(149),
    [anon_sym_sty] = ACTIONS(149),
    [anon_sym_suba] = ACTIONS(149),
    [anon_sym_subb] = ACTIONS(149),
    [anon_sym_subd] = ACTIONS(149),
    [anon_sym_swi] = ACTIONS(149),
    [anon_sym_swi2] = ACTIONS(149),
    [anon_sym_swi3] = ACTIONS(149),
    [anon_sym_sync] = ACTIONS(149),
    [anon_sym_tfr] = ACTIONS(149),
    [anon_sym_tsta] = ACTIONS(149),
    [anon_sym_tstb] = ACTIONS(149),
    [anon_sym_tst] = ACTIONS(149),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [32] = {
    [sym_symbol] = STATE(46),
    [sym_constant] = STATE(46),
    [sym__expression] = STATE(46),
    [sym__term] = STATE(46),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [sym__octal] = ACTIONS(79),
    [sym__hexadecimal] = ACTIONS(79),
    [sym__binary] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_string] = ACTIONS(151),
  },
  [33] = {
    [sym_operator] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(155),
  },
  [34] = {
    [sym_symbol] = STATE(49),
    [sym_constant] = STATE(49),
    [sym__expression] = STATE(49),
    [sym__term] = STATE(49),
    [sym__identifier] = ACTIONS(105),
    [sym__decimal] = ACTIONS(107),
    [sym__octal] = ACTIONS(107),
    [sym__hexadecimal] = ACTIONS(107),
    [sym__binary] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_string] = ACTIONS(157),
  },
  [35] = {
    [sym__identifier] = ACTIONS(159),
    [sym__decimal] = ACTIONS(159),
    [sym__octal] = ACTIONS(159),
    [sym__hexadecimal] = ACTIONS(159),
    [sym__binary] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [sym_string] = ACTIONS(159),
  },
  [36] = {
    [sym_symbol] = STATE(50),
    [sym_constant] = STATE(50),
    [sym__term] = STATE(50),
    [sym__identifier] = ACTIONS(105),
    [sym__decimal] = ACTIONS(107),
    [sym__octal] = ACTIONS(107),
    [sym__hexadecimal] = ACTIONS(107),
    [sym__binary] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_string] = ACTIONS(161),
  },
  [37] = {
    [aux_sym_assembler_directive_repeat1] = STATE(51),
    [sym__line_break] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_semicolon_comment] = ACTIONS(165),
    [sym_asterisk_comment] = ACTIONS(165),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym__line_break] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(169),
    [sym__identifier] = ACTIONS(169),
    [sym_pseudo_opcode] = ACTIONS(169),
    [sym_semicolon_comment] = ACTIONS(169),
    [sym_asterisk_comment] = ACTIONS(169),
    [anon_sym_abx] = ACTIONS(169),
    [anon_sym_adca] = ACTIONS(169),
    [anon_sym_adcb] = ACTIONS(169),
    [anon_sym_adda] = ACTIONS(169),
    [anon_sym_addb] = ACTIONS(169),
    [anon_sym_addd] = ACTIONS(169),
    [anon_sym_anda] = ACTIONS(169),
    [anon_sym_andb] = ACTIONS(169),
    [anon_sym_andcc] = ACTIONS(169),
    [anon_sym_asla] = ACTIONS(169),
    [anon_sym_aslb] = ACTIONS(169),
    [anon_sym_asl] = ACTIONS(169),
    [anon_sym_asra] = ACTIONS(169),
    [anon_sym_asrb] = ACTIONS(169),
    [anon_sym_asr] = ACTIONS(169),
    [anon_sym_bita] = ACTIONS(169),
    [anon_sym_bitb] = ACTIONS(169),
    [anon_sym_bra] = ACTIONS(169),
    [anon_sym_bcc] = ACTIONS(169),
    [anon_sym_bcs] = ACTIONS(169),
    [anon_sym_beq] = ACTIONS(169),
    [anon_sym_bge] = ACTIONS(169),
    [anon_sym_bgt] = ACTIONS(169),
    [anon_sym_bhi] = ACTIONS(169),
    [anon_sym_bhs] = ACTIONS(169),
    [anon_sym_ble] = ACTIONS(169),
    [anon_sym_blo] = ACTIONS(169),
    [anon_sym_bls] = ACTIONS(169),
    [anon_sym_blt] = ACTIONS(169),
    [anon_sym_bmi] = ACTIONS(169),
    [anon_sym_bne] = ACTIONS(169),
    [anon_sym_bpl] = ACTIONS(169),
    [anon_sym_brn] = ACTIONS(169),
    [anon_sym_bsr] = ACTIONS(169),
    [anon_sym_bvc] = ACTIONS(169),
    [anon_sym_bvs] = ACTIONS(169),
    [anon_sym_lbra] = ACTIONS(169),
    [anon_sym_lbcc] = ACTIONS(169),
    [anon_sym_lbcs] = ACTIONS(169),
    [anon_sym_lbeq] = ACTIONS(169),
    [anon_sym_lbge] = ACTIONS(169),
    [anon_sym_lbgt] = ACTIONS(169),
    [anon_sym_lbhi] = ACTIONS(169),
    [anon_sym_lbhs] = ACTIONS(169),
    [anon_sym_lble] = ACTIONS(169),
    [anon_sym_lblo] = ACTIONS(169),
    [anon_sym_lbls] = ACTIONS(169),
    [anon_sym_lblt] = ACTIONS(169),
    [anon_sym_lbmi] = ACTIONS(169),
    [anon_sym_lbne] = ACTIONS(169),
    [anon_sym_lbpl] = ACTIONS(169),
    [anon_sym_lbrn] = ACTIONS(169),
    [anon_sym_lbsr] = ACTIONS(169),
    [anon_sym_lbvc] = ACTIONS(169),
    [anon_sym_lbvs] = ACTIONS(169),
    [anon_sym_clra] = ACTIONS(169),
    [anon_sym_clrb] = ACTIONS(169),
    [anon_sym_clr] = ACTIONS(169),
    [anon_sym_cmpa] = ACTIONS(169),
    [anon_sym_cmpb] = ACTIONS(169),
    [anon_sym_cmpd] = ACTIONS(169),
    [anon_sym_cmps] = ACTIONS(169),
    [anon_sym_cmpu] = ACTIONS(169),
    [anon_sym_cmpx] = ACTIONS(169),
    [anon_sym_cmpy] = ACTIONS(169),
    [anon_sym_coma] = ACTIONS(169),
    [anon_sym_comb] = ACTIONS(169),
    [anon_sym_com] = ACTIONS(169),
    [anon_sym_cwai] = ACTIONS(169),
    [anon_sym_daa] = ACTIONS(169),
    [anon_sym_deca] = ACTIONS(169),
    [anon_sym_decb] = ACTIONS(169),
    [anon_sym_dec] = ACTIONS(169),
    [anon_sym_eora] = ACTIONS(169),
    [anon_sym_eorb] = ACTIONS(169),
    [anon_sym_exg] = ACTIONS(169),
    [anon_sym_inca] = ACTIONS(169),
    [anon_sym_incb] = ACTIONS(169),
    [anon_sym_inc] = ACTIONS(169),
    [anon_sym_jmp] = ACTIONS(169),
    [anon_sym_jsr] = ACTIONS(169),
    [anon_sym_lda] = ACTIONS(169),
    [anon_sym_ldb] = ACTIONS(169),
    [anon_sym_ldd] = ACTIONS(169),
    [anon_sym_lds] = ACTIONS(169),
    [anon_sym_ldu] = ACTIONS(169),
    [anon_sym_ldx] = ACTIONS(169),
    [anon_sym_ldy] = ACTIONS(169),
    [anon_sym_leas] = ACTIONS(169),
    [anon_sym_leau] = ACTIONS(169),
    [anon_sym_leax] = ACTIONS(169),
    [anon_sym_leay] = ACTIONS(169),
    [anon_sym_lsla] = ACTIONS(169),
    [anon_sym_lslb] = ACTIONS(169),
    [anon_sym_lsl] = ACTIONS(169),
    [anon_sym_lsra] = ACTIONS(169),
    [anon_sym_lsrb] = ACTIONS(169),
    [anon_sym_lsr] = ACTIONS(169),
    [anon_sym_mul] = ACTIONS(169),
    [anon_sym_nega] = ACTIONS(169),
    [anon_sym_negb] = ACTIONS(169),
    [anon_sym_neg] = ACTIONS(169),
    [anon_sym_nop] = ACTIONS(169),
    [anon_sym_ora] = ACTIONS(169),
    [anon_sym_orb] = ACTIONS(169),
    [anon_sym_orcc] = ACTIONS(169),
    [anon_sym_pshs] = ACTIONS(169),
    [anon_sym_pshu] = ACTIONS(169),
    [anon_sym_puls] = ACTIONS(169),
    [anon_sym_pulu] = ACTIONS(169),
    [anon_sym_rola] = ACTIONS(169),
    [anon_sym_rolb] = ACTIONS(169),
    [anon_sym_rol] = ACTIONS(169),
    [anon_sym_rora] = ACTIONS(169),
    [anon_sym_rorb] = ACTIONS(169),
    [anon_sym_ror] = ACTIONS(169),
    [anon_sym_rti] = ACTIONS(169),
    [anon_sym_rts] = ACTIONS(169),
    [anon_sym_sbca] = ACTIONS(169),
    [anon_sym_sbcb] = ACTIONS(169),
    [anon_sym_sex] = ACTIONS(169),
    [anon_sym_sta] = ACTIONS(169),
    [anon_sym_stb] = ACTIONS(169),
    [anon_sym_std] = ACTIONS(169),
    [anon_sym_sts] = ACTIONS(169),
    [anon_sym_stu] = ACTIONS(169),
    [anon_sym_stx] = ACTIONS(169),
    [anon_sym_sty] = ACTIONS(169),
    [anon_sym_suba] = ACTIONS(169),
    [anon_sym_subb] = ACTIONS(169),
    [anon_sym_subd] = ACTIONS(169),
    [anon_sym_swi] = ACTIONS(169),
    [anon_sym_swi2] = ACTIONS(169),
    [anon_sym_swi3] = ACTIONS(169),
    [anon_sym_sync] = ACTIONS(169),
    [anon_sym_tfr] = ACTIONS(169),
    [anon_sym_tsta] = ACTIONS(169),
    [anon_sym_tstb] = ACTIONS(169),
    [anon_sym_tst] = ACTIONS(169),
  },
  [39] = {
    [sym__line_break] = ACTIONS(171),
  },
  [40] = {
    [anon_sym_A] = ACTIONS(159),
    [anon_sym_B] = ACTIONS(159),
    [anon_sym_X] = ACTIONS(159),
    [anon_sym_Y] = ACTIONS(159),
    [anon_sym_U] = ACTIONS(159),
    [anon_sym_S] = ACTIONS(159),
    [anon_sym_PC] = ACTIONS(159),
    [anon_sym_CC] = ACTIONS(159),
    [anon_sym_DP] = ACTIONS(159),
    [anon_sym_D] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
  },
  [41] = {
    [sym_operator] = STATE(54),
    [sym__line_break] = ACTIONS(175),
    [sym_semicolon_comment] = ACTIONS(177),
    [sym_asterisk_comment] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
  },
  [42] = {
    [sym__line_break] = ACTIONS(181),
    [sym_semicolon_comment] = ACTIONS(183),
    [sym_asterisk_comment] = ACTIONS(183),
  },
  [43] = {
    [sym_register] = STATE(55),
    [sym_operator] = STATE(56),
    [anon_sym_A] = ACTIONS(101),
    [anon_sym_B] = ACTIONS(101),
    [anon_sym_X] = ACTIONS(101),
    [anon_sym_Y] = ACTIONS(101),
    [anon_sym_U] = ACTIONS(101),
    [anon_sym_S] = ACTIONS(101),
    [anon_sym_PC] = ACTIONS(101),
    [anon_sym_CC] = ACTIONS(101),
    [anon_sym_DP] = ACTIONS(101),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
  },
  [44] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_semicolon_comment] = ACTIONS(187),
    [sym_asterisk_comment] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
  },
  [45] = {
    [sym_register] = STATE(41),
    [sym__register_exp] = STATE(57),
    [sym_operator] = STATE(43),
    [anon_sym_A] = ACTIONS(101),
    [anon_sym_B] = ACTIONS(101),
    [anon_sym_X] = ACTIONS(101),
    [anon_sym_Y] = ACTIONS(101),
    [anon_sym_U] = ACTIONS(101),
    [anon_sym_S] = ACTIONS(101),
    [anon_sym_PC] = ACTIONS(101),
    [anon_sym_CC] = ACTIONS(101),
    [anon_sym_DP] = ACTIONS(101),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
  },
  [46] = {
    [sym_operator] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(189),
  },
  [47] = {
    [sym__line_break] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_semicolon_comment] = ACTIONS(193),
    [sym_asterisk_comment] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
  },
  [48] = {
    [sym_symbol] = STATE(59),
    [sym_constant] = STATE(59),
    [sym__term] = STATE(59),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [sym__octal] = ACTIONS(79),
    [sym__hexadecimal] = ACTIONS(79),
    [sym__binary] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_string] = ACTIONS(195),
  },
  [49] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [sym_semicolon_comment] = ACTIONS(199),
    [sym_asterisk_comment] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
  },
  [50] = {
    [sym__line_break] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_semicolon_comment] = ACTIONS(203),
    [sym_asterisk_comment] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
  },
  [51] = {
    [aux_sym_assembler_directive_repeat1] = STATE(51),
    [sym__line_break] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_semicolon_comment] = ACTIONS(199),
    [sym_asterisk_comment] = ACTIONS(199),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym__line_break] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(210),
    [sym__identifier] = ACTIONS(210),
    [sym_pseudo_opcode] = ACTIONS(210),
    [sym_semicolon_comment] = ACTIONS(210),
    [sym_asterisk_comment] = ACTIONS(210),
    [anon_sym_abx] = ACTIONS(210),
    [anon_sym_adca] = ACTIONS(210),
    [anon_sym_adcb] = ACTIONS(210),
    [anon_sym_adda] = ACTIONS(210),
    [anon_sym_addb] = ACTIONS(210),
    [anon_sym_addd] = ACTIONS(210),
    [anon_sym_anda] = ACTIONS(210),
    [anon_sym_andb] = ACTIONS(210),
    [anon_sym_andcc] = ACTIONS(210),
    [anon_sym_asla] = ACTIONS(210),
    [anon_sym_aslb] = ACTIONS(210),
    [anon_sym_asl] = ACTIONS(210),
    [anon_sym_asra] = ACTIONS(210),
    [anon_sym_asrb] = ACTIONS(210),
    [anon_sym_asr] = ACTIONS(210),
    [anon_sym_bita] = ACTIONS(210),
    [anon_sym_bitb] = ACTIONS(210),
    [anon_sym_bra] = ACTIONS(210),
    [anon_sym_bcc] = ACTIONS(210),
    [anon_sym_bcs] = ACTIONS(210),
    [anon_sym_beq] = ACTIONS(210),
    [anon_sym_bge] = ACTIONS(210),
    [anon_sym_bgt] = ACTIONS(210),
    [anon_sym_bhi] = ACTIONS(210),
    [anon_sym_bhs] = ACTIONS(210),
    [anon_sym_ble] = ACTIONS(210),
    [anon_sym_blo] = ACTIONS(210),
    [anon_sym_bls] = ACTIONS(210),
    [anon_sym_blt] = ACTIONS(210),
    [anon_sym_bmi] = ACTIONS(210),
    [anon_sym_bne] = ACTIONS(210),
    [anon_sym_bpl] = ACTIONS(210),
    [anon_sym_brn] = ACTIONS(210),
    [anon_sym_bsr] = ACTIONS(210),
    [anon_sym_bvc] = ACTIONS(210),
    [anon_sym_bvs] = ACTIONS(210),
    [anon_sym_lbra] = ACTIONS(210),
    [anon_sym_lbcc] = ACTIONS(210),
    [anon_sym_lbcs] = ACTIONS(210),
    [anon_sym_lbeq] = ACTIONS(210),
    [anon_sym_lbge] = ACTIONS(210),
    [anon_sym_lbgt] = ACTIONS(210),
    [anon_sym_lbhi] = ACTIONS(210),
    [anon_sym_lbhs] = ACTIONS(210),
    [anon_sym_lble] = ACTIONS(210),
    [anon_sym_lblo] = ACTIONS(210),
    [anon_sym_lbls] = ACTIONS(210),
    [anon_sym_lblt] = ACTIONS(210),
    [anon_sym_lbmi] = ACTIONS(210),
    [anon_sym_lbne] = ACTIONS(210),
    [anon_sym_lbpl] = ACTIONS(210),
    [anon_sym_lbrn] = ACTIONS(210),
    [anon_sym_lbsr] = ACTIONS(210),
    [anon_sym_lbvc] = ACTIONS(210),
    [anon_sym_lbvs] = ACTIONS(210),
    [anon_sym_clra] = ACTIONS(210),
    [anon_sym_clrb] = ACTIONS(210),
    [anon_sym_clr] = ACTIONS(210),
    [anon_sym_cmpa] = ACTIONS(210),
    [anon_sym_cmpb] = ACTIONS(210),
    [anon_sym_cmpd] = ACTIONS(210),
    [anon_sym_cmps] = ACTIONS(210),
    [anon_sym_cmpu] = ACTIONS(210),
    [anon_sym_cmpx] = ACTIONS(210),
    [anon_sym_cmpy] = ACTIONS(210),
    [anon_sym_coma] = ACTIONS(210),
    [anon_sym_comb] = ACTIONS(210),
    [anon_sym_com] = ACTIONS(210),
    [anon_sym_cwai] = ACTIONS(210),
    [anon_sym_daa] = ACTIONS(210),
    [anon_sym_deca] = ACTIONS(210),
    [anon_sym_decb] = ACTIONS(210),
    [anon_sym_dec] = ACTIONS(210),
    [anon_sym_eora] = ACTIONS(210),
    [anon_sym_eorb] = ACTIONS(210),
    [anon_sym_exg] = ACTIONS(210),
    [anon_sym_inca] = ACTIONS(210),
    [anon_sym_incb] = ACTIONS(210),
    [anon_sym_inc] = ACTIONS(210),
    [anon_sym_jmp] = ACTIONS(210),
    [anon_sym_jsr] = ACTIONS(210),
    [anon_sym_lda] = ACTIONS(210),
    [anon_sym_ldb] = ACTIONS(210),
    [anon_sym_ldd] = ACTIONS(210),
    [anon_sym_lds] = ACTIONS(210),
    [anon_sym_ldu] = ACTIONS(210),
    [anon_sym_ldx] = ACTIONS(210),
    [anon_sym_ldy] = ACTIONS(210),
    [anon_sym_leas] = ACTIONS(210),
    [anon_sym_leau] = ACTIONS(210),
    [anon_sym_leax] = ACTIONS(210),
    [anon_sym_leay] = ACTIONS(210),
    [anon_sym_lsla] = ACTIONS(210),
    [anon_sym_lslb] = ACTIONS(210),
    [anon_sym_lsl] = ACTIONS(210),
    [anon_sym_lsra] = ACTIONS(210),
    [anon_sym_lsrb] = ACTIONS(210),
    [anon_sym_lsr] = ACTIONS(210),
    [anon_sym_mul] = ACTIONS(210),
    [anon_sym_nega] = ACTIONS(210),
    [anon_sym_negb] = ACTIONS(210),
    [anon_sym_neg] = ACTIONS(210),
    [anon_sym_nop] = ACTIONS(210),
    [anon_sym_ora] = ACTIONS(210),
    [anon_sym_orb] = ACTIONS(210),
    [anon_sym_orcc] = ACTIONS(210),
    [anon_sym_pshs] = ACTIONS(210),
    [anon_sym_pshu] = ACTIONS(210),
    [anon_sym_puls] = ACTIONS(210),
    [anon_sym_pulu] = ACTIONS(210),
    [anon_sym_rola] = ACTIONS(210),
    [anon_sym_rolb] = ACTIONS(210),
    [anon_sym_rol] = ACTIONS(210),
    [anon_sym_rora] = ACTIONS(210),
    [anon_sym_rorb] = ACTIONS(210),
    [anon_sym_ror] = ACTIONS(210),
    [anon_sym_rti] = ACTIONS(210),
    [anon_sym_rts] = ACTIONS(210),
    [anon_sym_sbca] = ACTIONS(210),
    [anon_sym_sbcb] = ACTIONS(210),
    [anon_sym_sex] = ACTIONS(210),
    [anon_sym_sta] = ACTIONS(210),
    [anon_sym_stb] = ACTIONS(210),
    [anon_sym_std] = ACTIONS(210),
    [anon_sym_sts] = ACTIONS(210),
    [anon_sym_stu] = ACTIONS(210),
    [anon_sym_stx] = ACTIONS(210),
    [anon_sym_sty] = ACTIONS(210),
    [anon_sym_suba] = ACTIONS(210),
    [anon_sym_subb] = ACTIONS(210),
    [anon_sym_subd] = ACTIONS(210),
    [anon_sym_swi] = ACTIONS(210),
    [anon_sym_swi2] = ACTIONS(210),
    [anon_sym_swi3] = ACTIONS(210),
    [anon_sym_sync] = ACTIONS(210),
    [anon_sym_tfr] = ACTIONS(210),
    [anon_sym_tsta] = ACTIONS(210),
    [anon_sym_tstb] = ACTIONS(210),
    [anon_sym_tst] = ACTIONS(210),
  },
  [53] = {
    [sym__line_break] = ACTIONS(159),
    [sym_semicolon_comment] = ACTIONS(173),
    [sym_asterisk_comment] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
  },
  [54] = {
    [sym_operator] = STATE(60),
    [sym__line_break] = ACTIONS(212),
    [sym_semicolon_comment] = ACTIONS(214),
    [sym_asterisk_comment] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
  },
  [55] = {
    [sym__line_break] = ACTIONS(212),
    [sym_semicolon_comment] = ACTIONS(214),
    [sym_asterisk_comment] = ACTIONS(214),
  },
  [56] = {
    [sym_register] = STATE(60),
    [anon_sym_A] = ACTIONS(101),
    [anon_sym_B] = ACTIONS(101),
    [anon_sym_X] = ACTIONS(101),
    [anon_sym_Y] = ACTIONS(101),
    [anon_sym_U] = ACTIONS(101),
    [anon_sym_S] = ACTIONS(101),
    [anon_sym_PC] = ACTIONS(101),
    [anon_sym_CC] = ACTIONS(101),
    [anon_sym_DP] = ACTIONS(101),
    [anon_sym_D] = ACTIONS(55),
  },
  [57] = {
    [sym__line_break] = ACTIONS(216),
    [sym_semicolon_comment] = ACTIONS(218),
    [sym_asterisk_comment] = ACTIONS(218),
  },
  [58] = {
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
  },
  [59] = {
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
  },
  [60] = {
    [sym__line_break] = ACTIONS(220),
    [sym_semicolon_comment] = ACTIONS(222),
    [sym_asterisk_comment] = ACTIONS(222),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(12),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(10),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = false}, SHIFT(16),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_memnonic, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_memnonic, 1),
  [39] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = false}, SHIFT(20),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, SHIFT(25),
  [55] = {.count = 1, .reusable = false}, SHIFT(26),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(20),
  [79] = {.count = 1, .reusable = true}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = true}, SHIFT(33),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 2),
  [87] = {.count = 1, .reusable = false}, SHIFT(34),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 2),
  [91] = {.count = 1, .reusable = false}, SHIFT(35),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(38),
  [99] = {.count = 1, .reusable = false}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, SHIFT(26),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = true}, SHIFT(15),
  [107] = {.count = 1, .reusable = true}, SHIFT(16),
  [109] = {.count = 1, .reusable = true}, SHIFT(17),
  [111] = {.count = 1, .reusable = true}, SHIFT(44),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(45),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(46),
  [153] = {.count = 1, .reusable = true}, SHIFT(35),
  [155] = {.count = 1, .reusable = true}, SHIFT(47),
  [157] = {.count = 1, .reusable = true}, SHIFT(49),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(50),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [171] = {.count = 1, .reusable = true}, SHIFT(52),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [179] = {.count = 1, .reusable = false}, SHIFT(53),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(58),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [195] = {.count = 1, .reusable = true}, SHIFT(59),
  [197] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [205] = {.count = 2, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2), SHIFT_REPEAT(34),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm6809() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
