#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"
#include "config.h"

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

void tapHold(keyrecord_t *record, uint16_t tap_key, uint16_t hold_key)
{
  if (record->event.pressed)
  {
    if (record->tap.count)
    {
      tap_code16(tap_key); // Intercept tap function to send
    }
    else
    {
      tap_code16(hold_key); // Intercept hold function to send
    }
  }
}

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] =
        KEYMAP(/* Base */
               LT(_FN3_LAYER, KC_ESC), LT(0, KC_1), LT(0, KC_2), LT(0, KC_3), LT(0, KC_4), LT(0, KC_5), LT(0, KC_6), LT(0, KC_7), LT(0, KC_8), LT(0, KC_9), LT(0, KC_0), LT(0, KC_LBRC), LT(0, KC_RBRC), KC_BSPC,
               LT(_FN2_LAYER, KC_TAB), KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS,
               LT(_FN1_LAYER, KC_CAPS), LGUI_T(KC_A), LALT_T(KC_O), LSFT_T(KC_E), LCTL_T(KC_U), KC_I, KC_D, LCTL_T(KC_H), LSFT_T(KC_T), LALT_T(KC_N), LGUI_T(KC_S), KC_MINS, KC_ENT,
               LSFT_T(KC_MPLY), KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, RSFT_T(KC_UP),
               LCTL_T(KC_MPRV), KC_LGUI, LALT_T(KC_MNXT), LT(_FN1_LAYER, KC_SPC), KC_RALT, LT(_FN1_LAYER, KC_LEFT), LT(_FN2_LAYER, KC_DOWN), RCTL_T(KC_RGHT)),
    [_RIGHT_MOD] =
        KEYMAP(/* Base */
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCTL_T(KC_H), RSFT_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S), KC_MINS, KC_ENT,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_QWERTY] =
        KEYMAP(/* Base */
               LT(_FN3_LAYER, KC_ESC), LT(1, KC_1), LT(1, KC_2), LT(1, KC_3), LT(1, KC_4), LT(1, KC_5), LT(1, KC_6), LT(1, KC_7), LT(1, KC_8), LT(1, KC_9), LT(1, KC_0), LT(1, KC_MINS), LT(1, KC_EQL), KC_TRNS,
               KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
               LT(_FN1_LAYER, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
               KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
               KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_QWERTYFN] =
        KEYMAP(/* Base */
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_FN1_LAYER] =
        KEYMAP(/* Base */
               KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,
               KC_TRNS, TG(_QWERTY), HYPR(KC_M), HYPR(KC_E), C(S(KC_P)), KC_VOLU, KC_PGUP, KC_ENT, KC_UP, KC_MENU, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, C(G(KC_LEFT)), C(G(KC_RGHT)), KC_CIRC, KC_GRV, KC_VOLD, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_BSPC, KC_DEL, KC_TRNS,
               KC_TRNS, KC_PSCR, TG(_QWERTYFN), KC_LBRACKET, KC_RBRACKET, KC_MUTE, KC_HOME, KC_END, KC_TRNS, KC_INS, TG(_RIGHT_MOD), KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN2_LAYER), KC_TRNS),
    [_FN2_LAYER] =
        KEYMAP(/* Base */
               KC_TRNS, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_AP2_BT_UNPAIR, KC_TRNS, KC_TRNS, KC_AP_LED_OFF, KC_AP_LED_ON, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_SPEED, KC_TRNS, A(KC_F4),
               MO(_FN2_LAYER), LCAG(KC_0), LCAG(KC_1), LCAG(KC_4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLEP,
               KC_TRNS, LCAG(KC_2), LCAG(KC_3), LCAG(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, LCAG(KC_6), LCAG(KC_7), LCAG(KC_8), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN1_LAYER), MO(_FN2_LAYER), KC_TRNS),
    [_FN3_LAYER] =
        KEYMAP(/* Base */
               KC_TRNS, KC_TRNS, S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, S(KC_1), KC_COMM, KC_DOT, S(KC_EQL), KC_TRNS, KC_TRNS, S(KC_6), S(KC_8), S(KC_9), S(KC_0), KC_SLSH, KC_EQL, KC_TRNS,
               KC_TRNS, KC_1,    KC_2,    KC_3,   KC_4,      KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_7), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};
const uint16_t keymaps_size = sizeof(keymaps);

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case LT(0, KC_1):
    tapHold(record, KC_1, HYPR(KC_1));
    return false;
  case LT(0, KC_2):
    tapHold(record, KC_2, HYPR(KC_2));
    return false;
  case LT(0, KC_3):
    tapHold(record, KC_3, HYPR(KC_3));
    return false;
  case LT(0, KC_4):
    tapHold(record, KC_4, HYPR(KC_4));
    return false;
  case LT(0, KC_5):
    tapHold(record, KC_5, HYPR(KC_5));
    return false;
  case LT(0, KC_6):
    tapHold(record, KC_6, HYPR(KC_6));
    return false;
  case LT(0, KC_7):
    tapHold(record, KC_7, HYPR(KC_7));
    return false;
  case LT(0, KC_8):
    tapHold(record, KC_8, HYPR(KC_8));
    return false;
  case LT(0, KC_9):
    tapHold(record, KC_9, HYPR(KC_9));
    return false;
  case LT(0, KC_0):
    tapHold(record, KC_0, HYPR(KC_0));
    return false;
  case LT(0, KC_LBRC):
    tapHold(record, KC_LBRC, HYPR(KC_LBRC));
    return false;
  case LT(0, KC_RBRC):
    tapHold(record, KC_RBRC, HYPR(KC_RBRC));
    return false;
  case LT(1, KC_1):
    tapHold(record, KC_1, KC_F1);
    return false;
  case LT(1, KC_2):
    tapHold(record, KC_2, KC_F2);
    return false;
  case LT(1, KC_3):
    tapHold(record, KC_3, KC_F3);
    return false;
  case LT(1, KC_4):
    tapHold(record, KC_4, KC_F4);
    return false;
  case LT(1, KC_5):
    tapHold(record, KC_5, KC_F5);
    return false;
  case LT(1, KC_6):
    tapHold(record, KC_6, KC_F6);
    return false;
  case LT(1, KC_7):
    tapHold(record, KC_7, KC_F7);
    return false;
  case LT(1, KC_8):
    tapHold(record, KC_8, KC_F8);
    return false;
  case LT(1, KC_9):
    tapHold(record, KC_9, KC_F9);
    return false;
  case LT(1, KC_0):
    tapHold(record, KC_0, KC_F10);
    return false;
  case LT(1, KC_MINS):
    tapHold(record, KC_MINS, KC_F11);
    return false;
  case LT(1, KC_EQL):
    tapHold(record, KC_EQL, KC_F12);
    return false;

  case TG(_QWERTYFN):
    if (record->event.pressed)
    {
      layer_invert(_QWERTYFN);
      if (layer_state_is(_QWERTYFN))
      {
        tap_code16(HYPR(KC_S));
      }
      else
      {
        tap_code16(HYPR(KC_Z));
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
  // Here are two common functions that you can use. For more LED functions, refer to the file "qmk_ap2_led.h"

  // annepro2-shine disables LEDs by default. Uncomment this function to enable them at startup.
  annepro2LedEnable();

  // Additionally, it also chooses the first LED profile by default. Refer to the "profiles" array in main.c in
  // annepro2-shine to see the order. Replace "i" with the index of your preferred profile. (i.e the RED profile is index 0)
  annepro2LedSetProfile(0);
}

layer_state_t layer_state_set_user(layer_state_t layer)
{
  return layer;
}
