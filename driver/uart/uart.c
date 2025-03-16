#include "hal_uart_dw.h"
#include "uart.h"

void uart_init(void)
{
	int baudrate = 115200;
	int uart_clock = 25 * 1000 * 1000;

	/* set uart to pinmux_uart1 */

	hal_uart_init(UART0, baudrate, uart_clock);
}

uint8_t uart_putc(uint8_t ch)
{
	if (ch == '\n') {
		hal_uart_putc('\r');
	}
	hal_uart_putc(ch);
	return ch;
}

void uart_puts(char *str)
{
	if (!str)
		return;

	while (*str) {
		uart_putc(*str++);
	}
}

int uart_getc(void)
{
	return (int)hal_uart_getc();
}

int uart_tstc(void)
{
	return hal_uart_tstc();
}

int uart_put_buff(char *buf)
{
	int count = 0;

	
	uart_puts("RT: ");

	while (buf[count]) {
		if (uart_putc(buf[count]) != '\n') {
			count++;
		} else {
			break;
	    }
	}
	
	return count;
}

