#ifndef CHARGERS_H
#define CHARGERS_H
#include "../../USER_SETTINGS.h"
#include "driver/twai.h"  // This include is annoying, consider defining a frame type in types.h

#ifdef CHEVYVOLT_CHARGER
#include "CHEVY-VOLT-CHARGER.h"
#endif

#ifdef NISSANLEAF_CHARGER
#include "NISSAN-LEAF-CHARGER.h"
#endif

void receive_can_charger(twai_message_t rx_frame);
void send_can_charger();

#endif
