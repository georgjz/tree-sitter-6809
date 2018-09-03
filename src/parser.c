#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 63
#define SYMBOL_COUNT 268
#define ALIAS_COUNT 0
#define TOKEN_COUNT 246
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 2,
  anon_sym_COLON = 3,
  sym__identifier = 4,
  anon_sym_COMMA = 5,
  anon_sym_fcb = 6,
  anon_sym_DOTdb = 7,
  anon_sym_DOTbyte = 8,
  anon_sym_fdb = 9,
  anon_sym_DOTdw = 10,
  anon_sym_DOTword = 11,
  anon_sym_fqb = 12,
  anon_sym_DOTquad = 13,
  anon_sym_DOT4byte = 14,
  anon_sym_fcc = 15,
  anon_sym_DOTascii = 16,
  anon_sym_DOTstr = 17,
  anon_sym_fcn = 18,
  anon_sym_DOTasciz = 19,
  anon_sym_DOTstrz = 20,
  anon_sym_fcs = 21,
  anon_sym_DOTascis = 22,
  anon_sym_DOTstrs = 23,
  anon_sym_zmb = 24,
  anon_sym_zmd = 25,
  anon_sym_zmq = 26,
  anon_sym_rmb = 27,
  anon_sym_DOTblkb = 28,
  anon_sym_DOTds = 29,
  anon_sym_DOTrs = 30,
  anon_sym_rmd = 31,
  anon_sym_rmq = 32,
  anon_sym_fill = 33,
  anon_sym_includebin = 34,
  anon_sym_include = 35,
  anon_sym_import = 36,
  anon_sym_export = 37,
  anon_sym_extern = 38,
  anon_sym_external = 39,
  anon_sym_DOTglobl = 40,
  anon_sym_extdep = 41,
  anon_sym_org = 42,
  anon_sym_reorg = 43,
  anon_sym_equ = 44,
  anon_sym_set = 45,
  anon_sym_setdp = 46,
  anon_sym_align = 47,
  anon_sym_ifeq = 48,
  anon_sym_ifne = 49,
  anon_sym_if = 50,
  anon_sym_ifgt = 51,
  anon_sym_ifge = 52,
  anon_sym_iflt = 53,
  anon_sym_ifle = 54,
  anon_sym_ifdef = 55,
  anon_sym_ifpragma = 56,
  anon_sym_ifndef = 57,
  anon_sym_else = 58,
  anon_sym_endc = 59,
  anon_sym_os9 = 60,
  anon_sym_mod = 61,
  anon_sym_emod = 62,
  anon_sym_end = 63,
  anon_sym_error = 64,
  anon_sym_warning = 65,
  anon_sym_DOTmodule = 66,
  anon_sym_macro = 67,
  anon_sym_endm = 68,
  anon_sym_struct = 69,
  anon_sym_endstruct = 70,
  anon_sym_ends = 71,
  anon_sym_section = 72,
  anon_sym_sect = 73,
  anon_sym_DOTarea = 74,
  anon_sym_endsection = 75,
  anon_sym_endsect = 76,
  anon_sym_pragma = 77,
  anon_sym_STARpragma = 78,
  anon_sym_STARpragmapush = 79,
  anon_sym_STARpragmapop = 80,
  anon_sym_opt = 81,
  sym_imm_marker = 82,
  sym__decimal = 83,
  aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH = 84,
  aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH = 85,
  aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH = 86,
  aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH = 87,
  aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH = 88,
  aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH = 89,
  anon_sym_A = 90,
  anon_sym_B = 91,
  anon_sym_X = 92,
  anon_sym_Y = 93,
  anon_sym_U = 94,
  anon_sym_S = 95,
  anon_sym_PC = 96,
  anon_sym_CC = 97,
  anon_sym_DP = 98,
  anon_sym_D = 99,
  sym_semicolon_comment = 100,
  sym_asterisk_comment = 101,
  anon_sym_PLUS = 102,
  anon_sym_DASH = 103,
  anon_sym_LPAREN = 104,
  anon_sym_RPAREN = 105,
  sym_string = 106,
  anon_sym_abx = 107,
  anon_sym_adca = 108,
  anon_sym_adcb = 109,
  anon_sym_adda = 110,
  anon_sym_addb = 111,
  anon_sym_addd = 112,
  anon_sym_anda = 113,
  anon_sym_andb = 114,
  anon_sym_andcc = 115,
  anon_sym_asla = 116,
  anon_sym_aslb = 117,
  anon_sym_asl = 118,
  anon_sym_asra = 119,
  anon_sym_asrb = 120,
  anon_sym_asr = 121,
  anon_sym_bita = 122,
  anon_sym_bitb = 123,
  anon_sym_bra = 124,
  anon_sym_bcc = 125,
  anon_sym_bcs = 126,
  anon_sym_beq = 127,
  anon_sym_bge = 128,
  anon_sym_bgt = 129,
  anon_sym_bhi = 130,
  anon_sym_bhs = 131,
  anon_sym_ble = 132,
  anon_sym_blo = 133,
  anon_sym_bls = 134,
  anon_sym_blt = 135,
  anon_sym_bmi = 136,
  anon_sym_bne = 137,
  anon_sym_bpl = 138,
  anon_sym_brn = 139,
  anon_sym_bsr = 140,
  anon_sym_bvc = 141,
  anon_sym_bvs = 142,
  anon_sym_lbra = 143,
  anon_sym_lbcc = 144,
  anon_sym_lbcs = 145,
  anon_sym_lbeq = 146,
  anon_sym_lbge = 147,
  anon_sym_lbgt = 148,
  anon_sym_lbhi = 149,
  anon_sym_lbhs = 150,
  anon_sym_lble = 151,
  anon_sym_lblo = 152,
  anon_sym_lbls = 153,
  anon_sym_lblt = 154,
  anon_sym_lbmi = 155,
  anon_sym_lbne = 156,
  anon_sym_lbpl = 157,
  anon_sym_lbrn = 158,
  anon_sym_lbsr = 159,
  anon_sym_lbvc = 160,
  anon_sym_lbvs = 161,
  anon_sym_clra = 162,
  anon_sym_clrb = 163,
  anon_sym_clr = 164,
  anon_sym_cmpa = 165,
  anon_sym_cmpb = 166,
  anon_sym_cmpd = 167,
  anon_sym_cmps = 168,
  anon_sym_cmpu = 169,
  anon_sym_cmpx = 170,
  anon_sym_cmpy = 171,
  anon_sym_coma = 172,
  anon_sym_comb = 173,
  anon_sym_com = 174,
  anon_sym_cwai = 175,
  anon_sym_daa = 176,
  anon_sym_deca = 177,
  anon_sym_decb = 178,
  anon_sym_dec = 179,
  anon_sym_eora = 180,
  anon_sym_eorb = 181,
  anon_sym_exg = 182,
  anon_sym_inca = 183,
  anon_sym_incb = 184,
  anon_sym_inc = 185,
  anon_sym_jmp = 186,
  anon_sym_jsr = 187,
  anon_sym_lda = 188,
  anon_sym_ldb = 189,
  anon_sym_ldd = 190,
  anon_sym_lds = 191,
  anon_sym_ldu = 192,
  anon_sym_ldx = 193,
  anon_sym_ldy = 194,
  anon_sym_leas = 195,
  anon_sym_leau = 196,
  anon_sym_leax = 197,
  anon_sym_leay = 198,
  anon_sym_lsla = 199,
  anon_sym_lslb = 200,
  anon_sym_lsl = 201,
  anon_sym_lsra = 202,
  anon_sym_lsrb = 203,
  anon_sym_lsr = 204,
  anon_sym_mul = 205,
  anon_sym_nega = 206,
  anon_sym_negb = 207,
  anon_sym_neg = 208,
  anon_sym_nop = 209,
  anon_sym_ora = 210,
  anon_sym_orb = 211,
  anon_sym_orcc = 212,
  anon_sym_pshs = 213,
  anon_sym_pshu = 214,
  anon_sym_puls = 215,
  anon_sym_pulu = 216,
  anon_sym_rola = 217,
  anon_sym_rolb = 218,
  anon_sym_rol = 219,
  anon_sym_rora = 220,
  anon_sym_rorb = 221,
  anon_sym_ror = 222,
  anon_sym_rti = 223,
  anon_sym_rts = 224,
  anon_sym_sbca = 225,
  anon_sym_sbcb = 226,
  anon_sym_sex = 227,
  anon_sym_sta = 228,
  anon_sym_stb = 229,
  anon_sym_std = 230,
  anon_sym_sts = 231,
  anon_sym_stu = 232,
  anon_sym_stx = 233,
  anon_sym_sty = 234,
  anon_sym_suba = 235,
  anon_sym_subb = 236,
  anon_sym_subd = 237,
  anon_sym_swi = 238,
  anon_sym_swi2 = 239,
  anon_sym_swi3 = 240,
  anon_sym_sync = 241,
  anon_sym_tfr = 242,
  anon_sym_tsta = 243,
  anon_sym_tstb = 244,
  anon_sym_tst = 245,
  sym_source_file = 246,
  sym__line = 247,
  sym_label = 248,
  sym_symbol = 249,
  sym__instruction = 250,
  sym_opcode = 251,
  sym_assembler_directive = 252,
  sym_pseudo_opcode = 253,
  sym__operand = 254,
  sym_constant = 255,
  sym__octal = 256,
  sym__hexadecimal = 257,
  sym__binary = 258,
  sym_register = 259,
  sym__comment = 260,
  sym__register_exp = 261,
  sym_operator = 262,
  sym__expression = 263,
  sym__term = 264,
  sym_memnonic = 265,
  aux_sym_source_file_repeat1 = 266,
  aux_sym_assembler_directive_repeat1 = 267,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_fcb] = "fcb",
  [anon_sym_DOTdb] = ".db",
  [anon_sym_DOTbyte] = ".byte",
  [anon_sym_fdb] = "fdb",
  [anon_sym_DOTdw] = ".dw",
  [anon_sym_DOTword] = ".word",
  [anon_sym_fqb] = "fqb",
  [anon_sym_DOTquad] = ".quad",
  [anon_sym_DOT4byte] = ".4byte",
  [anon_sym_fcc] = "fcc",
  [anon_sym_DOTascii] = ".ascii",
  [anon_sym_DOTstr] = ".str",
  [anon_sym_fcn] = "fcn",
  [anon_sym_DOTasciz] = ".asciz",
  [anon_sym_DOTstrz] = ".strz",
  [anon_sym_fcs] = "fcs",
  [anon_sym_DOTascis] = ".ascis",
  [anon_sym_DOTstrs] = ".strs",
  [anon_sym_zmb] = "zmb",
  [anon_sym_zmd] = "zmd",
  [anon_sym_zmq] = "zmq",
  [anon_sym_rmb] = "rmb",
  [anon_sym_DOTblkb] = ".blkb",
  [anon_sym_DOTds] = ".ds",
  [anon_sym_DOTrs] = ".rs",
  [anon_sym_rmd] = "rmd",
  [anon_sym_rmq] = "rmq",
  [anon_sym_fill] = "fill",
  [anon_sym_includebin] = "includebin",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_extern] = "extern",
  [anon_sym_external] = "external",
  [anon_sym_DOTglobl] = ".globl",
  [anon_sym_extdep] = "extdep",
  [anon_sym_org] = "org",
  [anon_sym_reorg] = "reorg",
  [anon_sym_equ] = "equ",
  [anon_sym_set] = "set",
  [anon_sym_setdp] = "setdp",
  [anon_sym_align] = "align",
  [anon_sym_ifeq] = "ifeq",
  [anon_sym_ifne] = "ifne",
  [anon_sym_if] = "if",
  [anon_sym_ifgt] = "ifgt",
  [anon_sym_ifge] = "ifge",
  [anon_sym_iflt] = "iflt",
  [anon_sym_ifle] = "ifle",
  [anon_sym_ifdef] = "ifdef",
  [anon_sym_ifpragma] = "ifpragma",
  [anon_sym_ifndef] = "ifndef",
  [anon_sym_else] = "else",
  [anon_sym_endc] = "endc",
  [anon_sym_os9] = "os9",
  [anon_sym_mod] = "mod",
  [anon_sym_emod] = "emod",
  [anon_sym_end] = "end",
  [anon_sym_error] = "error",
  [anon_sym_warning] = "warning",
  [anon_sym_DOTmodule] = ".module",
  [anon_sym_macro] = "macro",
  [anon_sym_endm] = "endm",
  [anon_sym_struct] = "struct",
  [anon_sym_endstruct] = "endstruct",
  [anon_sym_ends] = "ends",
  [anon_sym_section] = "section",
  [anon_sym_sect] = "sect",
  [anon_sym_DOTarea] = ".area",
  [anon_sym_endsection] = "endsection",
  [anon_sym_endsect] = "endsect",
  [anon_sym_pragma] = "pragma",
  [anon_sym_STARpragma] = "*pragma",
  [anon_sym_STARpragmapush] = "*pragmapush",
  [anon_sym_STARpragmapop] = "*pragmapop",
  [anon_sym_opt] = "opt",
  [sym_imm_marker] = "imm_marker",
  [sym__decimal] = "_decimal",
  [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = "/\\-?\\@[0-7]+/",
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = "/\\-?[0-7]+[qQoO]/",
  [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = "/(\\-?\\$|0[xX])[a-fA-Z0-9]+/",
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = "/\\-?[a-fA-F0-9]+H/",
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
  [sym_pseudo_opcode] = "pseudo_opcode",
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
  [anon_sym_fcb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fqb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTquad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTasciz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstrz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTascis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstrs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTblkb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTrs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includebin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTglobl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extdep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_org] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reorg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iflt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endstruct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTarea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARpragmapush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARpragmapop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [sym_imm_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = {
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
  [sym_pseudo_opcode] = {
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
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(81);
      if (lookahead == 'A')
        ADVANCE(82);
      if (lookahead == 'B')
        ADVANCE(83);
      if (lookahead == 'C')
        ADVANCE(84);
      if (lookahead == 'D')
        ADVANCE(86);
      if (lookahead == 'P')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(90);
      if (lookahead == 'U')
        ADVANCE(91);
      if (lookahead == 'X')
        ADVANCE(92);
      if (lookahead == 'Y')
        ADVANCE(93);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'b')
        ADVANCE(122);
      if (lookahead == 'c')
        ADVANCE(157);
      if (lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead == 'f')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(246);
      if (lookahead == 'j')
        ADVANCE(286);
      if (lookahead == 'l')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'o')
        ADVANCE(360);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 'r')
        ADVANCE(385);
      if (lookahead == 's')
        ADVANCE(404);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'w')
        ADVANCE(450);
      if (lookahead == 'z')
        ADVANCE(457);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(462);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(32);
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
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'p')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'r')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'g')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'm')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STARpragma);
      if (lookahead == 'p')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == 'u')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'p')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STARpragmapop);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead == 'h')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STARpragmapush);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '4')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'd')
        ADVANCE(50);
      if (lookahead == 'g')
        ADVANCE(54);
      if (lookahead == 'm')
        ADVANCE(59);
      if (lookahead == 'q')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(71);
      if (lookahead == 'w')
        ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(28);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y')
        ADVANCE(29);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(34);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOTarea);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == 's')
        ADVANCE(41);
      if (lookahead == 'z')
        ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOTascis);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 'y')
        ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOTblkb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 's')
        ADVANCE(52);
      if (lookahead == 'w')
        ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOTdb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOTds);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOTdw);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOTglobl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOTmodule);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(70);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOTrs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOTstr);
      if (lookahead == 's')
        ADVANCE(74);
      if (lookahead == 'z')
        ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOTstrs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOTstrz);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(95);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_abx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(98);
      if (lookahead == 'd')
        ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(99);
      if (lookahead == 'b')
        ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_adca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_adcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'b')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_adda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_addb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_addd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(111);
      if (lookahead == 'b')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_anda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_andb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_andcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(116);
      if (lookahead == 'r')
        ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_asl);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'b')
        ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_asla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_aslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_asr);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 'b')
        ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_asra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_asrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(123);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == 'g')
        ADVANCE(128);
      if (lookahead == 'h')
        ADVANCE(131);
      if (lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(143);
      if (lookahead == 'n')
        ADVANCE(145);
      if (lookahead == 'p')
        ADVANCE(147);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 's')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(129);
      if (lookahead == 't')
        ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_bhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_bhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(136);
      if (lookahead == 'b')
        ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_bita);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_bitb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'o')
        ADVANCE(140);
      if (lookahead == 's')
        ADVANCE(141);
      if (lookahead == 't')
        ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_blo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_bls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'n')
        ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_bra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_brn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_bsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(155);
      if (lookahead == 's')
        ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(158);
      if (lookahead == 'm')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead == 'w')
        ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_clr);
      if (lookahead == 'a')
        ADVANCE(160);
      if (lookahead == 'b')
        ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_clra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_clrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead == 'b')
        ADVANCE(165);
      if (lookahead == 'd')
        ADVANCE(166);
      if (lookahead == 's')
        ADVANCE(167);
      if (lookahead == 'u')
        ADVANCE(168);
      if (lookahead == 'x')
        ADVANCE(169);
      if (lookahead == 'y')
        ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_cmpa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_cmpb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_cmpd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_cmps);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_cmpu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_cmpx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_cmpy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_com);
      if (lookahead == 'a')
        ADVANCE(173);
      if (lookahead == 'b')
        ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_coma);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_comb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_cwai);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(179);
      if (lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
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
        ADVANCE(32);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_daa);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_dec);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_deca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_decb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(192);
      if (lookahead == 'o')
        ADVANCE(208);
      if (lookahead == 'q')
        ADVANCE(212);
      if (lookahead == 'r')
        ADVANCE(214);
      if (lookahead == 'x')
        ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_emod);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'm')
        ADVANCE(195);
      if (lookahead == 's')
        ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_endc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_endm);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_endsect);
      if (lookahead == 'i')
        ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_endsection);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_endstruct);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'b')
        ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_eora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_eorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_equ);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'p')
        ADVANCE(220);
      if (lookahead == 't')
        ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_exg);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_extdep);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(234);
      if (lookahead == 'd')
        ADVANCE(239);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(235);
      if (lookahead == 'c')
        ADVANCE(236);
      if (lookahead == 'n')
        ADVANCE(237);
      if (lookahead == 's')
        ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_fcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_fcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_fcn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_fcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_fdb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_fqb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'm')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'd')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(253);
      if (lookahead == 'l')
        ADVANCE(256);
      if (lookahead == 'n')
        ADVANCE(259);
      if (lookahead == 'p')
        ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ifdef);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ifeq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ifge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ifgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(257);
      if (lookahead == 't')
        ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ifle);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_iflt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ifndef);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ifne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ifpragma);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == 'b')
        ADVANCE(278);
      if (lookahead == 'l')
        ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_inca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_incb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'b')
        ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_includebin);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(287);
      if (lookahead == 's')
        ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(292);
      if (lookahead == 'd')
        ADVANCE(323);
      if (lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(293);
      if (lookahead == 'e')
        ADVANCE(296);
      if (lookahead == 'g')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(301);
      if (lookahead == 'l')
        ADVANCE(304);
      if (lookahead == 'm')
        ADVANCE(309);
      if (lookahead == 'n')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(313);
      if (lookahead == 'r')
        ADVANCE(315);
      if (lookahead == 's')
        ADVANCE(318);
      if (lookahead == 'v')
        ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == 's')
        ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_lbcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_lbcs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_lbeq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_lbge);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_lbgt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(302);
      if (lookahead == 's')
        ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_lbhi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_lbhs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'o')
        ADVANCE(306);
      if (lookahead == 's')
        ADVANCE(307);
      if (lookahead == 't')
        ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_lble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_lblo);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_lbls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_lblt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_lbmi);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_lbne);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_lbpl);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(316);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_lbra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_lbrn);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_lbsr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(321);
      if (lookahead == 's')
        ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_lbvc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_lbvs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'b')
        ADVANCE(325);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 's')
        ADVANCE(327);
      if (lookahead == 'u')
        ADVANCE(328);
      if (lookahead == 'x')
        ADVANCE(329);
      if (lookahead == 'y')
        ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_lda);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_ldb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_ldd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_lds);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_ldu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(333);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead == 'x')
        ADVANCE(335);
      if (lookahead == 'y')
        ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_leas);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_leau);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_leax);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_leay);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(338);
      if (lookahead == 'r')
        ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_lsl);
      if (lookahead == 'a')
        ADVANCE(339);
      if (lookahead == 'b')
        ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_lsla);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_lslb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (lookahead == 'a')
        ADVANCE(342);
      if (lookahead == 'b')
        ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_lsra);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_lsrb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(345);
      if (lookahead == 'o')
        ADVANCE(349);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(354);
      if (lookahead == 'o')
        ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'b')
        ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_nega);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_negb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(364);
      if (lookahead == 'b')
        ADVANCE(365);
      if (lookahead == 'c')
        ADVANCE(366);
      if (lookahead == 'g')
        ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_ora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_orb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_orcc);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '9')
        ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_os9);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(372);
      if (lookahead == 's')
        ADVANCE(377);
      if (lookahead == 'u')
        ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_pragma);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 'u')
        ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_pshs);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_pshu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(383);
      if (lookahead == 'u')
        ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_puls);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_pulu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(386);
      if (lookahead == 'm')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_reorg);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(391);
      if (lookahead == 'd')
        ADVANCE(392);
      if (lookahead == 'q')
        ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_rmb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_rmd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_rmq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'r')
        ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'a')
        ADVANCE(396);
      if (lookahead == 'b')
        ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_rola);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_rolb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'a')
        ADVANCE(399);
      if (lookahead == 'b')
        ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_rora);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_rorb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead == 's')
        ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_rti);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_rts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(405);
      if (lookahead == 'e')
        ADVANCE(409);
      if (lookahead == 't')
        ADVANCE(419);
      if (lookahead == 'u')
        ADVANCE(431);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == 'y')
        ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'b')
        ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_sbca);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_sbcb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'x')
        ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_sect);
      if (lookahead == 'i')
        ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'd')
        ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_setdp);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_sex);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(421);
      if (lookahead == 'd')
        ADVANCE(422);
      if (lookahead == 'r')
        ADVANCE(423);
      if (lookahead == 's')
        ADVANCE(427);
      if (lookahead == 'u')
        ADVANCE(428);
      if (lookahead == 'x')
        ADVANCE(429);
      if (lookahead == 'y')
        ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_sta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_stb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_std);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_sts);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_stu);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_stx);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_sty);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(433);
      if (lookahead == 'b')
        ADVANCE(434);
      if (lookahead == 'd')
        ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_suba);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_subb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_subd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_swi);
      if (lookahead == '2')
        ADVANCE(438);
      if (lookahead == '3')
        ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_swi2);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_swi3);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_sync);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(444);
      if (lookahead == 's')
        ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_tfr);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_tst);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_tsta);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_tstb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_warning);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(459);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'q')
        ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_zmb);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_zmd);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_zmq);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 462:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(462);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 465:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == ';')
        ADVANCE(81);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'b')
        ADVANCE(122);
      if (lookahead == 'c')
        ADVANCE(157);
      if (lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead == 'f')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(246);
      if (lookahead == 'j')
        ADVANCE(286);
      if (lookahead == 'l')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'o')
        ADVANCE(360);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 'r')
        ADVANCE(385);
      if (lookahead == 's')
        ADVANCE(404);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'w')
        ADVANCE(450);
      if (lookahead == 'z')
        ADVANCE(457);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(32);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 467:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(468);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(470);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(480);
      if (lookahead == '1')
        ADVANCE(481);
      if (lookahead == '@')
        ADVANCE(473);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(467);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 468:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(469);
      END_STATE();
    case 470:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(471);
      END_STATE();
    case 472:
      if (lookahead == '$')
        ADVANCE(468);
      if (lookahead == '&')
        ADVANCE(470);
      if (lookahead == '@')
        ADVANCE(473);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 473:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH);
      END_STATE();
    case 477:
      if (lookahead == 'H')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(476);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(476);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(481);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(482);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(468);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(479);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(476);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(481);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(482);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(479);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH);
      if (lookahead == 'H')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(477);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 484:
      if (lookahead == '*')
        ADVANCE(485);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(80);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'e')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(599);
      if (lookahead == 'i')
        ADVANCE(612);
      if (lookahead == 'm')
        ADVANCE(650);
      if (lookahead == 'o')
        ADVANCE(657);
      if (lookahead == 'p')
        ADVANCE(664);
      if (lookahead == 'r')
        ADVANCE(670);
      if (lookahead == 's')
        ADVANCE(679);
      if (lookahead == 'w')
        ADVANCE(694);
      if (lookahead == 'z')
        ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(484);
      END_STATE();
    case 485:
      if (lookahead == 'p')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'r')
        ADVANCE(487);
      END_STATE();
    case 487:
      if (lookahead == 'a')
        ADVANCE(488);
      END_STATE();
    case 488:
      if (lookahead == 'g')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'm')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'a')
        ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_STARpragma);
      if (lookahead == 'p')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'o')
        ADVANCE(493);
      if (lookahead == 'u')
        ADVANCE(495);
      END_STATE();
    case 493:
      if (lookahead == 'p')
        ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_STARpragmapop);
      END_STATE();
    case 495:
      if (lookahead == 's')
        ADVANCE(496);
      END_STATE();
    case 496:
      if (lookahead == 'h')
        ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_STARpragmapush);
      END_STATE();
    case 498:
      if (lookahead == '4')
        ADVANCE(499);
      if (lookahead == 'a')
        ADVANCE(504);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'd')
        ADVANCE(521);
      if (lookahead == 'g')
        ADVANCE(525);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'q')
        ADVANCE(536);
      if (lookahead == 'r')
        ADVANCE(540);
      if (lookahead == 's')
        ADVANCE(542);
      if (lookahead == 'w')
        ADVANCE(547);
      END_STATE();
    case 499:
      if (lookahead == 'b')
        ADVANCE(500);
      END_STATE();
    case 500:
      if (lookahead == 'y')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 't')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'e')
        ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      END_STATE();
    case 504:
      if (lookahead == 'r')
        ADVANCE(505);
      if (lookahead == 's')
        ADVANCE(508);
      END_STATE();
    case 505:
      if (lookahead == 'e')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'a')
        ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DOTarea);
      END_STATE();
    case 508:
      if (lookahead == 'c')
        ADVANCE(509);
      END_STATE();
    case 509:
      if (lookahead == 'i')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'i')
        ADVANCE(511);
      if (lookahead == 's')
        ADVANCE(512);
      if (lookahead == 'z')
        ADVANCE(513);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DOTascis);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      END_STATE();
    case 514:
      if (lookahead == 'l')
        ADVANCE(515);
      if (lookahead == 'y')
        ADVANCE(518);
      END_STATE();
    case 515:
      if (lookahead == 'k')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == 'b')
        ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DOTblkb);
      END_STATE();
    case 518:
      if (lookahead == 't')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'e')
        ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      END_STATE();
    case 521:
      if (lookahead == 'b')
        ADVANCE(522);
      if (lookahead == 's')
        ADVANCE(523);
      if (lookahead == 'w')
        ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DOTdb);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DOTds);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DOTdw);
      END_STATE();
    case 525:
      if (lookahead == 'l')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'o')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 'b')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 'l')
        ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DOTglobl);
      END_STATE();
    case 530:
      if (lookahead == 'o')
        ADVANCE(531);
      END_STATE();
    case 531:
      if (lookahead == 'd')
        ADVANCE(532);
      END_STATE();
    case 532:
      if (lookahead == 'u')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == 'l')
        ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead == 'e')
        ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DOTmodule);
      END_STATE();
    case 536:
      if (lookahead == 'u')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'a')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'd')
        ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      END_STATE();
    case 540:
      if (lookahead == 's')
        ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DOTrs);
      END_STATE();
    case 542:
      if (lookahead == 't')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'r')
        ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DOTstr);
      if (lookahead == 's')
        ADVANCE(545);
      if (lookahead == 'z')
        ADVANCE(546);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DOTstrs);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DOTstrz);
      END_STATE();
    case 547:
      if (lookahead == 'o')
        ADVANCE(548);
      END_STATE();
    case 548:
      if (lookahead == 'r')
        ADVANCE(549);
      END_STATE();
    case 549:
      if (lookahead == 'd')
        ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOTword);
      END_STATE();
    case 551:
      if (lookahead == 'l')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'i')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 'g')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'n')
        ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 556:
      if (lookahead == 'l')
        ADVANCE(557);
      if (lookahead == 'm')
        ADVANCE(560);
      if (lookahead == 'n')
        ADVANCE(563);
      if (lookahead == 'q')
        ADVANCE(579);
      if (lookahead == 'r')
        ADVANCE(581);
      if (lookahead == 'x')
        ADVANCE(585);
      END_STATE();
    case 557:
      if (lookahead == 's')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'e')
        ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 560:
      if (lookahead == 'o')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == 'd')
        ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_emod);
      END_STATE();
    case 563:
      if (lookahead == 'd')
        ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'c')
        ADVANCE(565);
      if (lookahead == 'm')
        ADVANCE(566);
      if (lookahead == 's')
        ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_endc);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_endm);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == 'e')
        ADVANCE(568);
      if (lookahead == 't')
        ADVANCE(574);
      END_STATE();
    case 568:
      if (lookahead == 'c')
        ADVANCE(569);
      END_STATE();
    case 569:
      if (lookahead == 't')
        ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_endsect);
      if (lookahead == 'i')
        ADVANCE(571);
      END_STATE();
    case 571:
      if (lookahead == 'o')
        ADVANCE(572);
      END_STATE();
    case 572:
      if (lookahead == 'n')
        ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_endsection);
      END_STATE();
    case 574:
      if (lookahead == 'r')
        ADVANCE(575);
      END_STATE();
    case 575:
      if (lookahead == 'u')
        ADVANCE(576);
      END_STATE();
    case 576:
      if (lookahead == 'c')
        ADVANCE(577);
      END_STATE();
    case 577:
      if (lookahead == 't')
        ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_endstruct);
      END_STATE();
    case 579:
      if (lookahead == 'u')
        ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_equ);
      END_STATE();
    case 581:
      if (lookahead == 'r')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'o')
        ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == 'r')
        ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 585:
      if (lookahead == 'p')
        ADVANCE(586);
      if (lookahead == 't')
        ADVANCE(590);
      END_STATE();
    case 586:
      if (lookahead == 'o')
        ADVANCE(587);
      END_STATE();
    case 587:
      if (lookahead == 'r')
        ADVANCE(588);
      END_STATE();
    case 588:
      if (lookahead == 't')
        ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 590:
      if (lookahead == 'd')
        ADVANCE(591);
      if (lookahead == 'e')
        ADVANCE(594);
      END_STATE();
    case 591:
      if (lookahead == 'e')
        ADVANCE(592);
      END_STATE();
    case 592:
      if (lookahead == 'p')
        ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_extdep);
      END_STATE();
    case 594:
      if (lookahead == 'r')
        ADVANCE(595);
      END_STATE();
    case 595:
      if (lookahead == 'n')
        ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == 'a')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 'l')
        ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 599:
      if (lookahead == 'c')
        ADVANCE(600);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == 'i')
        ADVANCE(607);
      if (lookahead == 'q')
        ADVANCE(610);
      END_STATE();
    case 600:
      if (lookahead == 'b')
        ADVANCE(601);
      if (lookahead == 'c')
        ADVANCE(602);
      if (lookahead == 'n')
        ADVANCE(603);
      if (lookahead == 's')
        ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_fcb);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_fcc);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_fcn);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_fcs);
      END_STATE();
    case 605:
      if (lookahead == 'b')
        ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_fdb);
      END_STATE();
    case 607:
      if (lookahead == 'l')
        ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == 'l')
        ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 610:
      if (lookahead == 'b')
        ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_fqb);
      END_STATE();
    case 612:
      if (lookahead == 'f')
        ADVANCE(613);
      if (lookahead == 'm')
        ADVANCE(636);
      if (lookahead == 'n')
        ADVANCE(641);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == 'e')
        ADVANCE(617);
      if (lookahead == 'g')
        ADVANCE(619);
      if (lookahead == 'l')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'p')
        ADVANCE(630);
      END_STATE();
    case 614:
      if (lookahead == 'e')
        ADVANCE(615);
      END_STATE();
    case 615:
      if (lookahead == 'f')
        ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_ifdef);
      END_STATE();
    case 617:
      if (lookahead == 'q')
        ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_ifeq);
      END_STATE();
    case 619:
      if (lookahead == 'e')
        ADVANCE(620);
      if (lookahead == 't')
        ADVANCE(621);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_ifge);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_ifgt);
      END_STATE();
    case 622:
      if (lookahead == 'e')
        ADVANCE(623);
      if (lookahead == 't')
        ADVANCE(624);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_ifle);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_iflt);
      END_STATE();
    case 625:
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == 'e')
        ADVANCE(629);
      END_STATE();
    case 626:
      if (lookahead == 'e')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'f')
        ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_ifndef);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_ifne);
      END_STATE();
    case 630:
      if (lookahead == 'r')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'a')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'g')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'm')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'a')
        ADVANCE(635);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_ifpragma);
      END_STATE();
    case 636:
      if (lookahead == 'p')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'o')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'r')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 't')
        ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 641:
      if (lookahead == 'c')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'l')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'u')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 'd')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'e')
        ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'b')
        ADVANCE(647);
      END_STATE();
    case 647:
      if (lookahead == 'i')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'n')
        ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_includebin);
      END_STATE();
    case 650:
      if (lookahead == 'a')
        ADVANCE(651);
      if (lookahead == 'o')
        ADVANCE(655);
      END_STATE();
    case 651:
      if (lookahead == 'c')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'r')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'o')
        ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 655:
      if (lookahead == 'd')
        ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 657:
      if (lookahead == 'p')
        ADVANCE(658);
      if (lookahead == 'r')
        ADVANCE(660);
      if (lookahead == 's')
        ADVANCE(662);
      END_STATE();
    case 658:
      if (lookahead == 't')
        ADVANCE(659);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 660:
      if (lookahead == 'g')
        ADVANCE(661);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_org);
      END_STATE();
    case 662:
      if (lookahead == '9')
        ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_os9);
      END_STATE();
    case 664:
      if (lookahead == 'r')
        ADVANCE(665);
      END_STATE();
    case 665:
      if (lookahead == 'a')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 'g')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'm')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'a')
        ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 670:
      if (lookahead == 'e')
        ADVANCE(671);
      if (lookahead == 'm')
        ADVANCE(675);
      END_STATE();
    case 671:
      if (lookahead == 'o')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 'r')
        ADVANCE(673);
      END_STATE();
    case 673:
      if (lookahead == 'g')
        ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_reorg);
      END_STATE();
    case 675:
      if (lookahead == 'b')
        ADVANCE(676);
      if (lookahead == 'd')
        ADVANCE(677);
      if (lookahead == 'q')
        ADVANCE(678);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_rmb);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_rmd);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_rmq);
      END_STATE();
    case 679:
      if (lookahead == 'e')
        ADVANCE(680);
      if (lookahead == 't')
        ADVANCE(689);
      END_STATE();
    case 680:
      if (lookahead == 'c')
        ADVANCE(681);
      if (lookahead == 't')
        ADVANCE(686);
      END_STATE();
    case 681:
      if (lookahead == 't')
        ADVANCE(682);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_sect);
      if (lookahead == 'i')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'o')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'n')
        ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'd')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'p')
        ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_setdp);
      END_STATE();
    case 689:
      if (lookahead == 'r')
        ADVANCE(690);
      END_STATE();
    case 690:
      if (lookahead == 'u')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 'c')
        ADVANCE(692);
      END_STATE();
    case 692:
      if (lookahead == 't')
        ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 694:
      if (lookahead == 'a')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'r')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'n')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'i')
        ADVANCE(698);
      END_STATE();
    case 698:
      if (lookahead == 'n')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'g')
        ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 701:
      if (lookahead == 'm')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'd')
        ADVANCE(704);
      if (lookahead == 'q')
        ADVANCE(705);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_zmb);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_zmd);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_zmq);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(468);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(470);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(480);
      if (lookahead == '1')
        ADVANCE(481);
      if (lookahead == ';')
        ADVANCE(81);
      if (lookahead == '@')
        ADVANCE(473);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(706);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 707:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(468);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(470);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(480);
      if (lookahead == '1')
        ADVANCE(481);
      if (lookahead == ';')
        ADVANCE(81);
      if (lookahead == '@')
        ADVANCE(473);
      if (lookahead == 'A')
        ADVANCE(708);
      if (lookahead == 'B')
        ADVANCE(709);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'D')
        ADVANCE(712);
      if (lookahead == 'P')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(90);
      if (lookahead == 'U')
        ADVANCE(91);
      if (lookahead == 'X')
        ADVANCE(92);
      if (lookahead == 'Y')
        ADVANCE(93);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(707);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(478);
      if (lookahead == 'E' ||
          lookahead == 'F' ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'H')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'H')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(711);
      if (lookahead == 'H')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'H')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'H')
        ADVANCE(32);
      if (lookahead == 'P')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 713:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(713);
      END_STATE();
    case 714:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(485);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'e')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(599);
      if (lookahead == 'i')
        ADVANCE(612);
      if (lookahead == 'm')
        ADVANCE(650);
      if (lookahead == 'o')
        ADVANCE(657);
      if (lookahead == 'p')
        ADVANCE(664);
      if (lookahead == 'r')
        ADVANCE(670);
      if (lookahead == 's')
        ADVANCE(679);
      if (lookahead == 'w')
        ADVANCE(694);
      if (lookahead == 'z')
        ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(714);
      END_STATE();
    case 715:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(715);
      END_STATE();
    case 716:
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(717);
      if (lookahead == 'B')
        ADVANCE(718);
      if (lookahead == 'C')
        ADVANCE(719);
      if (lookahead == 'D')
        ADVANCE(721);
      if (lookahead == 'P')
        ADVANCE(723);
      if (lookahead == 'S')
        ADVANCE(725);
      if (lookahead == 'U')
        ADVANCE(726);
      if (lookahead == 'X')
        ADVANCE(727);
      if (lookahead == 'Y')
        ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 719:
      if (lookahead == 'C')
        ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 723:
      if (lookahead == 'C')
        ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 729:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(729);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 465},
  [2] = {.lex_state = 467},
  [3] = {.lex_state = 484},
  [4] = {.lex_state = 706},
  [5] = {.lex_state = 707},
  [6] = {.lex_state = 713},
  [7] = {.lex_state = 465},
  [8] = {.lex_state = 484},
  [9] = {.lex_state = 706},
  [10] = {.lex_state = 706},
  [11] = {.lex_state = 465},
  [12] = {.lex_state = 707},
  [13] = {.lex_state = 465},
  [14] = {.lex_state = 484},
  [15] = {.lex_state = 465},
  [16] = {.lex_state = 465},
  [17] = {.lex_state = 714},
  [18] = {.lex_state = 706},
  [19] = {.lex_state = 465},
  [20] = {.lex_state = 706},
  [21] = {.lex_state = 715},
  [22] = {.lex_state = 715},
  [23] = {.lex_state = 467},
  [24] = {.lex_state = 715},
  [25] = {.lex_state = 716},
  [26] = {.lex_state = 467},
  [27] = {.lex_state = 715},
  [28] = {.lex_state = 706},
  [29] = {.lex_state = 715},
  [30] = {.lex_state = 465},
  [31] = {.lex_state = 465},
  [32] = {.lex_state = 465},
  [33] = {.lex_state = 465},
  [34] = {.lex_state = 715},
  [35] = {.lex_state = 729},
  [36] = {.lex_state = 467},
  [37] = {.lex_state = 729},
  [38] = {.lex_state = 467},
  [39] = {.lex_state = 467},
  [40] = {.lex_state = 467},
  [41] = {.lex_state = 706},
  [42] = {.lex_state = 716},
  [43] = {.lex_state = 715},
  [44] = {.lex_state = 706},
  [45] = {.lex_state = 716},
  [46] = {.lex_state = 715},
  [47] = {.lex_state = 716},
  [48] = {.lex_state = 465},
  [49] = {.lex_state = 729},
  [50] = {.lex_state = 715},
  [51] = {.lex_state = 467},
  [52] = {.lex_state = 715},
  [53] = {.lex_state = 715},
  [54] = {.lex_state = 706},
  [55] = {.lex_state = 715},
  [56] = {.lex_state = 715},
  [57] = {.lex_state = 706},
  [58] = {.lex_state = 716},
  [59] = {.lex_state = 706},
  [60] = {.lex_state = 729},
  [61] = {.lex_state = 729},
  [62] = {.lex_state = 706},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_fcb] = ACTIONS(3),
    [anon_sym_DOTdb] = ACTIONS(3),
    [anon_sym_DOTbyte] = ACTIONS(3),
    [anon_sym_fdb] = ACTIONS(3),
    [anon_sym_DOTdw] = ACTIONS(3),
    [anon_sym_DOTword] = ACTIONS(3),
    [anon_sym_fqb] = ACTIONS(3),
    [anon_sym_DOTquad] = ACTIONS(3),
    [anon_sym_DOT4byte] = ACTIONS(3),
    [anon_sym_fcc] = ACTIONS(3),
    [anon_sym_DOTascii] = ACTIONS(3),
    [anon_sym_DOTstr] = ACTIONS(3),
    [anon_sym_fcn] = ACTIONS(3),
    [anon_sym_DOTasciz] = ACTIONS(3),
    [anon_sym_DOTstrz] = ACTIONS(3),
    [anon_sym_fcs] = ACTIONS(3),
    [anon_sym_DOTascis] = ACTIONS(3),
    [anon_sym_DOTstrs] = ACTIONS(3),
    [anon_sym_zmb] = ACTIONS(3),
    [anon_sym_zmd] = ACTIONS(3),
    [anon_sym_zmq] = ACTIONS(3),
    [anon_sym_rmb] = ACTIONS(3),
    [anon_sym_DOTblkb] = ACTIONS(3),
    [anon_sym_DOTds] = ACTIONS(3),
    [anon_sym_DOTrs] = ACTIONS(3),
    [anon_sym_rmd] = ACTIONS(3),
    [anon_sym_rmq] = ACTIONS(3),
    [anon_sym_fill] = ACTIONS(3),
    [anon_sym_includebin] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(3),
    [anon_sym_extern] = ACTIONS(3),
    [anon_sym_external] = ACTIONS(3),
    [anon_sym_DOTglobl] = ACTIONS(3),
    [anon_sym_extdep] = ACTIONS(3),
    [anon_sym_org] = ACTIONS(3),
    [anon_sym_reorg] = ACTIONS(3),
    [anon_sym_equ] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(3),
    [anon_sym_setdp] = ACTIONS(3),
    [anon_sym_align] = ACTIONS(3),
    [anon_sym_ifeq] = ACTIONS(3),
    [anon_sym_ifne] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_ifgt] = ACTIONS(3),
    [anon_sym_ifge] = ACTIONS(3),
    [anon_sym_iflt] = ACTIONS(3),
    [anon_sym_ifle] = ACTIONS(3),
    [anon_sym_ifdef] = ACTIONS(3),
    [anon_sym_ifpragma] = ACTIONS(3),
    [anon_sym_ifndef] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_endc] = ACTIONS(3),
    [anon_sym_os9] = ACTIONS(3),
    [anon_sym_mod] = ACTIONS(3),
    [anon_sym_emod] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_error] = ACTIONS(3),
    [anon_sym_warning] = ACTIONS(3),
    [anon_sym_DOTmodule] = ACTIONS(3),
    [anon_sym_macro] = ACTIONS(3),
    [anon_sym_endm] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_endstruct] = ACTIONS(3),
    [anon_sym_ends] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(3),
    [anon_sym_sect] = ACTIONS(3),
    [anon_sym_DOTarea] = ACTIONS(3),
    [anon_sym_endsection] = ACTIONS(3),
    [anon_sym_endsect] = ACTIONS(3),
    [anon_sym_pragma] = ACTIONS(3),
    [anon_sym_STARpragma] = ACTIONS(3),
    [anon_sym_STARpragmapush] = ACTIONS(3),
    [anon_sym_STARpragmapop] = ACTIONS(3),
    [anon_sym_opt] = ACTIONS(3),
    [sym_imm_marker] = ACTIONS(1),
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
    [sym_asterisk_comment] = ACTIONS(3),
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
    [sym__line] = STATE(13),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym_pseudo_opcode] = STATE(10),
    [sym__comment] = STATE(11),
    [sym_memnonic] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_fcb] = ACTIONS(11),
    [anon_sym_DOTdb] = ACTIONS(11),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_fdb] = ACTIONS(11),
    [anon_sym_DOTdw] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_fqb] = ACTIONS(11),
    [anon_sym_DOTquad] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_fcc] = ACTIONS(11),
    [anon_sym_DOTascii] = ACTIONS(11),
    [anon_sym_DOTstr] = ACTIONS(11),
    [anon_sym_fcn] = ACTIONS(11),
    [anon_sym_DOTasciz] = ACTIONS(11),
    [anon_sym_DOTstrz] = ACTIONS(11),
    [anon_sym_fcs] = ACTIONS(11),
    [anon_sym_DOTascis] = ACTIONS(11),
    [anon_sym_DOTstrs] = ACTIONS(11),
    [anon_sym_zmb] = ACTIONS(11),
    [anon_sym_zmd] = ACTIONS(11),
    [anon_sym_zmq] = ACTIONS(11),
    [anon_sym_rmb] = ACTIONS(11),
    [anon_sym_DOTblkb] = ACTIONS(11),
    [anon_sym_DOTds] = ACTIONS(11),
    [anon_sym_DOTrs] = ACTIONS(11),
    [anon_sym_rmd] = ACTIONS(11),
    [anon_sym_rmq] = ACTIONS(11),
    [anon_sym_fill] = ACTIONS(11),
    [anon_sym_includebin] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(11),
    [anon_sym_DOTglobl] = ACTIONS(11),
    [anon_sym_extdep] = ACTIONS(11),
    [anon_sym_org] = ACTIONS(11),
    [anon_sym_reorg] = ACTIONS(11),
    [anon_sym_equ] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_setdp] = ACTIONS(11),
    [anon_sym_align] = ACTIONS(11),
    [anon_sym_ifeq] = ACTIONS(11),
    [anon_sym_ifne] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_ifgt] = ACTIONS(11),
    [anon_sym_ifge] = ACTIONS(11),
    [anon_sym_iflt] = ACTIONS(11),
    [anon_sym_ifle] = ACTIONS(11),
    [anon_sym_ifdef] = ACTIONS(11),
    [anon_sym_ifpragma] = ACTIONS(11),
    [anon_sym_ifndef] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_endc] = ACTIONS(11),
    [anon_sym_os9] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(11),
    [anon_sym_emod] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_warning] = ACTIONS(11),
    [anon_sym_DOTmodule] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_endm] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_endstruct] = ACTIONS(11),
    [anon_sym_ends] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(11),
    [anon_sym_sect] = ACTIONS(11),
    [anon_sym_DOTarea] = ACTIONS(11),
    [anon_sym_endsection] = ACTIONS(11),
    [anon_sym_endsect] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_STARpragma] = ACTIONS(11),
    [anon_sym_STARpragmapush] = ACTIONS(11),
    [anon_sym_STARpragmapop] = ACTIONS(11),
    [anon_sym_opt] = ACTIONS(11),
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
    [anon_sym_fcb] = ACTIONS(21),
    [anon_sym_DOTdb] = ACTIONS(21),
    [anon_sym_DOTbyte] = ACTIONS(21),
    [anon_sym_fdb] = ACTIONS(21),
    [anon_sym_DOTdw] = ACTIONS(21),
    [anon_sym_DOTword] = ACTIONS(21),
    [anon_sym_fqb] = ACTIONS(21),
    [anon_sym_DOTquad] = ACTIONS(21),
    [anon_sym_DOT4byte] = ACTIONS(21),
    [anon_sym_fcc] = ACTIONS(21),
    [anon_sym_DOTascii] = ACTIONS(21),
    [anon_sym_DOTstr] = ACTIONS(23),
    [anon_sym_fcn] = ACTIONS(21),
    [anon_sym_DOTasciz] = ACTIONS(21),
    [anon_sym_DOTstrz] = ACTIONS(21),
    [anon_sym_fcs] = ACTIONS(21),
    [anon_sym_DOTascis] = ACTIONS(21),
    [anon_sym_DOTstrs] = ACTIONS(21),
    [anon_sym_zmb] = ACTIONS(21),
    [anon_sym_zmd] = ACTIONS(21),
    [anon_sym_zmq] = ACTIONS(21),
    [anon_sym_rmb] = ACTIONS(21),
    [anon_sym_DOTblkb] = ACTIONS(21),
    [anon_sym_DOTds] = ACTIONS(21),
    [anon_sym_DOTrs] = ACTIONS(21),
    [anon_sym_rmd] = ACTIONS(21),
    [anon_sym_rmq] = ACTIONS(21),
    [anon_sym_fill] = ACTIONS(21),
    [anon_sym_includebin] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(21),
    [anon_sym_export] = ACTIONS(21),
    [anon_sym_extern] = ACTIONS(23),
    [anon_sym_external] = ACTIONS(21),
    [anon_sym_DOTglobl] = ACTIONS(21),
    [anon_sym_extdep] = ACTIONS(21),
    [anon_sym_org] = ACTIONS(21),
    [anon_sym_reorg] = ACTIONS(21),
    [anon_sym_equ] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_setdp] = ACTIONS(21),
    [anon_sym_align] = ACTIONS(21),
    [anon_sym_ifeq] = ACTIONS(21),
    [anon_sym_ifne] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_ifgt] = ACTIONS(21),
    [anon_sym_ifge] = ACTIONS(21),
    [anon_sym_iflt] = ACTIONS(21),
    [anon_sym_ifle] = ACTIONS(21),
    [anon_sym_ifdef] = ACTIONS(21),
    [anon_sym_ifpragma] = ACTIONS(21),
    [anon_sym_ifndef] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_endc] = ACTIONS(21),
    [anon_sym_os9] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_emod] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_warning] = ACTIONS(21),
    [anon_sym_DOTmodule] = ACTIONS(21),
    [anon_sym_macro] = ACTIONS(21),
    [anon_sym_endm] = ACTIONS(21),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_endstruct] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(23),
    [anon_sym_section] = ACTIONS(21),
    [anon_sym_sect] = ACTIONS(23),
    [anon_sym_DOTarea] = ACTIONS(21),
    [anon_sym_endsection] = ACTIONS(21),
    [anon_sym_endsect] = ACTIONS(23),
    [anon_sym_pragma] = ACTIONS(21),
    [anon_sym_STARpragma] = ACTIONS(23),
    [anon_sym_STARpragmapush] = ACTIONS(21),
    [anon_sym_STARpragmapop] = ACTIONS(21),
    [anon_sym_opt] = ACTIONS(21),
  },
  [4] = {
    [sym__line_break] = ACTIONS(25),
    [sym__identifier] = ACTIONS(27),
    [sym__decimal] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(27),
    [sym_semicolon_comment] = ACTIONS(27),
    [sym_asterisk_comment] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
  },
  [5] = {
    [sym__line_break] = ACTIONS(29),
    [sym__identifier] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [sym_imm_marker] = ACTIONS(31),
    [sym__decimal] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_A] = ACTIONS(31),
    [anon_sym_B] = ACTIONS(31),
    [anon_sym_X] = ACTIONS(31),
    [anon_sym_Y] = ACTIONS(31),
    [anon_sym_U] = ACTIONS(31),
    [anon_sym_S] = ACTIONS(31),
    [anon_sym_PC] = ACTIONS(31),
    [anon_sym_CC] = ACTIONS(31),
    [anon_sym_DP] = ACTIONS(31),
    [anon_sym_D] = ACTIONS(31),
    [sym_semicolon_comment] = ACTIONS(31),
    [sym_asterisk_comment] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [7] = {
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(18),
    [sym_opcode] = STATE(18),
    [sym_assembler_directive] = STATE(18),
    [sym_pseudo_opcode] = STATE(10),
    [sym__comment] = STATE(19),
    [sym_memnonic] = STATE(12),
    [sym__line_break] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_fcb] = ACTIONS(11),
    [anon_sym_DOTdb] = ACTIONS(11),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_fdb] = ACTIONS(11),
    [anon_sym_DOTdw] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_fqb] = ACTIONS(11),
    [anon_sym_DOTquad] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_fcc] = ACTIONS(11),
    [anon_sym_DOTascii] = ACTIONS(11),
    [anon_sym_DOTstr] = ACTIONS(11),
    [anon_sym_fcn] = ACTIONS(11),
    [anon_sym_DOTasciz] = ACTIONS(11),
    [anon_sym_DOTstrz] = ACTIONS(11),
    [anon_sym_fcs] = ACTIONS(11),
    [anon_sym_DOTascis] = ACTIONS(11),
    [anon_sym_DOTstrs] = ACTIONS(11),
    [anon_sym_zmb] = ACTIONS(11),
    [anon_sym_zmd] = ACTIONS(11),
    [anon_sym_zmq] = ACTIONS(11),
    [anon_sym_rmb] = ACTIONS(11),
    [anon_sym_DOTblkb] = ACTIONS(11),
    [anon_sym_DOTds] = ACTIONS(11),
    [anon_sym_DOTrs] = ACTIONS(11),
    [anon_sym_rmd] = ACTIONS(11),
    [anon_sym_rmq] = ACTIONS(11),
    [anon_sym_fill] = ACTIONS(11),
    [anon_sym_includebin] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(11),
    [anon_sym_DOTglobl] = ACTIONS(11),
    [anon_sym_extdep] = ACTIONS(11),
    [anon_sym_org] = ACTIONS(11),
    [anon_sym_reorg] = ACTIONS(11),
    [anon_sym_equ] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_setdp] = ACTIONS(11),
    [anon_sym_align] = ACTIONS(11),
    [anon_sym_ifeq] = ACTIONS(11),
    [anon_sym_ifne] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_ifgt] = ACTIONS(11),
    [anon_sym_ifge] = ACTIONS(11),
    [anon_sym_iflt] = ACTIONS(11),
    [anon_sym_ifle] = ACTIONS(11),
    [anon_sym_ifdef] = ACTIONS(11),
    [anon_sym_ifpragma] = ACTIONS(11),
    [anon_sym_ifndef] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_endc] = ACTIONS(11),
    [anon_sym_os9] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(11),
    [anon_sym_emod] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_warning] = ACTIONS(11),
    [anon_sym_DOTmodule] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_endm] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_endstruct] = ACTIONS(11),
    [anon_sym_ends] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(11),
    [anon_sym_sect] = ACTIONS(11),
    [anon_sym_DOTarea] = ACTIONS(11),
    [anon_sym_endsection] = ACTIONS(11),
    [anon_sym_endsect] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_STARpragma] = ACTIONS(11),
    [anon_sym_STARpragmapush] = ACTIONS(11),
    [anon_sym_STARpragmapop] = ACTIONS(11),
    [anon_sym_opt] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(39),
    [sym_asterisk_comment] = ACTIONS(39),
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
    [sym_pseudo_opcode] = STATE(20),
    [anon_sym_fcb] = ACTIONS(41),
    [anon_sym_DOTdb] = ACTIONS(41),
    [anon_sym_DOTbyte] = ACTIONS(41),
    [anon_sym_fdb] = ACTIONS(41),
    [anon_sym_DOTdw] = ACTIONS(41),
    [anon_sym_DOTword] = ACTIONS(41),
    [anon_sym_fqb] = ACTIONS(41),
    [anon_sym_DOTquad] = ACTIONS(41),
    [anon_sym_DOT4byte] = ACTIONS(41),
    [anon_sym_fcc] = ACTIONS(41),
    [anon_sym_DOTascii] = ACTIONS(41),
    [anon_sym_DOTstr] = ACTIONS(11),
    [anon_sym_fcn] = ACTIONS(41),
    [anon_sym_DOTasciz] = ACTIONS(41),
    [anon_sym_DOTstrz] = ACTIONS(41),
    [anon_sym_fcs] = ACTIONS(41),
    [anon_sym_DOTascis] = ACTIONS(41),
    [anon_sym_DOTstrs] = ACTIONS(41),
    [anon_sym_zmb] = ACTIONS(41),
    [anon_sym_zmd] = ACTIONS(41),
    [anon_sym_zmq] = ACTIONS(41),
    [anon_sym_rmb] = ACTIONS(41),
    [anon_sym_DOTblkb] = ACTIONS(41),
    [anon_sym_DOTds] = ACTIONS(41),
    [anon_sym_DOTrs] = ACTIONS(41),
    [anon_sym_rmd] = ACTIONS(41),
    [anon_sym_rmq] = ACTIONS(41),
    [anon_sym_fill] = ACTIONS(41),
    [anon_sym_includebin] = ACTIONS(41),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(41),
    [anon_sym_export] = ACTIONS(41),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(41),
    [anon_sym_DOTglobl] = ACTIONS(41),
    [anon_sym_extdep] = ACTIONS(41),
    [anon_sym_org] = ACTIONS(41),
    [anon_sym_reorg] = ACTIONS(41),
    [anon_sym_equ] = ACTIONS(41),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_setdp] = ACTIONS(41),
    [anon_sym_align] = ACTIONS(41),
    [anon_sym_ifeq] = ACTIONS(41),
    [anon_sym_ifne] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_ifgt] = ACTIONS(41),
    [anon_sym_ifge] = ACTIONS(41),
    [anon_sym_iflt] = ACTIONS(41),
    [anon_sym_ifle] = ACTIONS(41),
    [anon_sym_ifdef] = ACTIONS(41),
    [anon_sym_ifpragma] = ACTIONS(41),
    [anon_sym_ifndef] = ACTIONS(41),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_endc] = ACTIONS(41),
    [anon_sym_os9] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_emod] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_warning] = ACTIONS(41),
    [anon_sym_DOTmodule] = ACTIONS(41),
    [anon_sym_macro] = ACTIONS(41),
    [anon_sym_endm] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(41),
    [anon_sym_endstruct] = ACTIONS(41),
    [anon_sym_ends] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(41),
    [anon_sym_sect] = ACTIONS(11),
    [anon_sym_DOTarea] = ACTIONS(41),
    [anon_sym_endsection] = ACTIONS(41),
    [anon_sym_endsect] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(41),
    [anon_sym_STARpragma] = ACTIONS(11),
    [anon_sym_STARpragmapush] = ACTIONS(41),
    [anon_sym_STARpragmapop] = ACTIONS(41),
    [anon_sym_opt] = ACTIONS(41),
  },
  [9] = {
    [sym__comment] = STATE(19),
    [sym__line_break] = ACTIONS(35),
    [sym_semicolon_comment] = ACTIONS(39),
    [sym_asterisk_comment] = ACTIONS(39),
  },
  [10] = {
    [sym_symbol] = STATE(24),
    [sym_constant] = STATE(24),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym__expression] = STATE(24),
    [sym__term] = STATE(24),
    [sym__line_break] = ACTIONS(43),
    [sym__identifier] = ACTIONS(45),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [sym_semicolon_comment] = ACTIONS(49),
    [sym_asterisk_comment] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_string] = ACTIONS(53),
  },
  [11] = {
    [sym__line_break] = ACTIONS(35),
  },
  [12] = {
    [sym_symbol] = STATE(29),
    [sym__operand] = STATE(28),
    [sym_constant] = STATE(29),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym_register] = STATE(28),
    [sym__expression] = STATE(29),
    [sym__term] = STATE(29),
    [sym__line_break] = ACTIONS(55),
    [sym__identifier] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_imm_marker] = ACTIONS(59),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [anon_sym_A] = ACTIONS(61),
    [anon_sym_B] = ACTIONS(61),
    [anon_sym_X] = ACTIONS(61),
    [anon_sym_Y] = ACTIONS(61),
    [anon_sym_U] = ACTIONS(61),
    [anon_sym_S] = ACTIONS(61),
    [anon_sym_PC] = ACTIONS(61),
    [anon_sym_CC] = ACTIONS(61),
    [anon_sym_DP] = ACTIONS(61),
    [anon_sym_D] = ACTIONS(61),
    [sym_semicolon_comment] = ACTIONS(63),
    [sym_asterisk_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_string] = ACTIONS(65),
  },
  [13] = {
    [sym__line] = STATE(30),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym_pseudo_opcode] = STATE(10),
    [sym__comment] = STATE(11),
    [sym_memnonic] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__line_break] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_fcb] = ACTIONS(11),
    [anon_sym_DOTdb] = ACTIONS(11),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_fdb] = ACTIONS(11),
    [anon_sym_DOTdw] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_fqb] = ACTIONS(11),
    [anon_sym_DOTquad] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_fcc] = ACTIONS(11),
    [anon_sym_DOTascii] = ACTIONS(11),
    [anon_sym_DOTstr] = ACTIONS(11),
    [anon_sym_fcn] = ACTIONS(11),
    [anon_sym_DOTasciz] = ACTIONS(11),
    [anon_sym_DOTstrz] = ACTIONS(11),
    [anon_sym_fcs] = ACTIONS(11),
    [anon_sym_DOTascis] = ACTIONS(11),
    [anon_sym_DOTstrs] = ACTIONS(11),
    [anon_sym_zmb] = ACTIONS(11),
    [anon_sym_zmd] = ACTIONS(11),
    [anon_sym_zmq] = ACTIONS(11),
    [anon_sym_rmb] = ACTIONS(11),
    [anon_sym_DOTblkb] = ACTIONS(11),
    [anon_sym_DOTds] = ACTIONS(11),
    [anon_sym_DOTrs] = ACTIONS(11),
    [anon_sym_rmd] = ACTIONS(11),
    [anon_sym_rmq] = ACTIONS(11),
    [anon_sym_fill] = ACTIONS(11),
    [anon_sym_includebin] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(11),
    [anon_sym_DOTglobl] = ACTIONS(11),
    [anon_sym_extdep] = ACTIONS(11),
    [anon_sym_org] = ACTIONS(11),
    [anon_sym_reorg] = ACTIONS(11),
    [anon_sym_equ] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_setdp] = ACTIONS(11),
    [anon_sym_align] = ACTIONS(11),
    [anon_sym_ifeq] = ACTIONS(11),
    [anon_sym_ifne] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_ifgt] = ACTIONS(11),
    [anon_sym_ifge] = ACTIONS(11),
    [anon_sym_iflt] = ACTIONS(11),
    [anon_sym_ifle] = ACTIONS(11),
    [anon_sym_ifdef] = ACTIONS(11),
    [anon_sym_ifpragma] = ACTIONS(11),
    [anon_sym_ifndef] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_endc] = ACTIONS(11),
    [anon_sym_os9] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(11),
    [anon_sym_emod] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_warning] = ACTIONS(11),
    [anon_sym_DOTmodule] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_endm] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_endstruct] = ACTIONS(11),
    [anon_sym_ends] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(11),
    [anon_sym_sect] = ACTIONS(11),
    [anon_sym_DOTarea] = ACTIONS(11),
    [anon_sym_endsection] = ACTIONS(11),
    [anon_sym_endsect] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_STARpragma] = ACTIONS(11),
    [anon_sym_STARpragmapush] = ACTIONS(11),
    [anon_sym_STARpragmapop] = ACTIONS(11),
    [anon_sym_opt] = ACTIONS(11),
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
  [14] = {
    [anon_sym_COLON] = ACTIONS(71),
  },
  [15] = {
    [sym__line_break] = ACTIONS(73),
    [sym__identifier] = ACTIONS(75),
    [anon_sym_fcb] = ACTIONS(75),
    [anon_sym_DOTdb] = ACTIONS(75),
    [anon_sym_DOTbyte] = ACTIONS(75),
    [anon_sym_fdb] = ACTIONS(75),
    [anon_sym_DOTdw] = ACTIONS(75),
    [anon_sym_DOTword] = ACTIONS(75),
    [anon_sym_fqb] = ACTIONS(75),
    [anon_sym_DOTquad] = ACTIONS(75),
    [anon_sym_DOT4byte] = ACTIONS(75),
    [anon_sym_fcc] = ACTIONS(75),
    [anon_sym_DOTascii] = ACTIONS(75),
    [anon_sym_DOTstr] = ACTIONS(75),
    [anon_sym_fcn] = ACTIONS(75),
    [anon_sym_DOTasciz] = ACTIONS(75),
    [anon_sym_DOTstrz] = ACTIONS(75),
    [anon_sym_fcs] = ACTIONS(75),
    [anon_sym_DOTascis] = ACTIONS(75),
    [anon_sym_DOTstrs] = ACTIONS(75),
    [anon_sym_zmb] = ACTIONS(75),
    [anon_sym_zmd] = ACTIONS(75),
    [anon_sym_zmq] = ACTIONS(75),
    [anon_sym_rmb] = ACTIONS(75),
    [anon_sym_DOTblkb] = ACTIONS(75),
    [anon_sym_DOTds] = ACTIONS(75),
    [anon_sym_DOTrs] = ACTIONS(75),
    [anon_sym_rmd] = ACTIONS(75),
    [anon_sym_rmq] = ACTIONS(75),
    [anon_sym_fill] = ACTIONS(75),
    [anon_sym_includebin] = ACTIONS(75),
    [anon_sym_include] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_export] = ACTIONS(75),
    [anon_sym_extern] = ACTIONS(75),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_DOTglobl] = ACTIONS(75),
    [anon_sym_extdep] = ACTIONS(75),
    [anon_sym_org] = ACTIONS(75),
    [anon_sym_reorg] = ACTIONS(75),
    [anon_sym_equ] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_setdp] = ACTIONS(75),
    [anon_sym_align] = ACTIONS(75),
    [anon_sym_ifeq] = ACTIONS(75),
    [anon_sym_ifne] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_ifgt] = ACTIONS(75),
    [anon_sym_ifge] = ACTIONS(75),
    [anon_sym_iflt] = ACTIONS(75),
    [anon_sym_ifle] = ACTIONS(75),
    [anon_sym_ifdef] = ACTIONS(75),
    [anon_sym_ifpragma] = ACTIONS(75),
    [anon_sym_ifndef] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_endc] = ACTIONS(75),
    [anon_sym_os9] = ACTIONS(75),
    [anon_sym_mod] = ACTIONS(75),
    [anon_sym_emod] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(75),
    [anon_sym_error] = ACTIONS(75),
    [anon_sym_warning] = ACTIONS(75),
    [anon_sym_DOTmodule] = ACTIONS(75),
    [anon_sym_macro] = ACTIONS(75),
    [anon_sym_endm] = ACTIONS(75),
    [anon_sym_struct] = ACTIONS(75),
    [anon_sym_endstruct] = ACTIONS(75),
    [anon_sym_ends] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(75),
    [anon_sym_sect] = ACTIONS(75),
    [anon_sym_DOTarea] = ACTIONS(75),
    [anon_sym_endsection] = ACTIONS(75),
    [anon_sym_endsect] = ACTIONS(75),
    [anon_sym_pragma] = ACTIONS(75),
    [anon_sym_STARpragma] = ACTIONS(75),
    [anon_sym_STARpragmapush] = ACTIONS(75),
    [anon_sym_STARpragmapop] = ACTIONS(75),
    [anon_sym_opt] = ACTIONS(75),
    [sym_semicolon_comment] = ACTIONS(75),
    [sym_asterisk_comment] = ACTIONS(75),
    [anon_sym_abx] = ACTIONS(75),
    [anon_sym_adca] = ACTIONS(75),
    [anon_sym_adcb] = ACTIONS(75),
    [anon_sym_adda] = ACTIONS(75),
    [anon_sym_addb] = ACTIONS(75),
    [anon_sym_addd] = ACTIONS(75),
    [anon_sym_anda] = ACTIONS(75),
    [anon_sym_andb] = ACTIONS(75),
    [anon_sym_andcc] = ACTIONS(75),
    [anon_sym_asla] = ACTIONS(75),
    [anon_sym_aslb] = ACTIONS(75),
    [anon_sym_asl] = ACTIONS(75),
    [anon_sym_asra] = ACTIONS(75),
    [anon_sym_asrb] = ACTIONS(75),
    [anon_sym_asr] = ACTIONS(75),
    [anon_sym_bita] = ACTIONS(75),
    [anon_sym_bitb] = ACTIONS(75),
    [anon_sym_bra] = ACTIONS(75),
    [anon_sym_bcc] = ACTIONS(75),
    [anon_sym_bcs] = ACTIONS(75),
    [anon_sym_beq] = ACTIONS(75),
    [anon_sym_bge] = ACTIONS(75),
    [anon_sym_bgt] = ACTIONS(75),
    [anon_sym_bhi] = ACTIONS(75),
    [anon_sym_bhs] = ACTIONS(75),
    [anon_sym_ble] = ACTIONS(75),
    [anon_sym_blo] = ACTIONS(75),
    [anon_sym_bls] = ACTIONS(75),
    [anon_sym_blt] = ACTIONS(75),
    [anon_sym_bmi] = ACTIONS(75),
    [anon_sym_bne] = ACTIONS(75),
    [anon_sym_bpl] = ACTIONS(75),
    [anon_sym_brn] = ACTIONS(75),
    [anon_sym_bsr] = ACTIONS(75),
    [anon_sym_bvc] = ACTIONS(75),
    [anon_sym_bvs] = ACTIONS(75),
    [anon_sym_lbra] = ACTIONS(75),
    [anon_sym_lbcc] = ACTIONS(75),
    [anon_sym_lbcs] = ACTIONS(75),
    [anon_sym_lbeq] = ACTIONS(75),
    [anon_sym_lbge] = ACTIONS(75),
    [anon_sym_lbgt] = ACTIONS(75),
    [anon_sym_lbhi] = ACTIONS(75),
    [anon_sym_lbhs] = ACTIONS(75),
    [anon_sym_lble] = ACTIONS(75),
    [anon_sym_lblo] = ACTIONS(75),
    [anon_sym_lbls] = ACTIONS(75),
    [anon_sym_lblt] = ACTIONS(75),
    [anon_sym_lbmi] = ACTIONS(75),
    [anon_sym_lbne] = ACTIONS(75),
    [anon_sym_lbpl] = ACTIONS(75),
    [anon_sym_lbrn] = ACTIONS(75),
    [anon_sym_lbsr] = ACTIONS(75),
    [anon_sym_lbvc] = ACTIONS(75),
    [anon_sym_lbvs] = ACTIONS(75),
    [anon_sym_clra] = ACTIONS(75),
    [anon_sym_clrb] = ACTIONS(75),
    [anon_sym_clr] = ACTIONS(75),
    [anon_sym_cmpa] = ACTIONS(75),
    [anon_sym_cmpb] = ACTIONS(75),
    [anon_sym_cmpd] = ACTIONS(75),
    [anon_sym_cmps] = ACTIONS(75),
    [anon_sym_cmpu] = ACTIONS(75),
    [anon_sym_cmpx] = ACTIONS(75),
    [anon_sym_cmpy] = ACTIONS(75),
    [anon_sym_coma] = ACTIONS(75),
    [anon_sym_comb] = ACTIONS(75),
    [anon_sym_com] = ACTIONS(75),
    [anon_sym_cwai] = ACTIONS(75),
    [anon_sym_daa] = ACTIONS(75),
    [anon_sym_deca] = ACTIONS(75),
    [anon_sym_decb] = ACTIONS(75),
    [anon_sym_dec] = ACTIONS(75),
    [anon_sym_eora] = ACTIONS(75),
    [anon_sym_eorb] = ACTIONS(75),
    [anon_sym_exg] = ACTIONS(75),
    [anon_sym_inca] = ACTIONS(75),
    [anon_sym_incb] = ACTIONS(75),
    [anon_sym_inc] = ACTIONS(75),
    [anon_sym_jmp] = ACTIONS(75),
    [anon_sym_jsr] = ACTIONS(75),
    [anon_sym_lda] = ACTIONS(75),
    [anon_sym_ldb] = ACTIONS(75),
    [anon_sym_ldd] = ACTIONS(75),
    [anon_sym_lds] = ACTIONS(75),
    [anon_sym_ldu] = ACTIONS(75),
    [anon_sym_ldx] = ACTIONS(75),
    [anon_sym_ldy] = ACTIONS(75),
    [anon_sym_leas] = ACTIONS(75),
    [anon_sym_leau] = ACTIONS(75),
    [anon_sym_leax] = ACTIONS(75),
    [anon_sym_leay] = ACTIONS(75),
    [anon_sym_lsla] = ACTIONS(75),
    [anon_sym_lslb] = ACTIONS(75),
    [anon_sym_lsl] = ACTIONS(75),
    [anon_sym_lsra] = ACTIONS(75),
    [anon_sym_lsrb] = ACTIONS(75),
    [anon_sym_lsr] = ACTIONS(75),
    [anon_sym_mul] = ACTIONS(75),
    [anon_sym_nega] = ACTIONS(75),
    [anon_sym_negb] = ACTIONS(75),
    [anon_sym_neg] = ACTIONS(75),
    [anon_sym_nop] = ACTIONS(75),
    [anon_sym_ora] = ACTIONS(75),
    [anon_sym_orb] = ACTIONS(75),
    [anon_sym_orcc] = ACTIONS(75),
    [anon_sym_pshs] = ACTIONS(75),
    [anon_sym_pshu] = ACTIONS(75),
    [anon_sym_puls] = ACTIONS(75),
    [anon_sym_pulu] = ACTIONS(75),
    [anon_sym_rola] = ACTIONS(75),
    [anon_sym_rolb] = ACTIONS(75),
    [anon_sym_rol] = ACTIONS(75),
    [anon_sym_rora] = ACTIONS(75),
    [anon_sym_rorb] = ACTIONS(75),
    [anon_sym_ror] = ACTIONS(75),
    [anon_sym_rti] = ACTIONS(75),
    [anon_sym_rts] = ACTIONS(75),
    [anon_sym_sbca] = ACTIONS(75),
    [anon_sym_sbcb] = ACTIONS(75),
    [anon_sym_sex] = ACTIONS(75),
    [anon_sym_sta] = ACTIONS(75),
    [anon_sym_stb] = ACTIONS(75),
    [anon_sym_std] = ACTIONS(75),
    [anon_sym_sts] = ACTIONS(75),
    [anon_sym_stu] = ACTIONS(75),
    [anon_sym_stx] = ACTIONS(75),
    [anon_sym_sty] = ACTIONS(75),
    [anon_sym_suba] = ACTIONS(75),
    [anon_sym_subb] = ACTIONS(75),
    [anon_sym_subd] = ACTIONS(75),
    [anon_sym_swi] = ACTIONS(75),
    [anon_sym_swi2] = ACTIONS(75),
    [anon_sym_swi3] = ACTIONS(75),
    [anon_sym_sync] = ACTIONS(75),
    [anon_sym_tfr] = ACTIONS(75),
    [anon_sym_tsta] = ACTIONS(75),
    [anon_sym_tstb] = ACTIONS(75),
    [anon_sym_tst] = ACTIONS(75),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym__line_break] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(79),
    [sym__identifier] = ACTIONS(79),
    [anon_sym_fcb] = ACTIONS(79),
    [anon_sym_DOTdb] = ACTIONS(79),
    [anon_sym_DOTbyte] = ACTIONS(79),
    [anon_sym_fdb] = ACTIONS(79),
    [anon_sym_DOTdw] = ACTIONS(79),
    [anon_sym_DOTword] = ACTIONS(79),
    [anon_sym_fqb] = ACTIONS(79),
    [anon_sym_DOTquad] = ACTIONS(79),
    [anon_sym_DOT4byte] = ACTIONS(79),
    [anon_sym_fcc] = ACTIONS(79),
    [anon_sym_DOTascii] = ACTIONS(79),
    [anon_sym_DOTstr] = ACTIONS(79),
    [anon_sym_fcn] = ACTIONS(79),
    [anon_sym_DOTasciz] = ACTIONS(79),
    [anon_sym_DOTstrz] = ACTIONS(79),
    [anon_sym_fcs] = ACTIONS(79),
    [anon_sym_DOTascis] = ACTIONS(79),
    [anon_sym_DOTstrs] = ACTIONS(79),
    [anon_sym_zmb] = ACTIONS(79),
    [anon_sym_zmd] = ACTIONS(79),
    [anon_sym_zmq] = ACTIONS(79),
    [anon_sym_rmb] = ACTIONS(79),
    [anon_sym_DOTblkb] = ACTIONS(79),
    [anon_sym_DOTds] = ACTIONS(79),
    [anon_sym_DOTrs] = ACTIONS(79),
    [anon_sym_rmd] = ACTIONS(79),
    [anon_sym_rmq] = ACTIONS(79),
    [anon_sym_fill] = ACTIONS(79),
    [anon_sym_includebin] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_export] = ACTIONS(79),
    [anon_sym_extern] = ACTIONS(79),
    [anon_sym_external] = ACTIONS(79),
    [anon_sym_DOTglobl] = ACTIONS(79),
    [anon_sym_extdep] = ACTIONS(79),
    [anon_sym_org] = ACTIONS(79),
    [anon_sym_reorg] = ACTIONS(79),
    [anon_sym_equ] = ACTIONS(79),
    [anon_sym_set] = ACTIONS(79),
    [anon_sym_setdp] = ACTIONS(79),
    [anon_sym_align] = ACTIONS(79),
    [anon_sym_ifeq] = ACTIONS(79),
    [anon_sym_ifne] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_ifgt] = ACTIONS(79),
    [anon_sym_ifge] = ACTIONS(79),
    [anon_sym_iflt] = ACTIONS(79),
    [anon_sym_ifle] = ACTIONS(79),
    [anon_sym_ifdef] = ACTIONS(79),
    [anon_sym_ifpragma] = ACTIONS(79),
    [anon_sym_ifndef] = ACTIONS(79),
    [anon_sym_else] = ACTIONS(79),
    [anon_sym_endc] = ACTIONS(79),
    [anon_sym_os9] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_emod] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_error] = ACTIONS(79),
    [anon_sym_warning] = ACTIONS(79),
    [anon_sym_DOTmodule] = ACTIONS(79),
    [anon_sym_macro] = ACTIONS(79),
    [anon_sym_endm] = ACTIONS(79),
    [anon_sym_struct] = ACTIONS(79),
    [anon_sym_endstruct] = ACTIONS(79),
    [anon_sym_ends] = ACTIONS(79),
    [anon_sym_section] = ACTIONS(79),
    [anon_sym_sect] = ACTIONS(79),
    [anon_sym_DOTarea] = ACTIONS(79),
    [anon_sym_endsection] = ACTIONS(79),
    [anon_sym_endsect] = ACTIONS(79),
    [anon_sym_pragma] = ACTIONS(79),
    [anon_sym_STARpragma] = ACTIONS(79),
    [anon_sym_STARpragmapush] = ACTIONS(79),
    [anon_sym_STARpragmapop] = ACTIONS(79),
    [anon_sym_opt] = ACTIONS(79),
    [sym_semicolon_comment] = ACTIONS(79),
    [sym_asterisk_comment] = ACTIONS(79),
    [anon_sym_abx] = ACTIONS(79),
    [anon_sym_adca] = ACTIONS(79),
    [anon_sym_adcb] = ACTIONS(79),
    [anon_sym_adda] = ACTIONS(79),
    [anon_sym_addb] = ACTIONS(79),
    [anon_sym_addd] = ACTIONS(79),
    [anon_sym_anda] = ACTIONS(79),
    [anon_sym_andb] = ACTIONS(79),
    [anon_sym_andcc] = ACTIONS(79),
    [anon_sym_asla] = ACTIONS(79),
    [anon_sym_aslb] = ACTIONS(79),
    [anon_sym_asl] = ACTIONS(79),
    [anon_sym_asra] = ACTIONS(79),
    [anon_sym_asrb] = ACTIONS(79),
    [anon_sym_asr] = ACTIONS(79),
    [anon_sym_bita] = ACTIONS(79),
    [anon_sym_bitb] = ACTIONS(79),
    [anon_sym_bra] = ACTIONS(79),
    [anon_sym_bcc] = ACTIONS(79),
    [anon_sym_bcs] = ACTIONS(79),
    [anon_sym_beq] = ACTIONS(79),
    [anon_sym_bge] = ACTIONS(79),
    [anon_sym_bgt] = ACTIONS(79),
    [anon_sym_bhi] = ACTIONS(79),
    [anon_sym_bhs] = ACTIONS(79),
    [anon_sym_ble] = ACTIONS(79),
    [anon_sym_blo] = ACTIONS(79),
    [anon_sym_bls] = ACTIONS(79),
    [anon_sym_blt] = ACTIONS(79),
    [anon_sym_bmi] = ACTIONS(79),
    [anon_sym_bne] = ACTIONS(79),
    [anon_sym_bpl] = ACTIONS(79),
    [anon_sym_brn] = ACTIONS(79),
    [anon_sym_bsr] = ACTIONS(79),
    [anon_sym_bvc] = ACTIONS(79),
    [anon_sym_bvs] = ACTIONS(79),
    [anon_sym_lbra] = ACTIONS(79),
    [anon_sym_lbcc] = ACTIONS(79),
    [anon_sym_lbcs] = ACTIONS(79),
    [anon_sym_lbeq] = ACTIONS(79),
    [anon_sym_lbge] = ACTIONS(79),
    [anon_sym_lbgt] = ACTIONS(79),
    [anon_sym_lbhi] = ACTIONS(79),
    [anon_sym_lbhs] = ACTIONS(79),
    [anon_sym_lble] = ACTIONS(79),
    [anon_sym_lblo] = ACTIONS(79),
    [anon_sym_lbls] = ACTIONS(79),
    [anon_sym_lblt] = ACTIONS(79),
    [anon_sym_lbmi] = ACTIONS(79),
    [anon_sym_lbne] = ACTIONS(79),
    [anon_sym_lbpl] = ACTIONS(79),
    [anon_sym_lbrn] = ACTIONS(79),
    [anon_sym_lbsr] = ACTIONS(79),
    [anon_sym_lbvc] = ACTIONS(79),
    [anon_sym_lbvs] = ACTIONS(79),
    [anon_sym_clra] = ACTIONS(79),
    [anon_sym_clrb] = ACTIONS(79),
    [anon_sym_clr] = ACTIONS(79),
    [anon_sym_cmpa] = ACTIONS(79),
    [anon_sym_cmpb] = ACTIONS(79),
    [anon_sym_cmpd] = ACTIONS(79),
    [anon_sym_cmps] = ACTIONS(79),
    [anon_sym_cmpu] = ACTIONS(79),
    [anon_sym_cmpx] = ACTIONS(79),
    [anon_sym_cmpy] = ACTIONS(79),
    [anon_sym_coma] = ACTIONS(79),
    [anon_sym_comb] = ACTIONS(79),
    [anon_sym_com] = ACTIONS(79),
    [anon_sym_cwai] = ACTIONS(79),
    [anon_sym_daa] = ACTIONS(79),
    [anon_sym_deca] = ACTIONS(79),
    [anon_sym_decb] = ACTIONS(79),
    [anon_sym_dec] = ACTIONS(79),
    [anon_sym_eora] = ACTIONS(79),
    [anon_sym_eorb] = ACTIONS(79),
    [anon_sym_exg] = ACTIONS(79),
    [anon_sym_inca] = ACTIONS(79),
    [anon_sym_incb] = ACTIONS(79),
    [anon_sym_inc] = ACTIONS(79),
    [anon_sym_jmp] = ACTIONS(79),
    [anon_sym_jsr] = ACTIONS(79),
    [anon_sym_lda] = ACTIONS(79),
    [anon_sym_ldb] = ACTIONS(79),
    [anon_sym_ldd] = ACTIONS(79),
    [anon_sym_lds] = ACTIONS(79),
    [anon_sym_ldu] = ACTIONS(79),
    [anon_sym_ldx] = ACTIONS(79),
    [anon_sym_ldy] = ACTIONS(79),
    [anon_sym_leas] = ACTIONS(79),
    [anon_sym_leau] = ACTIONS(79),
    [anon_sym_leax] = ACTIONS(79),
    [anon_sym_leay] = ACTIONS(79),
    [anon_sym_lsla] = ACTIONS(79),
    [anon_sym_lslb] = ACTIONS(79),
    [anon_sym_lsl] = ACTIONS(79),
    [anon_sym_lsra] = ACTIONS(79),
    [anon_sym_lsrb] = ACTIONS(79),
    [anon_sym_lsr] = ACTIONS(79),
    [anon_sym_mul] = ACTIONS(79),
    [anon_sym_nega] = ACTIONS(79),
    [anon_sym_negb] = ACTIONS(79),
    [anon_sym_neg] = ACTIONS(79),
    [anon_sym_nop] = ACTIONS(79),
    [anon_sym_ora] = ACTIONS(79),
    [anon_sym_orb] = ACTIONS(79),
    [anon_sym_orcc] = ACTIONS(79),
    [anon_sym_pshs] = ACTIONS(79),
    [anon_sym_pshu] = ACTIONS(79),
    [anon_sym_puls] = ACTIONS(79),
    [anon_sym_pulu] = ACTIONS(79),
    [anon_sym_rola] = ACTIONS(79),
    [anon_sym_rolb] = ACTIONS(79),
    [anon_sym_rol] = ACTIONS(79),
    [anon_sym_rora] = ACTIONS(79),
    [anon_sym_rorb] = ACTIONS(79),
    [anon_sym_ror] = ACTIONS(79),
    [anon_sym_rti] = ACTIONS(79),
    [anon_sym_rts] = ACTIONS(79),
    [anon_sym_sbca] = ACTIONS(79),
    [anon_sym_sbcb] = ACTIONS(79),
    [anon_sym_sex] = ACTIONS(79),
    [anon_sym_sta] = ACTIONS(79),
    [anon_sym_stb] = ACTIONS(79),
    [anon_sym_std] = ACTIONS(79),
    [anon_sym_sts] = ACTIONS(79),
    [anon_sym_stu] = ACTIONS(79),
    [anon_sym_stx] = ACTIONS(79),
    [anon_sym_sty] = ACTIONS(79),
    [anon_sym_suba] = ACTIONS(79),
    [anon_sym_subb] = ACTIONS(79),
    [anon_sym_subd] = ACTIONS(79),
    [anon_sym_swi] = ACTIONS(79),
    [anon_sym_swi2] = ACTIONS(79),
    [anon_sym_swi3] = ACTIONS(79),
    [anon_sym_sync] = ACTIONS(79),
    [anon_sym_tfr] = ACTIONS(79),
    [anon_sym_tsta] = ACTIONS(79),
    [anon_sym_tstb] = ACTIONS(79),
    [anon_sym_tst] = ACTIONS(79),
  },
  [17] = {
    [anon_sym_fcb] = ACTIONS(21),
    [anon_sym_DOTdb] = ACTIONS(21),
    [anon_sym_DOTbyte] = ACTIONS(21),
    [anon_sym_fdb] = ACTIONS(21),
    [anon_sym_DOTdw] = ACTIONS(21),
    [anon_sym_DOTword] = ACTIONS(21),
    [anon_sym_fqb] = ACTIONS(21),
    [anon_sym_DOTquad] = ACTIONS(21),
    [anon_sym_DOT4byte] = ACTIONS(21),
    [anon_sym_fcc] = ACTIONS(21),
    [anon_sym_DOTascii] = ACTIONS(21),
    [anon_sym_DOTstr] = ACTIONS(23),
    [anon_sym_fcn] = ACTIONS(21),
    [anon_sym_DOTasciz] = ACTIONS(21),
    [anon_sym_DOTstrz] = ACTIONS(21),
    [anon_sym_fcs] = ACTIONS(21),
    [anon_sym_DOTascis] = ACTIONS(21),
    [anon_sym_DOTstrs] = ACTIONS(21),
    [anon_sym_zmb] = ACTIONS(21),
    [anon_sym_zmd] = ACTIONS(21),
    [anon_sym_zmq] = ACTIONS(21),
    [anon_sym_rmb] = ACTIONS(21),
    [anon_sym_DOTblkb] = ACTIONS(21),
    [anon_sym_DOTds] = ACTIONS(21),
    [anon_sym_DOTrs] = ACTIONS(21),
    [anon_sym_rmd] = ACTIONS(21),
    [anon_sym_rmq] = ACTIONS(21),
    [anon_sym_fill] = ACTIONS(21),
    [anon_sym_includebin] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(21),
    [anon_sym_export] = ACTIONS(21),
    [anon_sym_extern] = ACTIONS(23),
    [anon_sym_external] = ACTIONS(21),
    [anon_sym_DOTglobl] = ACTIONS(21),
    [anon_sym_extdep] = ACTIONS(21),
    [anon_sym_org] = ACTIONS(21),
    [anon_sym_reorg] = ACTIONS(21),
    [anon_sym_equ] = ACTIONS(21),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_setdp] = ACTIONS(21),
    [anon_sym_align] = ACTIONS(21),
    [anon_sym_ifeq] = ACTIONS(21),
    [anon_sym_ifne] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_ifgt] = ACTIONS(21),
    [anon_sym_ifge] = ACTIONS(21),
    [anon_sym_iflt] = ACTIONS(21),
    [anon_sym_ifle] = ACTIONS(21),
    [anon_sym_ifdef] = ACTIONS(21),
    [anon_sym_ifpragma] = ACTIONS(21),
    [anon_sym_ifndef] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_endc] = ACTIONS(21),
    [anon_sym_os9] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_emod] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_warning] = ACTIONS(21),
    [anon_sym_DOTmodule] = ACTIONS(21),
    [anon_sym_macro] = ACTIONS(21),
    [anon_sym_endm] = ACTIONS(21),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_endstruct] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(23),
    [anon_sym_section] = ACTIONS(21),
    [anon_sym_sect] = ACTIONS(23),
    [anon_sym_DOTarea] = ACTIONS(21),
    [anon_sym_endsection] = ACTIONS(21),
    [anon_sym_endsect] = ACTIONS(23),
    [anon_sym_pragma] = ACTIONS(21),
    [anon_sym_STARpragma] = ACTIONS(23),
    [anon_sym_STARpragmapush] = ACTIONS(21),
    [anon_sym_STARpragmapop] = ACTIONS(21),
    [anon_sym_opt] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [18] = {
    [sym__comment] = STATE(33),
    [sym__line_break] = ACTIONS(81),
    [sym_semicolon_comment] = ACTIONS(83),
    [sym_asterisk_comment] = ACTIONS(83),
  },
  [19] = {
    [sym__line_break] = ACTIONS(81),
  },
  [20] = {
    [sym_symbol] = STATE(34),
    [sym_constant] = STATE(34),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym__expression] = STATE(34),
    [sym__term] = STATE(34),
    [sym__line_break] = ACTIONS(85),
    [sym__identifier] = ACTIONS(45),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [sym_semicolon_comment] = ACTIONS(87),
    [sym_asterisk_comment] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_string] = ACTIONS(89),
  },
  [21] = {
    [sym__line_break] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_semicolon_comment] = ACTIONS(23),
    [sym_asterisk_comment] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
  },
  [22] = {
    [sym__line_break] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_semicolon_comment] = ACTIONS(93),
    [sym_asterisk_comment] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [23] = {
    [sym_symbol] = STATE(37),
    [sym_constant] = STATE(37),
    [sym__octal] = STATE(35),
    [sym__hexadecimal] = STATE(35),
    [sym__binary] = STATE(35),
    [sym__expression] = STATE(37),
    [sym__term] = STATE(37),
    [sym__identifier] = ACTIONS(95),
    [sym__decimal] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_string] = ACTIONS(103),
  },
  [24] = {
    [sym_operator] = STATE(40),
    [aux_sym_assembler_directive_repeat1] = STATE(41),
    [sym__line_break] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_semicolon_comment] = ACTIONS(87),
    [sym_asterisk_comment] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [25] = {
    [sym_register] = STATE(43),
    [sym__register_exp] = STATE(44),
    [sym_operator] = STATE(45),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_B] = ACTIONS(109),
    [anon_sym_X] = ACTIONS(109),
    [anon_sym_Y] = ACTIONS(109),
    [anon_sym_U] = ACTIONS(109),
    [anon_sym_S] = ACTIONS(109),
    [anon_sym_PC] = ACTIONS(109),
    [anon_sym_CC] = ACTIONS(109),
    [anon_sym_DP] = ACTIONS(109),
    [anon_sym_D] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [26] = {
    [sym_symbol] = STATE(46),
    [sym_constant] = STATE(46),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym__expression] = STATE(46),
    [sym__term] = STATE(46),
    [sym__identifier] = ACTIONS(113),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_string] = ACTIONS(119),
  },
  [27] = {
    [sym__line_break] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_semicolon_comment] = ACTIONS(123),
    [sym_asterisk_comment] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
  },
  [28] = {
    [sym__line_break] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(127),
    [sym_semicolon_comment] = ACTIONS(129),
    [sym_asterisk_comment] = ACTIONS(129),
  },
  [29] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(133),
    [sym_semicolon_comment] = ACTIONS(133),
    [sym_asterisk_comment] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [30] = {
    [sym__line] = STATE(30),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym_pseudo_opcode] = STATE(10),
    [sym__comment] = STATE(11),
    [sym_memnonic] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym__line_break] = ACTIONS(137),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(140),
    [sym__identifier] = ACTIONS(143),
    [anon_sym_fcb] = ACTIONS(146),
    [anon_sym_DOTdb] = ACTIONS(146),
    [anon_sym_DOTbyte] = ACTIONS(146),
    [anon_sym_fdb] = ACTIONS(146),
    [anon_sym_DOTdw] = ACTIONS(146),
    [anon_sym_DOTword] = ACTIONS(146),
    [anon_sym_fqb] = ACTIONS(146),
    [anon_sym_DOTquad] = ACTIONS(146),
    [anon_sym_DOT4byte] = ACTIONS(146),
    [anon_sym_fcc] = ACTIONS(146),
    [anon_sym_DOTascii] = ACTIONS(146),
    [anon_sym_DOTstr] = ACTIONS(146),
    [anon_sym_fcn] = ACTIONS(146),
    [anon_sym_DOTasciz] = ACTIONS(146),
    [anon_sym_DOTstrz] = ACTIONS(146),
    [anon_sym_fcs] = ACTIONS(146),
    [anon_sym_DOTascis] = ACTIONS(146),
    [anon_sym_DOTstrs] = ACTIONS(146),
    [anon_sym_zmb] = ACTIONS(146),
    [anon_sym_zmd] = ACTIONS(146),
    [anon_sym_zmq] = ACTIONS(146),
    [anon_sym_rmb] = ACTIONS(146),
    [anon_sym_DOTblkb] = ACTIONS(146),
    [anon_sym_DOTds] = ACTIONS(146),
    [anon_sym_DOTrs] = ACTIONS(146),
    [anon_sym_rmd] = ACTIONS(146),
    [anon_sym_rmq] = ACTIONS(146),
    [anon_sym_fill] = ACTIONS(146),
    [anon_sym_includebin] = ACTIONS(146),
    [anon_sym_include] = ACTIONS(146),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_export] = ACTIONS(146),
    [anon_sym_extern] = ACTIONS(146),
    [anon_sym_external] = ACTIONS(146),
    [anon_sym_DOTglobl] = ACTIONS(146),
    [anon_sym_extdep] = ACTIONS(146),
    [anon_sym_org] = ACTIONS(146),
    [anon_sym_reorg] = ACTIONS(146),
    [anon_sym_equ] = ACTIONS(146),
    [anon_sym_set] = ACTIONS(146),
    [anon_sym_setdp] = ACTIONS(146),
    [anon_sym_align] = ACTIONS(146),
    [anon_sym_ifeq] = ACTIONS(146),
    [anon_sym_ifne] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_ifgt] = ACTIONS(146),
    [anon_sym_ifge] = ACTIONS(146),
    [anon_sym_iflt] = ACTIONS(146),
    [anon_sym_ifle] = ACTIONS(146),
    [anon_sym_ifdef] = ACTIONS(146),
    [anon_sym_ifpragma] = ACTIONS(146),
    [anon_sym_ifndef] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_endc] = ACTIONS(146),
    [anon_sym_os9] = ACTIONS(146),
    [anon_sym_mod] = ACTIONS(146),
    [anon_sym_emod] = ACTIONS(146),
    [anon_sym_end] = ACTIONS(146),
    [anon_sym_error] = ACTIONS(146),
    [anon_sym_warning] = ACTIONS(146),
    [anon_sym_DOTmodule] = ACTIONS(146),
    [anon_sym_macro] = ACTIONS(146),
    [anon_sym_endm] = ACTIONS(146),
    [anon_sym_struct] = ACTIONS(146),
    [anon_sym_endstruct] = ACTIONS(146),
    [anon_sym_ends] = ACTIONS(146),
    [anon_sym_section] = ACTIONS(146),
    [anon_sym_sect] = ACTIONS(146),
    [anon_sym_DOTarea] = ACTIONS(146),
    [anon_sym_endsection] = ACTIONS(146),
    [anon_sym_endsect] = ACTIONS(146),
    [anon_sym_pragma] = ACTIONS(146),
    [anon_sym_STARpragma] = ACTIONS(146),
    [anon_sym_STARpragmapush] = ACTIONS(146),
    [anon_sym_STARpragmapop] = ACTIONS(146),
    [anon_sym_opt] = ACTIONS(146),
    [sym_semicolon_comment] = ACTIONS(149),
    [sym_asterisk_comment] = ACTIONS(149),
    [anon_sym_abx] = ACTIONS(152),
    [anon_sym_adca] = ACTIONS(152),
    [anon_sym_adcb] = ACTIONS(152),
    [anon_sym_adda] = ACTIONS(152),
    [anon_sym_addb] = ACTIONS(152),
    [anon_sym_addd] = ACTIONS(152),
    [anon_sym_anda] = ACTIONS(152),
    [anon_sym_andb] = ACTIONS(152),
    [anon_sym_andcc] = ACTIONS(152),
    [anon_sym_asla] = ACTIONS(152),
    [anon_sym_aslb] = ACTIONS(152),
    [anon_sym_asl] = ACTIONS(152),
    [anon_sym_asra] = ACTIONS(152),
    [anon_sym_asrb] = ACTIONS(152),
    [anon_sym_asr] = ACTIONS(152),
    [anon_sym_bita] = ACTIONS(152),
    [anon_sym_bitb] = ACTIONS(152),
    [anon_sym_bra] = ACTIONS(152),
    [anon_sym_bcc] = ACTIONS(152),
    [anon_sym_bcs] = ACTIONS(152),
    [anon_sym_beq] = ACTIONS(152),
    [anon_sym_bge] = ACTIONS(152),
    [anon_sym_bgt] = ACTIONS(152),
    [anon_sym_bhi] = ACTIONS(152),
    [anon_sym_bhs] = ACTIONS(152),
    [anon_sym_ble] = ACTIONS(152),
    [anon_sym_blo] = ACTIONS(152),
    [anon_sym_bls] = ACTIONS(152),
    [anon_sym_blt] = ACTIONS(152),
    [anon_sym_bmi] = ACTIONS(152),
    [anon_sym_bne] = ACTIONS(152),
    [anon_sym_bpl] = ACTIONS(152),
    [anon_sym_brn] = ACTIONS(152),
    [anon_sym_bsr] = ACTIONS(152),
    [anon_sym_bvc] = ACTIONS(152),
    [anon_sym_bvs] = ACTIONS(152),
    [anon_sym_lbra] = ACTIONS(152),
    [anon_sym_lbcc] = ACTIONS(152),
    [anon_sym_lbcs] = ACTIONS(152),
    [anon_sym_lbeq] = ACTIONS(152),
    [anon_sym_lbge] = ACTIONS(152),
    [anon_sym_lbgt] = ACTIONS(152),
    [anon_sym_lbhi] = ACTIONS(152),
    [anon_sym_lbhs] = ACTIONS(152),
    [anon_sym_lble] = ACTIONS(152),
    [anon_sym_lblo] = ACTIONS(152),
    [anon_sym_lbls] = ACTIONS(152),
    [anon_sym_lblt] = ACTIONS(152),
    [anon_sym_lbmi] = ACTIONS(152),
    [anon_sym_lbne] = ACTIONS(152),
    [anon_sym_lbpl] = ACTIONS(152),
    [anon_sym_lbrn] = ACTIONS(152),
    [anon_sym_lbsr] = ACTIONS(152),
    [anon_sym_lbvc] = ACTIONS(152),
    [anon_sym_lbvs] = ACTIONS(152),
    [anon_sym_clra] = ACTIONS(152),
    [anon_sym_clrb] = ACTIONS(152),
    [anon_sym_clr] = ACTIONS(152),
    [anon_sym_cmpa] = ACTIONS(152),
    [anon_sym_cmpb] = ACTIONS(152),
    [anon_sym_cmpd] = ACTIONS(152),
    [anon_sym_cmps] = ACTIONS(152),
    [anon_sym_cmpu] = ACTIONS(152),
    [anon_sym_cmpx] = ACTIONS(152),
    [anon_sym_cmpy] = ACTIONS(152),
    [anon_sym_coma] = ACTIONS(152),
    [anon_sym_comb] = ACTIONS(152),
    [anon_sym_com] = ACTIONS(152),
    [anon_sym_cwai] = ACTIONS(152),
    [anon_sym_daa] = ACTIONS(152),
    [anon_sym_deca] = ACTIONS(152),
    [anon_sym_decb] = ACTIONS(152),
    [anon_sym_dec] = ACTIONS(152),
    [anon_sym_eora] = ACTIONS(152),
    [anon_sym_eorb] = ACTIONS(152),
    [anon_sym_exg] = ACTIONS(152),
    [anon_sym_inca] = ACTIONS(152),
    [anon_sym_incb] = ACTIONS(152),
    [anon_sym_inc] = ACTIONS(152),
    [anon_sym_jmp] = ACTIONS(152),
    [anon_sym_jsr] = ACTIONS(152),
    [anon_sym_lda] = ACTIONS(152),
    [anon_sym_ldb] = ACTIONS(152),
    [anon_sym_ldd] = ACTIONS(152),
    [anon_sym_lds] = ACTIONS(152),
    [anon_sym_ldu] = ACTIONS(152),
    [anon_sym_ldx] = ACTIONS(152),
    [anon_sym_ldy] = ACTIONS(152),
    [anon_sym_leas] = ACTIONS(152),
    [anon_sym_leau] = ACTIONS(152),
    [anon_sym_leax] = ACTIONS(152),
    [anon_sym_leay] = ACTIONS(152),
    [anon_sym_lsla] = ACTIONS(152),
    [anon_sym_lslb] = ACTIONS(152),
    [anon_sym_lsl] = ACTIONS(152),
    [anon_sym_lsra] = ACTIONS(152),
    [anon_sym_lsrb] = ACTIONS(152),
    [anon_sym_lsr] = ACTIONS(152),
    [anon_sym_mul] = ACTIONS(152),
    [anon_sym_nega] = ACTIONS(152),
    [anon_sym_negb] = ACTIONS(152),
    [anon_sym_neg] = ACTIONS(152),
    [anon_sym_nop] = ACTIONS(152),
    [anon_sym_ora] = ACTIONS(152),
    [anon_sym_orb] = ACTIONS(152),
    [anon_sym_orcc] = ACTIONS(152),
    [anon_sym_pshs] = ACTIONS(152),
    [anon_sym_pshu] = ACTIONS(152),
    [anon_sym_puls] = ACTIONS(152),
    [anon_sym_pulu] = ACTIONS(152),
    [anon_sym_rola] = ACTIONS(152),
    [anon_sym_rolb] = ACTIONS(152),
    [anon_sym_rol] = ACTIONS(152),
    [anon_sym_rora] = ACTIONS(152),
    [anon_sym_rorb] = ACTIONS(152),
    [anon_sym_ror] = ACTIONS(152),
    [anon_sym_rti] = ACTIONS(152),
    [anon_sym_rts] = ACTIONS(152),
    [anon_sym_sbca] = ACTIONS(152),
    [anon_sym_sbcb] = ACTIONS(152),
    [anon_sym_sex] = ACTIONS(152),
    [anon_sym_sta] = ACTIONS(152),
    [anon_sym_stb] = ACTIONS(152),
    [anon_sym_std] = ACTIONS(152),
    [anon_sym_sts] = ACTIONS(152),
    [anon_sym_stu] = ACTIONS(152),
    [anon_sym_stx] = ACTIONS(152),
    [anon_sym_sty] = ACTIONS(152),
    [anon_sym_suba] = ACTIONS(152),
    [anon_sym_subb] = ACTIONS(152),
    [anon_sym_subd] = ACTIONS(152),
    [anon_sym_swi] = ACTIONS(152),
    [anon_sym_swi2] = ACTIONS(152),
    [anon_sym_swi3] = ACTIONS(152),
    [anon_sym_sync] = ACTIONS(152),
    [anon_sym_tfr] = ACTIONS(152),
    [anon_sym_tsta] = ACTIONS(152),
    [anon_sym_tstb] = ACTIONS(152),
    [anon_sym_tst] = ACTIONS(152),
  },
  [31] = {
    [sym__line_break] = ACTIONS(155),
    [sym__identifier] = ACTIONS(157),
    [anon_sym_fcb] = ACTIONS(157),
    [anon_sym_DOTdb] = ACTIONS(157),
    [anon_sym_DOTbyte] = ACTIONS(157),
    [anon_sym_fdb] = ACTIONS(157),
    [anon_sym_DOTdw] = ACTIONS(157),
    [anon_sym_DOTword] = ACTIONS(157),
    [anon_sym_fqb] = ACTIONS(157),
    [anon_sym_DOTquad] = ACTIONS(157),
    [anon_sym_DOT4byte] = ACTIONS(157),
    [anon_sym_fcc] = ACTIONS(157),
    [anon_sym_DOTascii] = ACTIONS(157),
    [anon_sym_DOTstr] = ACTIONS(157),
    [anon_sym_fcn] = ACTIONS(157),
    [anon_sym_DOTasciz] = ACTIONS(157),
    [anon_sym_DOTstrz] = ACTIONS(157),
    [anon_sym_fcs] = ACTIONS(157),
    [anon_sym_DOTascis] = ACTIONS(157),
    [anon_sym_DOTstrs] = ACTIONS(157),
    [anon_sym_zmb] = ACTIONS(157),
    [anon_sym_zmd] = ACTIONS(157),
    [anon_sym_zmq] = ACTIONS(157),
    [anon_sym_rmb] = ACTIONS(157),
    [anon_sym_DOTblkb] = ACTIONS(157),
    [anon_sym_DOTds] = ACTIONS(157),
    [anon_sym_DOTrs] = ACTIONS(157),
    [anon_sym_rmd] = ACTIONS(157),
    [anon_sym_rmq] = ACTIONS(157),
    [anon_sym_fill] = ACTIONS(157),
    [anon_sym_includebin] = ACTIONS(157),
    [anon_sym_include] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(157),
    [anon_sym_export] = ACTIONS(157),
    [anon_sym_extern] = ACTIONS(157),
    [anon_sym_external] = ACTIONS(157),
    [anon_sym_DOTglobl] = ACTIONS(157),
    [anon_sym_extdep] = ACTIONS(157),
    [anon_sym_org] = ACTIONS(157),
    [anon_sym_reorg] = ACTIONS(157),
    [anon_sym_equ] = ACTIONS(157),
    [anon_sym_set] = ACTIONS(157),
    [anon_sym_setdp] = ACTIONS(157),
    [anon_sym_align] = ACTIONS(157),
    [anon_sym_ifeq] = ACTIONS(157),
    [anon_sym_ifne] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_ifgt] = ACTIONS(157),
    [anon_sym_ifge] = ACTIONS(157),
    [anon_sym_iflt] = ACTIONS(157),
    [anon_sym_ifle] = ACTIONS(157),
    [anon_sym_ifdef] = ACTIONS(157),
    [anon_sym_ifpragma] = ACTIONS(157),
    [anon_sym_ifndef] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_endc] = ACTIONS(157),
    [anon_sym_os9] = ACTIONS(157),
    [anon_sym_mod] = ACTIONS(157),
    [anon_sym_emod] = ACTIONS(157),
    [anon_sym_end] = ACTIONS(157),
    [anon_sym_error] = ACTIONS(157),
    [anon_sym_warning] = ACTIONS(157),
    [anon_sym_DOTmodule] = ACTIONS(157),
    [anon_sym_macro] = ACTIONS(157),
    [anon_sym_endm] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(157),
    [anon_sym_endstruct] = ACTIONS(157),
    [anon_sym_ends] = ACTIONS(157),
    [anon_sym_section] = ACTIONS(157),
    [anon_sym_sect] = ACTIONS(157),
    [anon_sym_DOTarea] = ACTIONS(157),
    [anon_sym_endsection] = ACTIONS(157),
    [anon_sym_endsect] = ACTIONS(157),
    [anon_sym_pragma] = ACTIONS(157),
    [anon_sym_STARpragma] = ACTIONS(157),
    [anon_sym_STARpragmapush] = ACTIONS(157),
    [anon_sym_STARpragmapop] = ACTIONS(157),
    [anon_sym_opt] = ACTIONS(157),
    [sym_semicolon_comment] = ACTIONS(157),
    [sym_asterisk_comment] = ACTIONS(157),
    [anon_sym_abx] = ACTIONS(157),
    [anon_sym_adca] = ACTIONS(157),
    [anon_sym_adcb] = ACTIONS(157),
    [anon_sym_adda] = ACTIONS(157),
    [anon_sym_addb] = ACTIONS(157),
    [anon_sym_addd] = ACTIONS(157),
    [anon_sym_anda] = ACTIONS(157),
    [anon_sym_andb] = ACTIONS(157),
    [anon_sym_andcc] = ACTIONS(157),
    [anon_sym_asla] = ACTIONS(157),
    [anon_sym_aslb] = ACTIONS(157),
    [anon_sym_asl] = ACTIONS(157),
    [anon_sym_asra] = ACTIONS(157),
    [anon_sym_asrb] = ACTIONS(157),
    [anon_sym_asr] = ACTIONS(157),
    [anon_sym_bita] = ACTIONS(157),
    [anon_sym_bitb] = ACTIONS(157),
    [anon_sym_bra] = ACTIONS(157),
    [anon_sym_bcc] = ACTIONS(157),
    [anon_sym_bcs] = ACTIONS(157),
    [anon_sym_beq] = ACTIONS(157),
    [anon_sym_bge] = ACTIONS(157),
    [anon_sym_bgt] = ACTIONS(157),
    [anon_sym_bhi] = ACTIONS(157),
    [anon_sym_bhs] = ACTIONS(157),
    [anon_sym_ble] = ACTIONS(157),
    [anon_sym_blo] = ACTIONS(157),
    [anon_sym_bls] = ACTIONS(157),
    [anon_sym_blt] = ACTIONS(157),
    [anon_sym_bmi] = ACTIONS(157),
    [anon_sym_bne] = ACTIONS(157),
    [anon_sym_bpl] = ACTIONS(157),
    [anon_sym_brn] = ACTIONS(157),
    [anon_sym_bsr] = ACTIONS(157),
    [anon_sym_bvc] = ACTIONS(157),
    [anon_sym_bvs] = ACTIONS(157),
    [anon_sym_lbra] = ACTIONS(157),
    [anon_sym_lbcc] = ACTIONS(157),
    [anon_sym_lbcs] = ACTIONS(157),
    [anon_sym_lbeq] = ACTIONS(157),
    [anon_sym_lbge] = ACTIONS(157),
    [anon_sym_lbgt] = ACTIONS(157),
    [anon_sym_lbhi] = ACTIONS(157),
    [anon_sym_lbhs] = ACTIONS(157),
    [anon_sym_lble] = ACTIONS(157),
    [anon_sym_lblo] = ACTIONS(157),
    [anon_sym_lbls] = ACTIONS(157),
    [anon_sym_lblt] = ACTIONS(157),
    [anon_sym_lbmi] = ACTIONS(157),
    [anon_sym_lbne] = ACTIONS(157),
    [anon_sym_lbpl] = ACTIONS(157),
    [anon_sym_lbrn] = ACTIONS(157),
    [anon_sym_lbsr] = ACTIONS(157),
    [anon_sym_lbvc] = ACTIONS(157),
    [anon_sym_lbvs] = ACTIONS(157),
    [anon_sym_clra] = ACTIONS(157),
    [anon_sym_clrb] = ACTIONS(157),
    [anon_sym_clr] = ACTIONS(157),
    [anon_sym_cmpa] = ACTIONS(157),
    [anon_sym_cmpb] = ACTIONS(157),
    [anon_sym_cmpd] = ACTIONS(157),
    [anon_sym_cmps] = ACTIONS(157),
    [anon_sym_cmpu] = ACTIONS(157),
    [anon_sym_cmpx] = ACTIONS(157),
    [anon_sym_cmpy] = ACTIONS(157),
    [anon_sym_coma] = ACTIONS(157),
    [anon_sym_comb] = ACTIONS(157),
    [anon_sym_com] = ACTIONS(157),
    [anon_sym_cwai] = ACTIONS(157),
    [anon_sym_daa] = ACTIONS(157),
    [anon_sym_deca] = ACTIONS(157),
    [anon_sym_decb] = ACTIONS(157),
    [anon_sym_dec] = ACTIONS(157),
    [anon_sym_eora] = ACTIONS(157),
    [anon_sym_eorb] = ACTIONS(157),
    [anon_sym_exg] = ACTIONS(157),
    [anon_sym_inca] = ACTIONS(157),
    [anon_sym_incb] = ACTIONS(157),
    [anon_sym_inc] = ACTIONS(157),
    [anon_sym_jmp] = ACTIONS(157),
    [anon_sym_jsr] = ACTIONS(157),
    [anon_sym_lda] = ACTIONS(157),
    [anon_sym_ldb] = ACTIONS(157),
    [anon_sym_ldd] = ACTIONS(157),
    [anon_sym_lds] = ACTIONS(157),
    [anon_sym_ldu] = ACTIONS(157),
    [anon_sym_ldx] = ACTIONS(157),
    [anon_sym_ldy] = ACTIONS(157),
    [anon_sym_leas] = ACTIONS(157),
    [anon_sym_leau] = ACTIONS(157),
    [anon_sym_leax] = ACTIONS(157),
    [anon_sym_leay] = ACTIONS(157),
    [anon_sym_lsla] = ACTIONS(157),
    [anon_sym_lslb] = ACTIONS(157),
    [anon_sym_lsl] = ACTIONS(157),
    [anon_sym_lsra] = ACTIONS(157),
    [anon_sym_lsrb] = ACTIONS(157),
    [anon_sym_lsr] = ACTIONS(157),
    [anon_sym_mul] = ACTIONS(157),
    [anon_sym_nega] = ACTIONS(157),
    [anon_sym_negb] = ACTIONS(157),
    [anon_sym_neg] = ACTIONS(157),
    [anon_sym_nop] = ACTIONS(157),
    [anon_sym_ora] = ACTIONS(157),
    [anon_sym_orb] = ACTIONS(157),
    [anon_sym_orcc] = ACTIONS(157),
    [anon_sym_pshs] = ACTIONS(157),
    [anon_sym_pshu] = ACTIONS(157),
    [anon_sym_puls] = ACTIONS(157),
    [anon_sym_pulu] = ACTIONS(157),
    [anon_sym_rola] = ACTIONS(157),
    [anon_sym_rolb] = ACTIONS(157),
    [anon_sym_rol] = ACTIONS(157),
    [anon_sym_rora] = ACTIONS(157),
    [anon_sym_rorb] = ACTIONS(157),
    [anon_sym_ror] = ACTIONS(157),
    [anon_sym_rti] = ACTIONS(157),
    [anon_sym_rts] = ACTIONS(157),
    [anon_sym_sbca] = ACTIONS(157),
    [anon_sym_sbcb] = ACTIONS(157),
    [anon_sym_sex] = ACTIONS(157),
    [anon_sym_sta] = ACTIONS(157),
    [anon_sym_stb] = ACTIONS(157),
    [anon_sym_std] = ACTIONS(157),
    [anon_sym_sts] = ACTIONS(157),
    [anon_sym_stu] = ACTIONS(157),
    [anon_sym_stx] = ACTIONS(157),
    [anon_sym_sty] = ACTIONS(157),
    [anon_sym_suba] = ACTIONS(157),
    [anon_sym_subb] = ACTIONS(157),
    [anon_sym_subd] = ACTIONS(157),
    [anon_sym_swi] = ACTIONS(157),
    [anon_sym_swi2] = ACTIONS(157),
    [anon_sym_swi3] = ACTIONS(157),
    [anon_sym_sync] = ACTIONS(157),
    [anon_sym_tfr] = ACTIONS(157),
    [anon_sym_tsta] = ACTIONS(157),
    [anon_sym_tstb] = ACTIONS(157),
    [anon_sym_tst] = ACTIONS(157),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym__line_break] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(161),
    [sym__identifier] = ACTIONS(161),
    [anon_sym_fcb] = ACTIONS(161),
    [anon_sym_DOTdb] = ACTIONS(161),
    [anon_sym_DOTbyte] = ACTIONS(161),
    [anon_sym_fdb] = ACTIONS(161),
    [anon_sym_DOTdw] = ACTIONS(161),
    [anon_sym_DOTword] = ACTIONS(161),
    [anon_sym_fqb] = ACTIONS(161),
    [anon_sym_DOTquad] = ACTIONS(161),
    [anon_sym_DOT4byte] = ACTIONS(161),
    [anon_sym_fcc] = ACTIONS(161),
    [anon_sym_DOTascii] = ACTIONS(161),
    [anon_sym_DOTstr] = ACTIONS(161),
    [anon_sym_fcn] = ACTIONS(161),
    [anon_sym_DOTasciz] = ACTIONS(161),
    [anon_sym_DOTstrz] = ACTIONS(161),
    [anon_sym_fcs] = ACTIONS(161),
    [anon_sym_DOTascis] = ACTIONS(161),
    [anon_sym_DOTstrs] = ACTIONS(161),
    [anon_sym_zmb] = ACTIONS(161),
    [anon_sym_zmd] = ACTIONS(161),
    [anon_sym_zmq] = ACTIONS(161),
    [anon_sym_rmb] = ACTIONS(161),
    [anon_sym_DOTblkb] = ACTIONS(161),
    [anon_sym_DOTds] = ACTIONS(161),
    [anon_sym_DOTrs] = ACTIONS(161),
    [anon_sym_rmd] = ACTIONS(161),
    [anon_sym_rmq] = ACTIONS(161),
    [anon_sym_fill] = ACTIONS(161),
    [anon_sym_includebin] = ACTIONS(161),
    [anon_sym_include] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [anon_sym_export] = ACTIONS(161),
    [anon_sym_extern] = ACTIONS(161),
    [anon_sym_external] = ACTIONS(161),
    [anon_sym_DOTglobl] = ACTIONS(161),
    [anon_sym_extdep] = ACTIONS(161),
    [anon_sym_org] = ACTIONS(161),
    [anon_sym_reorg] = ACTIONS(161),
    [anon_sym_equ] = ACTIONS(161),
    [anon_sym_set] = ACTIONS(161),
    [anon_sym_setdp] = ACTIONS(161),
    [anon_sym_align] = ACTIONS(161),
    [anon_sym_ifeq] = ACTIONS(161),
    [anon_sym_ifne] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_ifgt] = ACTIONS(161),
    [anon_sym_ifge] = ACTIONS(161),
    [anon_sym_iflt] = ACTIONS(161),
    [anon_sym_ifle] = ACTIONS(161),
    [anon_sym_ifdef] = ACTIONS(161),
    [anon_sym_ifpragma] = ACTIONS(161),
    [anon_sym_ifndef] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_endc] = ACTIONS(161),
    [anon_sym_os9] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_emod] = ACTIONS(161),
    [anon_sym_end] = ACTIONS(161),
    [anon_sym_error] = ACTIONS(161),
    [anon_sym_warning] = ACTIONS(161),
    [anon_sym_DOTmodule] = ACTIONS(161),
    [anon_sym_macro] = ACTIONS(161),
    [anon_sym_endm] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_endstruct] = ACTIONS(161),
    [anon_sym_ends] = ACTIONS(161),
    [anon_sym_section] = ACTIONS(161),
    [anon_sym_sect] = ACTIONS(161),
    [anon_sym_DOTarea] = ACTIONS(161),
    [anon_sym_endsection] = ACTIONS(161),
    [anon_sym_endsect] = ACTIONS(161),
    [anon_sym_pragma] = ACTIONS(161),
    [anon_sym_STARpragma] = ACTIONS(161),
    [anon_sym_STARpragmapush] = ACTIONS(161),
    [anon_sym_STARpragmapop] = ACTIONS(161),
    [anon_sym_opt] = ACTIONS(161),
    [sym_semicolon_comment] = ACTIONS(161),
    [sym_asterisk_comment] = ACTIONS(161),
    [anon_sym_abx] = ACTIONS(161),
    [anon_sym_adca] = ACTIONS(161),
    [anon_sym_adcb] = ACTIONS(161),
    [anon_sym_adda] = ACTIONS(161),
    [anon_sym_addb] = ACTIONS(161),
    [anon_sym_addd] = ACTIONS(161),
    [anon_sym_anda] = ACTIONS(161),
    [anon_sym_andb] = ACTIONS(161),
    [anon_sym_andcc] = ACTIONS(161),
    [anon_sym_asla] = ACTIONS(161),
    [anon_sym_aslb] = ACTIONS(161),
    [anon_sym_asl] = ACTIONS(161),
    [anon_sym_asra] = ACTIONS(161),
    [anon_sym_asrb] = ACTIONS(161),
    [anon_sym_asr] = ACTIONS(161),
    [anon_sym_bita] = ACTIONS(161),
    [anon_sym_bitb] = ACTIONS(161),
    [anon_sym_bra] = ACTIONS(161),
    [anon_sym_bcc] = ACTIONS(161),
    [anon_sym_bcs] = ACTIONS(161),
    [anon_sym_beq] = ACTIONS(161),
    [anon_sym_bge] = ACTIONS(161),
    [anon_sym_bgt] = ACTIONS(161),
    [anon_sym_bhi] = ACTIONS(161),
    [anon_sym_bhs] = ACTIONS(161),
    [anon_sym_ble] = ACTIONS(161),
    [anon_sym_blo] = ACTIONS(161),
    [anon_sym_bls] = ACTIONS(161),
    [anon_sym_blt] = ACTIONS(161),
    [anon_sym_bmi] = ACTIONS(161),
    [anon_sym_bne] = ACTIONS(161),
    [anon_sym_bpl] = ACTIONS(161),
    [anon_sym_brn] = ACTIONS(161),
    [anon_sym_bsr] = ACTIONS(161),
    [anon_sym_bvc] = ACTIONS(161),
    [anon_sym_bvs] = ACTIONS(161),
    [anon_sym_lbra] = ACTIONS(161),
    [anon_sym_lbcc] = ACTIONS(161),
    [anon_sym_lbcs] = ACTIONS(161),
    [anon_sym_lbeq] = ACTIONS(161),
    [anon_sym_lbge] = ACTIONS(161),
    [anon_sym_lbgt] = ACTIONS(161),
    [anon_sym_lbhi] = ACTIONS(161),
    [anon_sym_lbhs] = ACTIONS(161),
    [anon_sym_lble] = ACTIONS(161),
    [anon_sym_lblo] = ACTIONS(161),
    [anon_sym_lbls] = ACTIONS(161),
    [anon_sym_lblt] = ACTIONS(161),
    [anon_sym_lbmi] = ACTIONS(161),
    [anon_sym_lbne] = ACTIONS(161),
    [anon_sym_lbpl] = ACTIONS(161),
    [anon_sym_lbrn] = ACTIONS(161),
    [anon_sym_lbsr] = ACTIONS(161),
    [anon_sym_lbvc] = ACTIONS(161),
    [anon_sym_lbvs] = ACTIONS(161),
    [anon_sym_clra] = ACTIONS(161),
    [anon_sym_clrb] = ACTIONS(161),
    [anon_sym_clr] = ACTIONS(161),
    [anon_sym_cmpa] = ACTIONS(161),
    [anon_sym_cmpb] = ACTIONS(161),
    [anon_sym_cmpd] = ACTIONS(161),
    [anon_sym_cmps] = ACTIONS(161),
    [anon_sym_cmpu] = ACTIONS(161),
    [anon_sym_cmpx] = ACTIONS(161),
    [anon_sym_cmpy] = ACTIONS(161),
    [anon_sym_coma] = ACTIONS(161),
    [anon_sym_comb] = ACTIONS(161),
    [anon_sym_com] = ACTIONS(161),
    [anon_sym_cwai] = ACTIONS(161),
    [anon_sym_daa] = ACTIONS(161),
    [anon_sym_deca] = ACTIONS(161),
    [anon_sym_decb] = ACTIONS(161),
    [anon_sym_dec] = ACTIONS(161),
    [anon_sym_eora] = ACTIONS(161),
    [anon_sym_eorb] = ACTIONS(161),
    [anon_sym_exg] = ACTIONS(161),
    [anon_sym_inca] = ACTIONS(161),
    [anon_sym_incb] = ACTIONS(161),
    [anon_sym_inc] = ACTIONS(161),
    [anon_sym_jmp] = ACTIONS(161),
    [anon_sym_jsr] = ACTIONS(161),
    [anon_sym_lda] = ACTIONS(161),
    [anon_sym_ldb] = ACTIONS(161),
    [anon_sym_ldd] = ACTIONS(161),
    [anon_sym_lds] = ACTIONS(161),
    [anon_sym_ldu] = ACTIONS(161),
    [anon_sym_ldx] = ACTIONS(161),
    [anon_sym_ldy] = ACTIONS(161),
    [anon_sym_leas] = ACTIONS(161),
    [anon_sym_leau] = ACTIONS(161),
    [anon_sym_leax] = ACTIONS(161),
    [anon_sym_leay] = ACTIONS(161),
    [anon_sym_lsla] = ACTIONS(161),
    [anon_sym_lslb] = ACTIONS(161),
    [anon_sym_lsl] = ACTIONS(161),
    [anon_sym_lsra] = ACTIONS(161),
    [anon_sym_lsrb] = ACTIONS(161),
    [anon_sym_lsr] = ACTIONS(161),
    [anon_sym_mul] = ACTIONS(161),
    [anon_sym_nega] = ACTIONS(161),
    [anon_sym_negb] = ACTIONS(161),
    [anon_sym_neg] = ACTIONS(161),
    [anon_sym_nop] = ACTIONS(161),
    [anon_sym_ora] = ACTIONS(161),
    [anon_sym_orb] = ACTIONS(161),
    [anon_sym_orcc] = ACTIONS(161),
    [anon_sym_pshs] = ACTIONS(161),
    [anon_sym_pshu] = ACTIONS(161),
    [anon_sym_puls] = ACTIONS(161),
    [anon_sym_pulu] = ACTIONS(161),
    [anon_sym_rola] = ACTIONS(161),
    [anon_sym_rolb] = ACTIONS(161),
    [anon_sym_rol] = ACTIONS(161),
    [anon_sym_rora] = ACTIONS(161),
    [anon_sym_rorb] = ACTIONS(161),
    [anon_sym_ror] = ACTIONS(161),
    [anon_sym_rti] = ACTIONS(161),
    [anon_sym_rts] = ACTIONS(161),
    [anon_sym_sbca] = ACTIONS(161),
    [anon_sym_sbcb] = ACTIONS(161),
    [anon_sym_sex] = ACTIONS(161),
    [anon_sym_sta] = ACTIONS(161),
    [anon_sym_stb] = ACTIONS(161),
    [anon_sym_std] = ACTIONS(161),
    [anon_sym_sts] = ACTIONS(161),
    [anon_sym_stu] = ACTIONS(161),
    [anon_sym_stx] = ACTIONS(161),
    [anon_sym_sty] = ACTIONS(161),
    [anon_sym_suba] = ACTIONS(161),
    [anon_sym_subb] = ACTIONS(161),
    [anon_sym_subd] = ACTIONS(161),
    [anon_sym_swi] = ACTIONS(161),
    [anon_sym_swi2] = ACTIONS(161),
    [anon_sym_swi3] = ACTIONS(161),
    [anon_sym_sync] = ACTIONS(161),
    [anon_sym_tfr] = ACTIONS(161),
    [anon_sym_tsta] = ACTIONS(161),
    [anon_sym_tstb] = ACTIONS(161),
    [anon_sym_tst] = ACTIONS(161),
  },
  [33] = {
    [sym__line_break] = ACTIONS(163),
  },
  [34] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(165),
    [sym_semicolon_comment] = ACTIONS(167),
    [sym_asterisk_comment] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [35] = {
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
  },
  [36] = {
    [sym_symbol] = STATE(49),
    [sym_constant] = STATE(49),
    [sym__octal] = STATE(35),
    [sym__hexadecimal] = STATE(35),
    [sym__binary] = STATE(35),
    [sym__expression] = STATE(49),
    [sym__term] = STATE(49),
    [sym__identifier] = ACTIONS(95),
    [sym__decimal] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_string] = ACTIONS(169),
  },
  [37] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(173),
  },
  [38] = {
    [sym_symbol] = STATE(52),
    [sym_constant] = STATE(52),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym__expression] = STATE(52),
    [sym__term] = STATE(52),
    [sym__identifier] = ACTIONS(113),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_string] = ACTIONS(175),
  },
  [39] = {
    [sym__identifier] = ACTIONS(177),
    [sym__decimal] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym_string] = ACTIONS(177),
  },
  [40] = {
    [sym_symbol] = STATE(53),
    [sym_constant] = STATE(53),
    [sym__octal] = STATE(22),
    [sym__hexadecimal] = STATE(22),
    [sym__binary] = STATE(22),
    [sym__term] = STATE(53),
    [sym__identifier] = ACTIONS(113),
    [sym__decimal] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_string] = ACTIONS(181),
  },
  [41] = {
    [aux_sym_assembler_directive_repeat1] = STATE(54),
    [sym__line_break] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_semicolon_comment] = ACTIONS(167),
    [sym_asterisk_comment] = ACTIONS(167),
  },
  [42] = {
    [anon_sym_A] = ACTIONS(177),
    [anon_sym_B] = ACTIONS(177),
    [anon_sym_X] = ACTIONS(177),
    [anon_sym_Y] = ACTIONS(177),
    [anon_sym_U] = ACTIONS(177),
    [anon_sym_S] = ACTIONS(177),
    [anon_sym_PC] = ACTIONS(177),
    [anon_sym_CC] = ACTIONS(177),
    [anon_sym_DP] = ACTIONS(177),
    [anon_sym_D] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
  },
  [43] = {
    [sym_operator] = STATE(56),
    [sym__line_break] = ACTIONS(183),
    [sym_semicolon_comment] = ACTIONS(185),
    [sym_asterisk_comment] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
  },
  [44] = {
    [sym__line_break] = ACTIONS(189),
    [sym_semicolon_comment] = ACTIONS(191),
    [sym_asterisk_comment] = ACTIONS(191),
  },
  [45] = {
    [sym_register] = STATE(57),
    [sym_operator] = STATE(58),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_B] = ACTIONS(109),
    [anon_sym_X] = ACTIONS(109),
    [anon_sym_Y] = ACTIONS(109),
    [anon_sym_U] = ACTIONS(109),
    [anon_sym_S] = ACTIONS(109),
    [anon_sym_PC] = ACTIONS(109),
    [anon_sym_CC] = ACTIONS(109),
    [anon_sym_DP] = ACTIONS(109),
    [anon_sym_D] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [46] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_semicolon_comment] = ACTIONS(195),
    [sym_asterisk_comment] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [47] = {
    [sym_register] = STATE(43),
    [sym__register_exp] = STATE(59),
    [sym_operator] = STATE(45),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_B] = ACTIONS(109),
    [anon_sym_X] = ACTIONS(109),
    [anon_sym_Y] = ACTIONS(109),
    [anon_sym_U] = ACTIONS(109),
    [anon_sym_S] = ACTIONS(109),
    [anon_sym_PC] = ACTIONS(109),
    [anon_sym_CC] = ACTIONS(109),
    [anon_sym_DP] = ACTIONS(109),
    [anon_sym_D] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym__line_break] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(199),
    [sym__identifier] = ACTIONS(199),
    [anon_sym_fcb] = ACTIONS(199),
    [anon_sym_DOTdb] = ACTIONS(199),
    [anon_sym_DOTbyte] = ACTIONS(199),
    [anon_sym_fdb] = ACTIONS(199),
    [anon_sym_DOTdw] = ACTIONS(199),
    [anon_sym_DOTword] = ACTIONS(199),
    [anon_sym_fqb] = ACTIONS(199),
    [anon_sym_DOTquad] = ACTIONS(199),
    [anon_sym_DOT4byte] = ACTIONS(199),
    [anon_sym_fcc] = ACTIONS(199),
    [anon_sym_DOTascii] = ACTIONS(199),
    [anon_sym_DOTstr] = ACTIONS(199),
    [anon_sym_fcn] = ACTIONS(199),
    [anon_sym_DOTasciz] = ACTIONS(199),
    [anon_sym_DOTstrz] = ACTIONS(199),
    [anon_sym_fcs] = ACTIONS(199),
    [anon_sym_DOTascis] = ACTIONS(199),
    [anon_sym_DOTstrs] = ACTIONS(199),
    [anon_sym_zmb] = ACTIONS(199),
    [anon_sym_zmd] = ACTIONS(199),
    [anon_sym_zmq] = ACTIONS(199),
    [anon_sym_rmb] = ACTIONS(199),
    [anon_sym_DOTblkb] = ACTIONS(199),
    [anon_sym_DOTds] = ACTIONS(199),
    [anon_sym_DOTrs] = ACTIONS(199),
    [anon_sym_rmd] = ACTIONS(199),
    [anon_sym_rmq] = ACTIONS(199),
    [anon_sym_fill] = ACTIONS(199),
    [anon_sym_includebin] = ACTIONS(199),
    [anon_sym_include] = ACTIONS(199),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_export] = ACTIONS(199),
    [anon_sym_extern] = ACTIONS(199),
    [anon_sym_external] = ACTIONS(199),
    [anon_sym_DOTglobl] = ACTIONS(199),
    [anon_sym_extdep] = ACTIONS(199),
    [anon_sym_org] = ACTIONS(199),
    [anon_sym_reorg] = ACTIONS(199),
    [anon_sym_equ] = ACTIONS(199),
    [anon_sym_set] = ACTIONS(199),
    [anon_sym_setdp] = ACTIONS(199),
    [anon_sym_align] = ACTIONS(199),
    [anon_sym_ifeq] = ACTIONS(199),
    [anon_sym_ifne] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_ifgt] = ACTIONS(199),
    [anon_sym_ifge] = ACTIONS(199),
    [anon_sym_iflt] = ACTIONS(199),
    [anon_sym_ifle] = ACTIONS(199),
    [anon_sym_ifdef] = ACTIONS(199),
    [anon_sym_ifpragma] = ACTIONS(199),
    [anon_sym_ifndef] = ACTIONS(199),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_endc] = ACTIONS(199),
    [anon_sym_os9] = ACTIONS(199),
    [anon_sym_mod] = ACTIONS(199),
    [anon_sym_emod] = ACTIONS(199),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_error] = ACTIONS(199),
    [anon_sym_warning] = ACTIONS(199),
    [anon_sym_DOTmodule] = ACTIONS(199),
    [anon_sym_macro] = ACTIONS(199),
    [anon_sym_endm] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(199),
    [anon_sym_endstruct] = ACTIONS(199),
    [anon_sym_ends] = ACTIONS(199),
    [anon_sym_section] = ACTIONS(199),
    [anon_sym_sect] = ACTIONS(199),
    [anon_sym_DOTarea] = ACTIONS(199),
    [anon_sym_endsection] = ACTIONS(199),
    [anon_sym_endsect] = ACTIONS(199),
    [anon_sym_pragma] = ACTIONS(199),
    [anon_sym_STARpragma] = ACTIONS(199),
    [anon_sym_STARpragmapush] = ACTIONS(199),
    [anon_sym_STARpragmapop] = ACTIONS(199),
    [anon_sym_opt] = ACTIONS(199),
    [sym_semicolon_comment] = ACTIONS(199),
    [sym_asterisk_comment] = ACTIONS(199),
    [anon_sym_abx] = ACTIONS(199),
    [anon_sym_adca] = ACTIONS(199),
    [anon_sym_adcb] = ACTIONS(199),
    [anon_sym_adda] = ACTIONS(199),
    [anon_sym_addb] = ACTIONS(199),
    [anon_sym_addd] = ACTIONS(199),
    [anon_sym_anda] = ACTIONS(199),
    [anon_sym_andb] = ACTIONS(199),
    [anon_sym_andcc] = ACTIONS(199),
    [anon_sym_asla] = ACTIONS(199),
    [anon_sym_aslb] = ACTIONS(199),
    [anon_sym_asl] = ACTIONS(199),
    [anon_sym_asra] = ACTIONS(199),
    [anon_sym_asrb] = ACTIONS(199),
    [anon_sym_asr] = ACTIONS(199),
    [anon_sym_bita] = ACTIONS(199),
    [anon_sym_bitb] = ACTIONS(199),
    [anon_sym_bra] = ACTIONS(199),
    [anon_sym_bcc] = ACTIONS(199),
    [anon_sym_bcs] = ACTIONS(199),
    [anon_sym_beq] = ACTIONS(199),
    [anon_sym_bge] = ACTIONS(199),
    [anon_sym_bgt] = ACTIONS(199),
    [anon_sym_bhi] = ACTIONS(199),
    [anon_sym_bhs] = ACTIONS(199),
    [anon_sym_ble] = ACTIONS(199),
    [anon_sym_blo] = ACTIONS(199),
    [anon_sym_bls] = ACTIONS(199),
    [anon_sym_blt] = ACTIONS(199),
    [anon_sym_bmi] = ACTIONS(199),
    [anon_sym_bne] = ACTIONS(199),
    [anon_sym_bpl] = ACTIONS(199),
    [anon_sym_brn] = ACTIONS(199),
    [anon_sym_bsr] = ACTIONS(199),
    [anon_sym_bvc] = ACTIONS(199),
    [anon_sym_bvs] = ACTIONS(199),
    [anon_sym_lbra] = ACTIONS(199),
    [anon_sym_lbcc] = ACTIONS(199),
    [anon_sym_lbcs] = ACTIONS(199),
    [anon_sym_lbeq] = ACTIONS(199),
    [anon_sym_lbge] = ACTIONS(199),
    [anon_sym_lbgt] = ACTIONS(199),
    [anon_sym_lbhi] = ACTIONS(199),
    [anon_sym_lbhs] = ACTIONS(199),
    [anon_sym_lble] = ACTIONS(199),
    [anon_sym_lblo] = ACTIONS(199),
    [anon_sym_lbls] = ACTIONS(199),
    [anon_sym_lblt] = ACTIONS(199),
    [anon_sym_lbmi] = ACTIONS(199),
    [anon_sym_lbne] = ACTIONS(199),
    [anon_sym_lbpl] = ACTIONS(199),
    [anon_sym_lbrn] = ACTIONS(199),
    [anon_sym_lbsr] = ACTIONS(199),
    [anon_sym_lbvc] = ACTIONS(199),
    [anon_sym_lbvs] = ACTIONS(199),
    [anon_sym_clra] = ACTIONS(199),
    [anon_sym_clrb] = ACTIONS(199),
    [anon_sym_clr] = ACTIONS(199),
    [anon_sym_cmpa] = ACTIONS(199),
    [anon_sym_cmpb] = ACTIONS(199),
    [anon_sym_cmpd] = ACTIONS(199),
    [anon_sym_cmps] = ACTIONS(199),
    [anon_sym_cmpu] = ACTIONS(199),
    [anon_sym_cmpx] = ACTIONS(199),
    [anon_sym_cmpy] = ACTIONS(199),
    [anon_sym_coma] = ACTIONS(199),
    [anon_sym_comb] = ACTIONS(199),
    [anon_sym_com] = ACTIONS(199),
    [anon_sym_cwai] = ACTIONS(199),
    [anon_sym_daa] = ACTIONS(199),
    [anon_sym_deca] = ACTIONS(199),
    [anon_sym_decb] = ACTIONS(199),
    [anon_sym_dec] = ACTIONS(199),
    [anon_sym_eora] = ACTIONS(199),
    [anon_sym_eorb] = ACTIONS(199),
    [anon_sym_exg] = ACTIONS(199),
    [anon_sym_inca] = ACTIONS(199),
    [anon_sym_incb] = ACTIONS(199),
    [anon_sym_inc] = ACTIONS(199),
    [anon_sym_jmp] = ACTIONS(199),
    [anon_sym_jsr] = ACTIONS(199),
    [anon_sym_lda] = ACTIONS(199),
    [anon_sym_ldb] = ACTIONS(199),
    [anon_sym_ldd] = ACTIONS(199),
    [anon_sym_lds] = ACTIONS(199),
    [anon_sym_ldu] = ACTIONS(199),
    [anon_sym_ldx] = ACTIONS(199),
    [anon_sym_ldy] = ACTIONS(199),
    [anon_sym_leas] = ACTIONS(199),
    [anon_sym_leau] = ACTIONS(199),
    [anon_sym_leax] = ACTIONS(199),
    [anon_sym_leay] = ACTIONS(199),
    [anon_sym_lsla] = ACTIONS(199),
    [anon_sym_lslb] = ACTIONS(199),
    [anon_sym_lsl] = ACTIONS(199),
    [anon_sym_lsra] = ACTIONS(199),
    [anon_sym_lsrb] = ACTIONS(199),
    [anon_sym_lsr] = ACTIONS(199),
    [anon_sym_mul] = ACTIONS(199),
    [anon_sym_nega] = ACTIONS(199),
    [anon_sym_negb] = ACTIONS(199),
    [anon_sym_neg] = ACTIONS(199),
    [anon_sym_nop] = ACTIONS(199),
    [anon_sym_ora] = ACTIONS(199),
    [anon_sym_orb] = ACTIONS(199),
    [anon_sym_orcc] = ACTIONS(199),
    [anon_sym_pshs] = ACTIONS(199),
    [anon_sym_pshu] = ACTIONS(199),
    [anon_sym_puls] = ACTIONS(199),
    [anon_sym_pulu] = ACTIONS(199),
    [anon_sym_rola] = ACTIONS(199),
    [anon_sym_rolb] = ACTIONS(199),
    [anon_sym_rol] = ACTIONS(199),
    [anon_sym_rora] = ACTIONS(199),
    [anon_sym_rorb] = ACTIONS(199),
    [anon_sym_ror] = ACTIONS(199),
    [anon_sym_rti] = ACTIONS(199),
    [anon_sym_rts] = ACTIONS(199),
    [anon_sym_sbca] = ACTIONS(199),
    [anon_sym_sbcb] = ACTIONS(199),
    [anon_sym_sex] = ACTIONS(199),
    [anon_sym_sta] = ACTIONS(199),
    [anon_sym_stb] = ACTIONS(199),
    [anon_sym_std] = ACTIONS(199),
    [anon_sym_sts] = ACTIONS(199),
    [anon_sym_stu] = ACTIONS(199),
    [anon_sym_stx] = ACTIONS(199),
    [anon_sym_sty] = ACTIONS(199),
    [anon_sym_suba] = ACTIONS(199),
    [anon_sym_subb] = ACTIONS(199),
    [anon_sym_subd] = ACTIONS(199),
    [anon_sym_swi] = ACTIONS(199),
    [anon_sym_swi2] = ACTIONS(199),
    [anon_sym_swi3] = ACTIONS(199),
    [anon_sym_sync] = ACTIONS(199),
    [anon_sym_tfr] = ACTIONS(199),
    [anon_sym_tsta] = ACTIONS(199),
    [anon_sym_tstb] = ACTIONS(199),
    [anon_sym_tst] = ACTIONS(199),
  },
  [49] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(201),
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
    [sym_symbol] = STATE(61),
    [sym_constant] = STATE(61),
    [sym__octal] = STATE(35),
    [sym__hexadecimal] = STATE(35),
    [sym__binary] = STATE(35),
    [sym__term] = STATE(61),
    [sym__identifier] = ACTIONS(95),
    [sym__decimal] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQoO_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LPAREN_BSLASH_DASH_QMARK_BSLASH_DOLLAR_PIPE0_LBRACKxX_RBRACK_RPAREN_LBRACKa_DASHfA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_string] = ACTIONS(207),
  },
  [52] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_semicolon_comment] = ACTIONS(211),
    [sym_asterisk_comment] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [53] = {
    [sym__line_break] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_semicolon_comment] = ACTIONS(215),
    [sym_asterisk_comment] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
  },
  [54] = {
    [aux_sym_assembler_directive_repeat1] = STATE(54),
    [sym__line_break] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(217),
    [sym_semicolon_comment] = ACTIONS(211),
    [sym_asterisk_comment] = ACTIONS(211),
  },
  [55] = {
    [sym__line_break] = ACTIONS(177),
    [sym_semicolon_comment] = ACTIONS(179),
    [sym_asterisk_comment] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
  },
  [56] = {
    [sym_operator] = STATE(62),
    [sym__line_break] = ACTIONS(220),
    [sym_semicolon_comment] = ACTIONS(222),
    [sym_asterisk_comment] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
  },
  [57] = {
    [sym__line_break] = ACTIONS(220),
    [sym_semicolon_comment] = ACTIONS(222),
    [sym_asterisk_comment] = ACTIONS(222),
  },
  [58] = {
    [sym_register] = STATE(62),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_B] = ACTIONS(109),
    [anon_sym_X] = ACTIONS(109),
    [anon_sym_Y] = ACTIONS(109),
    [anon_sym_U] = ACTIONS(109),
    [anon_sym_S] = ACTIONS(109),
    [anon_sym_PC] = ACTIONS(109),
    [anon_sym_CC] = ACTIONS(109),
    [anon_sym_DP] = ACTIONS(109),
    [anon_sym_D] = ACTIONS(61),
  },
  [59] = {
    [sym__line_break] = ACTIONS(224),
    [sym_semicolon_comment] = ACTIONS(226),
    [sym_asterisk_comment] = ACTIONS(226),
  },
  [60] = {
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [61] = {
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
  },
  [62] = {
    [sym__line_break] = ACTIONS(228),
    [sym_semicolon_comment] = ACTIONS(230),
    [sym_asterisk_comment] = ACTIONS(230),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(13),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(11),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(14),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_opcode, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_opcode, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_memnonic, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_memnonic, 1),
  [33] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = false}, SHIFT(17),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(4),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 1),
  [45] = {.count = 1, .reusable = false}, SHIFT(21),
  [47] = {.count = 1, .reusable = false}, SHIFT(22),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [57] = {.count = 1, .reusable = false}, SHIFT(25),
  [59] = {.count = 1, .reusable = false}, SHIFT(26),
  [61] = {.count = 1, .reusable = false}, SHIFT(27),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(29),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(30),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = false}, SHIFT(33),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 2),
  [89] = {.count = 1, .reusable = false}, SHIFT(34),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(17),
  [97] = {.count = 1, .reusable = false}, SHIFT(35),
  [99] = {.count = 1, .reusable = true}, SHIFT(35),
  [101] = {.count = 1, .reusable = true}, SHIFT(36),
  [103] = {.count = 1, .reusable = true}, SHIFT(37),
  [105] = {.count = 1, .reusable = false}, SHIFT(38),
  [107] = {.count = 1, .reusable = false}, SHIFT(39),
  [109] = {.count = 1, .reusable = true}, SHIFT(27),
  [111] = {.count = 1, .reusable = true}, SHIFT(42),
  [113] = {.count = 1, .reusable = true}, SHIFT(21),
  [115] = {.count = 1, .reusable = true}, SHIFT(22),
  [117] = {.count = 1, .reusable = true}, SHIFT(23),
  [119] = {.count = 1, .reusable = true}, SHIFT(46),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(47),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(48),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 3),
  [169] = {.count = 1, .reusable = true}, SHIFT(49),
  [171] = {.count = 1, .reusable = true}, SHIFT(39),
  [173] = {.count = 1, .reusable = true}, SHIFT(50),
  [175] = {.count = 1, .reusable = true}, SHIFT(52),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(53),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [187] = {.count = 1, .reusable = false}, SHIFT(55),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [201] = {.count = 1, .reusable = true}, SHIFT(60),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [207] = {.count = 1, .reusable = true}, SHIFT(61),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2), SHIFT_REPEAT(38),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
