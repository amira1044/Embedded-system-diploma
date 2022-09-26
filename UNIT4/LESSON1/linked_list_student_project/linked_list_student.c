/*
 * linked_list_student.c
 *
 *  Created on: 24/9/2022
 *      Author: AMIRA
 */
#include "linked_list_student.h"

struct SStudent* gpFirststudent = NULL;
//APIs
void ADDstudent ()
{
	struct SStudent* NewStudent;
	struct SStudent* LastStudent;
	char temp_text[40];
	//check list is empty
	if(gpFirststudent == NULL)
	{
		//create new record
		NewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		if(NewStudent == NULL)
		{DPRINTF("failed to allocate record");}
		else
			gpFirststudent = NewStudent;
	}
	else //List contain records
	{
		//Navigate until reach the last record
		LastStudent = gpFirststudent;
		while(LastStudent->PNextStudent)
			LastStudent = LastStudent->PNextStudent;
		//create new record
		NewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		if(NewStudent == NULL)
		{DPRINTF("failed to allocate record");}
		else
			LastStudent->PNextStudent = NewStudent;
	}

	//fill new record
	DPRINTF("\n Enter the student ID:");
	gets(temp_text);
	NewStudent->student.ID = atoi(temp_text);

	DPRINTF("\n Enter the student name:");
	gets(NewStudent->student.Sname);

	DPRINTF("\n Enter the student height:");
	gets(temp_text);
	NewStudent->student.height = atof(temp_text);

	//set the NewStudent pointer to null
	NewStudent->PNextStudent = NULL;

}

int delete_student()
{
	char temp_text[40];
	unsigned int selected_id;
	DPRINTF("\n Enter the student ID to be deleted:");
	gets(temp_text);
	selected_id = atoi(temp_text);

	//check list is empty
	if(gpFirststudent)
	{
		struct SStudent* pSelectedStudent = gpFirststudent;
		struct SStudent* pPreviousStudent = NULL;

		//loop on all records
		while(pSelectedStudent)
		{
			if(pSelectedStudent->student.ID == selected_id)
			{
				if(pPreviousStudent) //the first is not the selected one
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;

				}
				else //first student is the selected one
				{
					gpFirststudent = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1;
			}
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;
		}
	}
	DPRINTF("\n cannot find student ID.");
	return 0;
}

void view_students()
{
	struct SStudent* pcurrentstudent = gpFirststudent;
	int count = 1;
	if(gpFirststudent == NULL)
	{DPRINTF("\n Empty list.");}
	else
	{
		while(pcurrentstudent)
		{
			DPRINTF("\n record number :%d",count++);
			DPRINTF("\n \t ID :%d", pcurrentstudent->student.ID);
			DPRINTF("\n \t name :%s", pcurrentstudent->student.Sname);
			DPRINTF("\n \t height :%f", pcurrentstudent->student.height);
			pcurrentstudent = pcurrentstudent->PNextStudent;
		}
	}
}

void delete_all()
{
	struct SStudent* pcurrentstudent = gpFirststudent;
	if(gpFirststudent == NULL)
	{DPRINTF("\n Empty list.");}
	else
	{
		while(pcurrentstudent)
		{
			struct SStudent*pTempStudent = pcurrentstudent;
			pcurrentstudent = pcurrentstudent->PNextStudent;
			free(pTempStudent);
		}
		gpFirststudent = NULL;
		DPRINTF("\n =====Now the list is empty=====");
	}
}

//Thinking functions
int GetNth ()
{
	unsigned int count =0;
	char temp_text[20];
	struct SStudent* pcurrentstudent = gpFirststudent;
	DPRINTF("\n Enter the index: ");
	gets(temp_text);
	//check list is empty
	if(gpFirststudent == NULL)
	{DPRINTF("list is empty");}
	else
	{
		while(pcurrentstudent)
			if(count == atoi(temp_text))
			{
				DPRINTF("\n record number :%d",count+1);
				DPRINTF("\n \t ID :%d", pcurrentstudent->student.ID);
				DPRINTF("\n \t name :%s", pcurrentstudent->student.Sname);
				DPRINTF("\n \t height :%f", pcurrentstudent->student.height);
				return 1;
			}
			else
			{
				pcurrentstudent = pcurrentstudent->PNextStudent;
				count++;
			}
	}
	return 0;
}


void getcount ()
{
	int count = 0;
	struct SStudent* pcurrentstudent = gpFirststudent;
	while(pcurrentstudent)
	{
		pcurrentstudent = pcurrentstudent->PNextStudent;
		count++;
	}
	DPRINTF("\n The number of students = %d",count);
}

int node_end ()
{
	struct SStudent* pmain = gpFirststudent;
	struct SStudent* prefrence = gpFirststudent;
	char temp_text[40];
	unsigned int i;
	DPRINTF("\n Enter the node number from the end: ");
	gets(temp_text);
	i=atoi(temp_text);
	while(i--)
	{
		prefrence = prefrence->PNextStudent;
	}
	while(1)
	{
		if(prefrence)
		{
			prefrence = prefrence->PNextStudent;
			pmain = pmain->PNextStudent;
		}
		else
		{
			DPRINTF("\n \t ID :%d", pmain->student.ID);
			DPRINTF("\n \t name :%s", pmain->student.Sname);
			DPRINTF("\n \t height :%f", pmain->student.height);
			return 1;
		}
	}
}

void middle_list ()
{
	struct SStudent* pSlow = gpFirststudent;
	struct SStudent* pFast = gpFirststudent;
	int count =0;
	while(pFast->PNextStudent)
	{
		pSlow = pSlow->PNextStudent;
		pFast = pFast->PNextStudent->PNextStudent;
		count++;
	}

	DPRINTF("\n record number :%d",count+1);
	DPRINTF("\n \t ID :%d", pSlow->student.ID);
	DPRINTF("\n \t name :%s", pSlow->student.Sname);
	DPRINTF("\n \t height :%f", pSlow->student.height);
}

int detect_loop ()
{
	struct SStudent* pSlow = gpFirststudent;
	struct SStudent* pFast = gpFirststudent;
	while(pSlow && pFast && pFast->PNextStudent)
	{
		pSlow = pSlow->PNextStudent;
		pFast = pFast->PNextStudent->PNextStudent;
		if(pSlow == pFast)
		{
			DPRINTF("\n There is a loop ");
			return 0;
		}
	}
	DPRINTF("\n There is no loop ");
	return 1;
}

void reverse_list ()
{
	struct SStudent* pCurrentStudent = gpFirststudent->PNextStudent;
	struct SStudent* pPreviousStudent = gpFirststudent;
	struct SStudent* pNext = gpFirststudent;
	gpFirststudent->PNextStudent = NULL;
	while(pCurrentStudent)
	{
		pNext = pCurrentStudent->PNextStudent;
		pCurrentStudent->PNextStudent = pPreviousStudent;
		pPreviousStudent = pCurrentStudent ;
		pCurrentStudent = pNext;
	}
	gpFirststudent = pPreviousStudent;
}













