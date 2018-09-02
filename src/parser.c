#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 60
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 2,
  anon_sym_COLON = 3,
  sym__identifier = 4,
  anon_sym_COMMA = 5,
  sym_memnonic = 6,
  sym_pseudo_opcode = 7,
  sym_imm_marker = 8,
  sym__decimal = 9,
  sym__octal = 10,
  sym__hexadecimal = 11,
  sym__binary = 12,
  anon_sym_A = 13,
  anon_sym_B = 14,
  anon_sym_X = 15,
  anon_sym_Y = 16,
  anon_sym_U = 17,
  anon_sym_S = 18,
  anon_sym_PC = 19,
  anon_sym_CC = 20,
  anon_sym_DP = 21,
  anon_sym_D = 22,
  sym_semicolon_comment = 23,
  sym_asterisk_comment = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  sym_source_file = 29,
  sym__line = 30,
  sym_label = 31,
  sym_symbol = 32,
  sym__instruction = 33,
  sym_opcode = 34,
  sym_assembler_directive = 35,
  sym__operand = 36,
  sym_constant = 37,
  sym_register = 38,
  sym__comment = 39,
  sym__register_exp = 40,
  sym_operator = 41,
  sym__expression = 42,
  sym__term = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_assembler_directive_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [sym_memnonic] = "memnonic",
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
  [sym_memnonic] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(18);
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'C')
        ADVANCE(21);
      if (lookahead == 'D')
        ADVANCE(23);
      if (lookahead == 'P')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == 'U')
        ADVANCE(28);
      if (lookahead == 'X')
        ADVANCE(29);
      if (lookahead == 'Y')
        ADVANCE(30);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_imm_marker);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__binary);
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
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(33);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'q')
        ADVANCE(35);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 40:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == 'e')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == 'q')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      END_STATE();
    case 46:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == 'A')
        ADVANCE(18);
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'C')
        ADVANCE(21);
      if (lookahead == 'D')
        ADVANCE(23);
      if (lookahead == 'P')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == 'U')
        ADVANCE(28);
      if (lookahead == 'X')
        ADVANCE(29);
      if (lookahead == 'Y')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'B')
        ADVANCE(52);
      if (lookahead == 'C')
        ADVANCE(53);
      if (lookahead == 'D')
        ADVANCE(55);
      if (lookahead == 'P')
        ADVANCE(57);
      if (lookahead == 'S')
        ADVANCE(59);
      if (lookahead == 'U')
        ADVANCE(60);
      if (lookahead == 'X')
        ADVANCE(61);
      if (lookahead == 'Y')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 53:
      if (lookahead == 'C')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 57:
      if (lookahead == 'C')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 63:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 64},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 64},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_memnonic] = ACTIONS(3),
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
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__line] = STATE(11),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(15),
    [sym_asterisk_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__identifier] = ACTIONS(17),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(19),
    [sym_pseudo_opcode] = ACTIONS(21),
  },
  [4] = {
    [sym_symbol] = STATE(21),
    [sym__operand] = STATE(20),
    [sym_constant] = STATE(21),
    [sym_register] = STATE(20),
    [sym__expression] = STATE(21),
    [sym__term] = STATE(21),
    [sym__line_break] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_imm_marker] = ACTIONS(29),
    [sym__decimal] = ACTIONS(31),
    [sym__octal] = ACTIONS(31),
    [sym__hexadecimal] = ACTIONS(31),
    [sym__binary] = ACTIONS(31),
    [anon_sym_A] = ACTIONS(33),
    [anon_sym_B] = ACTIONS(33),
    [anon_sym_X] = ACTIONS(33),
    [anon_sym_Y] = ACTIONS(33),
    [anon_sym_U] = ACTIONS(33),
    [anon_sym_S] = ACTIONS(33),
    [anon_sym_PC] = ACTIONS(33),
    [anon_sym_CC] = ACTIONS(33),
    [anon_sym_DP] = ACTIONS(33),
    [anon_sym_D] = ACTIONS(33),
    [sym_semicolon_comment] = ACTIONS(35),
    [sym_asterisk_comment] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
  },
  [5] = {
    [sym_symbol] = STATE(22),
    [sym_constant] = STATE(22),
    [sym__expression] = STATE(22),
    [sym__term] = STATE(22),
    [sym__line_break] = ACTIONS(39),
    [sym__identifier] = ACTIONS(25),
    [sym__decimal] = ACTIONS(31),
    [sym__octal] = ACTIONS(31),
    [sym__hexadecimal] = ACTIONS(31),
    [sym__binary] = ACTIONS(31),
    [sym_semicolon_comment] = ACTIONS(41),
    [sym_asterisk_comment] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [7] = {
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(25),
    [sym_opcode] = STATE(25),
    [sym_assembler_directive] = STATE(25),
    [sym__comment] = STATE(26),
    [sym__line_break] = ACTIONS(45),
    [sym__identifier] = ACTIONS(47),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(49),
    [sym_asterisk_comment] = ACTIONS(49),
  },
  [8] = {
    [sym_pseudo_opcode] = ACTIONS(51),
  },
  [9] = {
    [sym__comment] = STATE(26),
    [sym__line_break] = ACTIONS(45),
    [sym_semicolon_comment] = ACTIONS(49),
    [sym_asterisk_comment] = ACTIONS(49),
  },
  [10] = {
    [sym__line_break] = ACTIONS(45),
  },
  [11] = {
    [sym__line] = STATE(28),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__line_break] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(15),
    [sym_asterisk_comment] = ACTIONS(15),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(57),
  },
  [13] = {
    [sym__line_break] = ACTIONS(59),
    [sym__identifier] = ACTIONS(61),
    [sym_memnonic] = ACTIONS(61),
    [sym_pseudo_opcode] = ACTIONS(61),
    [sym_semicolon_comment] = ACTIONS(61),
    [sym_asterisk_comment] = ACTIONS(61),
  },
  [14] = {
    [sym__line_break] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_semicolon_comment] = ACTIONS(63),
    [sym_asterisk_comment] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [15] = {
    [sym_register] = STATE(31),
    [sym__register_exp] = STATE(32),
    [sym_operator] = STATE(33),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_B] = ACTIONS(65),
    [anon_sym_X] = ACTIONS(65),
    [anon_sym_Y] = ACTIONS(65),
    [anon_sym_U] = ACTIONS(65),
    [anon_sym_S] = ACTIONS(65),
    [anon_sym_PC] = ACTIONS(65),
    [anon_sym_CC] = ACTIONS(65),
    [anon_sym_DP] = ACTIONS(65),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
  },
  [16] = {
    [sym_symbol] = STATE(34),
    [sym_constant] = STATE(34),
    [sym__expression] = STATE(34),
    [sym__term] = STATE(34),
    [sym__identifier] = ACTIONS(69),
    [sym__decimal] = ACTIONS(71),
    [sym__octal] = ACTIONS(71),
    [sym__hexadecimal] = ACTIONS(71),
    [sym__binary] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [17] = {
    [sym__line_break] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_semicolon_comment] = ACTIONS(77),
    [sym_asterisk_comment] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
  },
  [18] = {
    [sym__line_break] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_semicolon_comment] = ACTIONS(81),
    [sym_asterisk_comment] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
  },
  [19] = {
    [sym_symbol] = STATE(37),
    [sym_constant] = STATE(37),
    [sym__expression] = STATE(37),
    [sym__term] = STATE(37),
    [sym__identifier] = ACTIONS(83),
    [sym__decimal] = ACTIONS(85),
    [sym__octal] = ACTIONS(85),
    [sym__hexadecimal] = ACTIONS(85),
    [sym__binary] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [20] = {
    [sym__line_break] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [sym_semicolon_comment] = ACTIONS(93),
    [sym_asterisk_comment] = ACTIONS(93),
  },
  [21] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_semicolon_comment] = ACTIONS(97),
    [sym_asterisk_comment] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [22] = {
    [sym_operator] = STATE(40),
    [aux_sym_assembler_directive_repeat1] = STATE(42),
    [sym__line_break] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_semicolon_comment] = ACTIONS(105),
    [sym_asterisk_comment] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym__line_break] = ACTIONS(107),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(109),
    [sym__identifier] = ACTIONS(109),
    [sym_memnonic] = ACTIONS(109),
    [sym_pseudo_opcode] = ACTIONS(109),
    [sym_semicolon_comment] = ACTIONS(109),
    [sym_asterisk_comment] = ACTIONS(109),
  },
  [24] = {
    [sym_pseudo_opcode] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [25] = {
    [sym__comment] = STATE(44),
    [sym__line_break] = ACTIONS(111),
    [sym_semicolon_comment] = ACTIONS(113),
    [sym_asterisk_comment] = ACTIONS(113),
  },
  [26] = {
    [sym__line_break] = ACTIONS(111),
  },
  [27] = {
    [sym__line_break] = ACTIONS(101),
    [sym_semicolon_comment] = ACTIONS(105),
    [sym_asterisk_comment] = ACTIONS(105),
  },
  [28] = {
    [sym__line] = STATE(28),
    [sym_label] = STATE(7),
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_opcode] = STATE(9),
    [sym_assembler_directive] = STATE(9),
    [sym__comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym__line_break] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(120),
    [sym__identifier] = ACTIONS(123),
    [sym_memnonic] = ACTIONS(126),
    [sym_pseudo_opcode] = ACTIONS(129),
    [sym_semicolon_comment] = ACTIONS(132),
    [sym_asterisk_comment] = ACTIONS(132),
  },
  [29] = {
    [sym__line_break] = ACTIONS(135),
    [sym__identifier] = ACTIONS(137),
    [sym_memnonic] = ACTIONS(137),
    [sym_pseudo_opcode] = ACTIONS(137),
    [sym_semicolon_comment] = ACTIONS(137),
    [sym_asterisk_comment] = ACTIONS(137),
  },
  [30] = {
    [anon_sym_A] = ACTIONS(139),
    [anon_sym_B] = ACTIONS(139),
    [anon_sym_X] = ACTIONS(139),
    [anon_sym_Y] = ACTIONS(139),
    [anon_sym_U] = ACTIONS(139),
    [anon_sym_S] = ACTIONS(139),
    [anon_sym_PC] = ACTIONS(139),
    [anon_sym_CC] = ACTIONS(139),
    [anon_sym_DP] = ACTIONS(139),
    [anon_sym_D] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
  },
  [31] = {
    [sym_operator] = STATE(46),
    [sym__line_break] = ACTIONS(143),
    [sym_semicolon_comment] = ACTIONS(145),
    [sym_asterisk_comment] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
  },
  [32] = {
    [sym__line_break] = ACTIONS(149),
    [sym_semicolon_comment] = ACTIONS(151),
    [sym_asterisk_comment] = ACTIONS(151),
  },
  [33] = {
    [sym_register] = STATE(47),
    [sym_operator] = STATE(48),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_B] = ACTIONS(65),
    [anon_sym_X] = ACTIONS(65),
    [anon_sym_Y] = ACTIONS(65),
    [anon_sym_U] = ACTIONS(65),
    [anon_sym_S] = ACTIONS(65),
    [anon_sym_PC] = ACTIONS(65),
    [anon_sym_CC] = ACTIONS(65),
    [anon_sym_DP] = ACTIONS(65),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
  },
  [34] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [sym_semicolon_comment] = ACTIONS(155),
    [sym_asterisk_comment] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [35] = {
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [36] = {
    [sym_symbol] = STATE(49),
    [sym_constant] = STATE(49),
    [sym__expression] = STATE(49),
    [sym__term] = STATE(49),
    [sym__identifier] = ACTIONS(83),
    [sym__decimal] = ACTIONS(85),
    [sym__octal] = ACTIONS(85),
    [sym__hexadecimal] = ACTIONS(85),
    [sym__binary] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [37] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(159),
  },
  [38] = {
    [sym_register] = STATE(31),
    [sym__register_exp] = STATE(52),
    [sym_operator] = STATE(33),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_B] = ACTIONS(65),
    [anon_sym_X] = ACTIONS(65),
    [anon_sym_Y] = ACTIONS(65),
    [anon_sym_U] = ACTIONS(65),
    [anon_sym_S] = ACTIONS(65),
    [anon_sym_PC] = ACTIONS(65),
    [anon_sym_CC] = ACTIONS(65),
    [anon_sym_DP] = ACTIONS(65),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
  },
  [39] = {
    [sym__identifier] = ACTIONS(139),
    [sym__decimal] = ACTIONS(139),
    [sym__octal] = ACTIONS(139),
    [sym__hexadecimal] = ACTIONS(139),
    [sym__binary] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
  },
  [40] = {
    [sym_symbol] = STATE(53),
    [sym_constant] = STATE(53),
    [sym__term] = STATE(53),
    [sym__identifier] = ACTIONS(69),
    [sym__decimal] = ACTIONS(71),
    [sym__octal] = ACTIONS(71),
    [sym__hexadecimal] = ACTIONS(71),
    [sym__binary] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [41] = {
    [sym_symbol] = STATE(54),
    [sym_constant] = STATE(54),
    [sym__expression] = STATE(54),
    [sym__term] = STATE(54),
    [sym__identifier] = ACTIONS(69),
    [sym__decimal] = ACTIONS(71),
    [sym__octal] = ACTIONS(71),
    [sym__hexadecimal] = ACTIONS(71),
    [sym__binary] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [42] = {
    [aux_sym_assembler_directive_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_semicolon_comment] = ACTIONS(163),
    [sym_asterisk_comment] = ACTIONS(163),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__line_break] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(167),
    [sym__identifier] = ACTIONS(167),
    [sym_memnonic] = ACTIONS(167),
    [sym_pseudo_opcode] = ACTIONS(167),
    [sym_semicolon_comment] = ACTIONS(167),
    [sym_asterisk_comment] = ACTIONS(167),
  },
  [44] = {
    [sym__line_break] = ACTIONS(169),
  },
  [45] = {
    [sym__line_break] = ACTIONS(139),
    [sym_semicolon_comment] = ACTIONS(141),
    [sym_asterisk_comment] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
  },
  [46] = {
    [sym_operator] = STATE(57),
    [sym__line_break] = ACTIONS(171),
    [sym_semicolon_comment] = ACTIONS(173),
    [sym_asterisk_comment] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
  },
  [47] = {
    [sym__line_break] = ACTIONS(171),
    [sym_semicolon_comment] = ACTIONS(173),
    [sym_asterisk_comment] = ACTIONS(173),
  },
  [48] = {
    [sym_register] = STATE(57),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_B] = ACTIONS(65),
    [anon_sym_X] = ACTIONS(65),
    [anon_sym_Y] = ACTIONS(65),
    [anon_sym_U] = ACTIONS(65),
    [anon_sym_S] = ACTIONS(65),
    [anon_sym_PC] = ACTIONS(65),
    [anon_sym_CC] = ACTIONS(65),
    [anon_sym_DP] = ACTIONS(65),
    [anon_sym_D] = ACTIONS(33),
  },
  [49] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(175),
  },
  [50] = {
    [sym__line_break] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_semicolon_comment] = ACTIONS(179),
    [sym_asterisk_comment] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
  },
  [51] = {
    [sym_symbol] = STATE(59),
    [sym_constant] = STATE(59),
    [sym__term] = STATE(59),
    [sym__identifier] = ACTIONS(83),
    [sym__decimal] = ACTIONS(85),
    [sym__octal] = ACTIONS(85),
    [sym__hexadecimal] = ACTIONS(85),
    [sym__binary] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [52] = {
    [sym__line_break] = ACTIONS(181),
    [sym_semicolon_comment] = ACTIONS(183),
    [sym_asterisk_comment] = ACTIONS(183),
  },
  [53] = {
    [sym__line_break] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_semicolon_comment] = ACTIONS(187),
    [sym_asterisk_comment] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
  },
  [54] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_semicolon_comment] = ACTIONS(191),
    [sym_asterisk_comment] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
  },
  [55] = {
    [aux_sym_assembler_directive_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_semicolon_comment] = ACTIONS(191),
    [sym_asterisk_comment] = ACTIONS(191),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym__line_break] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(198),
    [sym__identifier] = ACTIONS(198),
    [sym_memnonic] = ACTIONS(198),
    [sym_pseudo_opcode] = ACTIONS(198),
    [sym_semicolon_comment] = ACTIONS(198),
    [sym_asterisk_comment] = ACTIONS(198),
  },
  [57] = {
    [sym__line_break] = ACTIONS(200),
    [sym_semicolon_comment] = ACTIONS(202),
    [sym_asterisk_comment] = ACTIONS(202),
  },
  [58] = {
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [59] = {
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(11),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = false}, SHIFT(15),
  [29] = {.count = 1, .reusable = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 1),
  [43] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(18),
  [67] = {.count = 1, .reusable = true}, SHIFT(30),
  [69] = {.count = 1, .reusable = true}, SHIFT(14),
  [71] = {.count = 1, .reusable = true}, SHIFT(17),
  [73] = {.count = 1, .reusable = true}, SHIFT(19),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(24),
  [85] = {.count = 1, .reusable = true}, SHIFT(35),
  [87] = {.count = 1, .reusable = true}, SHIFT(36),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 2),
  [103] = {.count = 1, .reusable = false}, SHIFT(41),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = false}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [147] = {.count = 1, .reusable = false}, SHIFT(45),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(39),
  [159] = {.count = 1, .reusable = true}, SHIFT(50),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [169] = {.count = 1, .reusable = true}, SHIFT(56),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(58),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2), SHIFT_REPEAT(41),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
