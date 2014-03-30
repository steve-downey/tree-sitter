#include "tree_sitter/parser.h"

STATE_COUNT = 347;
SYMBOL_COUNT = 48;

enum {
    ts_sym__else = 2,
    ts_sym__for = 3,
    ts_sym__function = 4,
    ts_sym__if = 5,
    ts_sym__terminator = 6,
    ts_sym__var = 7,
    ts_sym_array = 8,
    ts_sym_assignment = 9,
    ts_sym_expression = 10,
    ts_sym_expression_statement = 11,
    ts_sym_false = 12,
    ts_sym_for_statement = 13,
    ts_sym_formal_parameters = 14,
    ts_sym_function_call = 15,
    ts_sym_function_expression = 16,
    ts_sym_identifier = 17,
    ts_sym_if_statement = 18,
    ts_sym_literal = 19,
    ts_sym_null = 20,
    ts_sym_number = 21,
    ts_sym_object = 22,
    ts_sym_program = 23,
    ts_sym_property_access = 24,
    ts_sym_statement = 25,
    ts_sym_statement_block = 26,
    ts_sym_string = 27,
    ts_sym_true = 28,
    ts_sym_var_declaration = 29,
    ts_aux_sym_repeat_helper1 = 30,
    ts_aux_sym_repeat_helper2 = 31,
    ts_aux_sym_repeat_helper3 = 32,
    ts_aux_sym_repeat_helper4 = 33,
    ts_aux_sym_repeat_helper5 = 34,
    ts_aux_sym_repeat_helper6 = 35,
    ts_aux_sym_token1 = 36,
    ts_aux_sym_token10 = 37,
    ts_aux_sym_token11 = 38,
    ts_aux_sym_token12 = 39,
    ts_aux_sym_token2 = 40,
    ts_aux_sym_token3 = 41,
    ts_aux_sym_token4 = 42,
    ts_aux_sym_token5 = 43,
    ts_aux_sym_token6 = 44,
    ts_aux_sym_token7 = 45,
    ts_aux_sym_token8 = 46,
    ts_aux_sym_token9 = 47,
};

SYMBOL_NAMES = {
    [ts_sym__else] = "_else",
    [ts_sym__for] = "_for",
    [ts_sym__function] = "_function",
    [ts_sym__if] = "_if",
    [ts_sym__terminator] = "_terminator",
    [ts_sym__var] = "_var",
    [ts_sym_array] = "array",
    [ts_sym_assignment] = "assignment",
    [ts_sym_expression] = "expression",
    [ts_sym_expression_statement] = "expression_statement",
    [ts_sym_false] = "false",
    [ts_sym_for_statement] = "for_statement",
    [ts_sym_formal_parameters] = "formal_parameters",
    [ts_sym_function_call] = "function_call",
    [ts_sym_function_expression] = "function_expression",
    [ts_sym_identifier] = "identifier",
    [ts_sym_if_statement] = "if_statement",
    [ts_sym_literal] = "literal",
    [ts_sym_null] = "null",
    [ts_sym_number] = "number",
    [ts_sym_object] = "object",
    [ts_sym_program] = "program",
    [ts_sym_property_access] = "property_access",
    [ts_sym_statement] = "statement",
    [ts_sym_statement_block] = "statement_block",
    [ts_sym_string] = "string",
    [ts_sym_true] = "true",
    [ts_sym_var_declaration] = "var_declaration",
    [ts_aux_sym_repeat_helper1] = "repeat_helper1",
    [ts_aux_sym_repeat_helper2] = "repeat_helper2",
    [ts_aux_sym_repeat_helper3] = "repeat_helper3",
    [ts_aux_sym_repeat_helper4] = "repeat_helper4",
    [ts_aux_sym_repeat_helper5] = "repeat_helper5",
    [ts_aux_sym_repeat_helper6] = "repeat_helper6",
    [ts_aux_sym_token1] = "'{'",
    [ts_aux_sym_token10] = "']'",
    [ts_aux_sym_token11] = "';'",
    [ts_aux_sym_token12] = "'\n'",
    [ts_aux_sym_token2] = "'}'",
    [ts_aux_sym_token3] = "'('",
    [ts_aux_sym_token4] = "')'",
    [ts_aux_sym_token5] = "'='",
    [ts_aux_sym_token6] = "','",
    [ts_aux_sym_token7] = "'.'",
    [ts_aux_sym_token8] = "':'",
    [ts_aux_sym_token9] = "'['",
    [ts_builtin_sym_end] = "end",
    [ts_builtin_sym_error] = "error",
};

HIDDEN_SYMBOLS = {    
    [ts_sym__else] = 1,    
    [ts_sym__for] = 1,    
    [ts_sym__function] = 1,    
    [ts_sym__if] = 1,    
    [ts_sym__terminator] = 1,    
    [ts_sym__var] = 1,    
    [ts_aux_sym_repeat_helper1] = 1,    
    [ts_aux_sym_repeat_helper2] = 1,    
    [ts_aux_sym_repeat_helper3] = 1,    
    [ts_aux_sym_repeat_helper4] = 1,    
    [ts_aux_sym_repeat_helper5] = 1,    
    [ts_aux_sym_repeat_helper6] = 1,    
    [ts_aux_sym_token1] = 1,    
    [ts_aux_sym_token10] = 1,    
    [ts_aux_sym_token11] = 1,    
    [ts_aux_sym_token12] = 1,    
    [ts_aux_sym_token2] = 1,    
    [ts_aux_sym_token3] = 1,    
    [ts_aux_sym_token4] = 1,    
    [ts_aux_sym_token5] = 1,    
    [ts_aux_sym_token6] = 1,    
    [ts_aux_sym_token7] = 1,    
    [ts_aux_sym_token8] = 1,    
    [ts_aux_sym_token9] = 1,
};

LEX_FN() {
    START_LEXER();
    switch (lex_state) {
        case 0:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(4);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_aux_sym_token12);
        case 2:
            ACCEPT_TOKEN(ts_aux_sym_token3);
        case 3:
            ACCEPT_TOKEN(ts_aux_sym_token7);
        case 4:
            ACCEPT_TOKEN(ts_aux_sym_token11);
        case 5:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(29);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 6:
            if (lookahead == 'a')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 'l')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            if (lookahead == 's')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            if (lookahead == 'e')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(ts_sym_false);
        case 11:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(12);
            if (lookahead == '\\')
                ADVANCE(18);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(20);
            LEX_ERROR();
        case 12:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(14);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            LEX_ERROR();
        case 13:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(14);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            LEX_ERROR();
        case 14:
            ACCEPT_TOKEN(ts_sym_string);
        case 15:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(16);
            if ('#' <= lookahead && lookahead <= '\"')
                ADVANCE(13);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            LEX_ERROR();
        case 16:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(14);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            ACCEPT_TOKEN(ts_sym_string);
        case 17:
            if (lookahead == '\"')
                ADVANCE(13);
            LEX_ERROR();
        case 18:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(19);
            if ('#' <= lookahead && lookahead <= '\"')
                ADVANCE(12);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            LEX_ERROR();
        case 19:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(13);
            if (lookahead == '\"')
                ADVANCE(14);
            if (lookahead == '\\')
                ADVANCE(15);
            if (']' <= lookahead && lookahead <= '\\')
                ADVANCE(17);
            ACCEPT_TOKEN(ts_sym_string);
        case 20:
            if (lookahead == '\"')
                ADVANCE(12);
            LEX_ERROR();
        case 21:
            if (lookahead == '.')
                ADVANCE(22);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(25);
            ACCEPT_TOKEN(ts_sym_number);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            LEX_ERROR();
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            ACCEPT_TOKEN(ts_sym_number);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            ACCEPT_TOKEN(ts_sym_number);
        case 25:
            if (lookahead == '.')
                ADVANCE(22);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(25);
            ACCEPT_TOKEN(ts_sym_number);
        case 26:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 27:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 28:
            ACCEPT_TOKEN(ts_aux_sym_token9);
        case 29:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'a')
                ADVANCE(30);
            if ('b' <= lookahead && lookahead <= 'a')
                ADVANCE(7);
            if (lookahead == 'u')
                ADVANCE(34);
            if ('v' <= lookahead && lookahead <= 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 30:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'l')
                ADVANCE(31);
            if ('m' <= lookahead && lookahead <= 'l')
                ADVANCE(8);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 31:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(32);
            if ('t' <= lookahead && lookahead <= 's')
                ADVANCE(9);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 32:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'e')
                ADVANCE(33);
            if ('f' <= lookahead && lookahead <= 'e')
                ADVANCE(10);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 33:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_false);
        case 34:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(41);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 35:
            if (lookahead == 'c')
                ADVANCE(36);
            LEX_ERROR();
        case 36:
            if (lookahead == 't')
                ADVANCE(37);
            LEX_ERROR();
        case 37:
            if (lookahead == 'i')
                ADVANCE(38);
            LEX_ERROR();
        case 38:
            if (lookahead == 'o')
                ADVANCE(39);
            LEX_ERROR();
        case 39:
            if (lookahead == 'n')
                ADVANCE(40);
            LEX_ERROR();
        case 40:
            ACCEPT_TOKEN(ts_sym__function);
        case 41:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'c')
                ADVANCE(42);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 42:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 't')
                ADVANCE(43);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 43:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'i')
                ADVANCE(44);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 44:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'o')
                ADVANCE(45);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 45:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(46);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 46:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym__function);
        case 47:
            if (lookahead == 'n')
                ADVANCE(35);
            LEX_ERROR();
        case 48:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'a')
                ADVANCE(30);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 49:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'u')
                ADVANCE(50);
            if ('v' <= lookahead && lookahead <= 'u')
                ADVANCE(55);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 50:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'l')
                ADVANCE(51);
            if ('m' <= lookahead && lookahead <= 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 51:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'l')
                ADVANCE(52);
            if ('m' <= lookahead && lookahead <= 'l')
                ADVANCE(53);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 52:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_null);
        case 53:
            ACCEPT_TOKEN(ts_sym_null);
        case 54:
            if (lookahead == 'l')
                ADVANCE(53);
            LEX_ERROR();
        case 55:
            if (lookahead == 'l')
                ADVANCE(54);
            LEX_ERROR();
        case 56:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'r')
                ADVANCE(57);
            if ('s' <= lookahead && lookahead <= 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 57:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'u')
                ADVANCE(58);
            if ('v' <= lookahead && lookahead <= 'u')
                ADVANCE(61);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 58:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'e')
                ADVANCE(59);
            if ('f' <= lookahead && lookahead <= 'e')
                ADVANCE(60);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 59:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_true);
        case 60:
            ACCEPT_TOKEN(ts_sym_true);
        case 61:
            if (lookahead == 'e')
                ADVANCE(60);
            LEX_ERROR();
        case 62:
            if (lookahead == 'u')
                ADVANCE(61);
            LEX_ERROR();
        case 63:
            ACCEPT_TOKEN(ts_aux_sym_token1);
        case 64:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == ';')
                ADVANCE(4);
            LEX_ERROR();
        case 65:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            LEX_ERROR();
        case 66:
            ACCEPT_TOKEN(ts_aux_sym_token4);
        case 67:
            ACCEPT_TOKEN(ts_aux_sym_token6);
        case 68:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == '.')
                ADVANCE(3);
            LEX_ERROR();
        case 69:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(70);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(75);
            if ('j' <= lookahead && lookahead <= 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == 'v')
                ADVANCE(79);
            if (lookahead == '{')
                ADVANCE(63);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 70:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'a')
                ADVANCE(30);
            if ('b' <= lookahead && lookahead <= 'a')
                ADVANCE(7);
            if (lookahead == 'o')
                ADVANCE(71);
            if ('p' <= lookahead && lookahead <= 'o')
                ADVANCE(74);
            if (lookahead == 'u')
                ADVANCE(34);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 71:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'r')
                ADVANCE(72);
            if ('s' <= lookahead && lookahead <= 'r')
                ADVANCE(73);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 72:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym__for);
        case 73:
            ACCEPT_TOKEN(ts_sym__for);
        case 74:
            if (lookahead == 'r')
                ADVANCE(73);
            LEX_ERROR();
        case 75:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(76);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(77);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 76:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym__if);
        case 77:
            ACCEPT_TOKEN(ts_sym__if);
        case 78:
            if (lookahead == 'f')
                ADVANCE(77);
            LEX_ERROR();
        case 79:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'a')
                ADVANCE(80);
            if ('b' <= lookahead && lookahead <= 'a')
                ADVANCE(83);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 80:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'r')
                ADVANCE(81);
            if ('s' <= lookahead && lookahead <= 'r')
                ADVANCE(82);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 81:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym__var);
        case 82:
            ACCEPT_TOKEN(ts_sym__var);
        case 83:
            if (lookahead == 'r')
                ADVANCE(82);
            LEX_ERROR();
        case 84:
            ACCEPT_TOKEN(ts_aux_sym_token2);
        case 85:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            ACCEPT_TOKEN(ts_aux_sym_token5);
        case 87:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 88:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 89:
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 90:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(86);
            LEX_ERROR();
        case 91:
            ACCEPT_TOKEN(ts_aux_sym_token8);
        case 92:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(4);
            LEX_ERROR();
        case 93:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == ']')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            ACCEPT_TOKEN(ts_aux_sym_token10);
        case 95:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 96:
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 97:
            if (lookahead == ')')
                ADVANCE(66);
            LEX_ERROR();
        case 98:
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == ',')
                ADVANCE(67);
            LEX_ERROR();
        case 99:
            if (lookahead == ')')
                ADVANCE(66);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 100:
            if (lookahead == '(')
                ADVANCE(2);
            LEX_ERROR();
        case 101:
            if (lookahead == '(')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 102:
            if (lookahead == ']')
                ADVANCE(94);
            LEX_ERROR();
        case 103:
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == ']')
                ADVANCE(94);
            LEX_ERROR();
        case 104:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == ']')
                ADVANCE(94);
            if (lookahead == 'f')
                ADVANCE(29);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 105:
            if (lookahead == ':')
                ADVANCE(91);
            LEX_ERROR();
        case 106:
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 107:
            if (lookahead == '\"')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 108:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(86);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 109:
            if (lookahead == '\"')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 110:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(86);
            if (lookahead == ']')
                ADVANCE(94);
            LEX_ERROR();
        case 111:
            if (lookahead == '\"')
                ADVANCE(11);
            if (lookahead == ')')
                ADVANCE(66);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(29);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 112:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(86);
            LEX_ERROR();
        case 113:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 114:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(86);
            LEX_ERROR();
        case 115:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(120);
            if (lookahead == 'f')
                ADVANCE(70);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
            if ('j' <= lookahead && lookahead <= 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(49);
            if ('o' <= lookahead && lookahead <= 'n')
                ADVANCE(124);
            if (lookahead == 't')
                ADVANCE(56);
            if ('u' <= lookahead && lookahead <= 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(79);
            if ('w' <= lookahead && lookahead <= 'v')
                ADVANCE(126);
            if (lookahead == '{')
                ADVANCE(63);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 116:
            if (lookahead == 'l')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 's')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'e')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(ts_sym__else);
        case 120:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'l')
                ADVANCE(121);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 121:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(122);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 122:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'e')
                ADVANCE(123);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 123:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym__else);
        case 124:
            if (lookahead == 'u')
                ADVANCE(55);
            LEX_ERROR();
        case 125:
            if (lookahead == 'r')
                ADVANCE(62);
            LEX_ERROR();
        case 126:
            if (lookahead == 'a')
                ADVANCE(83);
            LEX_ERROR();
        case 127:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(70);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'i')
                ADVANCE(75);
            if ('j' <= lookahead && lookahead <= 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == 'v')
                ADVANCE(79);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 128:
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(86);
            LEX_ERROR();
        case 129:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(29);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(48);
            if (lookahead == 'n')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(56);
            if (lookahead == 'v')
                ADVANCE(79);
            if ('w' <= lookahead && lookahead <= 'v')
                ADVANCE(126);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 130:
            if (lookahead == '\"')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == 'e')
                ADVANCE(120);
            if (lookahead == 'f')
                ADVANCE(70);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
            if ('j' <= lookahead && lookahead <= 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(49);
            if ('o' <= lookahead && lookahead <= 'n')
                ADVANCE(124);
            if (lookahead == 't')
                ADVANCE(56);
            if ('u' <= lookahead && lookahead <= 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(79);
            if ('w' <= lookahead && lookahead <= 'v')
                ADVANCE(126);
            if (lookahead == '{')
                ADVANCE(63);
            LEX_ERROR();
        case 131:
            LEX_ERROR();
        case 132:
            if (lookahead == 'l')
                ADVANCE(117);
            if (lookahead == 'o')
                ADVANCE(74);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case ts_lex_state_error:
            if (lookahead == '\n')
                ADVANCE(1);
            if (lookahead == '\"')
                ADVANCE(11);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(66);
            if (lookahead == ',')
                ADVANCE(67);
            if (lookahead == '.')
                ADVANCE(3);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(86);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(28);
            if (lookahead == ']')
                ADVANCE(94);
            if (lookahead == 'e')
                ADVANCE(120);
            if ('f' <= lookahead && lookahead <= 'e')
                ADVANCE(132);
            if (lookahead == 'f')
                ADVANCE(70);
            if ('g' <= lookahead && lookahead <= 'f')
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(75);
            if ('j' <= lookahead && lookahead <= 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(49);
            if ('o' <= lookahead && lookahead <= 'n')
                ADVANCE(124);
            if (lookahead == 't')
                ADVANCE(56);
            if ('u' <= lookahead && lookahead <= 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(79);
            if ('w' <= lookahead && lookahead <= 'v')
                ADVANCE(126);
            if (lookahead == '{')
                ADVANCE(63);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        default:
            LEX_PANIC();
    }
}

LEX_STATES = {
    [0] = 127,
    [1] = 100,
    [2] = 129,
    [3] = 101,
    [4] = 96,
    [5] = 0,
    [6] = 69,
    [7] = 100,
    [8] = 129,
    [9] = 87,
    [10] = 64,
    [11] = 5,
    [12] = 5,
    [13] = 85,
    [14] = 5,
    [15] = 0,
    [16] = 0,
    [17] = 0,
    [18] = 111,
    [19] = 101,
    [20] = 96,
    [21] = 65,
    [22] = 69,
    [23] = 100,
    [24] = 5,
    [25] = 101,
    [26] = 96,
    [27] = 68,
    [28] = 69,
    [29] = 87,
    [30] = 64,
    [31] = 69,
    [32] = 69,
    [33] = 85,
    [34] = 0,
    [35] = 69,
    [36] = 87,
    [37] = 0,
    [38] = 69,
    [39] = 114,
    [40] = 5,
    [41] = 0,
    [42] = 107,
    [43] = 105,
    [44] = 5,
    [45] = 101,
    [46] = 96,
    [47] = 88,
    [48] = 69,
    [49] = 69,
    [50] = 89,
    [51] = 69,
    [52] = 90,
    [53] = 92,
    [54] = 89,
    [55] = 69,
    [56] = 0,
    [57] = 104,
    [58] = 101,
    [59] = 96,
    [60] = 93,
    [61] = 69,
    [62] = 89,
    [63] = 93,
    [64] = 95,
    [65] = 100,
    [66] = 96,
    [67] = 93,
    [68] = 99,
    [69] = 98,
    [70] = 97,
    [71] = 96,
    [72] = 87,
    [73] = 98,
    [74] = 97,
    [75] = 96,
    [76] = 93,
    [77] = 93,
    [78] = 93,
    [79] = 102,
    [80] = 0,
    [81] = 111,
    [82] = 65,
    [83] = 65,
    [84] = 65,
    [85] = 97,
    [86] = 93,
    [87] = 111,
    [88] = 65,
    [89] = 97,
    [90] = 65,
    [91] = 5,
    [92] = 65,
    [93] = 97,
    [94] = 87,
    [95] = 65,
    [96] = 112,
    [97] = 5,
    [98] = 65,
    [99] = 107,
    [100] = 105,
    [101] = 5,
    [102] = 88,
    [103] = 88,
    [104] = 88,
    [105] = 89,
    [106] = 65,
    [107] = 111,
    [108] = 65,
    [109] = 97,
    [110] = 88,
    [111] = 88,
    [112] = 104,
    [113] = 93,
    [114] = 102,
    [115] = 65,
    [116] = 5,
    [117] = 93,
    [118] = 102,
    [119] = 87,
    [120] = 93,
    [121] = 110,
    [122] = 5,
    [123] = 93,
    [124] = 107,
    [125] = 105,
    [126] = 5,
    [127] = 88,
    [128] = 89,
    [129] = 93,
    [130] = 109,
    [131] = 105,
    [132] = 5,
    [133] = 88,
    [134] = 89,
    [135] = 87,
    [136] = 88,
    [137] = 108,
    [138] = 5,
    [139] = 88,
    [140] = 107,
    [141] = 105,
    [142] = 5,
    [143] = 88,
    [144] = 89,
    [145] = 88,
    [146] = 104,
    [147] = 93,
    [148] = 102,
    [149] = 88,
    [150] = 88,
    [151] = 104,
    [152] = 93,
    [153] = 102,
    [154] = 93,
    [155] = 93,
    [156] = 103,
    [157] = 103,
    [158] = 88,
    [159] = 106,
    [160] = 89,
    [161] = 88,
    [162] = 106,
    [163] = 89,
    [164] = 93,
    [165] = 106,
    [166] = 89,
    [167] = 93,
    [168] = 103,
    [169] = 65,
    [170] = 103,
    [171] = 65,
    [172] = 106,
    [173] = 89,
    [174] = 65,
    [175] = 65,
    [176] = 93,
    [177] = 0,
    [178] = 103,
    [179] = 113,
    [180] = 89,
    [181] = 0,
    [182] = 64,
    [183] = 89,
    [184] = 88,
    [185] = 95,
    [186] = 100,
    [187] = 96,
    [188] = 88,
    [189] = 88,
    [190] = 89,
    [191] = 0,
    [192] = 106,
    [193] = 89,
    [194] = 68,
    [195] = 95,
    [196] = 100,
    [197] = 96,
    [198] = 68,
    [199] = 68,
    [200] = 68,
    [201] = 68,
    [202] = 111,
    [203] = 65,
    [204] = 97,
    [205] = 68,
    [206] = 68,
    [207] = 127,
    [208] = 100,
    [209] = 129,
    [210] = 0,
    [211] = 5,
    [212] = 5,
    [213] = 5,
    [214] = 68,
    [215] = 127,
    [216] = 100,
    [217] = 5,
    [218] = 68,
    [219] = 127,
    [220] = 87,
    [221] = 64,
    [222] = 115,
    [223] = 115,
    [224] = 85,
    [225] = 0,
    [226] = 115,
    [227] = 115,
    [228] = 115,
    [229] = 127,
    [230] = 115,
    [231] = 69,
    [232] = 89,
    [233] = 115,
    [234] = 113,
    [235] = 64,
    [236] = 87,
    [237] = 68,
    [238] = 128,
    [239] = 5,
    [240] = 68,
    [241] = 107,
    [242] = 105,
    [243] = 5,
    [244] = 88,
    [245] = 89,
    [246] = 68,
    [247] = 68,
    [248] = 106,
    [249] = 89,
    [250] = 68,
    [251] = 104,
    [252] = 93,
    [253] = 102,
    [254] = 68,
    [255] = 68,
    [256] = 103,
    [257] = 97,
    [258] = 115,
    [259] = 97,
    [260] = 64,
    [261] = 115,
    [262] = 127,
    [263] = 69,
    [264] = 97,
    [265] = 89,
    [266] = 65,
    [267] = 95,
    [268] = 100,
    [269] = 96,
    [270] = 65,
    [271] = 65,
    [272] = 97,
    [273] = 0,
    [274] = 0,
    [275] = 5,
    [276] = 5,
    [277] = 68,
    [278] = 127,
    [279] = 69,
    [280] = 97,
    [281] = 89,
    [282] = 0,
    [283] = 95,
    [284] = 100,
    [285] = 96,
    [286] = 0,
    [287] = 5,
    [288] = 5,
    [289] = 68,
    [290] = 127,
    [291] = 100,
    [292] = 5,
    [293] = 68,
    [294] = 127,
    [295] = 100,
    [296] = 129,
    [297] = 5,
    [298] = 5,
    [299] = 68,
    [300] = 127,
    [301] = 100,
    [302] = 5,
    [303] = 68,
    [304] = 127,
    [305] = 87,
    [306] = 64,
    [307] = 130,
    [308] = 130,
    [309] = 85,
    [310] = 0,
    [311] = 130,
    [312] = 130,
    [313] = 130,
    [314] = 127,
    [315] = 130,
    [316] = 69,
    [317] = 89,
    [318] = 130,
    [319] = 113,
    [320] = 64,
    [321] = 97,
    [322] = 130,
    [323] = 97,
    [324] = 130,
    [325] = 127,
    [326] = 87,
    [327] = 64,
    [328] = 127,
    [329] = 127,
    [330] = 85,
    [331] = 0,
    [332] = 127,
    [333] = 127,
    [334] = 127,
    [335] = 69,
    [336] = 89,
    [337] = 127,
    [338] = 113,
    [339] = 64,
    [340] = 97,
    [341] = 127,
    [342] = 97,
    [343] = 131,
    [344] = 127,
    [345] = 131,
    [346] = 131,
};

PARSE_TABLE = {
    [0] = {    
        [ts_sym__for] = SHIFT(1),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(291),    
        [ts_sym__var] = SHIFT(326),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(331),    
        [ts_sym_expression_statement] = SHIFT(333),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(333),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(333),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_program] = SHIFT(343),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(344),    
        [ts_sym_statement_block] = SHIFT(333),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(333),    
        [ts_aux_sym_repeat_helper1] = SHIFT(346),    
        [ts_aux_sym_token1] = SHIFT(335),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_repeat_helper1, 0),    
        [ts_builtin_sym_error] = SHIFT(339),
    },
    
    [1] = {    
        [ts_aux_sym_token3] = SHIFT(2),
    },
    
    [2] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__var] = SHIFT(9),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(287),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(287),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [3] = {    
        [ts_sym_formal_parameters] = SHIFT(4),    
        [ts_sym_identifier] = SHIFT(284),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [4] = {    
        [ts_sym_statement_block] = SHIFT(5),    
        [ts_aux_sym_token1] = SHIFT(6),
    },
    
    [5] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 3),
    },
    
    [6] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(281),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(283),
    },
    
    [7] = {    
        [ts_aux_sym_token3] = SHIFT(8),
    },
    
    [8] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__var] = SHIFT(9),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(275),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(275),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [9] = {    
        [ts_sym_assignment] = SHIFT(10),    
        [ts_sym_identifier] = SHIFT(13),
    },
    
    [10] = {    
        [ts_sym__terminator] = SHIFT(11),    
        [ts_aux_sym_token11] = SHIFT(12),    
        [ts_aux_sym_token12] = SHIFT(12),
    },
    
    [11] = {    
        [ts_sym__function] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_false] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_null] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_true] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_var_declaration, 3),
    },
    
    [12] = {    
        [ts_sym__function] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_false] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_null] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_number] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_string] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_true] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym__terminator, 1),
    },
    
    [13] = {    
        [ts_sym__terminator] = SHIFT(11),    
        [ts_aux_sym_token11] = SHIFT(12),    
        [ts_aux_sym_token12] = SHIFT(12),    
        [ts_aux_sym_token5] = SHIFT(14),
    },
    
    [14] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(17),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),
    },
    
    [15] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),
    },
    
    [16] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [17] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [18] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(271),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token4] = SHIFT(274),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [19] = {    
        [ts_sym_formal_parameters] = SHIFT(20),    
        [ts_sym_identifier] = SHIFT(268),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [20] = {    
        [ts_sym_statement_block] = SHIFT(21),    
        [ts_aux_sym_token1] = SHIFT(22),
    },
    
    [21] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 3),
    },
    
    [22] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(265),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(267),
    },
    
    [23] = {    
        [ts_aux_sym_token3] = SHIFT(24),
    },
    
    [24] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(201),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(264),
    },
    
    [25] = {    
        [ts_sym_formal_parameters] = SHIFT(26),    
        [ts_sym_identifier] = SHIFT(196),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [26] = {    
        [ts_sym_statement_block] = SHIFT(27),    
        [ts_aux_sym_token1] = SHIFT(28),
    },
    
    [27] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 3),
    },
    
    [28] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(193),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(195),
    },
    
    [29] = {    
        [ts_sym_assignment] = SHIFT(30),    
        [ts_sym_identifier] = SHIFT(33),
    },
    
    [30] = {    
        [ts_sym__terminator] = SHIFT(31),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),
    },
    
    [31] = {    
        [ts_sym__for] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__function] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__if] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__var] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_false] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_null] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_true] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_var_declaration, 3),
    },
    
    [32] = {    
        [ts_sym__for] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__function] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__if] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__var] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_false] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_null] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_number] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_string] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_true] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token2] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym__terminator, 1),
    },
    
    [33] = {    
        [ts_sym__terminator] = SHIFT(31),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token5] = SHIFT(14),
    },
    
    [34] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [35] = {    
        [ts_sym__for] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__function] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__if] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__var] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_false] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_null] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_true] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_expression_statement, 2),
    },
    
    [36] = {    
        [ts_sym_identifier] = SHIFT(37),
    },
    
    [37] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_property_access, 3),
    },
    
    [38] = {    
        [ts_sym__for] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__function] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__if] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__var] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_false] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_null] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_true] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement, 1),
    },
    
    [39] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(40),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [40] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(41),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),
    },
    
    [41] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [42] = {    
        [ts_sym_identifier] = SHIFT(43),    
        [ts_sym_string] = SHIFT(43),    
        [ts_aux_sym_token2] = SHIFT(56),    
        [ts_builtin_sym_error] = SHIFT(192),
    },
    
    [43] = {    
        [ts_aux_sym_token8] = SHIFT(44),
    },
    
    [44] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(189),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [45] = {    
        [ts_sym_formal_parameters] = SHIFT(46),    
        [ts_sym_identifier] = SHIFT(186),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [46] = {    
        [ts_sym_statement_block] = SHIFT(47),    
        [ts_aux_sym_token1] = SHIFT(48),
    },
    
    [47] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 3),
    },
    
    [48] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(183),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(185),
    },
    
    [49] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(50),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(182),
    },
    
    [50] = {    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 2),
    },
    
    [51] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(52),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(53),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(54),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = SHIFT(56),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(179),
    },
    
    [52] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(40),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token8] = SHIFT(44),
    },
    
    [53] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token8] = SHIFT(44),
    },
    
    [54] = {    
        [ts_aux_sym_token2] = SHIFT(55),
    },
    
    [55] = {    
        [ts_sym__for] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__function] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__if] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__var] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_false] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_null] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_true] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [56] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 2),
    },
    
    [57] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(78),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token10] = SHIFT(177),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(178),
    },
    
    [58] = {    
        [ts_sym_formal_parameters] = SHIFT(59),    
        [ts_sym_identifier] = SHIFT(65),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [59] = {    
        [ts_sym_statement_block] = SHIFT(60),    
        [ts_aux_sym_token1] = SHIFT(61),
    },
    
    [60] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 3),
    },
    
    [61] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(62),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper2, 0),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(64),
    },
    
    [62] = {    
        [ts_aux_sym_token2] = SHIFT(63),
    },
    
    [63] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [64] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(63),
    },
    
    [65] = {    
        [ts_sym_formal_parameters] = SHIFT(66),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [66] = {    
        [ts_sym_statement_block] = SHIFT(67),    
        [ts_aux_sym_token1] = SHIFT(61),
    },
    
    [67] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 4),
    },
    
    [68] = {    
        [ts_sym_identifier] = SHIFT(69),    
        [ts_aux_sym_token4] = SHIFT(75),
    },
    
    [69] = {    
        [ts_aux_sym_repeat_helper4] = SHIFT(70),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper4, 0),    
        [ts_aux_sym_token6] = SHIFT(72),
    },
    
    [70] = {    
        [ts_aux_sym_token4] = SHIFT(71),
    },
    
    [71] = {    
        [ts_aux_sym_token1] = REDUCE(ts_sym_formal_parameters, 4),
    },
    
    [72] = {    
        [ts_sym_identifier] = SHIFT(73),
    },
    
    [73] = {    
        [ts_aux_sym_repeat_helper4] = SHIFT(74),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper4, 0),    
        [ts_aux_sym_token6] = SHIFT(72),
    },
    
    [74] = {    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper4, 3),
    },
    
    [75] = {    
        [ts_aux_sym_token1] = REDUCE(ts_sym_formal_parameters, 2),
    },
    
    [76] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),
    },
    
    [77] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [78] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(79),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [79] = {    
        [ts_aux_sym_token10] = SHIFT(80),
    },
    
    [80] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 4),
    },
    
    [81] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(84),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token4] = SHIFT(176),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [82] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),
    },
    
    [83] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [84] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(85),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [85] = {    
        [ts_aux_sym_token4] = SHIFT(86),
    },
    
    [86] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 5),
    },
    
    [87] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(88),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token4] = SHIFT(175),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [88] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(89),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [89] = {    
        [ts_aux_sym_token4] = SHIFT(90),
    },
    
    [90] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 5),
    },
    
    [91] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(92),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [92] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(93),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [93] = {    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 3),
    },
    
    [94] = {    
        [ts_sym_identifier] = SHIFT(95),
    },
    
    [95] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_property_access, 3),
    },
    
    [96] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(97),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [97] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(98),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [98] = {    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [99] = {    
        [ts_sym_identifier] = SHIFT(100),    
        [ts_sym_string] = SHIFT(100),    
        [ts_aux_sym_token2] = SHIFT(171),    
        [ts_builtin_sym_error] = SHIFT(172),
    },
    
    [100] = {    
        [ts_aux_sym_token8] = SHIFT(101),
    },
    
    [101] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(104),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [102] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),
    },
    
    [103] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [104] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(105),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [105] = {    
        [ts_aux_sym_token2] = SHIFT(106),
    },
    
    [106] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 6),
    },
    
    [107] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(108),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token4] = SHIFT(111),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [108] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(109),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [109] = {    
        [ts_aux_sym_token4] = SHIFT(110),
    },
    
    [110] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 5),
    },
    
    [111] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 3),
    },
    
    [112] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(113),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token10] = SHIFT(169),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(170),
    },
    
    [113] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(114),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [114] = {    
        [ts_aux_sym_token10] = SHIFT(115),
    },
    
    [115] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 4),
    },
    
    [116] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(117),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(168),
    },
    
    [117] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(118),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [118] = {    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 3),
    },
    
    [119] = {    
        [ts_sym_identifier] = SHIFT(120),
    },
    
    [120] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_property_access, 3),
    },
    
    [121] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(122),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [122] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(123),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token9] = SHIFT(151),
    },
    
    [123] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [124] = {    
        [ts_sym_identifier] = SHIFT(125),    
        [ts_sym_string] = SHIFT(125),    
        [ts_aux_sym_token2] = SHIFT(164),    
        [ts_builtin_sym_error] = SHIFT(165),
    },
    
    [125] = {    
        [ts_aux_sym_token8] = SHIFT(126),
    },
    
    [126] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(127),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [127] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(128),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [128] = {    
        [ts_aux_sym_token2] = SHIFT(129),
    },
    
    [129] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 6),
    },
    
    [130] = {    
        [ts_sym_identifier] = SHIFT(131),    
        [ts_sym_string] = SHIFT(131),    
        [ts_builtin_sym_error] = SHIFT(162),
    },
    
    [131] = {    
        [ts_aux_sym_token8] = SHIFT(132),
    },
    
    [132] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(133),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [133] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(134),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [134] = {    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 5),
    },
    
    [135] = {    
        [ts_sym_identifier] = SHIFT(136),
    },
    
    [136] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_property_access, 3),
    },
    
    [137] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(138),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [138] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(139),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [139] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [140] = {    
        [ts_sym_identifier] = SHIFT(141),    
        [ts_sym_string] = SHIFT(141),    
        [ts_aux_sym_token2] = SHIFT(158),    
        [ts_builtin_sym_error] = SHIFT(159),
    },
    
    [141] = {    
        [ts_aux_sym_token8] = SHIFT(142),
    },
    
    [142] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(143),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [143] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(144),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [144] = {    
        [ts_aux_sym_token2] = SHIFT(145),
    },
    
    [145] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 6),
    },
    
    [146] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(147),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token10] = SHIFT(150),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(157),
    },
    
    [147] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(148),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [148] = {    
        [ts_aux_sym_token10] = SHIFT(149),
    },
    
    [149] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 4),
    },
    
    [150] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 2),
    },
    
    [151] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(152),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token10] = SHIFT(155),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(156),
    },
    
    [152] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(153),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [153] = {    
        [ts_aux_sym_token10] = SHIFT(154),
    },
    
    [154] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 4),
    },
    
    [155] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 2),
    },
    
    [156] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(153),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [157] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(148),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [158] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 2),
    },
    
    [159] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(160),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [160] = {    
        [ts_aux_sym_token2] = SHIFT(161),
    },
    
    [161] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 4),
    },
    
    [162] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(163),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [163] = {    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 3),
    },
    
    [164] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 2),
    },
    
    [165] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(166),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [166] = {    
        [ts_aux_sym_token2] = SHIFT(167),
    },
    
    [167] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 4),
    },
    
    [168] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(118),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [169] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 2),
    },
    
    [170] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(114),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [171] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 2),
    },
    
    [172] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(173),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [173] = {    
        [ts_aux_sym_token2] = SHIFT(174),
    },
    
    [174] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 4),
    },
    
    [175] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 3),
    },
    
    [176] = {    
        [ts_aux_sym_token10] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 3),
    },
    
    [177] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 2),
    },
    
    [178] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(79),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [179] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_repeat_helper5] = SHIFT(180),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(55),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [180] = {    
        [ts_aux_sym_token2] = SHIFT(181),
    },
    
    [181] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 4),
    },
    
    [182] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),
    },
    
    [183] = {    
        [ts_aux_sym_token2] = SHIFT(184),
    },
    
    [184] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [185] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(184),
    },
    
    [186] = {    
        [ts_sym_formal_parameters] = SHIFT(187),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [187] = {    
        [ts_sym_statement_block] = SHIFT(188),    
        [ts_aux_sym_token1] = SHIFT(48),
    },
    
    [188] = {    
        [ts_aux_sym_token2] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 4),
    },
    
    [189] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(190),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [190] = {    
        [ts_aux_sym_token2] = SHIFT(191),
    },
    
    [191] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 6),
    },
    
    [192] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(180),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [193] = {    
        [ts_aux_sym_token2] = SHIFT(194),
    },
    
    [194] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [195] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(194),
    },
    
    [196] = {    
        [ts_sym_formal_parameters] = SHIFT(197),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [197] = {    
        [ts_sym_statement_block] = SHIFT(198),    
        [ts_aux_sym_token1] = SHIFT(28),
    },
    
    [198] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 4),
    },
    
    [199] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_literal, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_literal, 1),
    },
    
    [200] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [201] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(207),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [202] = {    
        [ts_sym__function] = SHIFT(19),    
        [ts_sym_array] = SHIFT(82),    
        [ts_sym_assignment] = SHIFT(83),    
        [ts_sym_expression] = SHIFT(203),    
        [ts_sym_false] = SHIFT(82),    
        [ts_sym_function_call] = SHIFT(83),    
        [ts_sym_function_expression] = SHIFT(83),    
        [ts_sym_identifier] = SHIFT(96),    
        [ts_sym_literal] = SHIFT(83),    
        [ts_sym_null] = SHIFT(82),    
        [ts_sym_number] = SHIFT(82),    
        [ts_sym_object] = SHIFT(82),    
        [ts_sym_property_access] = SHIFT(83),    
        [ts_sym_string] = SHIFT(82),    
        [ts_sym_true] = SHIFT(82),    
        [ts_aux_sym_token1] = SHIFT(99),    
        [ts_aux_sym_token4] = SHIFT(206),    
        [ts_aux_sym_token9] = SHIFT(112),
    },
    
    [203] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(204),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [204] = {    
        [ts_aux_sym_token4] = SHIFT(205),
    },
    
    [205] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 5),
    },
    
    [206] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 3),
    },
    
    [207] = {    
        [ts_sym__for] = SHIFT(208),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(216),    
        [ts_sym__var] = SHIFT(220),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(225),    
        [ts_sym_expression_statement] = SHIFT(227),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(227),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(227),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(261),    
        [ts_sym_statement_block] = SHIFT(227),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(227),    
        [ts_aux_sym_token1] = SHIFT(231),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(235),
    },
    
    [208] = {    
        [ts_aux_sym_token3] = SHIFT(209),
    },
    
    [209] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__var] = SHIFT(9),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(212),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(212),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [210] = {    
        [ts_sym__terminator] = SHIFT(211),    
        [ts_aux_sym_token11] = SHIFT(12),    
        [ts_aux_sym_token12] = SHIFT(12),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [211] = {    
        [ts_sym__function] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_false] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_null] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_true] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_expression_statement, 2),
    },
    
    [212] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(213),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [213] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(214),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(259),
    },
    
    [214] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(215),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [215] = {    
        [ts_sym__for] = SHIFT(208),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(216),    
        [ts_sym__var] = SHIFT(220),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(225),    
        [ts_sym_expression_statement] = SHIFT(227),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(227),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(227),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(258),    
        [ts_sym_statement_block] = SHIFT(227),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(227),    
        [ts_aux_sym_token1] = SHIFT(231),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(235),
    },
    
    [216] = {    
        [ts_aux_sym_token3] = SHIFT(217),
    },
    
    [217] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(218),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(257),
    },
    
    [218] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(219),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [219] = {    
        [ts_sym__for] = SHIFT(208),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(216),    
        [ts_sym__var] = SHIFT(220),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(225),    
        [ts_sym_expression_statement] = SHIFT(227),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(227),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(227),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(228),    
        [ts_sym_statement_block] = SHIFT(227),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(227),    
        [ts_aux_sym_token1] = SHIFT(231),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(235),
    },
    
    [220] = {    
        [ts_sym_assignment] = SHIFT(221),    
        [ts_sym_identifier] = SHIFT(224),
    },
    
    [221] = {    
        [ts_sym__terminator] = SHIFT(222),    
        [ts_aux_sym_token11] = SHIFT(223),    
        [ts_aux_sym_token12] = SHIFT(223),
    },
    
    [222] = {    
        [ts_sym__else] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__for] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__function] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__if] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__var] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_false] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_null] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_true] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_var_declaration, 3),
    },
    
    [223] = {    
        [ts_sym__else] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__for] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__function] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__if] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__var] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_false] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_null] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_number] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_string] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_true] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token2] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym__terminator, 1),
    },
    
    [224] = {    
        [ts_sym__terminator] = SHIFT(222),    
        [ts_aux_sym_token11] = SHIFT(223),    
        [ts_aux_sym_token12] = SHIFT(223),    
        [ts_aux_sym_token5] = SHIFT(14),
    },
    
    [225] = {    
        [ts_sym__terminator] = SHIFT(226),    
        [ts_aux_sym_token11] = SHIFT(223),    
        [ts_aux_sym_token12] = SHIFT(223),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [226] = {    
        [ts_sym__else] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__for] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__function] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__if] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__var] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_false] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_null] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_true] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_expression_statement, 2),
    },
    
    [227] = {    
        [ts_sym__else] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__for] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__function] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__if] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__var] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_false] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_null] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_true] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement, 1),
    },
    
    [228] = {    
        [ts_sym__else] = SHIFT(229),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 5),
    },
    
    [229] = {    
        [ts_sym__for] = SHIFT(208),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(216),    
        [ts_sym__var] = SHIFT(220),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(225),    
        [ts_sym_expression_statement] = SHIFT(227),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(227),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(227),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(230),    
        [ts_sym_statement_block] = SHIFT(227),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(227),    
        [ts_aux_sym_token1] = SHIFT(231),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(235),
    },
    
    [230] = {    
        [ts_sym__else] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 7),
    },
    
    [231] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(52),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(53),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(232),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = SHIFT(56),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(234),
    },
    
    [232] = {    
        [ts_aux_sym_token2] = SHIFT(233),
    },
    
    [233] = {    
        [ts_sym__else] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__for] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__function] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__if] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__var] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_false] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_null] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_true] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [234] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_repeat_helper5] = SHIFT(180),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(233),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [235] = {    
        [ts_sym__terminator] = SHIFT(226),    
        [ts_aux_sym_token11] = SHIFT(223),    
        [ts_aux_sym_token12] = SHIFT(223),
    },
    
    [236] = {    
        [ts_sym_identifier] = SHIFT(237),
    },
    
    [237] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_property_access, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_property_access, 3),
    },
    
    [238] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_expression, 1),    
        [ts_aux_sym_token5] = SHIFT(239),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_expression, 1),
    },
    
    [239] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(240),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),
    },
    
    [240] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_assignment, 3),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [241] = {    
        [ts_sym_identifier] = SHIFT(242),    
        [ts_sym_string] = SHIFT(242),    
        [ts_aux_sym_token2] = SHIFT(247),    
        [ts_builtin_sym_error] = SHIFT(248),
    },
    
    [242] = {    
        [ts_aux_sym_token8] = SHIFT(243),
    },
    
    [243] = {    
        [ts_sym__function] = SHIFT(45),    
        [ts_sym_array] = SHIFT(102),    
        [ts_sym_assignment] = SHIFT(103),    
        [ts_sym_expression] = SHIFT(244),    
        [ts_sym_false] = SHIFT(102),    
        [ts_sym_function_call] = SHIFT(103),    
        [ts_sym_function_expression] = SHIFT(103),    
        [ts_sym_identifier] = SHIFT(137),    
        [ts_sym_literal] = SHIFT(103),    
        [ts_sym_null] = SHIFT(102),    
        [ts_sym_number] = SHIFT(102),    
        [ts_sym_object] = SHIFT(102),    
        [ts_sym_property_access] = SHIFT(103),    
        [ts_sym_string] = SHIFT(102),    
        [ts_sym_true] = SHIFT(102),    
        [ts_aux_sym_token1] = SHIFT(140),    
        [ts_aux_sym_token9] = SHIFT(146),
    },
    
    [244] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(245),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token3] = SHIFT(107),    
        [ts_aux_sym_token6] = SHIFT(130),    
        [ts_aux_sym_token7] = SHIFT(135),
    },
    
    [245] = {    
        [ts_aux_sym_token2] = SHIFT(246),
    },
    
    [246] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 6),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 6),
    },
    
    [247] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 2),
    },
    
    [248] = {    
        [ts_aux_sym_repeat_helper5] = SHIFT(249),    
        [ts_aux_sym_token2] = REDUCE(ts_aux_sym_repeat_helper5, 0),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [249] = {    
        [ts_aux_sym_token2] = SHIFT(250),
    },
    
    [250] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_object, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_object, 4),
    },
    
    [251] = {    
        [ts_sym__function] = SHIFT(58),    
        [ts_sym_array] = SHIFT(76),    
        [ts_sym_assignment] = SHIFT(77),    
        [ts_sym_expression] = SHIFT(252),    
        [ts_sym_false] = SHIFT(76),    
        [ts_sym_function_call] = SHIFT(77),    
        [ts_sym_function_expression] = SHIFT(77),    
        [ts_sym_identifier] = SHIFT(121),    
        [ts_sym_literal] = SHIFT(77),    
        [ts_sym_null] = SHIFT(76),    
        [ts_sym_number] = SHIFT(76),    
        [ts_sym_object] = SHIFT(76),    
        [ts_sym_property_access] = SHIFT(77),    
        [ts_sym_string] = SHIFT(76),    
        [ts_sym_true] = SHIFT(76),    
        [ts_aux_sym_token1] = SHIFT(124),    
        [ts_aux_sym_token10] = SHIFT(255),    
        [ts_aux_sym_token9] = SHIFT(151),    
        [ts_builtin_sym_error] = SHIFT(256),
    },
    
    [252] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(253),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token3] = SHIFT(81),    
        [ts_aux_sym_token6] = SHIFT(116),    
        [ts_aux_sym_token7] = SHIFT(119),
    },
    
    [253] = {    
        [ts_aux_sym_token10] = SHIFT(254),
    },
    
    [254] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_array, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 4),
    },
    
    [255] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_array, 2),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_array, 2),
    },
    
    [256] = {    
        [ts_aux_sym_repeat_helper6] = SHIFT(253),    
        [ts_aux_sym_token10] = REDUCE(ts_aux_sym_repeat_helper6, 0),    
        [ts_aux_sym_token6] = SHIFT(116),
    },
    
    [257] = {    
        [ts_aux_sym_token4] = SHIFT(219),
    },
    
    [258] = {    
        [ts_sym__else] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__for] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_for_statement, 7),
    },
    
    [259] = {    
        [ts_aux_sym_token4] = SHIFT(215),
    },
    
    [260] = {    
        [ts_sym__terminator] = SHIFT(211),    
        [ts_aux_sym_token11] = SHIFT(12),    
        [ts_aux_sym_token12] = SHIFT(12),
    },
    
    [261] = {    
        [ts_sym__else] = SHIFT(262),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 5),
    },
    
    [262] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(263),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(182),
    },
    
    [263] = {    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 7),
    },
    
    [264] = {    
        [ts_aux_sym_token4] = SHIFT(207),
    },
    
    [265] = {    
        [ts_aux_sym_token2] = SHIFT(266),
    },
    
    [266] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [267] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(266),
    },
    
    [268] = {    
        [ts_sym_formal_parameters] = SHIFT(269),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [269] = {    
        [ts_sym_statement_block] = SHIFT(270),    
        [ts_aux_sym_token1] = SHIFT(22),
    },
    
    [270] = {    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token4] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token6] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 4),
    },
    
    [271] = {    
        [ts_aux_sym_repeat_helper3] = SHIFT(272),    
        [ts_aux_sym_token3] = SHIFT(87),    
        [ts_aux_sym_token4] = REDUCE(ts_aux_sym_repeat_helper3, 0),    
        [ts_aux_sym_token6] = SHIFT(91),    
        [ts_aux_sym_token7] = SHIFT(94),
    },
    
    [272] = {    
        [ts_aux_sym_token4] = SHIFT(273),
    },
    
    [273] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 5),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 5),
    },
    
    [274] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_call, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_call, 3),
    },
    
    [275] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(276),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [276] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(277),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(280),
    },
    
    [277] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(278),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [278] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(279),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(182),
    },
    
    [279] = {    
        [ts_sym__for] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token2] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_for_statement, 7),
    },
    
    [280] = {    
        [ts_aux_sym_token4] = SHIFT(278),
    },
    
    [281] = {    
        [ts_aux_sym_token2] = SHIFT(282),
    },
    
    [282] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [283] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(282),
    },
    
    [284] = {    
        [ts_sym_formal_parameters] = SHIFT(285),    
        [ts_aux_sym_token3] = SHIFT(68),
    },
    
    [285] = {    
        [ts_sym_statement_block] = SHIFT(286),    
        [ts_aux_sym_token1] = SHIFT(6),
    },
    
    [286] = {    
        [ts_aux_sym_token11] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token12] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token3] = REDUCE(ts_sym_function_expression, 4),    
        [ts_aux_sym_token7] = REDUCE(ts_sym_function_expression, 4),
    },
    
    [287] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(288),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [288] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(289),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(342),
    },
    
    [289] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(290),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [290] = {    
        [ts_sym__for] = SHIFT(1),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(291),    
        [ts_sym__var] = SHIFT(326),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(331),    
        [ts_sym_expression_statement] = SHIFT(333),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(333),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(333),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(341),    
        [ts_sym_statement_block] = SHIFT(333),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(333),    
        [ts_aux_sym_token1] = SHIFT(335),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(339),
    },
    
    [291] = {    
        [ts_aux_sym_token3] = SHIFT(292),
    },
    
    [292] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(293),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(340),
    },
    
    [293] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(294),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [294] = {    
        [ts_sym__for] = SHIFT(295),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(301),    
        [ts_sym__var] = SHIFT(305),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(310),    
        [ts_sym_expression_statement] = SHIFT(312),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(312),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(312),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(324),    
        [ts_sym_statement_block] = SHIFT(312),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(312),    
        [ts_aux_sym_token1] = SHIFT(316),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(320),
    },
    
    [295] = {    
        [ts_aux_sym_token3] = SHIFT(296),
    },
    
    [296] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__var] = SHIFT(9),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(297),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(297),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [297] = {    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(210),    
        [ts_sym_expression_statement] = SHIFT(298),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_aux_sym_token1] = SHIFT(42),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(260),
    },
    
    [298] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(299),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(323),
    },
    
    [299] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(300),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [300] = {    
        [ts_sym__for] = SHIFT(295),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(301),    
        [ts_sym__var] = SHIFT(305),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(310),    
        [ts_sym_expression_statement] = SHIFT(312),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(312),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(312),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(322),    
        [ts_sym_statement_block] = SHIFT(312),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(312),    
        [ts_aux_sym_token1] = SHIFT(316),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(320),
    },
    
    [301] = {    
        [ts_aux_sym_token3] = SHIFT(302),
    },
    
    [302] = {    
        [ts_sym__function] = SHIFT(25),    
        [ts_sym_array] = SHIFT(199),    
        [ts_sym_assignment] = SHIFT(200),    
        [ts_sym_expression] = SHIFT(303),    
        [ts_sym_false] = SHIFT(199),    
        [ts_sym_function_call] = SHIFT(200),    
        [ts_sym_function_expression] = SHIFT(200),    
        [ts_sym_identifier] = SHIFT(238),    
        [ts_sym_literal] = SHIFT(200),    
        [ts_sym_null] = SHIFT(199),    
        [ts_sym_number] = SHIFT(199),    
        [ts_sym_object] = SHIFT(199),    
        [ts_sym_property_access] = SHIFT(200),    
        [ts_sym_string] = SHIFT(199),    
        [ts_sym_true] = SHIFT(199),    
        [ts_aux_sym_token1] = SHIFT(241),    
        [ts_aux_sym_token9] = SHIFT(251),    
        [ts_builtin_sym_error] = SHIFT(321),
    },
    
    [303] = {    
        [ts_aux_sym_token3] = SHIFT(202),    
        [ts_aux_sym_token4] = SHIFT(304),    
        [ts_aux_sym_token7] = SHIFT(236),
    },
    
    [304] = {    
        [ts_sym__for] = SHIFT(295),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(301),    
        [ts_sym__var] = SHIFT(305),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(310),    
        [ts_sym_expression_statement] = SHIFT(312),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(312),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(312),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(313),    
        [ts_sym_statement_block] = SHIFT(312),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(312),    
        [ts_aux_sym_token1] = SHIFT(316),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(320),
    },
    
    [305] = {    
        [ts_sym_assignment] = SHIFT(306),    
        [ts_sym_identifier] = SHIFT(309),
    },
    
    [306] = {    
        [ts_sym__terminator] = SHIFT(307),    
        [ts_aux_sym_token11] = SHIFT(308),    
        [ts_aux_sym_token12] = SHIFT(308),
    },
    
    [307] = {    
        [ts_sym__else] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__for] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__function] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__if] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__var] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_false] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_null] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_true] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_var_declaration, 3),
    },
    
    [308] = {    
        [ts_sym__else] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__for] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__function] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__if] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__var] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_false] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_null] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_number] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_string] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_true] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_end] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym__terminator, 1),
    },
    
    [309] = {    
        [ts_sym__terminator] = SHIFT(307),    
        [ts_aux_sym_token11] = SHIFT(308),    
        [ts_aux_sym_token12] = SHIFT(308),    
        [ts_aux_sym_token5] = SHIFT(14),
    },
    
    [310] = {    
        [ts_sym__terminator] = SHIFT(311),    
        [ts_aux_sym_token11] = SHIFT(308),    
        [ts_aux_sym_token12] = SHIFT(308),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [311] = {    
        [ts_sym__else] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__for] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__function] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__if] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__var] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_false] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_null] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_true] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_expression_statement, 2),
    },
    
    [312] = {    
        [ts_sym__else] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__for] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__function] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__if] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__var] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_false] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_null] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_true] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement, 1),
    },
    
    [313] = {    
        [ts_sym__else] = SHIFT(314),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 5),
    },
    
    [314] = {    
        [ts_sym__for] = SHIFT(295),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(301),    
        [ts_sym__var] = SHIFT(305),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(310),    
        [ts_sym_expression_statement] = SHIFT(312),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(312),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(312),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(315),    
        [ts_sym_statement_block] = SHIFT(312),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(312),    
        [ts_aux_sym_token1] = SHIFT(316),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(320),
    },
    
    [315] = {    
        [ts_sym__else] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 7),
    },
    
    [316] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(52),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(53),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(317),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = SHIFT(56),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(319),
    },
    
    [317] = {    
        [ts_aux_sym_token2] = SHIFT(318),
    },
    
    [318] = {    
        [ts_sym__else] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__for] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__function] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__if] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__var] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_false] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_null] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_true] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [319] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_repeat_helper5] = SHIFT(180),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(318),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [320] = {    
        [ts_sym__terminator] = SHIFT(311),    
        [ts_aux_sym_token11] = SHIFT(308),    
        [ts_aux_sym_token12] = SHIFT(308),
    },
    
    [321] = {    
        [ts_aux_sym_token4] = SHIFT(304),
    },
    
    [322] = {    
        [ts_sym__else] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__for] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_for_statement, 7),
    },
    
    [323] = {    
        [ts_aux_sym_token4] = SHIFT(300),
    },
    
    [324] = {    
        [ts_sym__else] = SHIFT(325),    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 5),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_if_statement, 5),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 5),
    },
    
    [325] = {    
        [ts_sym__for] = SHIFT(1),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(291),    
        [ts_sym__var] = SHIFT(326),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(331),    
        [ts_sym_expression_statement] = SHIFT(333),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(333),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(333),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(334),    
        [ts_sym_statement_block] = SHIFT(333),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(333),    
        [ts_aux_sym_token1] = SHIFT(335),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(339),
    },
    
    [326] = {    
        [ts_sym_assignment] = SHIFT(327),    
        [ts_sym_identifier] = SHIFT(330),
    },
    
    [327] = {    
        [ts_sym__terminator] = SHIFT(328),    
        [ts_aux_sym_token11] = SHIFT(329),    
        [ts_aux_sym_token12] = SHIFT(329),
    },
    
    [328] = {    
        [ts_sym__for] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__function] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__if] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym__var] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_false] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_null] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_sym_true] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_var_declaration, 3),
    },
    
    [329] = {    
        [ts_sym__for] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__function] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__if] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym__var] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_false] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_null] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_number] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_string] = REDUCE(ts_sym__terminator, 1),    
        [ts_sym_true] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym__terminator, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_end] = REDUCE(ts_sym__terminator, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym__terminator, 1),
    },
    
    [330] = {    
        [ts_sym__terminator] = SHIFT(328),    
        [ts_aux_sym_token11] = SHIFT(329),    
        [ts_aux_sym_token12] = SHIFT(329),    
        [ts_aux_sym_token5] = SHIFT(14),
    },
    
    [331] = {    
        [ts_sym__terminator] = SHIFT(332),    
        [ts_aux_sym_token11] = SHIFT(329),    
        [ts_aux_sym_token12] = SHIFT(329),    
        [ts_aux_sym_token3] = SHIFT(18),    
        [ts_aux_sym_token7] = SHIFT(36),
    },
    
    [332] = {    
        [ts_sym__for] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__function] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__if] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym__var] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_false] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_null] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_sym_true] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_expression_statement, 2),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_expression_statement, 2),
    },
    
    [333] = {    
        [ts_sym__for] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__function] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__if] = REDUCE(ts_sym_statement, 1),    
        [ts_sym__var] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_false] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_null] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),    
        [ts_sym_true] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement, 1),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement, 1),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement, 1),
    },
    
    [334] = {    
        [ts_sym__for] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_if_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_if_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_if_statement, 7),
    },
    
    [335] = {    
        [ts_sym__for] = SHIFT(7),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(23),    
        [ts_sym__var] = SHIFT(29),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(34),    
        [ts_sym_expression_statement] = SHIFT(38),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(38),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(52),    
        [ts_sym_if_statement] = SHIFT(38),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(49),    
        [ts_sym_statement_block] = SHIFT(38),    
        [ts_sym_string] = SHIFT(53),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(38),    
        [ts_aux_sym_repeat_helper2] = SHIFT(336),    
        [ts_aux_sym_token1] = SHIFT(51),    
        [ts_aux_sym_token2] = SHIFT(56),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_error] = SHIFT(338),
    },
    
    [336] = {    
        [ts_aux_sym_token2] = SHIFT(337),
    },
    
    [337] = {    
        [ts_sym__for] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__function] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__if] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym__var] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_false] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_null] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),    
        [ts_sym_true] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_statement_block, 3),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 3),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_statement_block, 3),
    },
    
    [338] = {    
        [ts_sym__terminator] = SHIFT(35),    
        [ts_aux_sym_repeat_helper5] = SHIFT(180),    
        [ts_aux_sym_token11] = SHIFT(32),    
        [ts_aux_sym_token12] = SHIFT(32),    
        [ts_aux_sym_token2] = SHIFT(337),    
        [ts_aux_sym_token6] = SHIFT(130),
    },
    
    [339] = {    
        [ts_sym__terminator] = SHIFT(332),    
        [ts_aux_sym_token11] = SHIFT(329),    
        [ts_aux_sym_token12] = SHIFT(329),
    },
    
    [340] = {    
        [ts_aux_sym_token4] = SHIFT(294),
    },
    
    [341] = {    
        [ts_sym__for] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__function] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__if] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym__var] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_false] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_null] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),    
        [ts_sym_true] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token1] = REDUCE(ts_sym_for_statement, 7),    
        [ts_aux_sym_token9] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_end] = REDUCE(ts_sym_for_statement, 7),    
        [ts_builtin_sym_error] = REDUCE(ts_sym_for_statement, 7),
    },
    
    [342] = {    
        [ts_aux_sym_token4] = SHIFT(290),
    },
    
    [343] = {    
        [ts_builtin_sym_end] = ACCEPT_INPUT(),
    },
    
    [344] = {    
        [ts_sym__for] = SHIFT(1),    
        [ts_sym__function] = SHIFT(3),    
        [ts_sym__if] = SHIFT(291),    
        [ts_sym__var] = SHIFT(326),    
        [ts_sym_array] = SHIFT(15),    
        [ts_sym_assignment] = SHIFT(16),    
        [ts_sym_expression] = SHIFT(331),    
        [ts_sym_expression_statement] = SHIFT(333),    
        [ts_sym_false] = SHIFT(15),    
        [ts_sym_for_statement] = SHIFT(333),    
        [ts_sym_function_call] = SHIFT(16),    
        [ts_sym_function_expression] = SHIFT(16),    
        [ts_sym_identifier] = SHIFT(39),    
        [ts_sym_if_statement] = SHIFT(333),    
        [ts_sym_literal] = SHIFT(16),    
        [ts_sym_null] = SHIFT(15),    
        [ts_sym_number] = SHIFT(15),    
        [ts_sym_object] = SHIFT(15),    
        [ts_sym_property_access] = SHIFT(16),    
        [ts_sym_statement] = SHIFT(344),    
        [ts_sym_statement_block] = SHIFT(333),    
        [ts_sym_string] = SHIFT(15),    
        [ts_sym_true] = SHIFT(15),    
        [ts_sym_var_declaration] = SHIFT(333),    
        [ts_aux_sym_repeat_helper1] = SHIFT(345),    
        [ts_aux_sym_token1] = SHIFT(335),    
        [ts_aux_sym_token9] = SHIFT(57),    
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_repeat_helper1, 0),    
        [ts_builtin_sym_error] = SHIFT(339),
    },
    
    [345] = {    
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_repeat_helper1, 2),
    },
    
    [346] = {    
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 1),
    },
};

EXPORT_PARSER(ts_parser_javascript);