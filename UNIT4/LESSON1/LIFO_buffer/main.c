/*
 * main.c
 *
 *  Created on: 22/9/2022
 *      Author: Amira
 */
#include "lifo.h"

void main()
{
	element_type i,temp;
	LIFO_Buf_t Uart_lifo , I2C_lifo;
	//static allocation
	LIFO_init(&Uart_lifo, uart_buffer ,5);
	//dynamic allocation
	element_type* buffer2=(element_type*) malloc(5*sizeof(element_type));
	LIFO_init(&I2C_lifo, buffer2,5);
	//add elements to buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_push_item(&Uart_lifo, i)==LIFO_no_error)
			printf("UART_LIFO push:%d\n",i);
	}
	//get elements from buffer
	for(i=0;i<5;i++)
	{
		if(LIFO_pop_item(&Uart_lifo, &temp)==LIFO_no_error)
			printf("UART_LIFO pop:%d\n",temp);
	}

}
