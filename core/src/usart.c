#include "usart.h"

UART_HandleTypeDef huart1;

uint8_t MX_USART1_UART_Init(void)
{
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    return 0;
  }
  return 1;
}

uint8_t debug_print(uint8_t *pData)
{
    // int i;
    // for(i=0;i<)
    HAL_UART_Transmit(&huart1,pData,strlen(pData),UART_Transmit_Timeout);
}
