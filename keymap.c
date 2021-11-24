#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

enum layers { BASE, NAVR, NUMP };

// Clipboard shortcuts
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#define U_CLP LCTL(LCMD(KC_C))

#define U_NP KC_NO // Key is not present
#define U_NA KC_NO // Available but not used

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_planck_mit(
    KC_Q,         KC_W,         KC_F,         KC_P,             KC_B,   RGB_HUD, RGB_HUI, KC_J,   KC_L,              KC_U,         KC_Y,         KC_QUOT,
    LSFT_T(KC_A), LCTL_T(KC_R), LALT_T(KC_S), LGUI_T(KC_T),     KC_G,   RGB_SAD, RGB_SAI, KC_M,   LGUI_T(KC_N),      LALT_T(KC_E), LCTL_T(KC_I), LSFT_T(KC_O),
    KC_Z,         KC_X,         KC_C,         KC_D,             KC_V,   RGB_VAD, RGB_VAI, KC_K,   KC_H,              KC_COMM,      KC_DOT,       KC_SLSH,
    RGB_TOG,      U_NP,         KC_ESC,       LT(NAVR, KC_SPC), KC_TAB,        U_NP,      KC_ENT, LT(NUMP, KC_BSPC), KC_DEL,       U_NP,         RGB_MOD
  ),
  [NAVR] = LAYOUT_planck_mit(
    LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), U_NA, U_NA,  KC_CAPS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_CLP,      U_NA, U_NA,  U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_UND,      U_CUT,      U_CPY,      U_PST,      U_RDO,      U_NA, U_NA,  KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NP,       U_NP,       U_NA,       U_NA,       U_NA,           U_NP,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [NUMP] = LAYOUT_planck_mit(
    RESET, KC_F7, KC_F8,  KC_F9,  KC_F10, U_NA,   U_NA, KC_EQL,  KC_7,    KC_8,    KC_9, KC_PLUS,
    U_NA,  KC_F4, KC_F5,  KC_F6,  KC_F11, U_NA,   U_NA, KC_ASTR, KC_4,    KC_5,    KC_6, KC_MINS,
    U_NA,  KC_F1, KC_F2,  KC_F3,  KC_F12, U_NA,   U_NA, KC_0,    KC_1,    KC_2,    KC_3, KC_UNDS,
    U_NP,  U_NP,  KC_ESC, KC_SPC, KC_TAB,     U_NP,     KC_ENT,  KC_BSPC, KC_DEL,  U_NP, U_NP
  )
};
