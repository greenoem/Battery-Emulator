#ifndef VOLVO_SPA_BATTERY_H
#define VOLVO_SPA_BATTERY_H
#include <Arduino.h>
#include "../include.h"

#define BATTERY_SELECTED
#define MAX_PACK_VOLTAGE_108S_DV 4540
#define MIN_PACK_VOLTAGE_108S_DV 2938
#define MAX_PACK_VOLTAGE_96S_DV 4080
#define MIN_PACK_VOLTAGE_96S_DV 2620
#define MAX_CELL_DEVIATION_MV 250
#define MAX_CELL_VOLTAGE_MV 4260  // Charging is halted if one cell goes above this
#define MIN_CELL_VOLTAGE_MV 2700  // Charging is halted if one cell goes below this

void setup_battery(void);
void transmit_can_frame(CAN_frame* tx_frame, int interface);

#endif
