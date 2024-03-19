#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

enum layers { BASE, NAVR, NUMP };

// Clipboard shortcuts
#define U_UND LCMD(KC_Z)
#define U_CUT LCMD(KC_X)
#define U_CPY LCMD(KC_C)
#define U_PST LCMD(KC_V)
#define U_RDO SCMD(KC_Z)
#define U_CLP LCTL(LCMD(KC_C))
#define U_SST LSFT(LCMD(KC_4))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ortho_4x12(
    KC_Q,         KC_W,         KC_F,         KC_P,             KC_B,   RGB_HUD, RGB_HUI, KC_J,   KC_L,              KC_U,         KC_Y,         KC_QUOT,
    LSFT_T(KC_A), LCTL_T(KC_R), LALT_T(KC_S), LGUI_T(KC_T),     KC_G,   RGB_SAD, RGB_SAI, KC_M,   LGUI_T(KC_N),      LALT_T(KC_E), LCTL_T(KC_I), LSFT_T(KC_O),
    KC_Z,         KC_X,         KC_C,         KC_D,             KC_V,   RGB_VAD, RGB_VAI, KC_K,   KC_H,              KC_COMM,      KC_DOT,       KC_SLSH,
    KC_NO,        KC_NO,        KC_ESC,       LT(NAVR, KC_SPC), KC_TAB, RGB_TOG, RGB_MOD, KC_ENT, LT(NUMP, KC_BSPC), KC_DEL,       KC_NO,        KC_NO
  ),
  [NAVR] = LAYOUT_ortho_4x12(
    LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), KC_NO, KC_NO,  CW_TOGG, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_CLP,      KC_NO, KC_NO,  U_SST,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_UND,      U_CUT,      U_CPY,      U_PST,      U_RDO,      KC_NO, KC_NO,  KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO,  KC_ENT,  KC_BSPC, KC_DEL,  KC_NO,   KC_NO
  ),
  [NUMP] = LAYOUT_ortho_4x12(
    QK_BOOT, KC_F7, KC_F8,  KC_F9,  KC_F10, KC_NO,   KC_NO, KC_EQL,  KC_7,    KC_8,    KC_9,  KC_PLUS,
    KC_NO,   KC_F4, KC_F5,  KC_F6,  KC_F11, KC_NO,   KC_NO, KC_ASTR, KC_4,    KC_5,    KC_6,  KC_MINS,
    KC_NO,   KC_F1, KC_F2,  KC_F3,  KC_F12, KC_NO,   KC_NO, KC_0,    KC_1,    KC_2,    KC_3,  KC_UNDS,
    KC_NO,   KC_NO, KC_ESC, KC_SPC, KC_TAB, KC_NO,   KC_NO, KC_ENT,  KC_BSPC, KC_DEL,  KC_NO, KC_NO
  )
};

// See: https://docs.qmk.fm/#/squeezing_avr?id=magic-functions
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}
