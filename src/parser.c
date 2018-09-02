#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 60
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_string = 29,
  sym_source_file = 30,
  sym__line = 31,
  sym_label = 32,
  sym_symbol = 33,
  sym__instruction = 34,
  sym_opcode = 35,
  sym_assembler_directive = 36,
  sym__operand = 37,
  sym_constant = 38,
  sym_register = 39,
  sym__comment = 40,
  sym__register_exp = 41,
  sym_operator = 42,
  sym__expression = 43,
  sym__term = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_assembler_directive_repeat1 = 46,
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
  [sym_string] = "string",
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
  [sym_string] = {
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
      if (lookahead == 'e')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_memnonic);
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
      if (lookahead == 'q')
        ADVANCE(37);
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
      if (lookahead == 'u')
        ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(36);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 42:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == 'q')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      END_STATE();
    case 48:
      if (lookahead == '\n')
        ADVANCE(41);
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
        ADVANCE(43);
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
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        ADVANCE(41);
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
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        ADVANCE(41);
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
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == 'A')
        ADVANCE(53);
      if (lookahead == 'B')
        ADVANCE(54);
      if (lookahead == 'C')
        ADVANCE(55);
      if (lookahead == 'D')
        ADVANCE(57);
      if (lookahead == 'P')
        ADVANCE(59);
      if (lookahead == 'S')
        ADVANCE(61);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'X')
        ADVANCE(63);
      if (lookahead == 'Y')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 55:
      if (lookahead == 'C')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 59:
      if (lookahead == 'C')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 65:
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
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
        SKIP(66);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 66},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 66},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 66},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 66},
  [59] = {.lex_state = 66},
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
    [sym_string] = ACTIONS(1),
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
    [sym_string] = ACTIONS(39),
  },
  [5] = {
    [sym_symbol] = STATE(22),
    [sym_constant] = STATE(22),
    [sym__expression] = STATE(22),
    [sym__term] = STATE(22),
    [sym__line_break] = ACTIONS(41),
    [sym__identifier] = ACTIONS(25),
    [sym__decimal] = ACTIONS(31),
    [sym__octal] = ACTIONS(31),
    [sym__hexadecimal] = ACTIONS(31),
    [sym__binary] = ACTIONS(31),
    [sym_semicolon_comment] = ACTIONS(43),
    [sym_asterisk_comment] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_string] = ACTIONS(45),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(47),
  },
  [7] = {
    [sym_symbol] = STATE(8),
    [sym__instruction] = STATE(25),
    [sym_opcode] = STATE(25),
    [sym_assembler_directive] = STATE(25),
    [sym__comment] = STATE(26),
    [sym__line_break] = ACTIONS(49),
    [sym__identifier] = ACTIONS(51),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(53),
    [sym_asterisk_comment] = ACTIONS(53),
  },
  [8] = {
    [sym_pseudo_opcode] = ACTIONS(55),
  },
  [9] = {
    [sym__comment] = STATE(26),
    [sym__line_break] = ACTIONS(49),
    [sym_semicolon_comment] = ACTIONS(53),
    [sym_asterisk_comment] = ACTIONS(53),
  },
  [10] = {
    [sym__line_break] = ACTIONS(49),
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
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__line_break] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(13),
    [sym_semicolon_comment] = ACTIONS(15),
    [sym_asterisk_comment] = ACTIONS(15),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(61),
  },
  [13] = {
    [sym__line_break] = ACTIONS(63),
    [sym__identifier] = ACTIONS(65),
    [sym_memnonic] = ACTIONS(65),
    [sym_pseudo_opcode] = ACTIONS(65),
    [sym_semicolon_comment] = ACTIONS(65),
    [sym_asterisk_comment] = ACTIONS(65),
  },
  [14] = {
    [sym__line_break] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_semicolon_comment] = ACTIONS(67),
    [sym_asterisk_comment] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
  },
  [15] = {
    [sym_register] = STATE(31),
    [sym__register_exp] = STATE(32),
    [sym_operator] = STATE(33),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_B] = ACTIONS(69),
    [anon_sym_X] = ACTIONS(69),
    [anon_sym_Y] = ACTIONS(69),
    [anon_sym_U] = ACTIONS(69),
    [anon_sym_S] = ACTIONS(69),
    [anon_sym_PC] = ACTIONS(69),
    [anon_sym_CC] = ACTIONS(69),
    [anon_sym_DP] = ACTIONS(69),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
  },
  [16] = {
    [sym_symbol] = STATE(34),
    [sym_constant] = STATE(34),
    [sym__expression] = STATE(34),
    [sym__term] = STATE(34),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
  },
  [17] = {
    [sym__line_break] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_semicolon_comment] = ACTIONS(83),
    [sym_asterisk_comment] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
  },
  [18] = {
    [sym__line_break] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_semicolon_comment] = ACTIONS(87),
    [sym_asterisk_comment] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
  },
  [19] = {
    [sym_symbol] = STATE(37),
    [sym_constant] = STATE(37),
    [sym__expression] = STATE(37),
    [sym__term] = STATE(37),
    [sym__identifier] = ACTIONS(89),
    [sym__decimal] = ACTIONS(91),
    [sym__octal] = ACTIONS(91),
    [sym__hexadecimal] = ACTIONS(91),
    [sym__binary] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_string] = ACTIONS(95),
  },
  [20] = {
    [sym__line_break] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_semicolon_comment] = ACTIONS(101),
    [sym_asterisk_comment] = ACTIONS(101),
  },
  [21] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_semicolon_comment] = ACTIONS(105),
    [sym_asterisk_comment] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [22] = {
    [sym_operator] = STATE(40),
    [aux_sym_assembler_directive_repeat1] = STATE(42),
    [sym__line_break] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_semicolon_comment] = ACTIONS(113),
    [sym_asterisk_comment] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym__line_break] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(117),
    [sym__identifier] = ACTIONS(117),
    [sym_memnonic] = ACTIONS(117),
    [sym_pseudo_opcode] = ACTIONS(117),
    [sym_semicolon_comment] = ACTIONS(117),
    [sym_asterisk_comment] = ACTIONS(117),
  },
  [24] = {
    [sym_pseudo_opcode] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [25] = {
    [sym__comment] = STATE(44),
    [sym__line_break] = ACTIONS(119),
    [sym_semicolon_comment] = ACTIONS(121),
    [sym_asterisk_comment] = ACTIONS(121),
  },
  [26] = {
    [sym__line_break] = ACTIONS(119),
  },
  [27] = {
    [sym__line_break] = ACTIONS(109),
    [sym_semicolon_comment] = ACTIONS(113),
    [sym_asterisk_comment] = ACTIONS(113),
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
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym__line_break] = ACTIONS(125),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(128),
    [sym__identifier] = ACTIONS(131),
    [sym_memnonic] = ACTIONS(134),
    [sym_pseudo_opcode] = ACTIONS(137),
    [sym_semicolon_comment] = ACTIONS(140),
    [sym_asterisk_comment] = ACTIONS(140),
  },
  [29] = {
    [sym__line_break] = ACTIONS(143),
    [sym__identifier] = ACTIONS(145),
    [sym_memnonic] = ACTIONS(145),
    [sym_pseudo_opcode] = ACTIONS(145),
    [sym_semicolon_comment] = ACTIONS(145),
    [sym_asterisk_comment] = ACTIONS(145),
  },
  [30] = {
    [anon_sym_A] = ACTIONS(147),
    [anon_sym_B] = ACTIONS(147),
    [anon_sym_X] = ACTIONS(147),
    [anon_sym_Y] = ACTIONS(147),
    [anon_sym_U] = ACTIONS(147),
    [anon_sym_S] = ACTIONS(147),
    [anon_sym_PC] = ACTIONS(147),
    [anon_sym_CC] = ACTIONS(147),
    [anon_sym_DP] = ACTIONS(147),
    [anon_sym_D] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
  },
  [31] = {
    [sym_operator] = STATE(46),
    [sym__line_break] = ACTIONS(151),
    [sym_semicolon_comment] = ACTIONS(153),
    [sym_asterisk_comment] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
  },
  [32] = {
    [sym__line_break] = ACTIONS(157),
    [sym_semicolon_comment] = ACTIONS(159),
    [sym_asterisk_comment] = ACTIONS(159),
  },
  [33] = {
    [sym_register] = STATE(47),
    [sym_operator] = STATE(48),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_B] = ACTIONS(69),
    [anon_sym_X] = ACTIONS(69),
    [anon_sym_Y] = ACTIONS(69),
    [anon_sym_U] = ACTIONS(69),
    [anon_sym_S] = ACTIONS(69),
    [anon_sym_PC] = ACTIONS(69),
    [anon_sym_CC] = ACTIONS(69),
    [anon_sym_DP] = ACTIONS(69),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
  },
  [34] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [sym_semicolon_comment] = ACTIONS(163),
    [sym_asterisk_comment] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [35] = {
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
  },
  [36] = {
    [sym_symbol] = STATE(49),
    [sym_constant] = STATE(49),
    [sym__expression] = STATE(49),
    [sym__term] = STATE(49),
    [sym__identifier] = ACTIONS(89),
    [sym__decimal] = ACTIONS(91),
    [sym__octal] = ACTIONS(91),
    [sym__hexadecimal] = ACTIONS(91),
    [sym__binary] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_string] = ACTIONS(165),
  },
  [37] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(169),
  },
  [38] = {
    [sym_register] = STATE(31),
    [sym__register_exp] = STATE(52),
    [sym_operator] = STATE(33),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_B] = ACTIONS(69),
    [anon_sym_X] = ACTIONS(69),
    [anon_sym_Y] = ACTIONS(69),
    [anon_sym_U] = ACTIONS(69),
    [anon_sym_S] = ACTIONS(69),
    [anon_sym_PC] = ACTIONS(69),
    [anon_sym_CC] = ACTIONS(69),
    [anon_sym_DP] = ACTIONS(69),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
  },
  [39] = {
    [sym__identifier] = ACTIONS(147),
    [sym__decimal] = ACTIONS(147),
    [sym__octal] = ACTIONS(147),
    [sym__hexadecimal] = ACTIONS(147),
    [sym__binary] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [sym_string] = ACTIONS(147),
  },
  [40] = {
    [sym_symbol] = STATE(53),
    [sym_constant] = STATE(53),
    [sym__term] = STATE(53),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
  },
  [41] = {
    [sym_symbol] = STATE(54),
    [sym_constant] = STATE(54),
    [sym__expression] = STATE(54),
    [sym__term] = STATE(54),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_string] = ACTIONS(173),
  },
  [42] = {
    [aux_sym_assembler_directive_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_semicolon_comment] = ACTIONS(177),
    [sym_asterisk_comment] = ACTIONS(177),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym__line_break] = ACTIONS(179),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(181),
    [sym__identifier] = ACTIONS(181),
    [sym_memnonic] = ACTIONS(181),
    [sym_pseudo_opcode] = ACTIONS(181),
    [sym_semicolon_comment] = ACTIONS(181),
    [sym_asterisk_comment] = ACTIONS(181),
  },
  [44] = {
    [sym__line_break] = ACTIONS(183),
  },
  [45] = {
    [sym__line_break] = ACTIONS(147),
    [sym_semicolon_comment] = ACTIONS(149),
    [sym_asterisk_comment] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
  },
  [46] = {
    [sym_operator] = STATE(57),
    [sym__line_break] = ACTIONS(185),
    [sym_semicolon_comment] = ACTIONS(187),
    [sym_asterisk_comment] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
  },
  [47] = {
    [sym__line_break] = ACTIONS(185),
    [sym_semicolon_comment] = ACTIONS(187),
    [sym_asterisk_comment] = ACTIONS(187),
  },
  [48] = {
    [sym_register] = STATE(57),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_B] = ACTIONS(69),
    [anon_sym_X] = ACTIONS(69),
    [anon_sym_Y] = ACTIONS(69),
    [anon_sym_U] = ACTIONS(69),
    [anon_sym_S] = ACTIONS(69),
    [anon_sym_PC] = ACTIONS(69),
    [anon_sym_CC] = ACTIONS(69),
    [anon_sym_DP] = ACTIONS(69),
    [anon_sym_D] = ACTIONS(33),
  },
  [49] = {
    [sym_operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(189),
  },
  [50] = {
    [sym__line_break] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_semicolon_comment] = ACTIONS(193),
    [sym_asterisk_comment] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
  },
  [51] = {
    [sym_symbol] = STATE(59),
    [sym_constant] = STATE(59),
    [sym__term] = STATE(59),
    [sym__identifier] = ACTIONS(89),
    [sym__decimal] = ACTIONS(91),
    [sym__octal] = ACTIONS(91),
    [sym__hexadecimal] = ACTIONS(91),
    [sym__binary] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_string] = ACTIONS(195),
  },
  [52] = {
    [sym__line_break] = ACTIONS(197),
    [sym_semicolon_comment] = ACTIONS(199),
    [sym_asterisk_comment] = ACTIONS(199),
  },
  [53] = {
    [sym__line_break] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_semicolon_comment] = ACTIONS(203),
    [sym_asterisk_comment] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
  },
  [54] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_semicolon_comment] = ACTIONS(207),
    [sym_asterisk_comment] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
  },
  [55] = {
    [aux_sym_assembler_directive_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_semicolon_comment] = ACTIONS(207),
    [sym_asterisk_comment] = ACTIONS(207),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym__line_break] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(214),
    [sym__identifier] = ACTIONS(214),
    [sym_memnonic] = ACTIONS(214),
    [sym_pseudo_opcode] = ACTIONS(214),
    [sym_semicolon_comment] = ACTIONS(214),
    [sym_asterisk_comment] = ACTIONS(214),
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
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 1),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, SHIFT(29),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(18),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = true}, SHIFT(14),
  [75] = {.count = 1, .reusable = true}, SHIFT(17),
  [77] = {.count = 1, .reusable = true}, SHIFT(19),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(24),
  [91] = {.count = 1, .reusable = true}, SHIFT(35),
  [93] = {.count = 1, .reusable = true}, SHIFT(36),
  [95] = {.count = 1, .reusable = true}, SHIFT(37),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [99] = {.count = 1, .reusable = false}, SHIFT(38),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [107] = {.count = 1, .reusable = false}, SHIFT(39),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 2),
  [111] = {.count = 1, .reusable = false}, SHIFT(41),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(43),
  [121] = {.count = 1, .reusable = false}, SHIFT(44),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [155] = {.count = 1, .reusable = false}, SHIFT(45),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(49),
  [167] = {.count = 1, .reusable = true}, SHIFT(39),
  [169] = {.count = 1, .reusable = true}, SHIFT(50),
  [171] = {.count = 1, .reusable = true}, SHIFT(53),
  [173] = {.count = 1, .reusable = true}, SHIFT(54),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_assembler_directive, 3),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_assembler_directive, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [183] = {.count = 1, .reusable = true}, SHIFT(56),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(58),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [195] = {.count = 1, .reusable = true}, SHIFT(59),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_assembler_directive_repeat1, 2), SHIFT_REPEAT(41),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
