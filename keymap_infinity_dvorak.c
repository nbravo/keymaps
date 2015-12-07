#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default (Dvorak) Layer
     * ,-----------------------------------------------------------.
     * | Esc |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]| `| \|
     * |-----------------------------------------------------------|
     * |Tab/L6 |  '|  ,|  .|  P|   Y|  F|  G|  C|  R|  L| /| =|Bspc|
     * |-----------------------------------------------------------|
     * |Control|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Enter  |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z| Up |L1   |
     * |-----------------------------------------------------------'
     * |L1   |Gui|Alt  |         Space         |L7 |Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    [0] =
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0, LBRC, RBRC, GRV, BSLS, \
           FN3, QUOT, COMM, DOT, P, Y, F, G, C, R, L, SLSH, EQL, BSPC, \
           LCTL, A, O,  E,  U,   I,   D,   H,   T,   N,   S , MINS, ENT,  \
           LSFT, SCLN, Q,   J,   K,   X,   B,   M,  W, V, Z, UP, FN0, \
           FN0,  LGUI, LALT,          SPC,                 FN1, LEFT,DOWN, RIGHT),

    /* Layer 1: Media and Navigation buttons
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  |Mute|
     * |-----------------------------------------------------------|
     * |VolU|Home|End|  |PrSc|  |  |Mute|Up|VolD|VolU|Home|Mute|Del|
     * |-----------------------------------------------------------|
     * |Mute|VolD|VolU|Mute| `| {| }|Left|Down|Right|PgUp|PgDn|VolU|
     * |-----------------------------------------------------------|
     * |VolD |PgUp|PgDn|   |   |   |   |VolD|VolU|Mute|End|VolD|   |
     * `-----------------------------------------------------------'
     * |     |    |    |                       |   |    |    |     |
     * `-----------------------------------------------------------'
     */
    [1] =
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, MUTE,   \
           VOLU,HOME,END, TRNS,PSCR,TRNS,TRNS,MUTE,UP,VOLD,VOLU, HOME, MUTE, DEL,      \
           MUTE,VOLD,VOLU,MUTE,GRV,LBRC,RBRC,LEFT,DOWN,RGHT,PGUP,PGDN,VOLU,            \
           VOLD,PGUP,PGDN,TRNS,TRNS,TRNS,TRNS,VOLD,VOLU, MUTE,END,VOLD,TRNS,            \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),

    /* Layer 6: Number Pad
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | 7 | 8 | 9 | * | / | = |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   | , | 4 | 5 | 6 | + | - |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   | 1 | 2 | 3 | . |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |            0          |     |   |   |     |
     * `-----------------------------------------------------------'
     */
    [6] =
    KEYMAP(TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS,   \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,7,8,9,PAST, SLSH, EQL, TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,COMM,4,5,6,PPLS,MINS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,1,2,3,DOT,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,          0,               TRNS,TRNS,TRNS,TRNS),

    /* Layer 7: Scrub QWERTY Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|  \|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |   |
     * |-----------------------------------------------------------'
     * |Ctl  |Gui|Alt  |         Space         |    |Alt |Gui | Ctl|
     * `-----------------------------------------------------------'
     */
    [7] =
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, GRV, BSPC, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
           CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,TRNS, \
           LCTL,  LGUI,LALT,          SPC,                TRNS,RALT,RGUI, RCTL),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(7),
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [3] = ACTION_LAYER_TAP_KEY(6, KC_TAB),
};

