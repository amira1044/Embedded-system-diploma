/*
 * fifo.c
 *
 *  Created on: 23/9/2022
 *      Author: Amira
 */
#include "fifo.h"

//FIFO APIs
FIFO_buf_status FIFO_init (FIFO_buf_t* fifo,element_type* buf,uint32_t length)
{
	if(buf == NULL)
		return FIFO_NULL;

	fifo->base=buf;
	fifo->head=buf;
	fifo->tail=buf;
	fifo->count=0;
	fifo->length=length;
	return FIFO_no_error;

}

FIFO_buf_status FIFO_enqueue (FIFO_buf_t* fifo,element_type item)
{
	//FIFO IS NULL
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;
	//FIFO IS FULL
	if(FIFO_is_full(fifo) == FIFO_full)
		return FIFO_full;
	*(fifo->head) = item;
	fifo->count++;
	//circular fifo
	if(fifo->head == (fifo->base+(fifo->length *sizeof(element_type))) )
		fifo->head=fifo->base;
	else
		fifo->head++;
	return FIFO_no_error;
}

FIFO_buf_status FIFO_dequeue (FIFO_buf_t* fifo,element_type* item)
{
	//FIFO IS NULL
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;

	//FIFO IS EMPTY
	if(fifo->count == 0)
		return FIFO_empty;

	//RETURN DATA
	*item=*fifo->tail;
	fifo->count--;
	//circular fifo
	if(fifo->tail == (fifo->base+(fifo->length *sizeof(element_type))) )
		fifo->head=fifo->base;
	else
		fifo->tail++;
	return FIFO_no_error;

}

FIFO_buf_status FIFO_is_full (FIFO_buf_t* fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;
	if(fifo->count==fifo->length)
		return FIFO_full;
	return FIFO_no_error;
}

void FIFO_print (FIFO_buf_t* fifo)
{
	element_type *temp;
	int i;
	if(fifo->count == 0)
		printf("FIFO is empty");
	else
	{
		temp = fifo->tail;
		printf("\n ======FIFO PRINT===== \n");
		for(i=0;i<fifo->count;i++)
		{
			printf("\t %X \n ",*temp);
			temp++;
		}
		printf("============= \n");
	}
}
