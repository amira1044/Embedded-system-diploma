/*
 * lifo.c
 *
 *  Created on: ٢٢‏/٠٩‏/٢٠٢٢
 *      Author: HP
 */
#include "lifo.h"

//APIs
LIFO_status LIFO_push_item (LIFO_Buf_t* lifo_buf,unsigned int item)
{
	//check lifo is valid
	if(!lifo_buf->base|| !lifo_buf->head)
		return LIFO_NULL;

	//check lifo is full
	if(lifo_buf->count==lifo_buf->length)
		return LIFO_full;

	//ADD value
	*(lifo_buf->head)=item;
	lifo_buf->head++;
	lifo_buf->count++;

	return LIFO_no_error;

}
LIFO_status LIFO_pop_item (LIFO_Buf_t* lifo_buf,unsigned int* item)
{
	//check lifo is valid
	if(!lifo_buf->base||!lifo_buf->head)
			return LIFO_NULL;

	//check lifo is empty
	if(lifo_buf->count==0)
		return LIFO_empty;

	//pop item
	lifo_buf->head--;
	*(item)=*(lifo_buf->head);
	lifo_buf->count--;

	return LIFO_no_error;

}
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length)
{
	if(buf==NULL)
		return LIFO_NULL; //check if there where no free memory especially in dynamic allocation

	lifo_buf->base=buf;
	lifo_buf->head=buf;
	lifo_buf->length=length;
	lifo_buf->count=0;
	return LIFO_no_error;
}

