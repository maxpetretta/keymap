#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // available but not used

enum layers { BASE, EXND, NAVR, SYMB, FUNC };

#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#define U_CLP LCTL(LCMD(KC_C))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_miryoku(
    KC_Q,         KC_W,         KC_F,             KC_P,             KC_B,   KC_J,             KC_L,              KC_U,         KC_Y,         KC_QUOT,
    LSFT_T(KC_A), LCTL_T(KC_R), LALT_T(KC_S),     LGUI_T(KC_T),     KC_G,   KC_M,             LGUI_T(KC_N),      LALT_T(KC_E), LCTL_T(KC_I), LSFT_T(KC_O),
    KC_Z,         KC_X,         KC_C,             KC_D,             KC_V,   KC_K,             KC_H,              KC_COMM,      KC_DOT,       KC_SLSH,
    U_NP,         U_NP,         LT(FUNC, KC_ESC), LT(NAVR, KC_SPC), KC_TAB, LT(SYMB, KC_ENT), LT(EXND, KC_BSPC), KC_DEL,       U_NP,         U_NP
  ),
  [EXND] = LAYOUT_miryoku(
    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_EQL,   KC_7,     KC_8,   KC_9, KC_PLUS,
    KC_SCLN,  KC_COLN,  KC_LCBR,  KC_LPRN,  KC_LBRC,  KC_ASTR,  KC_4,     KC_5,   KC_6, KC_MINS,
    KC_CIRC,  KC_AMPR,  KC_RCBR,  KC_RPRN,  KC_RBRC,  KC_0,     KC_1,     KC_2,   KC_3, KC_UNDS,
    U_NP,     U_NP,     KC_ESC,   KC_SPC,   KC_TAB,   KC_ENT,   KC_BSPC,  KC_DEL, U_NP, U_NP
  ),
  [NAVR] = LAYOUT_miryoku(
    U_NA,     U_NA,     U_NA,     U_NA,     U_NA,   KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,
    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  U_CLP,  KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,
    U_UND,    U_CUT,    U_CPY,    U_PST,    U_RDO,  KC_MPLY,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,
    U_NP,     U_NP,     U_NA,     U_NA,     U_NA,   KC_ENT,   KC_BSPC,  KC_DEL,   U_NP,     U_NP
  ),
  [SYMB] = LAYOUT_miryoku(
    U_NA,   U_NA,     U_NA,     U_NA,     U_NA,     U_NA, U_NA,     U_NA,     U_NA,     U_NA,
    KC_GRV, KC_TILD,  KC_BSLS,  KC_PIPE,  U_NA,     U_NA, KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,
    U_NA,   U_NA,     U_NA,     U_NA,     U_NA,     U_NA, U_NA,     U_NA,     U_NA,     U_NA,
    U_NP,   U_NP,     KC_ESC,   KC_SPC,   KC_TAB,   U_NA, U_NA,     U_NA,     U_NP,     U_NP
  ),
  [FUNC] = LAYOUT_miryoku(
    RESET,    U_NA,     U_NA,     U_NA,     U_NA, U_NA,   KC_F7,    KC_F8,  KC_F9,  KC_F10,
    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  U_NA, U_NA,   KC_F4,    KC_F5,  KC_F6,  KC_F11,
    U_NA,     U_NA,     U_NA,     U_NA,     U_NA, U_NA,   KC_F1,    KC_F2,  KC_F3,  KC_F12,
    U_NP,     U_NP,     U_NA,     U_NA,     U_NA, KC_ENT, KC_BSPC,  KC_DEL, U_NP,   U_NP
  )
};
