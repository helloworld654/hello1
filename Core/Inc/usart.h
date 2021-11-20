#ifndef __USART_H
#define __USART_H

#include "stm32f1xx_hal.h"

#define UART_Transmit_Timeout 1000

uint8_t MX_USART1_UART_Init(void);
uint8_t debug_print(uint8_t *pData);

#endif
