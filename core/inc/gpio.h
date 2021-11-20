#ifndef __GPIO_H
#define __GPIO_H

#include "stm32f1xx_hal.h"

#define LED_PORT GPIOC
#define LED_PIN GPIO_PIN_13

void MX_GPIO_Init(void);

#endif
