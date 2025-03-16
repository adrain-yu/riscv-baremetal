#include "uart.h"

void start_kernel(void)
{
	uart_init();
	uart_puts("Yzw Hello, RVOS!\n");
  int i = 0;

  while (1) {
    
    for(i = 0; i < 100000; i++);
	  
    uart_puts("Yzw dd Hello, RVOS!\n");
  }
  return;
}
