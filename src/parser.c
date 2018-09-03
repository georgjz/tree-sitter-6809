#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 61
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 171
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
  aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH = 9,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH = 10,
  aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH = 11,
  aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH = 12,
  aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH = 13,
  aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH = 14,
  anon_sym_A = 15,
  anon_sym_B = 16,
  anon_sym_X = 17,
  anon_sym_Y = 18,
  anon_sym_U = 19,
  anon_sym_S = 20,
  anon_sym_PC = 21,
  anon_sym_CC = 22,
  anon_sym_DP = 23,
  anon_sym_D = 24,
  sym_semicolon_comment = 25,
  sym_asterisk_comment = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  sym_string = 31,
  anon_sym_abx = 32,
  anon_sym_adca = 33,
  anon_sym_adcb = 34,
  anon_sym_adda = 35,
  anon_sym_addb = 36,
  anon_sym_addd = 37,
  anon_sym_anda = 38,
  anon_sym_andb = 39,
  anon_sym_andcc = 40,
  anon_sym_asla = 41,
  anon_sym_aslb = 42,
  anon_sym_asl = 43,
  anon_sym_asra = 44,
  anon_sym_asrb = 45,
  anon_sym_asr = 46,
  anon_sym_bita = 47,
  anon_sym_bitb = 48,
  anon_sym_bra = 49,
  anon_sym_bcc = 50,
  anon_sym_bcs = 51,
  anon_sym_beq = 52,
  anon_sym_bge = 53,
  anon_sym_bgt = 54,
  anon_sym_bhi = 55,
  anon_sym_bhs = 56,
  anon_sym_ble = 57,
  anon_sym_blo = 58,
  anon_sym_bls = 59,
  anon_sym_blt = 60,
  anon_sym_bmi = 61,
  anon_sym_bne = 62,
  anon_sym_bpl = 63,
  anon_sym_brn = 64,
  anon_sym_bsr = 65,
  anon_sym_bvc = 66,
  anon_sym_bvs = 67,
  anon_sym_lbra = 68,
  anon_sym_lbcc = 69,
  anon_sym_lbcs = 70,
  anon_sym_lbeq = 71,
  anon_sym_lbge = 72,
  anon_sym_lbgt = 73,
  anon_sym_lbhi = 74,
  anon_sym_lbhs = 75,
  anon_sym_lble = 76,
  anon_sym_lblo = 77,
  anon_sym_lbls = 78,
  anon_sym_lblt = 79,
  anon_sym_lbmi = 80,
  anon_sym_lbne = 81,
  anon_sym_lbpl = 82,
  anon_sym_lbrn = 83,
  anon_sym_lbsr = 84,
  anon_sym_lbvc = 85,
  anon_sym_lbvs = 86,
  anon_sym_clra = 87,
  anon_sym_clrb = 88,
  anon_sym_clr = 89,
  anon_sym_cmpa = 90,
  anon_sym_cmpb = 91,
  anon_sym_cmpd = 92,
  anon_sym_cmps = 93,
  anon_sym_cmpu = 94,
  anon_sym_cmpx = 95,
  anon_sym_cmpy = 96,
  anon_sym_coma = 97,
  anon_sym_comb = 98,
  anon_sym_com = 99,
  anon_sym_cwai = 100,
  anon_sym_daa = 101,
  anon_sym_deca = 102,
  anon_sym_decb = 103,
  anon_sym_dec = 104,
  anon_sym_eora = 105,
  anon_sym_eorb = 106,
  anon_sym_exg = 107,
  anon_sym_inca = 108,
  anon_sym_incb = 109,
  anon_sym_inc = 110,
  anon_sym_jmp = 111,
  anon_sym_jsr = 112,
  anon_sym_lda = 113,
  anon_sym_ldb = 114,
  anon_sym_ldd = 115,
  anon_sym_lds = 116,
  anon_sym_ldu = 117,
  anon_sym_ldx = 118,
  anon_sym_ldy = 119,
  anon_sym_leas = 120,
  anon_sym_leau = 121,
  anon_sym_leax = 122,
  anon_sym_leay = 123,
  anon_sym_lsla = 124,
  anon_sym_lslb = 125,
  anon_sym_lsl = 126,
  anon_sym_lsra = 127,
  anon_sym_lsrb = 128,
  anon_sym_lsr = 129,
  anon_sym_mul = 130,
  anon_sym_nega = 131,
  anon_sym_negb = 132,
  anon_sym_neg = 133,
  anon_sym_nop = 134,
  anon_sym_ora = 135,
  anon_sym_orb = 136,
  anon_sym_orcc = 137,
  anon_sym_pshs = 138,
  anon_sym_pshu = 139,
  anon_sym_puls = 140,
  anon_sym_pulu = 141,
  anon_sym_rola = 142,
  anon_sym_rolb = 143,
  anon_sym_rol = 144,
  anon_sym_rora = 145,
  anon_sym_rorb = 146,
  anon_sym_ror = 147,
  anon_sym_rti = 148,
  anon_sym_rts = 149,
  anon_sym_sbca = 150,
  anon_sym_sbcb = 151,
  anon_sym_sex = 152,
  anon_sym_sta = 153,
  anon_sym_stb = 154,
  anon_sym_std = 155,
  anon_sym_sts = 156,
  anon_sym_stu = 157,
  anon_sym_stx = 158,
  anon_sym_sty = 159,
  anon_sym_suba = 160,
  anon_sym_subb = 161,
  anon_sym_subd = 162,
  anon_sym_swi = 163,
  anon_sym_swi2 = 164,
  anon_sym_swi3 = 165,
  anon_sym_sync = 166,
  anon_sym_tfr = 167,
  anon_sym_tsta = 168,
  anon_sym_tstb = 169,
  anon_sym_tst = 170,
  sym_source_file = 171,
  sym__line = 172,
  sym_label = 173,
  sym_symbol = 174,
  sym__instruction = 175,
  sym_opcode = 176,
  sym_assembler_directive = 177,
  sym__operand = 178,
  sym_constant = 179,
  sym__octal = 180,
  sym__hexadecimal = 181,
  sym__binary = 182,
  sym_register = 183,
  sym__comment = 184,
  sym__register_exp = 185,
  sym_operator = 186,
  sym__expression = 187,
  sym__term = 188,
  sym_memnonic = 189,
  aux_sym_source_file_repeat1 = 190,
  aux_sym_assembler_directive_repeat1 = 191,
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
  [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = "/\\@[0-7]+/",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = "/[0-7]+[qQoO]/",
  [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = "/(\\$|0[xX])[a-fA-Z0-9]+/",
  [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = "/[a-fA-F0-9]+H/",
  [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = "/\\%[01]+/",
  [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = "/[01]+[bB]/",
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
  [sym__octal] = "_octal",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__binary] = "_binary",
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
  [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'B')
        ADVANCE(29);
      if (lookahead == 'C')
        ADVANCE(30);
      if (lookahead == 'D')
        ADVANCE(32);
      if (lookahead == 'P')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(36);
      if (lookahead == 'U')
        ADVANCE(37);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == 'Y')
        ADVANCE(39);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(64);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(120);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'j')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(146);
      if (lookahead == 'm')
        ADVANCE(199);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == 'o')
        ADVANCE(209);
      if (lookahead == 'p')
        ADVANCE(215);
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(33);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(35);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(41);
      if (lookahead == 'd')
        ADVANCE(43);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_abx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(44);
      if (lookahead == 'd')
        ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_adca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_adcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'b')
        ADVANCE(49);
      if (lookahead == 'd')
        ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_adda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_addb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_addd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(53);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_anda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_andb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_andcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(58);
      if (lookahead == 'r')
        ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_asl);
      if (lookahead == 'a')
        ADVANCE(59);
      if (lookahead == 'b')
        ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_asla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_aslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_asr);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'b')
        ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_asra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_asrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(68);
      if (lookahead == 'g')
        ADVANCE(70);
      if (lookahead == 'h')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(76);
      if (lookahead == 'l')
        ADVANCE(80);
      if (lookahead == 'm')
        ADVANCE(85);
      if (lookahead == 'n')
        ADVANCE(87);
      if (lookahead == 'p')
        ADVANCE(89);
      if (lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 's')
        ADVANCE(94);
      if (lookahead == 'v')
        ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(66);
      if (lookahead == 's')
        ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bita);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bitb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(81);
      if (lookahead == 'o')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_blo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_bra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_brn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_bsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(97);
      if (lookahead == 's')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == 'w')
        ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_clr);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'b')
        ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_clra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_clrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == 'b')
        ADVANCE(107);
      if (lookahead == 'd')
        ADVANCE(108);
      if (lookahead == 's')
        ADVANCE(109);
      if (lookahead == 'u')
        ADVANCE(110);
      if (lookahead == 'x')
        ADVANCE(111);
      if (lookahead == 'y')
        ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cmpa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_cmpb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_cmpd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_cmps);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_cmpu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_cmpx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_cmpy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_com);
      if (lookahead == 'a')
        ADVANCE(115);
      if (lookahead == 'b')
        ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_coma);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_comb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_cwai);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_daa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_dec);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_deca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_decb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(128);
      if (lookahead == 'q')
        ADVANCE(132);
      if (lookahead == 'x')
        ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'b')
        ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_eora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_eorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_exg);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 'b')
        ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_inca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_incb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(142);
      if (lookahead == 's')
        ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(147);
      if (lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(148);
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 'g')
        ADVANCE(153);
      if (lookahead == 'h')
        ADVANCE(156);
      if (lookahead == 'l')
        ADVANCE(159);
      if (lookahead == 'm')
        ADVANCE(164);
      if (lookahead == 'n')
        ADVANCE(166);
      if (lookahead == 'p')
        ADVANCE(168);
      if (lookahead == 'r')
        ADVANCE(170);
      if (lookahead == 's')
        ADVANCE(173);
      if (lookahead == 'v')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(149);
      if (lookahead == 's')
        ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_lbcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_lbcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_lbeq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_lbge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_lbgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_lbhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_lbhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(160);
      if (lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 's')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_lble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_lblo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_lbls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_lblt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_lbmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_lbne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_lbpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(171);
      if (lookahead == 'n')
        ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_lbra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_lbrn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_lbsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(176);
      if (lookahead == 's')
        ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_lbvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_lbvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(179);
      if (lookahead == 'b')
        ADVANCE(180);
      if (lookahead == 'd')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == 'u')
        ADVANCE(183);
      if (lookahead == 'x')
        ADVANCE(184);
      if (lookahead == 'y')
        ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_lda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ldb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ldd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_lds);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ldu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(188);
      if (lookahead == 'u')
        ADVANCE(189);
      if (lookahead == 'x')
        ADVANCE(190);
      if (lookahead == 'y')
        ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_leas);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_leau);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_leax);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_leay);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead == 'r')
        ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_lsl);
      if (lookahead == 'a')
        ADVANCE(194);
      if (lookahead == 'b')
        ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_lsla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_lslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'b')
        ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_lsra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_lsrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(203);
      if (lookahead == 'o')
        ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead == 'b')
        ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_nega);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_negb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'b')
        ADVANCE(212);
      if (lookahead == 'c')
        ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_orb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_orcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(216);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_pshs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_pshu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(222);
      if (lookahead == 'u')
        ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_puls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_pulu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'b')
        ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_rola);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_rolb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead == 'b')
        ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_rora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_rorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 's')
        ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_rti);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_rts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 't')
        ADVANCE(242);
      if (lookahead == 'u')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(255);
      if (lookahead == 'y')
        ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(238);
      if (lookahead == 'b')
        ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_sbca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_sbcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sex);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(243);
      if (lookahead == 'b')
        ADVANCE(244);
      if (lookahead == 'd')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 'u')
        ADVANCE(247);
      if (lookahead == 'x')
        ADVANCE(248);
      if (lookahead == 'y')
        ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_stb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_std);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_stu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_stx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sty);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_suba);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_subb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_subd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_swi);
      if (lookahead == '2')
        ADVANCE(257);
      if (lookahead == '3')
        ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_swi2);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_swi3);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_sync);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_tfr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_tst);
      if (lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'b')
        ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_tsta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_tstb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 269:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(270);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(64);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(120);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'j')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(146);
      if (lookahead == 'm')
        ADVANCE(199);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == 'o')
        ADVANCE(209);
      if (lookahead == 'p')
        ADVANCE(215);
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 271:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '1')
        ADVANCE(274);
      if (lookahead == '@')
        ADVANCE(279);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(274);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(277);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(274);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'H')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH);
      if (lookahead == 'H')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(273);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(26);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 281:
      if (lookahead == ':')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      END_STATE();
    case 282:
      if (lookahead == 'q')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'u')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      END_STATE();
    case 285:
      if (lookahead == '\n')
        ADVANCE(270);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '1')
        ADVANCE(274);
      if (lookahead == ';')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(279);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 286:
      if (lookahead == '\n')
        ADVANCE(270);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '1')
        ADVANCE(274);
      if (lookahead == ';')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(279);
      if (lookahead == 'A')
        ADVANCE(287);
      if (lookahead == 'B')
        ADVANCE(288);
      if (lookahead == 'C')
        ADVANCE(289);
      if (lookahead == 'D')
        ADVANCE(291);
      if (lookahead == 'P')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(36);
      if (lookahead == 'U')
        ADVANCE(37);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == 'Y')
        ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'F' ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'H')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'H')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(290);
      if (lookahead == 'H')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'H')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'H')
        ADVANCE(28);
      if (lookahead == 'P')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 292:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      END_STATE();
    case 293:
      if (lookahead == '\n')
        ADVANCE(270);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      END_STATE();
    case 294:
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(296);
      if (lookahead == 'B')
        ADVANCE(297);
      if (lookahead == 'C')
        ADVANCE(298);
      if (lookahead == 'D')
        ADVANCE(300);
      if (lookahead == 'P')
        ADVANCE(302);
      if (lookahead == 'S')
        ADVANCE(304);
      if (lookahead == 'U')
        ADVANCE(305);
      if (lookahead == 'X')
        ADVANCE(306);
      if (lookahead == 'Y')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 298:
      if (lookahead == 'C')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 302:
      if (lookahead == 'C')
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 308:
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 269},
  [2] = {.lex_state = 271},
  [3] = {.lex_state = 281},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 286},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 269},
  [8] = {.lex_state = 281},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 269},
  [11] = {.lex_state = 286},
  [12] = {.lex_state = 269},
  [13] = {.lex_state = 281},
  [14] = {.lex_state = 269},
  [15] = {.lex_state = 293},
  [16] = {.lex_state = 293},
  [17] = {.lex_state = 271},
  [18] = {.lex_state = 293},
  [19] = {.lex_state = 269},
  [20] = {.lex_state = 294},
  [21] = {.lex_state = 269},
  [22] = {.lex_state = 269},
  [23] = {.lex_state = 269},
  [24] = {.lex_state = 295},
  [25] = {.lex_state = 271},
  [26] = {.lex_state = 293},
  [27] = {.lex_state = 285},
  [28] = {.lex_state = 293},
  [29] = {.lex_state = 269},
  [30] = {.lex_state = 269},
  [31] = {.lex_state = 308},
  [32] = {.lex_state = 271},
  [33] = {.lex_state = 308},
  [34] = {.lex_state = 271},
  [35] = {.lex_state = 271},
  [36] = {.lex_state = 271},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 269},
  [39] = {.lex_state = 269},
  [40] = {.lex_state = 295},
  [41] = {.lex_state = 293},
  [42] = {.lex_state = 269},
  [43] = {.lex_state = 295},
  [44] = {.lex_state = 293},
  [45] = {.lex_state = 295},
  [46] = {.lex_state = 308},
  [47] = {.lex_state = 293},
  [48] = {.lex_state = 271},
  [49] = {.lex_state = 293},
  [50] = {.lex_state = 293},
  [51] = {.lex_state = 285},
  [52] = {.lex_state = 269},
  [53] = {.lex_state = 293},
  [54] = {.lex_state = 293},
  [55] = {.lex_state = 269},
  [56] = {.lex_state = 295},
  [57] = {.lex_state = 269},
  [58] = {.lex_state = 308},
  [59] = {.lex_state = 308},
  [60] = {.lex_state = 269},
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
    [sym__decimal] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
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
    [sym__octal] = STATE(16),
    [sym__hexadecimal] = STATE(16),
    [sym__binary] = STATE(16),
    [sym__expression] = STATE(18),
    [sym__term] = STATE(18),
    [sym__line_break] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
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
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(37),
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
    [sym__octal] = STATE(16),
    [sym__hexadecimal] = STATE(16),
    [sym__binary] = STATE(16),
    [sym_register] = STATE(27),
    [sym__expression] = STATE(28),
    [sym__term] = STATE(28),
    [sym__line_break] = ACTIONS(49),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_imm_marker] = ACTIONS(53),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
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
    [sym__octal] = STATE(31),
    [sym__hexadecimal] = STATE(31),
    [sym__binary] = STATE(31),
    [sym__expression] = STATE(33),
    [sym__term] = STATE(33),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(83),
    [sym_string] = ACTIONS(85),
  },
  [18] = {
    [sym_operator] = STATE(36),
    [aux_sym_assembler_directive_repeat1] = STATE(37),
    [sym__line_break] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym_semicolon_comment] = ACTIONS(91),
    [sym_asterisk_comment] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym__line_break] = ACTIONS(95),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(97),
    [sym__identifier] = ACTIONS(97),
    [sym_pseudo_opcode] = ACTIONS(97),
    [sym_semicolon_comment] = ACTIONS(97),
    [sym_asterisk_comment] = ACTIONS(97),
    [anon_sym_abx] = ACTIONS(97),
    [anon_sym_adca] = ACTIONS(97),
    [anon_sym_adcb] = ACTIONS(97),
    [anon_sym_adda] = ACTIONS(97),
    [anon_sym_addb] = ACTIONS(97),
    [anon_sym_addd] = ACTIONS(97),
    [anon_sym_anda] = ACTIONS(97),
    [anon_sym_andb] = ACTIONS(97),
    [anon_sym_andcc] = ACTIONS(97),
    [anon_sym_asla] = ACTIONS(97),
    [anon_sym_aslb] = ACTIONS(97),
    [anon_sym_asl] = ACTIONS(97),
    [anon_sym_asra] = ACTIONS(97),
    [anon_sym_asrb] = ACTIONS(97),
    [anon_sym_asr] = ACTIONS(97),
    [anon_sym_bita] = ACTIONS(97),
    [anon_sym_bitb] = ACTIONS(97),
    [anon_sym_bra] = ACTIONS(97),
    [anon_sym_bcc] = ACTIONS(97),
    [anon_sym_bcs] = ACTIONS(97),
    [anon_sym_beq] = ACTIONS(97),
    [anon_sym_bge] = ACTIONS(97),
    [anon_sym_bgt] = ACTIONS(97),
    [anon_sym_bhi] = ACTIONS(97),
    [anon_sym_bhs] = ACTIONS(97),
    [anon_sym_ble] = ACTIONS(97),
    [anon_sym_blo] = ACTIONS(97),
    [anon_sym_bls] = ACTIONS(97),
    [anon_sym_blt] = ACTIONS(97),
    [anon_sym_bmi] = ACTIONS(97),
    [anon_sym_bne] = ACTIONS(97),
    [anon_sym_bpl] = ACTIONS(97),
    [anon_sym_brn] = ACTIONS(97),
    [anon_sym_bsr] = ACTIONS(97),
    [anon_sym_bvc] = ACTIONS(97),
    [anon_sym_bvs] = ACTIONS(97),
    [anon_sym_lbra] = ACTIONS(97),
    [anon_sym_lbcc] = ACTIONS(97),
    [anon_sym_lbcs] = ACTIONS(97),
    [anon_sym_lbeq] = ACTIONS(97),
    [anon_sym_lbge] = ACTIONS(97),
    [anon_sym_lbgt] = ACTIONS(97),
    [anon_sym_lbhi] = ACTIONS(97),
    [anon_sym_lbhs] = ACTIONS(97),
    [anon_sym_lble] = ACTIONS(97),
    [anon_sym_lblo] = ACTIONS(97),
    [anon_sym_lbls] = ACTIONS(97),
    [anon_sym_lblt] = ACTIONS(97),
    [anon_sym_lbmi] = ACTIONS(97),
    [anon_sym_lbne] = ACTIONS(97),
    [anon_sym_lbpl] = ACTIONS(97),
    [anon_sym_lbrn] = ACTIONS(97),
    [anon_sym_lbsr] = ACTIONS(97),
    [anon_sym_lbvc] = ACTIONS(97),
    [anon_sym_lbvs] = ACTIONS(97),
    [anon_sym_clra] = ACTIONS(97),
    [anon_sym_clrb] = ACTIONS(97),
    [anon_sym_clr] = ACTIONS(97),
    [anon_sym_cmpa] = ACTIONS(97),
    [anon_sym_cmpb] = ACTIONS(97),
    [anon_sym_cmpd] = ACTIONS(97),
    [anon_sym_cmps] = ACTIONS(97),
    [anon_sym_cmpu] = ACTIONS(97),
    [anon_sym_cmpx] = ACTIONS(97),
    [anon_sym_cmpy] = ACTIONS(97),
    [anon_sym_coma] = ACTIONS(97),
    [anon_sym_comb] = ACTIONS(97),
    [anon_sym_com] = ACTIONS(97),
    [anon_sym_cwai] = ACTIONS(97),
    [anon_sym_daa] = ACTIONS(97),
    [anon_sym_deca] = ACTIONS(97),
    [anon_sym_decb] = ACTIONS(97),
    [anon_sym_dec] = ACTIONS(97),
    [anon_sym_eora] = ACTIONS(97),
    [anon_sym_eorb] = ACTIONS(97),
    [anon_sym_exg] = ACTIONS(97),
    [anon_sym_inca] = ACTIONS(97),
    [anon_sym_incb] = ACTIONS(97),
    [anon_sym_inc] = ACTIONS(97),
    [anon_sym_jmp] = ACTIONS(97),
    [anon_sym_jsr] = ACTIONS(97),
    [anon_sym_lda] = ACTIONS(97),
    [anon_sym_ldb] = ACTIONS(97),
    [anon_sym_ldd] = ACTIONS(97),
    [anon_sym_lds] = ACTIONS(97),
    [anon_sym_ldu] = ACTIONS(97),
    [anon_sym_ldx] = ACTIONS(97),
    [anon_sym_ldy] = ACTIONS(97),
    [anon_sym_leas] = ACTIONS(97),
    [anon_sym_leau] = ACTIONS(97),
    [anon_sym_leax] = ACTIONS(97),
    [anon_sym_leay] = ACTIONS(97),
    [anon_sym_lsla] = ACTIONS(97),
    [anon_sym_lslb] = ACTIONS(97),
    [anon_sym_lsl] = ACTIONS(97),
    [anon_sym_lsra] = ACTIONS(97),
    [anon_sym_lsrb] = ACTIONS(97),
    [anon_sym_lsr] = ACTIONS(97),
    [anon_sym_mul] = ACTIONS(97),
    [anon_sym_nega] = ACTIONS(97),
    [anon_sym_negb] = ACTIONS(97),
    [anon_sym_neg] = ACTIONS(97),
    [anon_sym_nop] = ACTIONS(97),
    [anon_sym_ora] = ACTIONS(97),
    [anon_sym_orb] = ACTIONS(97),
    [anon_sym_orcc] = ACTIONS(97),
    [anon_sym_pshs] = ACTIONS(97),
    [anon_sym_pshu] = ACTIONS(97),
    [anon_sym_puls] = ACTIONS(97),
    [anon_sym_pulu] = ACTIONS(97),
    [anon_sym_rola] = ACTIONS(97),
    [anon_sym_rolb] = ACTIONS(97),
    [anon_sym_rol] = ACTIONS(97),
    [anon_sym_rora] = ACTIONS(97),
    [anon_sym_rorb] = ACTIONS(97),
    [anon_sym_ror] = ACTIONS(97),
    [anon_sym_rti] = ACTIONS(97),
    [anon_sym_rts] = ACTIONS(97),
    [anon_sym_sbca] = ACTIONS(97),
    [anon_sym_sbcb] = ACTIONS(97),
    [anon_sym_sex] = ACTIONS(97),
    [anon_sym_sta] = ACTIONS(97),
    [anon_sym_stb] = ACTIONS(97),
    [anon_sym_std] = ACTIONS(97),
    [anon_sym_sts] = ACTIONS(97),
    [anon_sym_stu] = ACTIONS(97),
    [anon_sym_stx] = ACTIONS(97),
    [anon_sym_sty] = ACTIONS(97),
    [anon_sym_suba] = ACTIONS(97),
    [anon_sym_subb] = ACTIONS(97),
    [anon_sym_subd] = ACTIONS(97),
    [anon_sym_swi] = ACTIONS(97),
    [anon_sym_swi2] = ACTIONS(97),
    [anon_sym_swi3] = ACTIONS(97),
    [anon_sym_sync] = ACTIONS(97),
    [anon_sym_tfr] = ACTIONS(97),
    [anon_sym_tsta] = ACTIONS(97),
    [anon_sym_tstb] = ACTIONS(97),
    [anon_sym_tst] = ACTIONS(97),
  },
  [20] = {
    [sym_pseudo_opcode] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [21] = {
    [sym__comment] = STATE(39),
    [sym__line_break] = ACTIONS(99),
    [sym_semicolon_comment] = ACTIONS(101),
    [sym_asterisk_comment] = ACTIONS(101),
  },
  [22] = {
    [sym__line_break] = ACTIONS(99),
  },
  [23] = {
    [sym__line_break] = ACTIONS(87),
    [sym_semicolon_comment] = ACTIONS(91),
    [sym_asterisk_comment] = ACTIONS(91),
  },
  [24] = {
    [sym_register] = STATE(41),
    [sym__register_exp] = STATE(42),
    [sym_operator] = STATE(43),
    [anon_sym_A] = ACTIONS(103),
    [anon_sym_B] = ACTIONS(103),
    [anon_sym_X] = ACTIONS(103),
    [anon_sym_Y] = ACTIONS(103),
    [anon_sym_U] = ACTIONS(103),
    [anon_sym_S] = ACTIONS(103),
    [anon_sym_PC] = ACTIONS(103),
    [anon_sym_CC] = ACTIONS(103),
    [anon_sym_DP] = ACTIONS(103),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [25] = {
    [sym_symbol] = STATE(44),
    [sym_constant] = STATE(44),
    [sym__octal] = STATE(16),
    [sym__hexadecimal] = STATE(16),
    [sym__binary] = STATE(16),
    [sym__expression] = STATE(44),
    [sym__term] = STATE(44),
    [sym__identifier] = ACTIONS(107),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym_string] = ACTIONS(113),
  },
  [26] = {
    [sym__line_break] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(117),
    [sym_semicolon_comment] = ACTIONS(117),
    [sym_asterisk_comment] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
  },
  [27] = {
    [sym__line_break] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(121),
    [sym_semicolon_comment] = ACTIONS(123),
    [sym_asterisk_comment] = ACTIONS(123),
  },
  [28] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(127),
    [sym_semicolon_comment] = ACTIONS(127),
    [sym_asterisk_comment] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
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
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym__line_break] = ACTIONS(131),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(134),
    [sym__identifier] = ACTIONS(137),
    [sym_pseudo_opcode] = ACTIONS(140),
    [sym_semicolon_comment] = ACTIONS(143),
    [sym_asterisk_comment] = ACTIONS(143),
    [anon_sym_abx] = ACTIONS(146),
    [anon_sym_adca] = ACTIONS(146),
    [anon_sym_adcb] = ACTIONS(146),
    [anon_sym_adda] = ACTIONS(146),
    [anon_sym_addb] = ACTIONS(146),
    [anon_sym_addd] = ACTIONS(146),
    [anon_sym_anda] = ACTIONS(146),
    [anon_sym_andb] = ACTIONS(146),
    [anon_sym_andcc] = ACTIONS(146),
    [anon_sym_asla] = ACTIONS(146),
    [anon_sym_aslb] = ACTIONS(146),
    [anon_sym_asl] = ACTIONS(146),
    [anon_sym_asra] = ACTIONS(146),
    [anon_sym_asrb] = ACTIONS(146),
    [anon_sym_asr] = ACTIONS(146),
    [anon_sym_bita] = ACTIONS(146),
    [anon_sym_bitb] = ACTIONS(146),
    [anon_sym_bra] = ACTIONS(146),
    [anon_sym_bcc] = ACTIONS(146),
    [anon_sym_bcs] = ACTIONS(146),
    [anon_sym_beq] = ACTIONS(146),
    [anon_sym_bge] = ACTIONS(146),
    [anon_sym_bgt] = ACTIONS(146),
    [anon_sym_bhi] = ACTIONS(146),
    [anon_sym_bhs] = ACTIONS(146),
    [anon_sym_ble] = ACTIONS(146),
    [anon_sym_blo] = ACTIONS(146),
    [anon_sym_bls] = ACTIONS(146),
    [anon_sym_blt] = ACTIONS(146),
    [anon_sym_bmi] = ACTIONS(146),
    [anon_sym_bne] = ACTIONS(146),
    [anon_sym_bpl] = ACTIONS(146),
    [anon_sym_brn] = ACTIONS(146),
    [anon_sym_bsr] = ACTIONS(146),
    [anon_sym_bvc] = ACTIONS(146),
    [anon_sym_bvs] = ACTIONS(146),
    [anon_sym_lbra] = ACTIONS(146),
    [anon_sym_lbcc] = ACTIONS(146),
    [anon_sym_lbcs] = ACTIONS(146),
    [anon_sym_lbeq] = ACTIONS(146),
    [anon_sym_lbge] = ACTIONS(146),
    [anon_sym_lbgt] = ACTIONS(146),
    [anon_sym_lbhi] = ACTIONS(146),
    [anon_sym_lbhs] = ACTIONS(146),
    [anon_sym_lble] = ACTIONS(146),
    [anon_sym_lblo] = ACTIONS(146),
    [anon_sym_lbls] = ACTIONS(146),
    [anon_sym_lblt] = ACTIONS(146),
    [anon_sym_lbmi] = ACTIONS(146),
    [anon_sym_lbne] = ACTIONS(146),
    [anon_sym_lbpl] = ACTIONS(146),
    [anon_sym_lbrn] = ACTIONS(146),
    [anon_sym_lbsr] = ACTIONS(146),
    [anon_sym_lbvc] = ACTIONS(146),
    [anon_sym_lbvs] = ACTIONS(146),
    [anon_sym_clra] = ACTIONS(146),
    [anon_sym_clrb] = ACTIONS(146),
    [anon_sym_clr] = ACTIONS(146),
    [anon_sym_cmpa] = ACTIONS(146),
    [anon_sym_cmpb] = ACTIONS(146),
    [anon_sym_cmpd] = ACTIONS(146),
    [anon_sym_cmps] = ACTIONS(146),
    [anon_sym_cmpu] = ACTIONS(146),
    [anon_sym_cmpx] = ACTIONS(146),
    [anon_sym_cmpy] = ACTIONS(146),
    [anon_sym_coma] = ACTIONS(146),
    [anon_sym_comb] = ACTIONS(146),
    [anon_sym_com] = ACTIONS(146),
    [anon_sym_cwai] = ACTIONS(146),
    [anon_sym_daa] = ACTIONS(146),
    [anon_sym_deca] = ACTIONS(146),
    [anon_sym_decb] = ACTIONS(146),
    [anon_sym_dec] = ACTIONS(146),
    [anon_sym_eora] = ACTIONS(146),
    [anon_sym_eorb] = ACTIONS(146),
    [anon_sym_exg] = ACTIONS(146),
    [anon_sym_inca] = ACTIONS(146),
    [anon_sym_incb] = ACTIONS(146),
    [anon_sym_inc] = ACTIONS(146),
    [anon_sym_jmp] = ACTIONS(146),
    [anon_sym_jsr] = ACTIONS(146),
    [anon_sym_lda] = ACTIONS(146),
    [anon_sym_ldb] = ACTIONS(146),
    [anon_sym_ldd] = ACTIONS(146),
    [anon_sym_lds] = ACTIONS(146),
    [anon_sym_ldu] = ACTIONS(146),
    [anon_sym_ldx] = ACTIONS(146),
    [anon_sym_ldy] = ACTIONS(146),
    [anon_sym_leas] = ACTIONS(146),
    [anon_sym_leau] = ACTIONS(146),
    [anon_sym_leax] = ACTIONS(146),
    [anon_sym_leay] = ACTIONS(146),
    [anon_sym_lsla] = ACTIONS(146),
    [anon_sym_lslb] = ACTIONS(146),
    [anon_sym_lsl] = ACTIONS(146),
    [anon_sym_lsra] = ACTIONS(146),
    [anon_sym_lsrb] = ACTIONS(146),
    [anon_sym_lsr] = ACTIONS(146),
    [anon_sym_mul] = ACTIONS(146),
    [anon_sym_nega] = ACTIONS(146),
    [anon_sym_negb] = ACTIONS(146),
    [anon_sym_neg] = ACTIONS(146),
    [anon_sym_nop] = ACTIONS(146),
    [anon_sym_ora] = ACTIONS(146),
    [anon_sym_orb] = ACTIONS(146),
    [anon_sym_orcc] = ACTIONS(146),
    [anon_sym_pshs] = ACTIONS(146),
    [anon_sym_pshu] = ACTIONS(146),
    [anon_sym_puls] = ACTIONS(146),
    [anon_sym_pulu] = ACTIONS(146),
    [anon_sym_rola] = ACTIONS(146),
    [anon_sym_rolb] = ACTIONS(146),
    [anon_sym_rol] = ACTIONS(146),
    [anon_sym_rora] = ACTIONS(146),
    [anon_sym_rorb] = ACTIONS(146),
    [anon_sym_ror] = ACTIONS(146),
    [anon_sym_rti] = ACTIONS(146),
    [anon_sym_rts] = ACTIONS(146),
    [anon_sym_sbca] = ACTIONS(146),
    [anon_sym_sbcb] = ACTIONS(146),
    [anon_sym_sex] = ACTIONS(146),
    [anon_sym_sta] = ACTIONS(146),
    [anon_sym_stb] = ACTIONS(146),
    [anon_sym_std] = ACTIONS(146),
    [anon_sym_sts] = ACTIONS(146),
    [anon_sym_stu] = ACTIONS(146),
    [anon_sym_stx] = ACTIONS(146),
    [anon_sym_sty] = ACTIONS(146),
    [anon_sym_suba] = ACTIONS(146),
    [anon_sym_subb] = ACTIONS(146),
    [anon_sym_subd] = ACTIONS(146),
    [anon_sym_swi] = ACTIONS(146),
    [anon_sym_swi2] = ACTIONS(146),
    [anon_sym_swi3] = ACTIONS(146),
    [anon_sym_sync] = ACTIONS(146),
    [anon_sym_tfr] = ACTIONS(146),
    [anon_sym_tsta] = ACTIONS(146),
    [anon_sym_tstb] = ACTIONS(146),
    [anon_sym_tst] = ACTIONS(146),
  },
  [30] = {
    [sym__line_break] = ACTIONS(149),
    [sym__identifier] = ACTIONS(151),
    [sym_pseudo_opcode] = ACTIONS(151),
    [sym_semicolon_comment] = ACTIONS(151),
    [sym_asterisk_comment] = ACTIONS(151),
    [anon_sym_abx] = ACTIONS(151),
    [anon_sym_adca] = ACTIONS(151),
    [anon_sym_adcb] = ACTIONS(151),
    [anon_sym_adda] = ACTIONS(151),
    [anon_sym_addb] = ACTIONS(151),
    [anon_sym_addd] = ACTIONS(151),
    [anon_sym_anda] = ACTIONS(151),
    [anon_sym_andb] = ACTIONS(151),
    [anon_sym_andcc] = ACTIONS(151),
    [anon_sym_asla] = ACTIONS(151),
    [anon_sym_aslb] = ACTIONS(151),
    [anon_sym_asl] = ACTIONS(151),
    [anon_sym_asra] = ACTIONS(151),
    [anon_sym_asrb] = ACTIONS(151),
    [anon_sym_asr] = ACTIONS(151),
    [anon_sym_bita] = ACTIONS(151),
    [anon_sym_bitb] = ACTIONS(151),
    [anon_sym_bra] = ACTIONS(151),
    [anon_sym_bcc] = ACTIONS(151),
    [anon_sym_bcs] = ACTIONS(151),
    [anon_sym_beq] = ACTIONS(151),
    [anon_sym_bge] = ACTIONS(151),
    [anon_sym_bgt] = ACTIONS(151),
    [anon_sym_bhi] = ACTIONS(151),
    [anon_sym_bhs] = ACTIONS(151),
    [anon_sym_ble] = ACTIONS(151),
    [anon_sym_blo] = ACTIONS(151),
    [anon_sym_bls] = ACTIONS(151),
    [anon_sym_blt] = ACTIONS(151),
    [anon_sym_bmi] = ACTIONS(151),
    [anon_sym_bne] = ACTIONS(151),
    [anon_sym_bpl] = ACTIONS(151),
    [anon_sym_brn] = ACTIONS(151),
    [anon_sym_bsr] = ACTIONS(151),
    [anon_sym_bvc] = ACTIONS(151),
    [anon_sym_bvs] = ACTIONS(151),
    [anon_sym_lbra] = ACTIONS(151),
    [anon_sym_lbcc] = ACTIONS(151),
    [anon_sym_lbcs] = ACTIONS(151),
    [anon_sym_lbeq] = ACTIONS(151),
    [anon_sym_lbge] = ACTIONS(151),
    [anon_sym_lbgt] = ACTIONS(151),
    [anon_sym_lbhi] = ACTIONS(151),
    [anon_sym_lbhs] = ACTIONS(151),
    [anon_sym_lble] = ACTIONS(151),
    [anon_sym_lblo] = ACTIONS(151),
    [anon_sym_lbls] = ACTIONS(151),
    [anon_sym_lblt] = ACTIONS(151),
    [anon_sym_lbmi] = ACTIONS(151),
    [anon_sym_lbne] = ACTIONS(151),
    [anon_sym_lbpl] = ACTIONS(151),
    [anon_sym_lbrn] = ACTIONS(151),
    [anon_sym_lbsr] = ACTIONS(151),
    [anon_sym_lbvc] = ACTIONS(151),
    [anon_sym_lbvs] = ACTIONS(151),
    [anon_sym_clra] = ACTIONS(151),
    [anon_sym_clrb] = ACTIONS(151),
    [anon_sym_clr] = ACTIONS(151),
    [anon_sym_cmpa] = ACTIONS(151),
    [anon_sym_cmpb] = ACTIONS(151),
    [anon_sym_cmpd] = ACTIONS(151),
    [anon_sym_cmps] = ACTIONS(151),
    [anon_sym_cmpu] = ACTIONS(151),
    [anon_sym_cmpx] = ACTIONS(151),
    [anon_sym_cmpy] = ACTIONS(151),
    [anon_sym_coma] = ACTIONS(151),
    [anon_sym_comb] = ACTIONS(151),
    [anon_sym_com] = ACTIONS(151),
    [anon_sym_cwai] = ACTIONS(151),
    [anon_sym_daa] = ACTIONS(151),
    [anon_sym_deca] = ACTIONS(151),
    [anon_sym_decb] = ACTIONS(151),
    [anon_sym_dec] = ACTIONS(151),
    [anon_sym_eora] = ACTIONS(151),
    [anon_sym_eorb] = ACTIONS(151),
    [anon_sym_exg] = ACTIONS(151),
    [anon_sym_inca] = ACTIONS(151),
    [anon_sym_incb] = ACTIONS(151),
    [anon_sym_inc] = ACTIONS(151),
    [anon_sym_jmp] = ACTIONS(151),
    [anon_sym_jsr] = ACTIONS(151),
    [anon_sym_lda] = ACTIONS(151),
    [anon_sym_ldb] = ACTIONS(151),
    [anon_sym_ldd] = ACTIONS(151),
    [anon_sym_lds] = ACTIONS(151),
    [anon_sym_ldu] = ACTIONS(151),
    [anon_sym_ldx] = ACTIONS(151),
    [anon_sym_ldy] = ACTIONS(151),
    [anon_sym_leas] = ACTIONS(151),
    [anon_sym_leau] = ACTIONS(151),
    [anon_sym_leax] = ACTIONS(151),
    [anon_sym_leay] = ACTIONS(151),
    [anon_sym_lsla] = ACTIONS(151),
    [anon_sym_lslb] = ACTIONS(151),
    [anon_sym_lsl] = ACTIONS(151),
    [anon_sym_lsra] = ACTIONS(151),
    [anon_sym_lsrb] = ACTIONS(151),
    [anon_sym_lsr] = ACTIONS(151),
    [anon_sym_mul] = ACTIONS(151),
    [anon_sym_nega] = ACTIONS(151),
    [anon_sym_negb] = ACTIONS(151),
    [anon_sym_neg] = ACTIONS(151),
    [anon_sym_nop] = ACTIONS(151),
    [anon_sym_ora] = ACTIONS(151),
    [anon_sym_orb] = ACTIONS(151),
    [anon_sym_orcc] = ACTIONS(151),
    [anon_sym_pshs] = ACTIONS(151),
    [anon_sym_pshu] = ACTIONS(151),
    [anon_sym_puls] = ACTIONS(151),
    [anon_sym_pulu] = ACTIONS(151),
    [anon_sym_rola] = ACTIONS(151),
    [anon_sym_rolb] = ACTIONS(151),
    [anon_sym_rol] = ACTIONS(151),
    [anon_sym_rora] = ACTIONS(151),
    [anon_sym_rorb] = ACTIONS(151),
    [anon_sym_ror] = ACTIONS(151),
    [anon_sym_rti] = ACTIONS(151),
    [anon_sym_rts] = ACTIONS(151),
    [anon_sym_sbca] = ACTIONS(151),
    [anon_sym_sbcb] = ACTIONS(151),
    [anon_sym_sex] = ACTIONS(151),
    [anon_sym_sta] = ACTIONS(151),
    [anon_sym_stb] = ACTIONS(151),
    [anon_sym_std] = ACTIONS(151),
    [anon_sym_sts] = ACTIONS(151),
    [anon_sym_stu] = ACTIONS(151),
    [anon_sym_stx] = ACTIONS(151),
    [anon_sym_sty] = ACTIONS(151),
    [anon_sym_suba] = ACTIONS(151),
    [anon_sym_subb] = ACTIONS(151),
    [anon_sym_subd] = ACTIONS(151),
    [anon_sym_swi] = ACTIONS(151),
    [anon_sym_swi2] = ACTIONS(151),
    [anon_sym_swi3] = ACTIONS(151),
    [anon_sym_sync] = ACTIONS(151),
    [anon_sym_tfr] = ACTIONS(151),
    [anon_sym_tsta] = ACTIONS(151),
    [anon_sym_tstb] = ACTIONS(151),
    [anon_sym_tst] = ACTIONS(151),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [32] = {
    [sym_symbol] = STATE(46),
    [sym_constant] = STATE(46),
    [sym__octal] = STATE(31),
    [sym__hexadecimal] = STATE(31),
    [sym__binary] = STATE(31),
    [sym__expression] = STATE(46),
    [sym__term] = STATE(46),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(83),
    [sym_string] = ACTIONS(153),
  },
  [33] = {
    [sym_operator] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(157),
  },
  [34] = {
    [sym_symbol] = STATE(49),
    [sym_constant] = STATE(49),
    [sym__octal] = STATE(16),
    [sym__hexadecimal] = STATE(16),
    [sym__binary] = STATE(16),
    [sym__expression] = STATE(49),
    [sym__term] = STATE(49),
    [sym__identifier] = ACTIONS(107),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym_string] = ACTIONS(159),
  },
  [35] = {
    [sym__identifier] = ACTIONS(161),
    [sym__decimal] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
  },
  [36] = {
    [sym_symbol] = STATE(50),
    [sym_constant] = STATE(50),
    [sym__octal] = STATE(16),
    [sym__hexadecimal] = STATE(16),
    [sym__binary] = STATE(16),
    [sym__term] = STATE(50),
    [sym__identifier] = ACTIONS(107),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym_string] = ACTIONS(165),
  },
  [37] = {
    [aux_sym_assembler_directive_repeat1] = STATE(51),
    [sym__line_break] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym_semicolon_comment] = ACTIONS(169),
    [sym_asterisk_comment] = ACTIONS(169),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym__line_break] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(173),
    [sym__identifier] = ACTIONS(173),
    [sym_pseudo_opcode] = ACTIONS(173),
    [sym_semicolon_comment] = ACTIONS(173),
    [sym_asterisk_comment] = ACTIONS(173),
    [anon_sym_abx] = ACTIONS(173),
    [anon_sym_adca] = ACTIONS(173),
    [anon_sym_adcb] = ACTIONS(173),
    [anon_sym_adda] = ACTIONS(173),
    [anon_sym_addb] = ACTIONS(173),
    [anon_sym_addd] = ACTIONS(173),
    [anon_sym_anda] = ACTIONS(173),
    [anon_sym_andb] = ACTIONS(173),
    [anon_sym_andcc] = ACTIONS(173),
    [anon_sym_asla] = ACTIONS(173),
    [anon_sym_aslb] = ACTIONS(173),
    [anon_sym_asl] = ACTIONS(173),
    [anon_sym_asra] = ACTIONS(173),
    [anon_sym_asrb] = ACTIONS(173),
    [anon_sym_asr] = ACTIONS(173),
    [anon_sym_bita] = ACTIONS(173),
    [anon_sym_bitb] = ACTIONS(173),
    [anon_sym_bra] = ACTIONS(173),
    [anon_sym_bcc] = ACTIONS(173),
    [anon_sym_bcs] = ACTIONS(173),
    [anon_sym_beq] = ACTIONS(173),
    [anon_sym_bge] = ACTIONS(173),
    [anon_sym_bgt] = ACTIONS(173),
    [anon_sym_bhi] = ACTIONS(173),
    [anon_sym_bhs] = ACTIONS(173),
    [anon_sym_ble] = ACTIONS(173),
    [anon_sym_blo] = ACTIONS(173),
    [anon_sym_bls] = ACTIONS(173),
    [anon_sym_blt] = ACTIONS(173),
    [anon_sym_bmi] = ACTIONS(173),
    [anon_sym_bne] = ACTIONS(173),
    [anon_sym_bpl] = ACTIONS(173),
    [anon_sym_brn] = ACTIONS(173),
    [anon_sym_bsr] = ACTIONS(173),
    [anon_sym_bvc] = ACTIONS(173),
    [anon_sym_bvs] = ACTIONS(173),
    [anon_sym_lbra] = ACTIONS(173),
    [anon_sym_lbcc] = ACTIONS(173),
    [anon_sym_lbcs] = ACTIONS(173),
    [anon_sym_lbeq] = ACTIONS(173),
    [anon_sym_lbge] = ACTIONS(173),
    [anon_sym_lbgt] = ACTIONS(173),
    [anon_sym_lbhi] = ACTIONS(173),
    [anon_sym_lbhs] = ACTIONS(173),
    [anon_sym_lble] = ACTIONS(173),
    [anon_sym_lblo] = ACTIONS(173),
    [anon_sym_lbls] = ACTIONS(173),
    [anon_sym_lblt] = ACTIONS(173),
    [anon_sym_lbmi] = ACTIONS(173),
    [anon_sym_lbne] = ACTIONS(173),
    [anon_sym_lbpl] = ACTIONS(173),
    [anon_sym_lbrn] = ACTIONS(173),
    [anon_sym_lbsr] = ACTIONS(173),
    [anon_sym_lbvc] = ACTIONS(173),
    [anon_sym_lbvs] = ACTIONS(173),
    [anon_sym_clra] = ACTIONS(173),
    [anon_sym_clrb] = ACTIONS(173),
    [anon_sym_clr] = ACTIONS(173),
    [anon_sym_cmpa] = ACTIONS(173),
    [anon_sym_cmpb] = ACTIONS(173),
    [anon_sym_cmpd] = ACTIONS(173),
    [anon_sym_cmps] = ACTIONS(173),
    [anon_sym_cmpu] = ACTIONS(173),
    [anon_sym_cmpx] = ACTIONS(173),
    [anon_sym_cmpy] = ACTIONS(173),
    [anon_sym_coma] = ACTIONS(173),
    [anon_sym_comb] = ACTIONS(173),
    [anon_sym_com] = ACTIONS(173),
    [anon_sym_cwai] = ACTIONS(173),
    [anon_sym_daa] = ACTIONS(173),
    [anon_sym_deca] = ACTIONS(173),
    [anon_sym_decb] = ACTIONS(173),
    [anon_sym_dec] = ACTIONS(173),
    [anon_sym_eora] = ACTIONS(173),
    [anon_sym_eorb] = ACTIONS(173),
    [anon_sym_exg] = ACTIONS(173),
    [anon_sym_inca] = ACTIONS(173),
    [anon_sym_incb] = ACTIONS(173),
    [anon_sym_inc] = ACTIONS(173),
    [anon_sym_jmp] = ACTIONS(173),
    [anon_sym_jsr] = ACTIONS(173),
    [anon_sym_lda] = ACTIONS(173),
    [anon_sym_ldb] = ACTIONS(173),
    [anon_sym_ldd] = ACTIONS(173),
    [anon_sym_lds] = ACTIONS(173),
    [anon_sym_ldu] = ACTIONS(173),
    [anon_sym_ldx] = ACTIONS(173),
    [anon_sym_ldy] = ACTIONS(173),
    [anon_sym_leas] = ACTIONS(173),
    [anon_sym_leau] = ACTIONS(173),
    [anon_sym_leax] = ACTIONS(173),
    [anon_sym_leay] = ACTIONS(173),
    [anon_sym_lsla] = ACTIONS(173),
    [anon_sym_lslb] = ACTIONS(173),
    [anon_sym_lsl] = ACTIONS(173),
    [anon_sym_lsra] = ACTIONS(173),
    [anon_sym_lsrb] = ACTIONS(173),
    [anon_sym_lsr] = ACTIONS(173),
    [anon_sym_mul] = ACTIONS(173),
    [anon_sym_nega] = ACTIONS(173),
    [anon_sym_negb] = ACTIONS(173),
    [anon_sym_neg] = ACTIONS(173),
    [anon_sym_nop] = ACTIONS(173),
    [anon_sym_ora] = ACTIONS(173),
    [anon_sym_orb] = ACTIONS(173),
    [anon_sym_orcc] = ACTIONS(173),
    [anon_sym_pshs] = ACTIONS(173),
    [anon_sym_pshu] = ACTIONS(173),
    [anon_sym_puls] = ACTIONS(173),
    [anon_sym_pulu] = ACTIONS(173),
    [anon_sym_rola] = ACTIONS(173),
    [anon_sym_rolb] = ACTIONS(173),
    [anon_sym_rol] = ACTIONS(173),
    [anon_sym_rora] = ACTIONS(173),
    [anon_sym_rorb] = ACTIONS(173),
    [anon_sym_ror] = ACTIONS(173),
    [anon_sym_rti] = ACTIONS(173),
    [anon_sym_rts] = ACTIONS(173),
    [anon_sym_sbca] = ACTIONS(173),
    [anon_sym_sbcb] = ACTIONS(173),
    [anon_sym_sex] = ACTIONS(173),
    [anon_sym_sta] = ACTIONS(173),
    [anon_sym_stb] = ACTIONS(173),
    [anon_sym_std] = ACTIONS(173),
    [anon_sym_sts] = ACTIONS(173),
    [anon_sym_stu] = ACTIONS(173),
    [anon_sym_stx] = ACTIONS(173),
    [anon_sym_sty] = ACTIONS(173),
    [anon_sym_suba] = ACTIONS(173),
    [anon_sym_subb] = ACTIONS(173),
    [anon_sym_subd] = ACTIONS(173),
    [anon_sym_swi] = ACTIONS(173),
    [anon_sym_swi2] = ACTIONS(173),
    [anon_sym_swi3] = ACTIONS(173),
    [anon_sym_sync] = ACTIONS(173),
    [anon_sym_tfr] = ACTIONS(173),
    [anon_sym_tsta] = ACTIONS(173),
    [anon_sym_tstb] = ACTIONS(173),
    [anon_sym_tst] = ACTIONS(173),
  },
  [39] = {
    [sym__line_break] = ACTIONS(175),
  },
  [40] = {
    [anon_sym_A] = ACTIONS(161),
    [anon_sym_B] = ACTIONS(161),
    [anon_sym_X] = ACTIONS(161),
    [anon_sym_Y] = ACTIONS(161),
    [anon_sym_U] = ACTIONS(161),
    [anon_sym_S] = ACTIONS(161),
    [anon_sym_PC] = ACTIONS(161),
    [anon_sym_CC] = ACTIONS(161),
    [anon_sym_DP] = ACTIONS(161),
    [anon_sym_D] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
  },
  [41] = {
    [sym_operator] = STATE(54),
    [sym__line_break] = ACTIONS(177),
    [sym_semicolon_comment] = ACTIONS(179),
    [sym_asterisk_comment] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
  },
  [42] = {
    [sym__line_break] = ACTIONS(183),
    [sym_semicolon_comment] = ACTIONS(185),
    [sym_asterisk_comment] = ACTIONS(185),
  },
  [43] = {
    [sym_register] = STATE(55),
    [sym_operator] = STATE(56),
    [anon_sym_A] = ACTIONS(103),
    [anon_sym_B] = ACTIONS(103),
    [anon_sym_X] = ACTIONS(103),
    [anon_sym_Y] = ACTIONS(103),
    [anon_sym_U] = ACTIONS(103),
    [anon_sym_S] = ACTIONS(103),
    [anon_sym_PC] = ACTIONS(103),
    [anon_sym_CC] = ACTIONS(103),
    [anon_sym_DP] = ACTIONS(103),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [44] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_semicolon_comment] = ACTIONS(189),
    [sym_asterisk_comment] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [45] = {
    [sym_register] = STATE(41),
    [sym__register_exp] = STATE(57),
    [sym_operator] = STATE(43),
    [anon_sym_A] = ACTIONS(103),
    [anon_sym_B] = ACTIONS(103),
    [anon_sym_X] = ACTIONS(103),
    [anon_sym_Y] = ACTIONS(103),
    [anon_sym_U] = ACTIONS(103),
    [anon_sym_S] = ACTIONS(103),
    [anon_sym_PC] = ACTIONS(103),
    [anon_sym_CC] = ACTIONS(103),
    [anon_sym_DP] = ACTIONS(103),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [46] = {
    [sym_operator] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(191),
  },
  [47] = {
    [sym__line_break] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_semicolon_comment] = ACTIONS(195),
    [sym_asterisk_comment] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
  },
  [48] = {
    [sym_symbol] = STATE(59),
    [sym_constant] = STATE(59),
    [sym__octal] = STATE(31),
    [sym__hexadecimal] = STATE(31),
    [sym__binary] = STATE(31),
    [sym__term] = STATE(59),
    [sym__identifier] = ACTIONS(77),
    [sym__decimal] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LPAREN_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(83),
    [sym_string] = ACTIONS(197),
  },
  [49] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(201),
    [sym_semicolon_comment] = ACTIONS(201),
    [sym_asterisk_comment] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [50] = {
    [sym__line_break] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_semicolon_comment] = ACTIONS(205),
    [sym_asterisk_comment] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
  },
  [51] = {
    [aux_sym_assembler_directive_repeat1] = STATE(51),
    [sym__line_break] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_semicolon_comment] = ACTIONS(201),
    [sym_asterisk_comment] = ACTIONS(201),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym__line_break] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(212),
    [sym__identifier] = ACTIONS(212),
    [sym_pseudo_opcode] = ACTIONS(212),
    [sym_semicolon_comment] = ACTIONS(212),
    [sym_asterisk_comment] = ACTIONS(212),
    [anon_sym_abx] = ACTIONS(212),
    [anon_sym_adca] = ACTIONS(212),
    [anon_sym_adcb] = ACTIONS(212),
    [anon_sym_adda] = ACTIONS(212),
    [anon_sym_addb] = ACTIONS(212),
    [anon_sym_addd] = ACTIONS(212),
    [anon_sym_anda] = ACTIONS(212),
    [anon_sym_andb] = ACTIONS(212),
    [anon_sym_andcc] = ACTIONS(212),
    [anon_sym_asla] = ACTIONS(212),
    [anon_sym_aslb] = ACTIONS(212),
    [anon_sym_asl] = ACTIONS(212),
    [anon_sym_asra] = ACTIONS(212),
    [anon_sym_asrb] = ACTIONS(212),
    [anon_sym_asr] = ACTIONS(212),
    [anon_sym_bita] = ACTIONS(212),
    [anon_sym_bitb] = ACTIONS(212),
    [anon_sym_bra] = ACTIONS(212),
    [anon_sym_bcc] = ACTIONS(212),
    [anon_sym_bcs] = ACTIONS(212),
    [anon_sym_beq] = ACTIONS(212),
    [anon_sym_bge] = ACTIONS(212),
    [anon_sym_bgt] = ACTIONS(212),
    [anon_sym_bhi] = ACTIONS(212),
    [anon_sym_bhs] = ACTIONS(212),
    [anon_sym_ble] = ACTIONS(212),
    [anon_sym_blo] = ACTIONS(212),
    [anon_sym_bls] = ACTIONS(212),
    [anon_sym_blt] = ACTIONS(212),
    [anon_sym_bmi] = ACTIONS(212),
    [anon_sym_bne] = ACTIONS(212),
    [anon_sym_bpl] = ACTIONS(212),
    [anon_sym_brn] = ACTIONS(212),
    [anon_sym_bsr] = ACTIONS(212),
    [anon_sym_bvc] = ACTIONS(212),
    [anon_sym_bvs] = ACTIONS(212),
    [anon_sym_lbra] = ACTIONS(212),
    [anon_sym_lbcc] = ACTIONS(212),
    [anon_sym_lbcs] = ACTIONS(212),
    [anon_sym_lbeq] = ACTIONS(212),
    [anon_sym_lbge] = ACTIONS(212),
    [anon_sym_lbgt] = ACTIONS(212),
    [anon_sym_lbhi] = ACTIONS(212),
    [anon_sym_lbhs] = ACTIONS(212),
    [anon_sym_lble] = ACTIONS(212),
    [anon_sym_lblo] = ACTIONS(212),
    [anon_sym_lbls] = ACTIONS(212),
    [anon_sym_lblt] = ACTIONS(212),
    [anon_sym_lbmi] = ACTIONS(212),
    [anon_sym_lbne] = ACTIONS(212),
    [anon_sym_lbpl] = ACTIONS(212),
    [anon_sym_lbrn] = ACTIONS(212),
    [anon_sym_lbsr] = ACTIONS(212),
    [anon_sym_lbvc] = ACTIONS(212),
    [anon_sym_lbvs] = ACTIONS(212),
    [anon_sym_clra] = ACTIONS(212),
    [anon_sym_clrb] = ACTIONS(212),
    [anon_sym_clr] = ACTIONS(212),
    [anon_sym_cmpa] = ACTIONS(212),
    [anon_sym_cmpb] = ACTIONS(212),
    [anon_sym_cmpd] = ACTIONS(212),
    [anon_sym_cmps] = ACTIONS(212),
    [anon_sym_cmpu] = ACTIONS(212),
    [anon_sym_cmpx] = ACTIONS(212),
    [anon_sym_cmpy] = ACTIONS(212),
    [anon_sym_coma] = ACTIONS(212),
    [anon_sym_comb] = ACTIONS(212),
    [anon_sym_com] = ACTIONS(212),
    [anon_sym_cwai] = ACTIONS(212),
    [anon_sym_daa] = ACTIONS(212),
    [anon_sym_deca] = ACTIONS(212),
    [anon_sym_decb] = ACTIONS(212),
    [anon_sym_dec] = ACTIONS(212),
    [anon_sym_eora] = ACTIONS(212),
    [anon_sym_eorb] = ACTIONS(212),
    [anon_sym_exg] = ACTIONS(212),
    [anon_sym_inca] = ACTIONS(212),
    [anon_sym_incb] = ACTIONS(212),
    [anon_sym_inc] = ACTIONS(212),
    [anon_sym_jmp] = ACTIONS(212),
    [anon_sym_jsr] = ACTIONS(212),
    [anon_sym_lda] = ACTIONS(212),
    [anon_sym_ldb] = ACTIONS(212),
    [anon_sym_ldd] = ACTIONS(212),
    [anon_sym_lds] = ACTIONS(212),
    [anon_sym_ldu] = ACTIONS(212),
    [anon_sym_ldx] = ACTIONS(212),
    [anon_sym_ldy] = ACTIONS(212),
    [anon_sym_leas] = ACTIONS(212),
    [anon_sym_leau] = ACTIONS(212),
    [anon_sym_leax] = ACTIONS(212),
    [anon_sym_leay] = ACTIONS(212),
    [anon_sym_lsla] = ACTIONS(212),
    [anon_sym_lslb] = ACTIONS(212),
    [anon_sym_lsl] = ACTIONS(212),
    [anon_sym_lsra] = ACTIONS(212),
    [anon_sym_lsrb] = ACTIONS(212),
    [anon_sym_lsr] = ACTIONS(212),
    [anon_sym_mul] = ACTIONS(212),
    [anon_sym_nega] = ACTIONS(212),
    [anon_sym_negb] = ACTIONS(212),
    [anon_sym_neg] = ACTIONS(212),
    [anon_sym_nop] = ACTIONS(212),
    [anon_sym_ora] = ACTIONS(212),
    [anon_sym_orb] = ACTIONS(212),
    [anon_sym_orcc] = ACTIONS(212),
    [anon_sym_pshs] = ACTIONS(212),
    [anon_sym_pshu] = ACTIONS(212),
    [anon_sym_puls] = ACTIONS(212),
    [anon_sym_pulu] = ACTIONS(212),
    [anon_sym_rola] = ACTIONS(212),
    [anon_sym_rolb] = ACTIONS(212),
    [anon_sym_rol] = ACTIONS(212),
    [anon_sym_rora] = ACTIONS(212),
    [anon_sym_rorb] = ACTIONS(212),
    [anon_sym_ror] = ACTIONS(212),
    [anon_sym_rti] = ACTIONS(212),
    [anon_sym_rts] = ACTIONS(212),
    [anon_sym_sbca] = ACTIONS(212),
    [anon_sym_sbcb] = ACTIONS(212),
    [anon_sym_sex] = ACTIONS(212),
    [anon_sym_sta] = ACTIONS(212),
    [anon_sym_stb] = ACTIONS(212),
    [anon_sym_std] = ACTIONS(212),
    [anon_sym_sts] = ACTIONS(212),
    [anon_sym_stu] = ACTIONS(212),
    [anon_sym_stx] = ACTIONS(212),
    [anon_sym_sty] = ACTIONS(212),
    [anon_sym_suba] = ACTIONS(212),
    [anon_sym_subb] = ACTIONS(212),
    [anon_sym_subd] = ACTIONS(212),
    [anon_sym_swi] = ACTIONS(212),
    [anon_sym_swi2] = ACTIONS(212),
    [anon_sym_swi3] = ACTIONS(212),
    [anon_sym_sync] = ACTIONS(212),
    [anon_sym_tfr] = ACTIONS(212),
    [anon_sym_tsta] = ACTIONS(212),
    [anon_sym_tstb] = ACTIONS(212),
    [anon_sym_tst] = ACTIONS(212),
  },
  [53] = {
    [sym__line_break] = ACTIONS(161),
    [sym_semicolon_comment] = ACTIONS(163),
    [sym_asterisk_comment] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
  },
  [54] = {
    [sym_operator] = STATE(60),
    [sym__line_break] = ACTIONS(214),
    [sym_semicolon_comment] = ACTIONS(216),
    [sym_asterisk_comment] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
  },
  [55] = {
    [sym__line_break] = ACTIONS(214),
    [sym_semicolon_comment] = ACTIONS(216),
    [sym_asterisk_comment] = ACTIONS(216),
  },
  [56] = {
    [sym_register] = STATE(60),
    [anon_sym_A] = ACTIONS(103),
    [anon_sym_B] = ACTIONS(103),
    [anon_sym_X] = ACTIONS(103),
    [anon_sym_Y] = ACTIONS(103),
    [anon_sym_U] = ACTIONS(103),
    [anon_sym_S] = ACTIONS(103),
    [anon_sym_PC] = ACTIONS(103),
    [anon_sym_CC] = ACTIONS(103),
    [anon_sym_DP] = ACTIONS(103),
    [anon_sym_D] = ACTIONS(55),
  },
  [57] = {
    [sym__line_break] = ACTIONS(218),
    [sym_semicolon_comment] = ACTIONS(220),
    [sym_asterisk_comment] = ACTIONS(220),
  },
  [58] = {
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
  },
  [59] = {
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [60] = {
    [sym__line_break] = ACTIONS(222),
    [sym_semicolon_comment] = ACTIONS(224),
    [sym_asterisk_comment] = ACTIONS(224),
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
  [79] = {.count = 1, .reusable = false}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(31),
  [83] = {.count = 1, .reusable = true}, SHIFT(32),
  [85] = {.count = 1, .reusable = true}, SHIFT(33),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 2),
  [89] = {.count = 1, .reusable = false}, SHIFT(34),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 2),
  [93] = {.count = 1, .reusable = false}, SHIFT(35),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(38),
  [101] = {.count = 1, .reusable = false}, SHIFT(39),
  [103] = {.count = 1, .reusable = true}, SHIFT(26),
  [105] = {.count = 1, .reusable = true}, SHIFT(40),
  [107] = {.count = 1, .reusable = true}, SHIFT(15),
  [109] = {.count = 1, .reusable = true}, SHIFT(16),
  [111] = {.count = 1, .reusable = true}, SHIFT(17),
  [113] = {.count = 1, .reusable = true}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(45),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(46),
  [155] = {.count = 1, .reusable = true}, SHIFT(35),
  [157] = {.count = 1, .reusable = true}, SHIFT(47),
  [159] = {.count = 1, .reusable = true}, SHIFT(49),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(50),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 3),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [175] = {.count = 1, .reusable = true}, SHIFT(52),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [181] = {.count = 1, .reusable = false}, SHIFT(53),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(58),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(59),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2), SHIFT_REPEAT(34),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
