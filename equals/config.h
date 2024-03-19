#pragma once

// Settings for easy combos, see: http://combos.gboards.ca/docs/install/
#define COMBO_TERM 40
#define COMBO_VARIABLE_LEN
#define QMK_KEYS_PER_SCAN 4

// Settings for homerow mods, see: https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

// Disable unneeded features
#define NO_ACTION_MACRO
#define NO_ACTION_ONESHOT
#define NO_ACTION_FUNCTION
#define LAYER_STATE_8BIT

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
