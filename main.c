/**
  ******************************************************************************
  * @file    main.c
  * @author  Boujneh Rahma
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
  InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode);
  ButtonToggleLed();
 
  while(1)
  {}
}
/**************************************END OF FILE**************************************/
