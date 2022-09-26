/*
 * main.c
 *
 *  Created on: 23/9/2022
 *      Author: Amira
 */

#include "fifo.h"

void main ()
{
	FIFO_buf_t FIFO_UART;
	element_type i,temp;
	if(FIFO_init(&FIFO_UART , uart_buffer, 5)==FIFO_no_error)
		printf("fifo init ------Done \n");
	for(i=0;i<7;i++)
	{
		printf("FIFO enqueue %x \n",i);
		if(FIFO_enqueue(&FIFO_UART , i)==FIFO_no_error)
			printf("\tFIFO enqueue ------Done \n");
		else
			printf("\tFIFO enqueue ------failed \n");
	}
	FIFO_print(&FIFO_UART);
	if(FIFO_dequeue(&FIFO_UART , &temp)==FIFO_no_error)
		printf("FIFO dequeue %x ------Done \n",temp);
	if(FIFO_dequeue(&FIFO_UART , &temp)==FIFO_no_error)
			printf("FIFO dequeue %x ------Done \n",temp);
	FIFO_print(&FIFO_UART);
}
