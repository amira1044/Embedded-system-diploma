/*
 * lifo.h
 *
 *  Created on: 22/9/2022
 *      Author: Amira
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
//USER Configuration
//select element type (uint8_t,uint16_t,uint32_t,...)
#define element_type uint8_t

//create buffer
#define width 5
element_type uart_buffer[width]; //global variable


//type definations
typedef struct  {
	unsigned int length;
	unsigned int count;
	unsigned int *base;
	unsigned int *head;

}LIFO_Buf_t;

typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_NULL
}LIFO_status;


//APIs
LIFO_status LIFO_push_item (LIFO_Buf_t* lifo_buf,unsigned int item);
LIFO_status LIFO_pop_item (LIFO_Buf_t* lifo_buf,unsigned int* item);
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length);



#endif /* LIFO_H_ */
