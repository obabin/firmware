#pragma once

// Universal layout mapping for BAYCKRC and HGLRC C3 LR1121 RX boards
#define LORA_MISO 5
#define LORA_MOSI 6
#define LORA_SCK  4
#define LORA_CS   7
#define LORA_BUSY 0
#define LORA_RESET 1
#define LORA_DIO0 10 // DIO9 hardware interrupt mapping

// Hardware Indicator Config
#define LED_PIN   8  // Onboard WS2812B addressable status RGB pin
