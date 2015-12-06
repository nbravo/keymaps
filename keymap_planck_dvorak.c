// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "planck.h"
#include "backlight.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DV 0
#define _NP 1
#define _SM 2
#define _MK 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DV] = { /* Dvorak */
  {LT(_NP, KC_TAB), KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC},
  {CTL_T(KC_ESC),   KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    LT(_NP, KC_ENT)},
  {KC_LSFT,         KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    LT(_NP, KC_SLSH)},
  {MO(_MK),         MO(_SM), KC_LGUI, KC_LALT, MO(_SM), MO(_MK), MO(_MK), KC_SPC,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},
[_NP] = { /* NUMPAD */
  {KC_TRNS, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8,   KC_9,    KC_SLSH, KC_TRNS},
  {KC_TRNS, KC_F7,  KC_F8,  KC_F9,  KC_TRNS, KC_TRNS, KC_ASTR, KC_4, KC_5,   KC_6,    KC_MINS, KC_TRNS},
  {KC_TRNS, KC_F4,  KC_F5,  KC_F6,  KC_TRNS, KC_TRNS, KC_COMM, KC_1, KC_2,   KC_3,    KC_PLUS, KC_TRNS},
  {KC_TRNS, KC_F1,  KC_F2,  KC_F3,  KC_TRNS, KC_SPC,  KC_SPC,  KC_0, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS}
},
[_SM] = { /* SYMBOLS */
  {KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSLS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_UNDS,  KC_PLUS,  KC_MINS,  KC_SLSH},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_TILD, KC_TILD, KC_RBRC, KC_PIPE,  KC_PIPE,  KC_EQL,   KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[_MK] = { /* MEDIA KEYS */
  {KC_TRNS, KC_HOME, KC_END,  KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_HOME, KC_UP,    KC_END,   KC_PGUP,  KC_DEL},
  {KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN,  KC_RGHT,  KC_PGDN,  KC_TRNS},
  {KC_TRNS, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS},
  {KC_TRNS, BL_DEC,  BL_INC,  BL_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC,  BL_INC,   BL_TOGG,  KC_TRNS,  RESET}
}
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            backlight_step();
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
