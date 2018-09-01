#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 16
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_COLON = 2,
  sym__identifier = 3,
  sym_opcode = 4,
  sym_pseudo_opcode = 5,
  sym_semicolon_comment = 6,
  sym_source_file = 7,
  sym__line = 8,
  sym_label = 9,
  sym__instruction = 10,
  sym__comment = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [sym_opcode] = "opcode",
  [sym_pseudo_opcode] = "pseudo_opcode",
  [sym_semicolon_comment] = "semicolon_comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label] = "label",
  [sym__instruction] = "_instruction",
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
  [sym_opcode] = {
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
      if (lookahead == ':')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(3);
      if (lookahead == 'o')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_semicolon_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'p')
        ADVANCE(5);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(6);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(7);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(8);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(9);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 's')
        ADVANCE(12);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u')
        ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(15);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(16);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_pseudo_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == ';')
        ADVANCE(3);
      if (lookahead == 'o')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 27:
      if (lookahead == ':')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [sym_opcode] = ACTIONS(3),
    [sym_pseudo_opcode] = ACTIONS(3),
    [sym_semicolon_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym__line] = STATE(7),
    [sym_label] = STATE(4),
    [sym__instruction] = STATE(5),
    [sym__comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__line_break] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_opcode] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
  },
  [2] = {
    [anon_sym_COLON] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [4] = {
    [sym__instruction] = STATE(10),
    [sym__comment] = STATE(11),
    [sym__line_break] = ACTIONS(19),
    [sym_opcode] = ACTIONS(21),
    [sym_pseudo_opcode] = ACTIONS(21),
    [sym_semicolon_comment] = ACTIONS(23),
  },
  [5] = {
    [sym__comment] = STATE(11),
    [sym__line_break] = ACTIONS(19),
    [sym_semicolon_comment] = ACTIONS(23),
  },
  [6] = {
    [sym__line_break] = ACTIONS(19),
  },
  [7] = {
    [sym__line] = STATE(12),
    [sym_label] = STATE(4),
    [sym__instruction] = STATE(5),
    [sym__comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__line_break] = ACTIONS(27),
    [sym__identifier] = ACTIONS(9),
    [sym_opcode] = ACTIONS(11),
    [sym_pseudo_opcode] = ACTIONS(11),
    [sym_semicolon_comment] = ACTIONS(13),
  },
  [8] = {
    [sym__line_break] = ACTIONS(29),
    [sym_opcode] = ACTIONS(31),
    [sym_pseudo_opcode] = ACTIONS(31),
    [sym_semicolon_comment] = ACTIONS(31),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__line_break] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [sym_opcode] = ACTIONS(35),
    [sym_pseudo_opcode] = ACTIONS(35),
    [sym_semicolon_comment] = ACTIONS(35),
  },
  [10] = {
    [sym__comment] = STATE(14),
    [sym__line_break] = ACTIONS(37),
    [sym_semicolon_comment] = ACTIONS(39),
  },
  [11] = {
    [sym__line_break] = ACTIONS(37),
  },
  [12] = {
    [sym__line] = STATE(12),
    [sym_label] = STATE(4),
    [sym__instruction] = STATE(5),
    [sym__comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__line_break] = ACTIONS(43),
    [sym__identifier] = ACTIONS(46),
    [sym_opcode] = ACTIONS(49),
    [sym_pseudo_opcode] = ACTIONS(49),
    [sym_semicolon_comment] = ACTIONS(52),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__line_break] = ACTIONS(55),
    [sym__identifier] = ACTIONS(57),
    [sym_opcode] = ACTIONS(57),
    [sym_pseudo_opcode] = ACTIONS(57),
    [sym_semicolon_comment] = ACTIONS(57),
  },
  [14] = {
    [sym__line_break] = ACTIONS(59),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__line_break] = ACTIONS(61),
    [sym__identifier] = ACTIONS(63),
    [sym_opcode] = ACTIONS(63),
    [sym_pseudo_opcode] = ACTIONS(63),
    [sym_semicolon_comment] = ACTIONS(63),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = false}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [59] = {.count = 1, .reusable = true}, SHIFT(15),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
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
