#pragma once

// Settings for easy combos, see: http://combos.gboards.ca/docs/install/
#define COMBO_TERM 50
#define COMBO_VARIABLE_LEN
#define QMK_KEYS_PER_SCAN 4

// Settings for homerow mods, see: https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
#define TAPPING_TERM 200
#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

// Toggle layers with a triple tap
// #define TAPPING_TOGGLE 3

#define XXX KC_NO

#define LAYOUT_ergodox_36(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT_ergodox_pretty(\
XXX, XXX, XXX, XXX, XXX, XXX, XXX,      XXX, XXX, XXX, XXX, XXX, XXX, XXX,\
XXX, K00, K01, K02, K03, K04, XXX,      XXX, K05, K06, K07, K08, K09, XXX,\
XXX, K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, XXX,\
XXX, K20, K21, K22, K23, K24, XXX,      XXX, K25, K26, K27, K28, K29, XXX,\
XXX, XXX, XXX, XXX, K32,                          K37, XXX, XXX, XXX, XXX,\
                         XXX, XXX,      XXX, XXX,\
                              XXX,      XXX,\
                    K33, K34, XXX,      XXX, K35, K36\
)
