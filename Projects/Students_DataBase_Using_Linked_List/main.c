/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *  Author : Anwar
 *
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>

#include "Students_DataBase_Using_Linked_List.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}


int main(void)
{
	char temp_text[NAME_LENGTH];
	int Num = 0;
	struct S_StudentNode *gp_Student = NULL ;

	while(1)
	{
		DPRINTF("\n================================================================================================================");
		DPRINTF("\n================================= Welcome to our Students DataBase =============================================");
		DPRINTF("\n================================= Author : Mahmoud Karem Zamel     =============================================");
		DPRINTF("\n================================================================================================================");
		DPRINTF("\n Choose One of the following Options :- \n");
		DPRINTF("\n\t 1 : Add Student.");
		DPRINTF("\n\t 2 : Delete Student.");
		DPRINTF("\n\t 3 : View Students.");
		DPRINTF("\n\t 4 : Delete All.");
		DPRINTF("\n\t 5 : Get Specific Node.");
		DPRINTF("\n\t 6 : Count The Students (Iterative Method).");
		DPRINTF("\n\t 7 : Count The Students (Recursive Method).");
		DPRINTF("\n\t 8 : Get Specific Node (from the end).");
		DPRINTF("\n\t 9 : Get The Middle Student.");
		DPRINTF("\n\t 10: Reverse All Students.");
		DPRINTF("\n\t 11: Exit The Program.");
		DPRINTF("\n======================================================");
		DPRINTF("\n Enter an option number: ");

		gets(temp_text);
		DPRINTF("\n======================================================\n");
		switch(atoi(temp_text))
		{
			case 1:
				LL_AddStudent();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 2:
				LL_DeleteStudent();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 3:
				LL_ViewStudents();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 4:
				LL_DeleteAll();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 5:
				DPRINTF("Enter Node Number: ");
				gets(temp_text);
				Num = atoi(temp_text);
				LL_GetSpecificNode(Num);
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 6:
				Num = LL_Count_Students_IterativeMethod();
				DPRINTF("Student Numbers : %d\n", Num);
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 7:
				Num = LL_Count_Students_RecursiveMethod(gp_Student);
				DPRINTF("Student Numbers : %d\n", Num);
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 8:
				DPRINTF("Enter Node Number from the end : ");
				gets(temp_text);
				Num = atoi(temp_text);
				LL_GetSpecificNode_FromEND(Num);
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 9:
				LL_Get_The_Middle();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 10:
				LL_Reverse_All();
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Done ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				break;

			case 11:
				DPRINTF("\n================================================================================================================");
		        DPRINTF("\n=============================================== Exit ===========================================================");
		        DPRINTF("\n================================================================================================================");
				DPRINTF("\n\n");
				return 0;

			default:
				DPRINTF("\n Invalid Option ... Try Again ... \n\n");
				break;
		}
	}
	return 0;
}