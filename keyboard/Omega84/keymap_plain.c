/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

#define KC_____ KC_TRNS

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|PSc|Ins|Del|
     * |---------------------------------------------------------------|
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Hom|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|PgU|
     * |---------------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |PgD|
     * |---------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |End|
     * |---------------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space          |Alt|Fn0|Ctl|Left|Down|Rght|
     * `---------------------------------------------------------------'
     */
    KEYMAP(
        ESC,  F1,   F2,   F3,  F4,   F5,  F6,   F7,   F8,   F9,   F10,  F11,  F12,  PSCR, INS,  DEL,
        GRV,  1,    2,    3,   4,    5,   6,    7,    8,    9,    0,    MINS, EQL,  BSPC,       HOME,
        TAB,  Q,    W,    E,   R,    T,   Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS,       PGUP,
        CAPS, A,    S,    D,   F,    G,   H,    J,    K,    L,    SCLN, QUOT,       ENT,        PGDN,
        LSFT, Z,    X,    C,   V,    B,   N,    M,    COMM, DOT,  SLSH, RSFT,             UP,   END,
        LCTL, LGUI, LALT,                 SPC,              RALT, FN0,  RCTL,       LEFT, DOWN, RGHT),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, MYCM, MAIL, CALC, MSEL, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, BTN1, MS_U, BTN2, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, MS_L, MS_D, MS_R, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, VOLD, VOLU, MUTE, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

    KEYMAP(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,       ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,             ____, ____,
        ____, ____, ____,                   ____,             ____, ____, ____,       ____, ____, ____),

};

const action_t fn_actions[] = {
    ACTION_LAYER_TAP(1, KC_APP),
};
