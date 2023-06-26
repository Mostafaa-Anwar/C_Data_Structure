#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "D_Linledlist.h"

void main ()
{
	
	u8  num_element  ; 
	u8  num_search ; 
	u8  counter , i ,j  ; 
	
	
	printf("Enter the Number Of Elemnt : ");
	scanf("%d",&num_element);
	
	
	//for scanning 
	for( counter = 0 ; counter < num_element ; counter++)
	{
		printf("\nEnter the Number[%d]:",counter+1);
		Add_Element();
	}
	
	//for Search_Element
	printf("Enter the num_search : ");
	scanf("%d",&num_search);
	printf("\n num_addres  = %p\n\n",Search_Element (num_search));
	printf("\n num_addres  = %d\n\n", *( Search_Element (num_search))  );
	
	//for Delete_Element
	printf("Enter the Delete_Element : ");
	scanf("%d",&num_search);
	
	Delete_Element (num_search);
	
	//for Display
	Print_LinkedList() ;
	
	
	/***********************************************/

}