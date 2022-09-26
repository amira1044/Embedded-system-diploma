/*
 * main.c
 *
 *  Created on: 24/9/2022
 *      Author: AMIRA
 */

#include "linked_list_student.h"

void main ()
{
	char temp_text [40];
	while(1)
	{
		DPRINTF("\n=====================");
		DPRINTF("\n\t choose of the following options: \n");
		DPRINTF("\n 1. ADD STUDENT ");
		DPRINTF("\n 2. DELETE STUDENT ");
		DPRINTF("\n 3. VIEW STUDENTS ");
		DPRINTF("\n 4. DELETE ALL ");
		DPRINTF("\n 5. show student data at index ");
		DPRINTF("\n 6. Find the number of students ");
		DPRINTF("\n 7. Find the student data from the end ");
		DPRINTF("\n 8. Find the middle of the list ");
		DPRINTF("\n 9. Find if there is any loop ");
		DPRINTF("\n 10. Reverse the list ")
		DPRINTF("\n Enter option number :");
		gets(temp_text);
		DPRINTF("\n=====================");

		switch(atoi(temp_text))
		{
		case 1:
			ADDstudent();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students();
			break;
		case 4:
			delete_all();
			break;
		case 5:
			GetNth ();
			break;
		case 6:
			getcount ();
			break;
		case 7:
			node_end ();
			break;
		case 8:
			middle_list();
			break;
		case 9:
			detect_loop();
			break;
		case 10:
			reverse_list();
			break;
		default:
			printf("\n Wrong option.");



		}



	}
}
