// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

enum layers { BASE, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };

// #if defined MIRYOKU_CLIPBOARD_FUN
// #define U_RDO KC_AGIN
// #define U_PST KC_PSTE
// #define U_CPY KC_COPY
// #define U_CUT KC_CUT
// #define U_UND KC_UNDO
// #elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#define U_CLP LCTL(LCMD(KC_C))
// #elif defined MIRYOKU_CLIPBOARD_WIN
// #define U_RDO C(KC_Y)
// #define U_PST C(KC_V)
// #define U_CPY C(KC_C)
// #define U_CUT C(KC_X)
// #define U_UND C(KC_Z)
// #else
// #define U_RDO KC_AGIN
// #define U_PST S(KC_INS)
// #define U_CPY C(KC_INS)
// #define U_CUT S(KC_DEL)
// #define U_UND KC_UNDO
// #endif


// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// #if defined MIRYOKU_ALPHAS_COLEMAK
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LSFT_T(KC_A),      LCTL_T(KC_R),      LALT_T(KC_S),      LGUI_T(KC_T),      KC_G,              KC_M,              LGUI_T(KC_N),      LALT_T(KC_E),      LCTL_T(KC_I),      LSFT_T(KC_O),
    KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
// #elif defined MIRYOKU_ALPHAS_COLEMAKDHK
//   [BASE] = LAYOUT_miryoku(
//     KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
//     LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
//     KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #elif defined MIRYOKU_ALPHAS_DVORAK
//   [BASE] = LAYOUT_miryoku(
//     KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
//     LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
//     KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #elif defined MIRYOKU_ALPHAS_HALMAK
//   [BASE] = LAYOUT_miryoku(
//     KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,
//     LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
//     KC_F,              ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      KC_Y,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #elif defined MIRYOKU_ALPHAS_WORKMAN
//   [BASE] = LAYOUT_miryoku(
//     KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
//     LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
//     KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #elif defined MIRYOKU_ALPHAS_QWERTY
//   [BASE] = LAYOUT_miryoku(
//     KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
//     LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
//     KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #else
//   [BASE] = LAYOUT_miryoku(
//     KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
//     LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
//     KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
//     U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
//   ),
// #endif
// #if defined MIRYOKU_NAV_VI
//   [NAVR] = LAYOUT_miryoku(
//     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
//     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
//     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
//     U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
//   ),
//   [MOUR] = LAYOUT_miryoku(
//     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
//     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
//     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
//     U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
//   ),
//   [MEDR] = LAYOUT_miryoku(
//     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
//     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
//     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
//     U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
//   ),
// #else
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_CLP,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN2, KC_BTN1, KC_BTN3, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
// #endif
  // [MBO] = LAYOUT_miryoku(
  //   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //   U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  // ),
  [FUNL] = LAYOUT_miryoku(
    U_NU,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    U_NU,    KC_F4,   KC_F5,   KC_F6,   KC_F11,  U_NA,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
    U_NU,    KC_F1,   KC_F2,   KC_F3,   KC_F12,  U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
    U_NP,    U_NP,    KC_ESC,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_GRV,  KC_7,    KC_8,    KC_9,    KC_BSLS, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_COLN, U_NA,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
    KC_TILD, KC_1,    KC_2,    KC_3,    KC_PIPE, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
    U_NP,    U_NP,    KC_COMM, KC_0,    KC_DOT,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_AMPR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_ASTR, U_NA,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
    KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_PLUS, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
    U_NP,    U_NP,    KC_EQL,  KC_UNDS, KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  )
};
