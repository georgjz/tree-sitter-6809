#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym__decimal = 4,
  sym__octal = 5,
  sym__hexadecimal = 6,
  sym__binary = 7,
  sym_symbol = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  sym_source_file = 13,
  sym__line = 14,
  sym__expression = 15,
  sym__term = 16,
  sym_constant = 17,
  sym__operator = 18,
  sym_operator = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__decimal] = "_decimal",
  [sym__octal] = "_octal",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__binary] = "_binary",
  [sym_symbol] = "symbol",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__expression] = "_expression",
  [sym__term] = "_term",
  [sym_constant] = "constant",
  [sym__operator] = "_operator",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_symbol] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
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
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '@')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '@')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__line] = STATE(6),
    [sym__expression] = STATE(5),
    [sym__term] = STATE(5),
    [sym_constant] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__decimal] = ACTIONS(7),
    [sym__octal] = ACTIONS(7),
    [sym__hexadecimal] = ACTIONS(7),
    [sym__binary] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
  },
  [2] = {
    [sym__expression] = STATE(9),
    [sym__term] = STATE(9),
    [sym_constant] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__decimal] = ACTIONS(13),
    [sym__octal] = ACTIONS(13),
    [sym__hexadecimal] = ACTIONS(13),
    [sym__binary] = ACTIONS(13),
    [sym_symbol] = ACTIONS(15),
  },
  [3] = {
    [sym__line_break] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [5] = {
    [sym__operator] = STATE(12),
    [sym_operator] = STATE(12),
    [sym__line_break] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
  },
  [6] = {
    [sym__line] = STATE(13),
    [sym__expression] = STATE(5),
    [sym__term] = STATE(5),
    [sym_constant] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__decimal] = ACTIONS(7),
    [sym__octal] = ACTIONS(7),
    [sym__hexadecimal] = ACTIONS(7),
    [sym__binary] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
  },
  [7] = {
    [sym__expression] = STATE(14),
    [sym__term] = STATE(14),
    [sym_constant] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__decimal] = ACTIONS(13),
    [sym__octal] = ACTIONS(13),
    [sym__hexadecimal] = ACTIONS(13),
    [sym__binary] = ACTIONS(13),
    [sym_symbol] = ACTIONS(29),
  },
  [8] = {
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
  },
  [9] = {
    [sym__operator] = STATE(16),
    [sym_operator] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym__decimal] = ACTIONS(35),
    [sym__octal] = ACTIONS(35),
    [sym__hexadecimal] = ACTIONS(35),
    [sym__binary] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym__decimal] = ACTIONS(37),
    [sym__octal] = ACTIONS(37),
    [sym__hexadecimal] = ACTIONS(37),
    [sym__binary] = ACTIONS(37),
    [sym_symbol] = ACTIONS(37),
  },
  [12] = {
    [sym__term] = STATE(17),
    [sym_constant] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym__decimal] = ACTIONS(7),
    [sym__octal] = ACTIONS(7),
    [sym__hexadecimal] = ACTIONS(7),
    [sym__binary] = ACTIONS(7),
    [sym_symbol] = ACTIONS(39),
  },
  [13] = {
    [sym__line] = STATE(13),
    [sym__expression] = STATE(5),
    [sym__term] = STATE(5),
    [sym_constant] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym__decimal] = ACTIONS(46),
    [sym__octal] = ACTIONS(46),
    [sym__hexadecimal] = ACTIONS(46),
    [sym__binary] = ACTIONS(46),
    [sym_symbol] = ACTIONS(49),
  },
  [14] = {
    [sym__operator] = STATE(16),
    [sym_operator] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
  },
  [15] = {
    [sym__line_break] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(56),
  },
  [16] = {
    [sym__term] = STATE(19),
    [sym_constant] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__decimal] = ACTIONS(13),
    [sym__octal] = ACTIONS(13),
    [sym__hexadecimal] = ACTIONS(13),
    [sym__binary] = ACTIONS(13),
    [sym_symbol] = ACTIONS(58),
  },
  [17] = {
    [sym__line_break] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_STAR] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_constant, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_constant, 1),
  [21] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.count = 1, .reusable = true}, SHIFT(18),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [58] = {.count = 1, .reusable = true}, SHIFT(19),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 3),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 3),
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
