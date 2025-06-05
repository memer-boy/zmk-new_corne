/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ¿ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ ´ │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_PIPE GRAVE // |
#define ES_N1 N1      // 1
#define ES_N2 N2      // 2
#define ES_N3 N3      // 3
#define ES_N4 N4      // 4
#define ES_N5 N5      // 5
#define ES_N6 N6      // 6
#define ES_N7 N7      // 7
#define ES_N8 N8      // 8
#define ES_N9 N9      // 9
#define ES_N0 N0      // 0
#define ES_QUOT MINUS // '
#define ES_IQMARK EQUAL // ¿
// Row 2
#define ES_Q Q       // Q
#define ES_W W       // W
#define ES_E E       // E
#define ES_R R       // R
#define ES_T T       // T
#define ES_Z Y       // Z
#define ES_U U       // U
#define ES_I I       // I
#define ES_O O       // O
#define ES_P P       // P
#define ES_ACUT LBKT // ´ (dead)
#define ES_PLUS RBKT // +
// Row 3
#define ES_A A       // A
#define ES_S S       // S
#define ES_D D       // D
#define ES_F F       // F
#define ES_G G       // G
#define ES_H H       // H
#define ES_J J       // J
#define ES_K K       // K
#define ES_L L       // L
#define ES_NTIL SEMI // Ñ
#define ES_LCBR SQT  // {
#define ES_RCBR NUHS // }
// Row 4
#define ES_LT NUBS     // <
#define ES_Y Z         // Y
#define ES_X X         // X
#define ES_C C         // C
#define ES_V V         // V
#define ES_B B         // B
#define ES_N N         // N
#define ES_M M         // M
#define ES_COMMA COMMA // ,
#define ES_DOT DOT     // .
#define ES_MINUS FSLH  // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ¡ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ [ │ ] │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_MORD S(ES_PIPE)   // ° (dead)
#define ES_EXCL LS(ES_N1)    // !
#define ES_DQT LS(ES_N2)     // "
#define ES_HASH LS(ES_N3)    // #
#define ES_DLLR LS(ES_N4)    // $
#define ES_PRCNT LS(ES_N5)   // %
#define ES_AMPS LS(ES_N6)    // &
#define ES_FSLH LS(ES_N7)    // /
#define ES_LPAR LS(ES_N8)    // (
#define ES_RPAR LS(ES_N9)    // )
#define ES_EQUAL LS(ES_N0)   // =
#define ES_QMARK LS(ES_QUOT) // ?
#define ES_IEXCL LS(ES_PLUS) // ¡
// Row 2
#define ES_DIAE LS(ES_ACUT)  // ¨ (dead)
#define ES_ASTRK LS(ES_PLUS) // *
// Row 3
#define ES_LBKT LS(ES_LCBR)  // [
#define ES_RBKT LS(ES_LCBR)  // ]
// Row 4
#define ES_GT LS(ES_LT)       // >
#define ES_SEMI LS(ES_COMMA)  // ;
#define ES_COLON LS(ES_DOT)   // :
#define ES_UNDER LS(ES_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¬ │   │   │ £ │ ∞ │ § │ ¶ │ § │ • │ ª │ º │ \ │ ≠ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │ ∑ │ € │ ® │ † │ ¥ │ ¨ │ ı │   │ π │ « │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │ ß │ ∂ │ ƒ │ © │   │   │   │ λ │ ~ │ ^ │ ` │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≤ │   │ ≈ │ ç │ √ │ ∫ │ ~ │ µ │   │ … │ – │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define ES_NOT RA(ES_PIPE) // ¬
// #define ES_TILDE RA(ES_N1) // ~
// #define ES_CARN RA(ES_N2)  // ˇ (dead)
#define ES_POUND RA(ES_N3) // £
#define ES_CENT RA(ES_N4)  // ¢
#define ES_INFI RA(ES_N5)  // ∞
#define ES_SECT RA(ES_N6)  // §
#define ES_PARA RA(ES_N7)  // ¶
#define ES_MDOT RA(ES_N8)  // •
#define ES_FORD RA(ES_N9)  // ª
#define ES_MORD RA(ES_N0)  // º
#define ES_BSLH RA(ES_QUOT)// (backslash)
#define ES_NEQ RA(ES_IQMARK)// ≠
// Row 2 (only AltGr)
#define ES_AT   RA(ES_Q)   // @
#define ES_SIG  RA(ES_W)   // ∑
#define ES_EURO RA(ES_E)   // €
#define ES_REG RA(ES_R)    // ®
#define ES_DAGG RA(ES_T)   // †
#define ES_YEN  RA(ES_Y)   // ¥
#define ES_DIAE RA(ES_U)   // ¨ (dead)
#define ES_DLI  RA(ES_I)   // ı
#define ES_PI   RA(ES_P)   // π
#define ES_LDAQ RA(ES_ACUT)// «
#define ES_DTIL RA(ES_PLUS)// ~ (dead)
// Row 3 (only AltGr)
#define ES_SHARP RA(ES_S)   // ß
#define ES_PDIF RA(ES_D)    // ∂
#define ES_FUN  RA(ES_F)    // ƒ
#define ES_CORI RA(ES_G)    // ©
#define ES_LAMB RA(ES_L)      // λ
#define ES_TILD RA(ES_NTIL) // ~
#define ES_CIRC RA(ES_LCBR) // ^ (dead)
#define ES_GRAVE RA(ES_RCBR)// ` (dead)
// Row 4 (only AltGr)
#define ES_LTEQ RA(ES_LT)  // ≤
#define ES_OMEGA RA(ES_Z)  // Ω
#define ES_AEQ RA(ES_X)    // ≈
#define ES_CEDL RA(ES_C)   // ç
#define ES_SQRT RA(ES_V) // √
#define ES_ITGR RA(ES_B) // ∫
#define ES_DTIL RA(ES_N) // ~ (dead)
#define ES_MU   RA(ES_M) // µ
#define ES_ELLIP RA(ES_DOT) // …
#define ES_ENDASH (ES_MINUS) // –
// Extra
#define ES_LTEQ LS(RA(ES_LT)) // ≥
#define ES_RDAQ LS(RA(ES_ACUT)) // »