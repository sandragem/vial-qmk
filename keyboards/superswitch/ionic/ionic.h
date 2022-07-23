/*
 Copyright 2022 superswitch

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* Any changes to the layout names and/or definitions must also be made to info.json */

#define XXX KC_NO

/*
 * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐    ┌───────┐
 * │00 │  │01 │02 │  │03 │04 │05 │  │06 │07 │    │06     │ 2u BSPC
 * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘    └───────┘
 *
 * ┌───┐  ┌───┬───┐  ┌───┬───┬───┐  ┌───┬───┐
 * │10 │  │11 │12 │  │13 │14 │15 │  │16 │17 │
 * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤    ┌───┬───┐
 * │20 │  │21 │22 │  │23 │24 │25 │  │26 │27 │    │   │   │
 * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤    │26 │27 │
 * │30 │  │31 │32 │  │33 │34 │35 │  │36 │37 │    │   │   │ 
 * ├───┤  ├───┼───┤  ├───┼───┼───┤  ├───┼───┤    └───┴───┘
 * │40 │  │41 │42 │  │43 │44 │45 │  │46 │47 │     2u   2u
 * └───┘  └───┴───┘  └───┴───┴───┘  └───┴───┘    PPLS PMNS
 *
 *        ┌───────┐                 ┌───────┐
 *        │42     │ 2u LSFT         │47     │ 2u RSFT
 *        └───────┘                 └───────┘
 */

#define LAYOUT_all_5x8( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
    K10, K11, K12, K13, K14, K15, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, \
    K30, K31, K32, K33, K34, K35, K36, K37, \
    K40, K41, K42, K43, K44, K45, K46, K47 \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37   }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47   }, \
}

#define LAYOUT_archipad_5x8( \
    K00, K01, K02, K03, K04, K05,    K06,   \
    K10, K11, K12, K13, K14, K15, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, \
    K30, K31, K32, K33, K34, K35,           \
    K40, K41, K42, K43, K44, K45,    K47    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,     KC_NO   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,     K17   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,     K27   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   KC_NO,   KC_NO   }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   KC_NO,   K47   }, \
}

#define LAYOUT_archipad_split_bspc_5x8( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
    K10, K11, K12, K13, K14, K15, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, \
    K30, K31, K32, K33, K34, K35,           \
    K40, K41, K42, K43, K44, K45,    K47    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   KC_NO, KC_NO }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   KC_NO, K47   }, \
}

#define LAYOUT_2u_5x8( \
    K00, K01, K02, K03, K04, K05,    K06,   \
    K10, K11, K12, K13, K14, K15, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, \
    K30, K31, K32, K33, K34, K35,           \
    K40,   K42,    K43, K44, K45,    K47    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,     KC_NO   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,     K17   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,     K27   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   KC_NO,   KC_NO   }, \
    { K40,   KC_NO,   K42,   K43,   K44,   K45,   KC_NO,   K47   }, \
}

#define LAYOUT_split_bspc_5x8( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
    K10, K11, K12, K13, K14, K15, K16, K17, \
    K20, K21, K22, K23, K24, K25, K26, K27, \
    K30, K31, K32, K33, K34, K35,           \
    K40,   K42,    K43, K44, K45,    K47   \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,     K07   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,     K17   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,     K27   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   KC_NO,   KC_NO   }, \
    { K40,   KC_NO,   K42,   K43,   K44,   K45,   KC_NO,   K47   }, \
}
