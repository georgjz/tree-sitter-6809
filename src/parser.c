#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_COLON = 2,
  sym__identifier = 3,
  anon_sym_A = 4,
  anon_sym_B = 5,
  anon_sym_X = 6,
  anon_sym_Y = 7,
  anon_sym_U = 8,
  anon_sym_S = 9,
  anon_sym_PC = 10,
  anon_sym_CC = 11,
  anon_sym_DP = 12,
  anon_sym_D = 13,
  sym__decimal = 14,
  aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH = 15,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH = 16,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH = 17,
  aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH = 18,
  aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH = 19,
  aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH = 20,
  aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH = 21,
  sym_memnonic = 22,
  sym_pseudo_opcode = 23,
  sym_semicolon_comment = 24,
  sym_source_file = 25,
  sym__line = 26,
  sym_label = 27,
  sym__instruction = 28,
  sym_opcode = 29,
  sym__operand_field = 30,
  sym_numeric_operand = 31,
  sym_register = 32,
  sym__octal = 33,
  sym__hexadecimal = 34,
  sym__binary = 35,
  sym__comment = 36,
  aux_sym_source_file_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
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
  [sym__decimal] = "_decimal",
  [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = "/\\@[0-7]+/",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH] = "/[0-7]+[qQOo]/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = "/\\$[a-fA-F0-9]+/",
  [aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = "/0[xX][a-fA-F0-9]+/",
  [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = "/[a-fA-F0-9]+H/",
  [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = "/\\%[01]+/",
  [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = "/[01]+[bB]/",
  [sym_memnonic] = "memnonic",
  [sym_pseudo_opcode] = "pseudo_opcode",
  [sym_semicolon_comment] = "semicolon_comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label] = "label",
  [sym__instruction] = "_instruction",
  [sym_opcode] = "opcode",
  [sym__operand_field] = "_operand_field",
  [sym_numeric_operand] = "numeric_operand",
  [sym_register] = "register",
  [sym__octal] = "_octal",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__binary] = "_binary",
  [sym__comment] = "_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
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
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = {
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
  [sym_memnonic] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon_comment] = {
    .visible = true,
    .named = true,
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
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__operand_field] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
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
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(25);
      if (lookahead == 'C')
        ADVANCE(26);
      if (lookahead == 'D')
        ADVANCE(28);
      if (lookahead == 'P')
        ADVANCE(30);
      if (lookahead == 'S')
        ADVANCE(32);
      if (lookahead == 'U')
        ADVANCE(33);
      if (lookahead == 'X')
        ADVANCE(34);
      if (lookahead == 'Y')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(36);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'F' ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH);
      END_STATE();
    case 8:
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH);
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH);
      END_STATE();
    case 12:
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '2')
        ADVANCE(16);
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('3' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == '3')
        ADVANCE(17);
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'H')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'H')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(27);
      if (lookahead == 'H')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'H')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'H')
        ADVANCE(23);
      if (lookahead == 'P')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
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
        ADVANCE(23);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H')
        ADVANCE(23);
      if (lookahead == 'b')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H')
        ADVANCE(23);
      if (lookahead == 'x')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(53);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        ADVANCE(53);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(58);
      if (lookahead == 'B')
        ADVANCE(59);
      if (lookahead == 'C')
        ADVANCE(60);
      if (lookahead == 'D')
        ADVANCE(62);
      if (lookahead == 'P')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(66);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'X')
        ADVANCE(68);
      if (lookahead == 'Y')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('2' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9' ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'C')
        ADVANCE(61);
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'H')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'H')
        ADVANCE(7);
      if (lookahead == 'P')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 64:
      if (lookahead == 'C')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 70:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      END_STATE();
    case 71:
      if (lookahead == '\n')
        ADVANCE(53);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'p')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      END_STATE();
    case 72:
      if (lookahead == 'b')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'x')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_memnonic);
      END_STATE();
    case 75:
      if (lookahead == 's')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'u')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'd')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'o')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '_')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'o')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'p')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'c')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'd')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
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
    [sym__decimal] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(3),
    [sym_memnonic] = ACTIONS(3),
    [sym_pseudo_opcode] = ACTIONS(3),
    [sym_semicolon_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__line] = STATE(8),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__line_break] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(15),
  },
  [2] = {
    [anon_sym_COLON] = ACTIONS(17),
  },
  [3] = {
    [sym__operand_field] = STATE(12),
    [sym_numeric_operand] = STATE(12),
    [sym_register] = STATE(12),
    [sym__octal] = STATE(11),
    [sym__hexadecimal] = STATE(11),
    [sym__binary] = STATE(11),
    [sym__line_break] = ACTIONS(19),
    [anon_sym_A] = ACTIONS(21),
    [anon_sym_B] = ACTIONS(21),
    [anon_sym_X] = ACTIONS(21),
    [anon_sym_Y] = ACTIONS(21),
    [anon_sym_U] = ACTIONS(21),
    [anon_sym_S] = ACTIONS(21),
    [anon_sym_PC] = ACTIONS(21),
    [anon_sym_CC] = ACTIONS(21),
    [anon_sym_DP] = ACTIONS(21),
    [anon_sym_D] = ACTIONS(21),
    [sym__decimal] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_AT_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_PLUS_LBRACKqQOo_RBRACK_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH0_LBRACKxX_RBRACK_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_PLUSH_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_PERCENT_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK01_RBRACK_PLUS_LBRACKbB_RBRACK_SLASH] = ACTIONS(23),
    [sym_semicolon_comment] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [5] = {
    [sym__instruction] = STATE(14),
    [sym_opcode] = STATE(14),
    [sym__comment] = STATE(15),
    [sym__line_break] = ACTIONS(29),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(31),
    [sym_semicolon_comment] = ACTIONS(33),
  },
  [6] = {
    [sym__comment] = STATE(15),
    [sym__line_break] = ACTIONS(29),
    [sym_semicolon_comment] = ACTIONS(33),
  },
  [7] = {
    [sym__line_break] = ACTIONS(29),
  },
  [8] = {
    [sym__line] = STATE(16),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__line_break] = ACTIONS(37),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(15),
  },
  [9] = {
    [sym__line_break] = ACTIONS(39),
    [sym_memnonic] = ACTIONS(41),
    [sym_pseudo_opcode] = ACTIONS(41),
    [sym_semicolon_comment] = ACTIONS(41),
  },
  [10] = {
    [sym__line_break] = ACTIONS(43),
    [sym_semicolon_comment] = ACTIONS(45),
  },
  [11] = {
    [sym__line_break] = ACTIONS(47),
    [sym_semicolon_comment] = ACTIONS(49),
  },
  [12] = {
    [sym__line_break] = ACTIONS(51),
    [sym_semicolon_comment] = ACTIONS(53),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__line_break] = ACTIONS(55),
    [sym__identifier] = ACTIONS(57),
    [sym_memnonic] = ACTIONS(57),
    [sym_pseudo_opcode] = ACTIONS(57),
    [sym_semicolon_comment] = ACTIONS(57),
  },
  [14] = {
    [sym__comment] = STATE(18),
    [sym__line_break] = ACTIONS(59),
    [sym_semicolon_comment] = ACTIONS(61),
  },
  [15] = {
    [sym__line_break] = ACTIONS(59),
  },
  [16] = {
    [sym__line] = STATE(16),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym__line_break] = ACTIONS(65),
    [sym__identifier] = ACTIONS(68),
    [sym_memnonic] = ACTIONS(71),
    [sym_pseudo_opcode] = ACTIONS(74),
    [sym_semicolon_comment] = ACTIONS(77),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym__line_break] = ACTIONS(80),
    [sym__identifier] = ACTIONS(82),
    [sym_memnonic] = ACTIONS(82),
    [sym_pseudo_opcode] = ACTIONS(82),
    [sym_semicolon_comment] = ACTIONS(82),
  },
  [18] = {
    [sym__line_break] = ACTIONS(84),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__line_break] = ACTIONS(86),
    [sym__identifier] = ACTIONS(88),
    [sym_memnonic] = ACTIONS(88),
    [sym_pseudo_opcode] = ACTIONS(88),
    [sym_semicolon_comment] = ACTIONS(88),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(8),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_numeric_operand, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_numeric_operand, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(17),
  [61] = {.count = 1, .reusable = false}, SHIFT(18),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [84] = {.count = 1, .reusable = true}, SHIFT(19),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
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
