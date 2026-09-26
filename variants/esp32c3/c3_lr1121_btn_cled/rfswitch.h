#pragma once

#include <stdint.h>

// Shared RF antenna path selector pinout for dual-band C3 receivers
#define RF_SWITCH_RX_PIN  2
#define RF_SWITCH_TX_PIN  3

inline void initRfSwitch() {
    pinMode(RF_SWITCH_RX_PIN, OUTPUT);
    pinMode(RF_SWITCH_TX_PIN, OUTPUT);
    digitalWrite(RF_SWITCH_RX_PIN, LOW);
    digitalWrite(RF_SWITCH_TX_PIN, LOW);
}

inline void setRfSwitch(bool txActive) {
    if (txActive) {
        digitalWrite(RF_SWITCH_RX_PIN, LOW);
        digitalWrite(RF_SWITCH_TX_PIN, HIGH);
    } else {
        digitalWrite(RF_SWITCH_RX_PIN, HIGH);
        digitalWrite(RF_SWITCH_TX_PIN, LOW);
    }
}
