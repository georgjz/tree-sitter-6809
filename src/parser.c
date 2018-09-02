#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 21
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_COLON = 2,
  sym__identifier = 3,
  sym_memnonic = 4,
  sym__decimal = 5,
  sym__octal = 6,
  sym__hexadecimal = 7,
  sym__binary = 8,
  sym_semicolon_comment = 9,
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
  sym_source_file = 20,
  sym__line = 21,
  sym_label = 22,
  sym_symbol = 23,
  sym__instruction = 24,
  sym_opcode = 25,
  sym__operand = 26,
  sym_constant = 27,
  sym__comment = 28,
  sym_register = 29,
  aux_sym_source_file_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [sym_memnonic] = "memnonic",
  [sym__decimal] = "_decimal",
  [sym__octal] = "_octal",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__binary] = "_binary",
  [sym_semicolon_comment] = "semicolon_comment",
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
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label] = "label",
  [sym_symbol] = "symbol",
  [sym__instruction] = "_instruction",
  [sym_opcode] = "opcode",
  [sym__operand] = "_operand",
  [sym_constant] = "constant",
  [sym__comment] = "_comment",
  [sym_register] = "register",
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
  [sym_semicolon_comment] = {
    .visible = true,
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
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
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
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == 'A')
        ADVANCE(10);
      if (lookahead == 'B')
        ADVANCE(12);
      if (lookahead == 'C')
        ADVANCE(13);
      if (lookahead == 'D')
        ADVANCE(15);
      if (lookahead == 'P')
        ADVANCE(17);
      if (lookahead == 'S')
        ADVANCE(19);
      if (lookahead == 'U')
        ADVANCE(20);
      if (lookahead == 'X')
        ADVANCE(21);
      if (lookahead == 'Y')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'P')
        ADVANCE(16);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DP);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C')
        ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_memnonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 29:
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        ADVANCE(28);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == 'A')
        ADVANCE(10);
      if (lookahead == 'B')
        ADVANCE(12);
      if (lookahead == 'C')
        ADVANCE(13);
      if (lookahead == 'D')
        ADVANCE(15);
      if (lookahead == 'P')
        ADVANCE(17);
      if (lookahead == 'S')
        ADVANCE(19);
      if (lookahead == 'U')
        ADVANCE(20);
      if (lookahead == 'X')
        ADVANCE(21);
      if (lookahead == 'Y')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '.' ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\n')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == 'b')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'x')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_memnonic);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [sym_memnonic] = ACTIONS(3),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym_semicolon_comment] = ACTIONS(1),
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
    [sym_symbol] = STATE(13),
    [sym__operand] = STATE(13),
    [sym_constant] = STATE(13),
    [sym_register] = STATE(13),
    [sym__line_break] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [sym__octal] = ACTIONS(19),
    [sym__hexadecimal] = ACTIONS(19),
    [sym__binary] = ACTIONS(19),
    [sym_semicolon_comment] = ACTIONS(21),
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
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [5] = {
    [sym__instruction] = STATE(15),
    [sym_opcode] = STATE(15),
    [sym__comment] = STATE(16),
    [sym__line_break] = ACTIONS(27),
    [sym_memnonic] = ACTIONS(9),
    [sym_semicolon_comment] = ACTIONS(29),
  },
  [6] = {
    [sym__comment] = STATE(16),
    [sym__line_break] = ACTIONS(27),
    [sym_semicolon_comment] = ACTIONS(29),
  },
  [7] = {
    [sym__line_break] = ACTIONS(27),
  },
  [8] = {
    [sym__line] = STATE(17),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__line_break] = ACTIONS(33),
    [sym__identifier] = ACTIONS(7),
    [sym_memnonic] = ACTIONS(9),
    [sym_semicolon_comment] = ACTIONS(11),
  },
  [9] = {
    [sym__line_break] = ACTIONS(35),
    [sym_memnonic] = ACTIONS(37),
    [sym_semicolon_comment] = ACTIONS(37),
  },
  [10] = {
    [sym__line_break] = ACTIONS(39),
    [sym_semicolon_comment] = ACTIONS(41),
  },
  [11] = {
    [sym__line_break] = ACTIONS(43),
    [sym_semicolon_comment] = ACTIONS(45),
  },
  [12] = {
    [sym__line_break] = ACTIONS(47),
    [sym_semicolon_comment] = ACTIONS(49),
  },
  [13] = {
    [sym__line_break] = ACTIONS(51),
    [sym_semicolon_comment] = ACTIONS(53),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__line_break] = ACTIONS(55),
    [sym__identifier] = ACTIONS(57),
    [sym_memnonic] = ACTIONS(57),
    [sym_semicolon_comment] = ACTIONS(57),
  },
  [15] = {
    [sym__comment] = STATE(19),
    [sym__line_break] = ACTIONS(59),
    [sym_semicolon_comment] = ACTIONS(61),
  },
  [16] = {
    [sym__line_break] = ACTIONS(59),
  },
  [17] = {
    [sym__line] = STATE(17),
    [sym_label] = STATE(5),
    [sym__instruction] = STATE(6),
    [sym_opcode] = STATE(6),
    [sym__comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym__line_break] = ACTIONS(65),
    [sym__identifier] = ACTIONS(68),
    [sym_memnonic] = ACTIONS(71),
    [sym_semicolon_comment] = ACTIONS(74),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym__line_break] = ACTIONS(77),
    [sym__identifier] = ACTIONS(79),
    [sym_memnonic] = ACTIONS(79),
    [sym_semicolon_comment] = ACTIONS(79),
  },
  [19] = {
    [sym__line_break] = ACTIONS(81),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym__line_break] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [sym_memnonic] = ACTIONS(85),
    [sym_semicolon_comment] = ACTIONS(85),
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
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 1),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_register, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_register, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_opcode, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_opcode, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(18),
  [61] = {.count = 1, .reusable = false}, SHIFT(19),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [81] = {.count = 1, .reusable = true}, SHIFT(20),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
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
