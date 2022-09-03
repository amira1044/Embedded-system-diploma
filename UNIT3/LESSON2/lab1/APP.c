#include <UART.h>
unsigned char string_buffer[50]="learn-in-depth:Amira";
 void main(void)
{
  Uart_send_string(string_buffer);
}