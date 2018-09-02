#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 33
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_COLON = 2,
  sym__identifier = 3,
  anon_sym_COMMA = 4,
  sym_memnonic = 5,
  sym__decimal = 6,
  sym__octal = 7,
  sym__hexadecimal = 8,
  sym__binary = 9,
  anon_sym_A = 10,
  anon_sym_B = 11,
  anon_sym_X = 12,
  anon_sym_Y = 13,
  anon_sym_U = 14,
  anon_sym_S = 15,
  anon_sym_PC = 16,
  anon_sym_CC = 17,
  anon_sym_DP = 18,
  anon_sym_D = 19,
  sym_semicolon_comment = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  sym_source_file = 23,
  sym__line = 24,
  sym_label = 25,
  sym_symbol = 26,
  sym__instruction = 27,
  sym_opcode = 28,
  sym__operand = 29,
  sym_constant = 30,
  sym_register = 31,
  sym__comment = 32,
  sym__register_exp = 33,
  sym_operator = 34,
  aux_sym_source_file_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_COMMA] = ",",
  [sym_memnonic] = "memnonic",
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
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'A')
        ADVANCE(13);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'C')
        ADVANCE(16);
      if (lookahead == 'D')
        ADVANCE(18);
      if (lookahead == 'P')
        ADVANCE(20);
      if (lookahead == 'S')
        ADVANCE(22);
      if (lookahead == 'U')
        ADVANCE(23);
      if (lookahead == 'X')
        ADVANCE(24);
      if (lookahead == 'Y')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
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
        ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(28);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'a')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 32:
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'A')
        ADVANCE(13);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'C')
        ADVANCE(16);
      if (lookahead == 'D')
        ADVANCE(18);
      if (lookahead == 'P')
        ADVANCE(20);
      if (lookahead == 'S')
        ADVANCE(22);
      if (lookahead == 'U')
        ADVANCE(23);
      if (lookahead == 'X')
        ADVANCE(24);
      if (lookahead == 'Y')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'a')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == 'b')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'x')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_memnonic);
      END_STATE();
    case 39:
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == 'A')
        ADVANCE(40);
      if (lookahead == 'B')
        ADVANCE(41);
      if (lookahead == 'C')
        ADVANCE(42);
      if (lookahead == 'D')
        ADVANCE(44);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'S')
        ADVANCE(48);
      if (lookahead == 'U')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(50);
      if (lookahead == 'Y')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 42:
      if (lookahead == 'C')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_CC);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DP);
      END_STATE();
    case 46:
      if (lookahead == 'C')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        ADVANCE(31);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_memnonic] = ACTIONS(3),
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
    [sym_source_file] = STATE(4),
    [sym__line] = STATE(8),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym__line_break] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [sym_memnonic] = ACTIONS(9),
    [sym_semicolon_comment] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_COLON] = ACTIONS(13),
  },
  [3] = {
    [sym_symbol] = STATE(14),
    [sym__operand] = STATE(14),
    [sym_constant] = STATE(14),
    [sym_register] = STATE(14),
    [sym__line_break] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__decimal] = ACTIONS(21),
    [sym__octal] = ACTIONS(21),
    [sym__hexadecimal] = ACTIONS(21),
    [sym__binary] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_B] = ACTIONS(23),
    [anon_sym_X] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(23),
    [anon_sym_U] = ACTIONS(23),
    [anon_sym_S] = ACTIONS(23),
    [anon_sym_PC] = ACTIONS(23),
    [anon_sym_CC] = ACTIONS(23),
    [anon_sym_DP] = ACTIONS(23),
    [anon_sym_D] = ACTIONS(23),
    [sym_semicolon_comment] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [5] = {
    [sym__instruction] = STATE(16),
    [sym_opcode] = STATE(16),
    [sym__comment] = STATE(17),
    [sym__line_break] = ACTIONS(29),
    [sym_memnonic] = ACTIONS(9),
    [sym_semicolon_comment] = ACTIONS(31),
  },
  [6] = {
    [sym__comment] = STATE(17),
    [sym__line_break] = ACTIONS(29),
    [sym_semicolon_comment] = ACTIONS(31),
  },
  [7] = {
    [sym__line_break] = ACTIONS(29),
  },
  [8] = {
    [sym__line] = STATE(18),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__line_break] = ACTIONS(35),
    [sym__identifier] = ACTIONS(7),
    [sym_memnonic] = ACTIONS(9),
    [sym_semicolon_comment] = ACTIONS(11),
  },
  [9] = {
    [sym__line_break] = ACTIONS(37),
    [sym_memnonic] = ACTIONS(39),
    [sym_semicolon_comment] = ACTIONS(39),
  },
  [10] = {
    [sym__line_break] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [sym_semicolon_comment] = ACTIONS(43),
  },
  [11] = {
    [sym_register] = STATE(20),
    [sym__register_exp] = STATE(21),
    [sym_operator] = STATE(22),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_B] = ACTIONS(45),
    [anon_sym_X] = ACTIONS(45),
    [anon_sym_Y] = ACTIONS(45),
    [anon_sym_U] = ACTIONS(45),
    [anon_sym_S] = ACTIONS(45),
    [anon_sym_PC] = ACTIONS(45),
    [anon_sym_CC] = ACTIONS(45),
    [anon_sym_DP] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
  },
  [12] = {
    [sym__line_break] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_semicolon_comment] = ACTIONS(51),
  },
  [13] = {
    [sym__line_break] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_semicolon_comment] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
  },
  [14] = {
    [sym__line_break] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym_semicolon_comment] = ACTIONS(61),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym__line_break] = ACTIONS(63),
    [sym__identifier] = ACTIONS(65),
    [sym_memnonic] = ACTIONS(65),
    [sym_semicolon_comment] = ACTIONS(65),
  },
  [16] = {
    [sym__comment] = STATE(25),
    [sym__line_break] = ACTIONS(67),
    [sym_semicolon_comment] = ACTIONS(69),
  },
  [17] = {
    [sym__line_break] = ACTIONS(67),
  },
  [18] = {
    [sym__line] = STATE(18),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym__line_break] = ACTIONS(73),
    [sym__identifier] = ACTIONS(76),
    [sym_memnonic] = ACTIONS(79),
    [sym_semicolon_comment] = ACTIONS(82),
  },
  [19] = {
    [anon_sym_A] = ACTIONS(85),
    [anon_sym_B] = ACTIONS(85),
    [anon_sym_X] = ACTIONS(85),
    [anon_sym_Y] = ACTIONS(85),
    [anon_sym_U] = ACTIONS(85),
    [anon_sym_S] = ACTIONS(85),
    [anon_sym_PC] = ACTIONS(85),
    [anon_sym_CC] = ACTIONS(85),
    [anon_sym_DP] = ACTIONS(85),
    [anon_sym_D] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
  },
  [20] = {
    [sym_operator] = STATE(27),
    [sym__line_break] = ACTIONS(89),
    [sym_semicolon_comment] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [21] = {
    [sym__line_break] = ACTIONS(95),
    [sym_semicolon_comment] = ACTIONS(97),
  },
  [22] = {
    [sym_register] = STATE(28),
    [sym_operator] = STATE(29),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_B] = ACTIONS(45),
    [anon_sym_X] = ACTIONS(45),
    [anon_sym_Y] = ACTIONS(45),
    [anon_sym_U] = ACTIONS(45),
    [anon_sym_S] = ACTIONS(45),
    [anon_sym_PC] = ACTIONS(45),
    [anon_sym_CC] = ACTIONS(45),
    [anon_sym_DP] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
  },
  [23] = {
    [sym_register] = STATE(20),
    [sym__register_exp] = STATE(30),
    [sym_operator] = STATE(22),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_B] = ACTIONS(45),
    [anon_sym_X] = ACTIONS(45),
    [anon_sym_Y] = ACTIONS(45),
    [anon_sym_U] = ACTIONS(45),
    [anon_sym_S] = ACTIONS(45),
    [anon_sym_PC] = ACTIONS(45),
    [anon_sym_CC] = ACTIONS(45),
    [anon_sym_DP] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym__line_break] = ACTIONS(99),
    [sym__identifier] = ACTIONS(101),
    [sym_memnonic] = ACTIONS(101),
    [sym_semicolon_comment] = ACTIONS(101),
  },
  [25] = {
    [sym__line_break] = ACTIONS(103),
  },
  [26] = {
    [sym__line_break] = ACTIONS(85),
    [sym_semicolon_comment] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
  },
  [27] = {
    [sym_operator] = STATE(32),
    [sym__line_break] = ACTIONS(105),
    [sym_semicolon_comment] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
  },
  [28] = {
    [sym__line_break] = ACTIONS(105),
    [sym_semicolon_comment] = ACTIONS(107),
  },
  [29] = {
    [sym_register] = STATE(32),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_B] = ACTIONS(45),
    [anon_sym_X] = ACTIONS(45),
    [anon_sym_Y] = ACTIONS(45),
    [anon_sym_U] = ACTIONS(45),
    [anon_sym_S] = ACTIONS(45),
    [anon_sym_PC] = ACTIONS(45),
    [anon_sym_CC] = ACTIONS(45),
    [anon_sym_DP] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(23),
  },
  [30] = {
    [sym__line_break] = ACTIONS(109),
    [sym_semicolon_comment] = ACTIONS(111),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym__line_break] = ACTIONS(113),
    [sym__identifier] = ACTIONS(115),
    [sym_memnonic] = ACTIONS(115),
    [sym_semicolon_comment] = ACTIONS(115),
  },
  [32] = {
    [sym__line_break] = ACTIONS(117),
    [sym_semicolon_comment] = ACTIONS(119),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(8),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 1),
  [17] = {.count = 1, .reusable = false}, SHIFT(10),
  [19] = {.count = 1, .reusable = false}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(13),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(24),
  [69] = {.count = 1, .reusable = false}, SHIFT(25),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(26),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 3),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 3),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [103] = {.count = 1, .reusable = true}, SHIFT(31),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 4),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 4),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__register_exp, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__register_exp, 3),
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
