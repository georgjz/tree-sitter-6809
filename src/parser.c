#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 52
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 2,
  anon_sym_COLON = 3,
  sym__identifier = 4,
  anon_sym_COMMA = 5,
  sym_memnonic = 6,
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
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  sym_source_file = 27,
  sym__line = 28,
  sym_label = 29,
  sym_symbol = 30,
  sym__instruction = 31,
  sym_opcode = 32,
  sym__operand = 33,
  sym_constant = 34,
  sym_register = 35,
  sym__comment = 36,
  sym__register_exp = 37,
  sym_operator = 38,
  sym__expression = 39,
  sym__term = 40,
  aux_sym_source_file_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [sym_memnonic] = "memnonic",
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
  [sym__operand] = "_operand",
  [sym_constant] = "constant",
  [sym_register] = "register",
  [sym__comment] = "_comment",
  [sym__register_exp] = "_register_exp",
  [sym_operator] = "operator",
  [sym__expression] = "_expression",
  [sym__term] = "_term",
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
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'D')
        ADVANCE(22);
      if (lookahead == 'P')
        ADVANCE(24);
      if (lookahead == 'S')
        ADVANCE(26);
      if (lookahead == 'U')
        ADVANCE(27);
      if (lookahead == 'X')
        ADVANCE(28);
      if (lookahead == 'Y')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 36:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'D')
        ADVANCE(22);
      if (lookahead == 'P')
        ADVANCE(24);
      if (lookahead == 'S')
        ADVANCE(26);
      if (lookahead == 'U')
        ADVANCE(27);
      if (lookahead == 'X')
        ADVANCE(28);
      if (lookahead == 'Y')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == 'b')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'x')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_memnonic);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == 'A')
        ADVANCE(47);
      if (lookahead == 'B')
        ADVANCE(48);
      if (lookahead == 'C')
        ADVANCE(49);
      if (lookahead == 'D')
        ADVANCE(51);
      if (lookahead == 'P')
        ADVANCE(53);
      if (lookahead == 'S')
        ADVANCE(55);
      if (lookahead == 'U')
        ADVANCE(56);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == 'Y')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 49:
      if (lookahead == 'C')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 53:
      if (lookahead == 'C')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 59:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 59},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_memnonic] = ACTIONS(3),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__line] = STATE(9),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
  },
  [2] = {
    [sym__identifier] = ACTIONS(15),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(17),
  },
  [4] = {
    [sym_symbol] = STATE(19),
    [sym__operand] = STATE(18),
    [sym_constant] = STATE(19),
    [sym_register] = STATE(18),
    [sym__expression] = STATE(19),
    [sym__term] = STATE(19),
    [sym__line_break] = ACTIONS(19),
    [sym__identifier] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_imm_marker] = ACTIONS(25),
    [sym__decimal] = ACTIONS(27),
    [sym__octal] = ACTIONS(27),
    [sym__hexadecimal] = ACTIONS(27),
    [sym__binary] = ACTIONS(27),
    [anon_sym_A] = ACTIONS(29),
    [anon_sym_B] = ACTIONS(29),
    [anon_sym_X] = ACTIONS(29),
    [anon_sym_Y] = ACTIONS(29),
    [anon_sym_U] = ACTIONS(29),
    [anon_sym_S] = ACTIONS(29),
    [anon_sym_PC] = ACTIONS(29),
    [anon_sym_CC] = ACTIONS(29),
    [anon_sym_DP] = ACTIONS(29),
    [anon_sym_D] = ACTIONS(29),
    [sym_semicolon_comment] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [6] = {
    [sym__instruction] = STATE(21),
    [sym_opcode] = STATE(21),
    [sym__comment] = STATE(22),
    [sym__line_break] = ACTIONS(37),
    [sym_memnonic] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(39),
  },
  [7] = {
    [sym__comment] = STATE(22),
    [sym__line_break] = ACTIONS(37),
    [sym_semicolon_comment] = ACTIONS(39),
  },
  [8] = {
    [sym__line_break] = ACTIONS(37),
  },
  [9] = {
    [sym__line] = STATE(23),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__line_break] = ACTIONS(43),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(45),
  },
  [11] = {
    [sym__line_break] = ACTIONS(47),
    [sym_memnonic] = ACTIONS(49),
    [sym_semicolon_comment] = ACTIONS(49),
  },
  [12] = {
    [sym__line_break] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(53),
    [sym_semicolon_comment] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
  },
  [13] = {
    [sym_register] = STATE(26),
    [sym__register_exp] = STATE(27),
    [sym_operator] = STATE(28),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_PC] = ACTIONS(55),
    [anon_sym_CC] = ACTIONS(55),
    [anon_sym_DP] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
  },
  [14] = {
    [sym_symbol] = STATE(29),
    [sym_constant] = STATE(29),
    [sym__expression] = STATE(29),
    [sym__term] = STATE(29),
    [sym__identifier] = ACTIONS(59),
    [sym__decimal] = ACTIONS(61),
    [sym__octal] = ACTIONS(61),
    [sym__hexadecimal] = ACTIONS(61),
    [sym__binary] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
  },
  [15] = {
    [sym__line_break] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_semicolon_comment] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
  },
  [16] = {
    [sym__line_break] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_semicolon_comment] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
  },
  [17] = {
    [sym_symbol] = STATE(33),
    [sym_constant] = STATE(33),
    [sym__expression] = STATE(33),
    [sym__term] = STATE(33),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
  },
  [18] = {
    [sym__line_break] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_semicolon_comment] = ACTIONS(83),
  },
  [19] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_semicolon_comment] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym__line_break] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(93),
    [sym__identifier] = ACTIONS(93),
    [sym_memnonic] = ACTIONS(93),
    [sym_semicolon_comment] = ACTIONS(93),
  },
  [21] = {
    [sym__comment] = STATE(38),
    [sym__line_break] = ACTIONS(95),
    [sym_semicolon_comment] = ACTIONS(97),
  },
  [22] = {
    [sym__line_break] = ACTIONS(95),
  },
  [23] = {
    [sym__line] = STATE(23),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym__line_break] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(104),
    [sym__identifier] = ACTIONS(107),
    [sym_memnonic] = ACTIONS(110),
    [sym_semicolon_comment] = ACTIONS(113),
  },
  [24] = {
    [sym__line_break] = ACTIONS(116),
    [sym_memnonic] = ACTIONS(118),
    [sym_semicolon_comment] = ACTIONS(118),
  },
  [25] = {
    [anon_sym_A] = ACTIONS(120),
    [anon_sym_B] = ACTIONS(120),
    [anon_sym_X] = ACTIONS(120),
    [anon_sym_Y] = ACTIONS(120),
    [anon_sym_U] = ACTIONS(120),
    [anon_sym_S] = ACTIONS(120),
    [anon_sym_PC] = ACTIONS(120),
    [anon_sym_CC] = ACTIONS(120),
    [anon_sym_DP] = ACTIONS(120),
    [anon_sym_D] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
  },
  [26] = {
    [sym_operator] = STATE(40),
    [sym__line_break] = ACTIONS(124),
    [sym_semicolon_comment] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
  },
  [27] = {
    [sym__line_break] = ACTIONS(130),
    [sym_semicolon_comment] = ACTIONS(132),
  },
  [28] = {
    [sym_register] = STATE(41),
    [sym_operator] = STATE(42),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_PC] = ACTIONS(55),
    [anon_sym_CC] = ACTIONS(55),
    [anon_sym_DP] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
  },
  [29] = {
    [sym_operator] = STATE(36),
    [sym__line_break] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(136),
    [sym_semicolon_comment] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [30] = {
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
  },
  [32] = {
    [sym_symbol] = STATE(43),
    [sym_constant] = STATE(43),
    [sym__expression] = STATE(43),
    [sym__term] = STATE(43),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
  },
  [33] = {
    [sym_operator] = STATE(45),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(140),
  },
  [34] = {
    [sym_register] = STATE(26),
    [sym__register_exp] = STATE(46),
    [sym_operator] = STATE(28),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_PC] = ACTIONS(55),
    [anon_sym_CC] = ACTIONS(55),
    [anon_sym_DP] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
  },
  [35] = {
    [sym__identifier] = ACTIONS(120),
    [sym__decimal] = ACTIONS(120),
    [sym__octal] = ACTIONS(120),
    [sym__hexadecimal] = ACTIONS(120),
    [sym__binary] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
  },
  [36] = {
    [sym_symbol] = STATE(47),
    [sym_constant] = STATE(47),
    [sym__term] = STATE(47),
    [sym__identifier] = ACTIONS(59),
    [sym__decimal] = ACTIONS(61),
    [sym__octal] = ACTIONS(61),
    [sym__hexadecimal] = ACTIONS(61),
    [sym__binary] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym__line_break] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(144),
    [sym__identifier] = ACTIONS(144),
    [sym_memnonic] = ACTIONS(144),
    [sym_semicolon_comment] = ACTIONS(144),
  },
  [38] = {
    [sym__line_break] = ACTIONS(146),
  },
  [39] = {
    [sym__line_break] = ACTIONS(120),
    [sym_semicolon_comment] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
  },
  [40] = {
    [sym_operator] = STATE(49),
    [sym__line_break] = ACTIONS(148),
    [sym_semicolon_comment] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
  },
  [41] = {
    [sym__line_break] = ACTIONS(148),
    [sym_semicolon_comment] = ACTIONS(150),
  },
  [42] = {
    [sym_register] = STATE(49),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_PC] = ACTIONS(55),
    [anon_sym_CC] = ACTIONS(55),
    [anon_sym_DP] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(29),
  },
  [43] = {
    [sym_operator] = STATE(45),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(152),
  },
  [44] = {
    [sym__line_break] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(156),
    [sym_semicolon_comment] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
  },
  [45] = {
    [sym_symbol] = STATE(51),
    [sym_constant] = STATE(51),
    [sym__term] = STATE(51),
    [sym__identifier] = ACTIONS(73),
    [sym__decimal] = ACTIONS(75),
    [sym__octal] = ACTIONS(75),
    [sym__hexadecimal] = ACTIONS(75),
    [sym__binary] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
  },
  [46] = {
    [sym__line_break] = ACTIONS(158),
    [sym_semicolon_comment] = ACTIONS(160),
  },
  [47] = {
    [sym__line_break] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(164),
    [sym_semicolon_comment] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym__line_break] = ACTIONS(166),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(168),
    [sym__identifier] = ACTIONS(168),
    [sym_memnonic] = ACTIONS(168),
    [sym_semicolon_comment] = ACTIONS(168),
  },
  [49] = {
    [sym__line_break] = ACTIONS(170),
    [sym_semicolon_comment] = ACTIONS(172),
  },
  [50] = {
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
  },
  [51] = {
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(9),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = false}, SHIFT(15),
  [29] = {.count = 1, .reusable = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = false}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = true}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(16),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(12),
  [61] = {.count = 1, .reusable = true}, SHIFT(15),
  [63] = {.count = 1, .reusable = true}, SHIFT(17),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(31),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(34),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(35),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(37),
  [97] = {.count = 1, .reusable = false}, SHIFT(38),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [128] = {.count = 1, .reusable = false}, SHIFT(39),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__operand, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__operand, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(35),
  [140] = {.count = 1, .reusable = true}, SHIFT(44),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [146] = {.count = 1, .reusable = true}, SHIFT(48),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [152] = {.count = 1, .reusable = true}, SHIFT(50),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
