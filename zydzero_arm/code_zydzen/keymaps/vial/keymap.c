#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_4,   KC_3,   KC_2,   KC_1,
        KC_0,   TO(1),  KC_6,   KC_5,
                       TO(3),  KC_9,  
                       KC_7,   KC_8
    ),
    [1] = LAYOUT(
        KC_F16, KC_F15, KC_F14, KC_F13,
        KC_F17, TO(2),  KC_F18, KC_F19,
                        TO(0),  KC_F20,
                        KC_ESC, KC_ENT
    ),
    [2] = LAYOUT(
        LGUI(KC_D),  KC_PSCR, LCTL(KC_V),    LCTL(KC_C),
        KC_MUTE,     TO(0),   KC_UNDO,       LCTL(KC_X),
                              TO(1),         KC_SPC,
                              LALT(KC_TAB),  LGUI(KC_TAB)
    ),
    [3] = LAYOUT(
        RGB_SPD,    RGB_SPI,    RGB_M_B,    RGB_HUI,
        XXXXXXX,    XXXXXXX,    RGB_M_G,    RGB_HUD,
                                TO(0),      RGB_TOG,
                                RGB_MOD,    XXXXXXX
    )  
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_BRIU, KC_BRID) },
    [2] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [3] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) }
};
#endif
