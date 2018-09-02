#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 38
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 2,
  anon_sym_COLON = 3,
  sym__identifier = 4,
  anon_sym_COMMA = 5,
  sym_memnonic = 6,
  anon_sym_POUND = 7,
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
  sym_source_file = 25,
  sym__line = 26,
  sym_label = 27,
  sym_symbol = 28,
  sym__instruction = 29,
  sym_opcode = 30,
  sym__operand = 31,
  sym_constant = 32,
  sym_register = 33,
  sym__comment = 34,
  sym__register_exp = 35,
  sym_operator = 36,
  aux_sym_source_file_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [sym_memnonic] = "memnonic",
  [anon_sym_POUND] = "#",
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '@')
        ADVANCE(13);
      if (lookahead == 'A')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(17);
      if (lookahead == 'C')
        ADVANCE(18);
      if (lookahead == 'D')
        ADVANCE(20);
      if (lookahead == 'P')
        ADVANCE(22);
      if (lookahead == 'S')
        ADVANCE(24);
      if (lookahead == 'U')
        ADVANCE(25);
      if (lookahead == 'X')
        ADVANCE(26);
      if (lookahead == 'Y')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(29);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(28);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 34:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '@')
        ADVANCE(35);
      if (lookahead == 'A')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(17);
      if (lookahead == 'C')
        ADVANCE(18);
      if (lookahead == 'D')
        ADVANCE(20);
      if (lookahead == 'P')
        ADVANCE(22);
      if (lookahead == 'S')
        ADVANCE(24);
      if (lookahead == 'U')
        ADVANCE(25);
      if (lookahead == 'X')
        ADVANCE(26);
      if (lookahead == 'Y')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == 'b')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'x')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_memnonic);
      END_STATE();
    case 43:
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'B')
        ADVANCE(45);
      if (lookahead == 'C')
        ADVANCE(46);
      if (lookahead == 'D')
        ADVANCE(48);
      if (lookahead == 'P')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead == 'X')
        ADVANCE(54);
      if (lookahead == 'Y')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 46:
      if (lookahead == 'C')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 50:
      if (lookahead == 'C')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_memnonic] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_symbol] = STATE(17),
    [sym__operand] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_register] = STATE(17),
    [sym__line_break] = ACTIONS(19),
    [sym__identifier] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
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
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [6] = {
    [sym__instruction] = STATE(19),
    [sym_opcode] = STATE(19),
    [sym__comment] = STATE(20),
    [sym__line_break] = ACTIONS(35),
    [sym_memnonic] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__comment] = STATE(20),
    [sym__line_break] = ACTIONS(35),
    [sym_semicolon_comment] = ACTIONS(37),
  },
  [8] = {
    [sym__line_break] = ACTIONS(35),
  },
  [9] = {
    [sym__line] = STATE(21),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__line_break] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_memnonic] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(43),
  },
  [11] = {
    [sym__line_break] = ACTIONS(45),
    [sym_memnonic] = ACTIONS(47),
    [sym_semicolon_comment] = ACTIONS(47),
  },
  [12] = {
    [sym__line_break] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_semicolon_comment] = ACTIONS(51),
  },
  [13] = {
    [sym_register] = STATE(24),
    [sym__register_exp] = STATE(25),
    [sym_operator] = STATE(26),
    [anon_sym_A] = ACTIONS(53),
    [anon_sym_B] = ACTIONS(53),
    [anon_sym_X] = ACTIONS(53),
    [anon_sym_Y] = ACTIONS(53),
    [anon_sym_U] = ACTIONS(53),
    [anon_sym_S] = ACTIONS(53),
    [anon_sym_PC] = ACTIONS(53),
    [anon_sym_CC] = ACTIONS(53),
    [anon_sym_DP] = ACTIONS(53),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
  },
  [14] = {
    [sym__decimal] = ACTIONS(57),
    [sym__octal] = ACTIONS(57),
    [sym__hexadecimal] = ACTIONS(57),
    [sym__binary] = ACTIONS(57),
  },
  [15] = {
    [sym__line_break] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_semicolon_comment] = ACTIONS(61),
  },
  [16] = {
    [sym__line_break] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_semicolon_comment] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
  },
  [17] = {
    [sym__line_break] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_semicolon_comment] = ACTIONS(71),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym__line_break] = ACTIONS(73),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(75),
    [sym__identifier] = ACTIONS(75),
    [sym_memnonic] = ACTIONS(75),
    [sym_semicolon_comment] = ACTIONS(75),
  },
  [19] = {
    [sym__comment] = STATE(30),
    [sym__line_break] = ACTIONS(77),
    [sym_semicolon_comment] = ACTIONS(79),
  },
  [20] = {
    [sym__line_break] = ACTIONS(77),
  },
  [21] = {
    [sym__line] = STATE(21),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym__line_break] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(86),
    [sym__identifier] = ACTIONS(89),
    [sym_memnonic] = ACTIONS(92),
    [sym_semicolon_comment] = ACTIONS(95),
  },
  [22] = {
    [sym__line_break] = ACTIONS(98),
    [sym_memnonic] = ACTIONS(100),
    [sym_semicolon_comment] = ACTIONS(100),
  },
  [23] = {
    [anon_sym_A] = ACTIONS(102),
    [anon_sym_B] = ACTIONS(102),
    [anon_sym_X] = ACTIONS(102),
    [anon_sym_Y] = ACTIONS(102),
    [anon_sym_U] = ACTIONS(102),
    [anon_sym_S] = ACTIONS(102),
    [anon_sym_PC] = ACTIONS(102),
    [anon_sym_CC] = ACTIONS(102),
    [anon_sym_DP] = ACTIONS(102),
    [anon_sym_D] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
  },
  [24] = {
    [sym_operator] = STATE(32),
    [sym__line_break] = ACTIONS(106),
    [sym_semicolon_comment] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
  },
  [25] = {
    [sym__line_break] = ACTIONS(112),
    [sym_semicolon_comment] = ACTIONS(114),
  },
  [26] = {
    [sym_register] = STATE(33),
    [sym_operator] = STATE(34),
    [anon_sym_A] = ACTIONS(53),
    [anon_sym_B] = ACTIONS(53),
    [anon_sym_X] = ACTIONS(53),
    [anon_sym_Y] = ACTIONS(53),
    [anon_sym_U] = ACTIONS(53),
    [anon_sym_S] = ACTIONS(53),
    [anon_sym_PC] = ACTIONS(53),
    [anon_sym_CC] = ACTIONS(53),
    [anon_sym_DP] = ACTIONS(53),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
  },
  [27] = {
    [sym__line_break] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(118),
    [sym_semicolon_comment] = ACTIONS(118),
  },
  [28] = {
    [sym_register] = STATE(24),
    [sym__register_exp] = STATE(35),
    [sym_operator] = STATE(26),
    [anon_sym_A] = ACTIONS(53),
    [anon_sym_B] = ACTIONS(53),
    [anon_sym_X] = ACTIONS(53),
    [anon_sym_Y] = ACTIONS(53),
    [anon_sym_U] = ACTIONS(53),
    [anon_sym_S] = ACTIONS(53),
    [anon_sym_PC] = ACTIONS(53),
    [anon_sym_CC] = ACTIONS(53),
    [anon_sym_DP] = ACTIONS(53),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym__line_break] = ACTIONS(120),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(122),
    [sym__identifier] = ACTIONS(122),
    [sym_memnonic] = ACTIONS(122),
    [sym_semicolon_comment] = ACTIONS(122),
  },
  [30] = {
    [sym__line_break] = ACTIONS(124),
  },
  [31] = {
    [sym__line_break] = ACTIONS(102),
    [sym_semicolon_comment] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
  },
  [32] = {
    [sym_operator] = STATE(37),
    [sym__line_break] = ACTIONS(126),
    [sym_semicolon_comment] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
  },
  [33] = {
    [sym__line_break] = ACTIONS(126),
    [sym_semicolon_comment] = ACTIONS(128),
  },
  [34] = {
    [sym_register] = STATE(37),
    [anon_sym_A] = ACTIONS(53),
    [anon_sym_B] = ACTIONS(53),
    [anon_sym_X] = ACTIONS(53),
    [anon_sym_Y] = ACTIONS(53),
    [anon_sym_U] = ACTIONS(53),
    [anon_sym_S] = ACTIONS(53),
    [anon_sym_PC] = ACTIONS(53),
    [anon_sym_CC] = ACTIONS(53),
    [anon_sym_DP] = ACTIONS(53),
    [anon_sym_D] = ACTIONS(29),
  },
  [35] = {
    [sym__line_break] = ACTIONS(130),
    [sym_semicolon_comment] = ACTIONS(132),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym__line_break] = ACTIONS(134),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(136),
    [sym__identifier] = ACTIONS(136),
    [sym_memnonic] = ACTIONS(136),
    [sym_semicolon_comment] = ACTIONS(136),
  },
  [37] = {
    [sym__line_break] = ACTIONS(138),
    [sym_semicolon_comment] = ACTIONS(140),
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
  [33] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(16),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [69] = {.count = 1, .reusable = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(29),
  [79] = {.count = 1, .reusable = false}, SHIFT(30),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [89] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [110] = {.count = 1, .reusable = false}, SHIFT(31),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(36),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
