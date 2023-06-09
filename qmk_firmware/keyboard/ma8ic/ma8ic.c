#include "ma8ic.h"

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
  {
    // Key Matrix to LED Index
    // Left split.
    {   31,     30,     29,     28,     27,     26,     25, NO_LED },
    {   18,     19,     20,     21,     22,     23,     24, NO_LED },
    {   17,     16,     15,     14,     13,     12, NO_LED, NO_LED },
    {    6,      7,      8,      9,     10,     11, NO_LED, NO_LED },
    {    5,      4,      3,      2,      1,      0, NO_LED, NO_LED },
    // Right split/
    {   68,     67,     66,     65,     64,     63,     62, NO_LED },
    {   54,     55,     56,     57,     58,     59,     60,     61 },
    {   53,     52,     51,     50,     49,     48,     47, NO_LED },
    {   39,     40,     41,     42,     43,     44,     45,     46 },
    {   38,     37,     36,     35,     34,     33,     32, NO_LED },
  },
  {
    // LED Index to Physical Position
    // Left split.
    /* index=0  */ {  96,  64 }, {  80,  64 }, {  64,  64 }, {  32,  64 }, {  16,  64 }, {   0,  0 },
    /* index=6  */ {   0,  48 }, {  16,  48 }, {  32,  48 }, {  48,  48 }, {  64,  48 }, {  80,  48 },
    /* index=12 */ {  80,  32 }, {  64,  32 }, {  48,  32 }, {  32,  32 }, {  16,  32 }, {   0,  32 },
    /* index=18 */ {   0,  16 }, {  16,  16 }, {  32,  16 }, {  48,  16 }, {  64,  16 }, {  80,  16 }, {  96,  16 },
    /* index=25 */ {  96,   0 }, {  80,   0 }, {  64,   0 }, {  48,   0 }, {  32,   0 }, {  16,   0 }, {   0,   0 },
    // Right split.
    /* index=32 */ { 112,  64 }, { 128,  64 }, { 144,  64 }, { 160,  64 }, { 176,  64 }, { 192,  64 }, { 208,  64 },
    /* index=39 */ { 224,  48 }, { 208,  48 }, { 192,  48 }, { 176,  48 }, { 160,  48 }, { 144,  48 }, { 128,  48 }, { 112,  48 },
    /* index=47 */ { 112,  32 }, { 128,  32 }, { 144,  32 }, { 160,  32 }, { 176,  32 }, { 192,  32 }, { 208,  32 },
    /* index=54 */ { 224,  16 }, { 208,  16 }, { 192,  16 }, { 176,  16 }, { 160,  16 }, { 144,  16 }, { 128,  16 }, { 112,  16 },
    /* index=62 */ { 112,   0 }, { 128,   0 }, { 144,   0 }, { 160,   0 }, { 176,   0 }, { 192,   0 }, { 208,   0 },
  },
  {
    // LED Index to Flag
    // Left split.
    /* index=0  */ 4, 4, 4, 4, 4, 4,
    /* index=6  */ 4, 4, 4, 4, 4, 4,
    /* index=12 */ 4, 4, 4, 4, 4, 4,
    /* index=18 */ 4, 4, 4, 4, 4, 4, 4,
    /* index=25 */ 4, 4, 4, 4, 4, 4, 4,
    // Right split.
    /* index=32 */ 4, 4, 4, 4, 4, 4, 4,
    /* index=39 */ 4, 4, 4, 4, 4, 4, 4, 4,
    /* index=47 */ 4, 4, 4, 4, 4, 4, 4,
    /* index=54 */ 4, 4, 4, 4, 4, 4, 4, 4,
    /* index=62 */ 4, 4, 4, 4, 4, 4, 4,
  }
};
#endif