/* discovery F4 stm32f407VG 
File    : main.c

*/

#include <stdio.h>
#include <stdlib.h>
#include "stm32f407xx.h"
#include "ustawienia.h"

/*********************************************************************
*
*       main()
*
*/


int i; //=LED3;
int main(void) {
  
  config_LED();
  LED_ALL_ON();
  UART2_konfig();
 __DSB();

  // RCC->AHB1ENR=1;
  
  while (1)
  {
if (GPIOA->IDR & BUTTON_B1 == 1)
{
  LED_ALL_OFF();
}
 else
  {
    LED_ALL_ON();
    }

  }





}

/*************************** End of file ****************************/
/*
for (i = 0; i < 100; i++) {
    printf("Hello World %d!\n", i);
  }

  */

