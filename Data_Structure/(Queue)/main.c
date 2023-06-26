#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Queue.h"

void main ()
{
	
	u32 dec=0;
	do{
	u32 choose;
	u32 number;
	printf("Enter 1 to enqueue element : \n");
	printf("Enter 2 to dequeue element : \n");
	printf("Enter 3 to print the queue : ");
	scanf("%d",&choose);
	switch(choose )
	{
		case 1 : 
			printf("\nplease enter the data : ");
			scanf("%d",&number);
			Enqueue(number);
			break ; 
		case 2 :  
			Dequeue();
			break ; 
		case 3 :  
			print_queue();
			break ; 
		default :
			printf("\nyour choose not valid\n");
	}
	printf("Enter 1 to Exit  : ");
	scanf("%d",&dec);
	}while(dec!=1);
	
	
	/***********************************************/

}