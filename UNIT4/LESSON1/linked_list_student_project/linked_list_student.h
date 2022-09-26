/*
 * linked_list_student.h
 *
 *  Created on: 24/9/2022
 *      Author: AMIRA
 */

#ifndef LINKED_LIST_STUDENT_H_
#define LINKED_LIST_STUDENT_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"


#define  DPRINTF(...)       {fflush(stdout); \
							fflush(stdin); \
							printf(__VA_ARGS__); \
							fflush(stdout); \
							fflush(stdin);}
//effictive data
struct Sdata
{
	unsigned int ID;
	char Sname [40];
	float height;

};

//linked list node
struct SStudent
{
	struct Sdata student;
	struct SStudent* PNextStudent;
};


//APIs
void ADDstudent ();
int delete_student();
void view_students();
void delete_all();

//Thinking functions
int GetNth ();
void getcount ();
int node_end ();
void middle_list ();
int detect_loop ();
void reverse_list ();

#endif /* LINKED_LIST_STUDENT_H_ */
