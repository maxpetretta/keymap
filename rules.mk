# Enable combos and media keys
VPATH += keyboards/gboards/
COMBO_ENABLE = yes
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = no

# Link time optimization
EXTRAFLAGS += -flto
