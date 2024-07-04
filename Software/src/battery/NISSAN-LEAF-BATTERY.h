#ifndef NISSAN_LEAF_BATTERY_H
#define NISSAN_LEAF_BATTERY_H

#include "../include.h"

#include "../lib/ESP32-TWAI-CAN/ESP32-TWAI-CAN.hpp"

#define BATTERY_SELECTED
#define MAX_CELL_DEVIATION_MV 500

uint16_t Temp_fromRAW_to_F(uint16_t temperature);
bool is_message_corrupt(twai_message_t rx_frame);
void setup_battery(void);

#endif
