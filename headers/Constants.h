#ifndef CONSTANTS_H
#define CONSTANTS_H

enum TokenId 
{
    EPSILON  = 0,
    DOLLAR   = 1,
    t_number = 2,
    t_id = 3,
    t_tk_sum = 4,
    t_tk_sub = 5,
    t_tk_prod = 6,
    t_tk_ocb = 7,
    t_tk_ccb = 8,
    t_tk_op = 9,
    t_tk_cp = 10,
    t_tk_ob = 11,
    t_tk_cb = 12,
    t_tk_dot = 13,
    t_tk_atr = 14,
    t_tk_end = 15,
    t_tk_cma = 16,
    t_tk_class = 17,
    t_tk_public = 18,
    t_tk_static = 19,
    t_tk_void = 20,
    t_tk_main = 21,
    t_tk_if = 22,
    t_tk_else = 23,
    t_tk_while = 24,
    t_tk_new = 25,
    t_tk_this = 26,
    t_tk_length = 27,
    t_tk_return = 28,
    t_tk_extends = 29,
    t_tk_sys = 30,
    t_tk_out = 31,
    t_tk_pri = 32,
    t_tk_string = 33,
    t_tk_int = 34,
    t_tk_boolean = 35,
    t_tk_true = 36,
    t_tk_false = 37,
    t_tk_lt = 38,
    t_tk_and = 39,
    t_tk_neg = 40
};

const int STATES_COUNT = 23;

extern int SCANNER_TABLE[STATES_COUNT][256];

extern int TOKEN_STATE[STATES_COUNT];

extern int SPECIAL_CASES_INDEXES[42];

extern const char *SPECIAL_CASES_KEYS[21];

extern int SPECIAL_CASES_VALUES[21];

extern const char *SCANNER_ERROR[STATES_COUNT];

const int FIRST_SEMANTIC_ACTION = 58;

const int SHIFT  = 0;
const int REDUCE = 1;
const int ACTION = 2;
const int ACCEPT = 3;
const int GO_TO  = 4;
const int ERROR  = 5;

extern const int PARSER_TABLE[138][58][2];

extern const int PRODUCTIONS[50][2];

extern const char *PARSER_ERROR[138];

#endif
