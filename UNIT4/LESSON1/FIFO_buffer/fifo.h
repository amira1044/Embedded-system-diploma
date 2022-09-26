/*
 * fifo.h
 *
 *  Created on: 23/9/2022
 *      Author: Amira
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

//USER Configuration
//select element type (uint8_t,uint16_t,uint32_t,...)
#define element_type uint8_t

//create buffer
#define width 5
element_type uart_buffer [width]; //global variable

//fifo data types
typedef struct{
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_buf_t;

//fifo status
typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_NULL
}FIFO_buf_status;

//APIs
FIFO_buf_status FIFO_init (FIFO_buf_t* fifo,element_type* buf,uint32_t length);
FIFO_buf_status FIFO_enqueue (FIFO_buf_t* fifo,element_type item);
FIFO_buf_status FIFO_dequeue (FIFO_buf_t* fifo,element_type* item);
FIFO_buf_status FIFO_is_full (FIFO_buf_t* fifo);
void FIFO_print (FIFO_buf_t* fifo);














#endif /* FIFO_H_ */
