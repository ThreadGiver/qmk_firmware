#include "annepro2.h"

#include QMK_KEYBOARD_H

enum anne_pro_layers
{
  _BASE_LAYER,
  _RIGHT_MOD,
  _QWERTY,
  _QWERTYFN,
  _FN1_LAYER,
  _FN2_LAYER,
  _FN3_LAYER,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] =
        LAYOUT_60_ansi(/* Base */
               LT(_FN3_LAYER, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC,
               LT(_FN2_LAYER, KC_TAB), KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS,
               LT(_FN1_LAYER, KC_CAPS), LGUI_T(KC_A), LALT_T(KC_O), LSFT_T(KC_E), LCTL_T(KC_U), KC_I, KC_D, LCTL_T(KC_H), LSFT_T(KC_T), LALT_T(KC_N), LGUI_T(KC_S), KC_MINS, KC_ENT,
               LSFT_T(KC_MPLY), KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, RSFT_T(KC_UP),
               LCTL_T(KC_MPRV), KC_LGUI, LALT_T(KC_MNXT), LT(_FN1_LAYER, KC_SPC), KC_RALT, LT(_FN1_LAYER, KC_LEFT), LT(_FN2_LAYER, KC_DOWN), RCTL_T(KC_RGHT)),
    [_RIGHT_MOD] =
        LAYOUT_60_ansi(/* Base */
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCTL_T(KC_H), RSFT_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S), KC_MINS, KC_ENT,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_QWERTY] =
        LAYOUT_60_ansi(/* Base */
               LT(_FN3_LAYER, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_TRNS,
               KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
               LT(_FN1_LAYER, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
               KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
               KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_QWERTYFN] =
        LAYOUT_60_ansi(/* Base */
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_FN1_LAYER] =
        LAYOUT_60_ansi(/* Base */
               KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,
               KC_TRNS, TG(_QWERTY), HYPR(KC_M), HYPR(KC_E), C(S(KC_P)), KC_VOLU, KC_PGUP, KC_ENT, KC_UP, KC_MENU, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, C(G(KC_LEFT)), C(G(KC_RGHT)), KC_CIRC, KC_GRV, KC_VOLD, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_BSPC, KC_DEL, KC_TRNS,
               KC_TRNS, KC_PSCR, TG(_QWERTYFN), KC_LBRC, KC_RBRC, KC_MUTE, KC_HOME, KC_END, KC_TRNS, KC_INS, TG(_RIGHT_MOD), KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN2_LAYER), KC_TRNS),
    [_FN2_LAYER] =
        LAYOUT_60_ansi(/* Base */
               KC_TRNS, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_AP2_BT_UNPAIR, KC_TRNS, KC_TRNS, KC_AP_LED_TOG, KC_AP_LED_NEXT_PROFILE, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_SPEED, KC_AP_RGB_MOD, A(KC_F4),
               MO(_FN2_LAYER), LCAG(KC_0), LCAG(KC_1), LCAG(KC_4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLEP,
               KC_TRNS, LCAG(KC_2), LCAG(KC_3), LCAG(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, LCAG(KC_6), LCAG(KC_7), LCAG(KC_8), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN1_LAYER), MO(_FN2_LAYER), KC_TRNS),
    [_FN3_LAYER] =
        LAYOUT_60_ansi(/* Base */
               KC_TRNS, KC_TRNS, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_EXLM, KC_COMM, KC_DOT, KC_PLUS, KC_TRNS, KC_TRNS, KC_CIRC, KC_ASTR, KC_LPRN, KC_RPRN, KC_SLSH, KC_EQL, KC_TRNS,
               KC_TRNS, KC_1,    KC_2,    KC_3,   KC_4,      KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_AMPR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};
const uint16_t keymaps_size = sizeof(keymaps);

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case TG(_QWERTYFN):
    if (record->event.pressed)
    {
      layer_invert(_QWERTYFN);
      if (layer_state_is(_QWERTYFN))
      {
        tap_code16(C(HYPR(KC_S)));
      }
      else
      {
        tap_code16(C(HYPR(KC_Z)));
      }
    }
    return false;
  }
  return true;
}

void matrix_init_user(void)
{
}

void matrix_scan_user(void)
{
}

// Code to run after initializing the keyboard
void keyboard_post_init_user(void)
{
  ap2_led_enable();
  ap2_led_set_profile(0);
}

layer_state_t layer_state_set_user(layer_state_t layer)
{
  return layer;
}
