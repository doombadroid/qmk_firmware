#include "hal.h"

#if HAL_USE_PAL
const PALConfig pal_default_config;
#endif

void __early_init(void) {}

void boardInit(void) {}
