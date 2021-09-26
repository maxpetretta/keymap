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

#define MIDI_BASIC

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
#endif
