#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Linledlist.h"

typedef unsigned char           u8  ;
typedef unsigned short int      u16 ;
typedef unsigned long int       u32 ;
typedef unsigned long long int  u64 ;

/*
1-Create Node as Struct (New D.T = Element ) 
2-Create the Head(Start) & User 
3-Functoin to Allocate the Element in Memory
4-should be add(linking) the new element as function 
	void Add_Element(void );
*/


// int  *ptr   =  NULL

Element *ptr_Head = NULL ; 
Element *ptr_user = NULL ;
Element *ptr_Temp = NULL ; 



Element* Creat_Element ()
{
	return (Element*)malloc( sizeof( Element ) );  // ptr = (casting *)malloc(num of ele * sizeof( Element )); 
}

void Add_Element()
 {/*1-will call the Create Function Element*/
	 ptr_user =  Creat_Element () ;   // if (ptr_user == null){break;}
                                      // else {  .........  }	 
	
/*2-will scan the Data from User */
	 printf("Enter the Data : ");
	 scanf ("%d" , &( ptr_user -> data ) );
//or scanf ("%d" , (*ptr_user).data );	
	
/*3-Will assign the Next var for this elemet = NULL*/
	 ptr_user -> ptr_next = NULL ;
	 
						 
/*4-Case-one should be check if we didn't have any linkedlist */
	if (ptr_Head == NULL)
	{
		ptr_Head = ptr_user ;         // &Head = &User 
		
 /* OR 	ptr_Head -> ptr_next = ptr_user ;
		ptr_Head -> data  = ptr_user -> data ;
 */	
	}
	
	else 
	{
		ptr_Temp = ptr_Head ;                    // &Temp =&Head 
		while ( ptr_Temp -> ptr_next != NULL  )
		{                                       // ptr_next = &Temp+1      
			ptr_Temp = ptr_Temp -> ptr_next ;   // &Temp = &Temp+1 = ptr_next
		}
/*After the finish the while 
			temp -> next = null ; 
			temp->next = User 
*/		
        ptr_Temp -> ptr_next = ptr_user ; 
	}
 
 }	
		
		
Element* Search_Element (u8 data_sear)
{
	u8 flage = 0 ; 
	ptr_Temp = ptr_Head ;
	
	while ( ptr_Temp -> ptr_next != NULL  )
	{   
       if ( ptr_Temp -> data == data_sear )
	   {
		  // ptr_Temp = ptr_Temp -> ptr_next ;

           return  ptr_Temp ;
		   flage++ ; 
		   break ; 		   
	   }

		ptr_Temp = ptr_Temp -> ptr_next ;   
	}
    
	if (flage == 0 ) { return  NULL ; }
}	

/* or  Search_Element
 		
Element* Search_Element (u8 data_sear)
{
	ptr_Temp = ptr_Head ;
	
	while ( ptr_Temp -> data != data_sear  )
	{   
       if ( ptr_Temp == NULL )
	   {
		  return  NULL ;	   
	   }

		ptr_Temp = ptr_Temp -> ptr_next ;   
	}
    
   return ptr_Temp ; 
}	 


*/


void Delete_Element (u8 data_sear)
{
	ptr_Temp = Search_Element (data_sear) ;
	Element *ptr_Temp2 = ptr_Head ;
	
if ( ptr_Temp != NULL )	
{
	
/*case-1 the linkedlist have 1    element */
// or if ( ptr_Head -> ptr_next == NULL )
      
   if ( ptr_Temp == ptr_Head && ptr_Temp-> ptr_next == NULL ) 
   {
	   ptr_Head = NULL ;      
   }  

/*case-2 the element is the end   element */
// or if ( ptr_Temp-> ptr_next == NULL )
	
   else if ( ptr_Temp != ptr_Head && ptr_Temp-> ptr_next == NULL )
   {
	   while ( ptr_Temp2 -> ptr_next != ptr_Temp )
	   {  ptr_Temp2 = ptr_Temp2 -> ptr_next ; }
      
	      ptr_Temp2 -> ptr_next = NULL ;
   }     

/*case-3 the element is the first element */
// or if ( ptr_Temp == ptr_Head )
	
  else if ( ptr_Temp == ptr_Head && ptr_Temp-> ptr_next != NULL )
   {
	   ptr_Head = ptr_Temp -> ptr_next ; 
   }

/*case-4 the element is insert    element */

   else
   {
	   while ( ptr_Temp2 -> ptr_next != ptr_Temp )
	   {  ptr_Temp2 = ptr_Temp2 -> ptr_next ; }
      
	      ptr_Temp2 -> ptr_next = ptr_Temp -> ptr_next ;
   } 
	
   free( ptr_Temp) ;
}

else { printf("List is Empty\n"); }

}


void Print_LinkedList()
{
	printf("\n\n----------------------\n");
	
	if (ptr_Head != NULL)
	{
/* Print all nodes util you find the last node that next pointer equals to NULL  */

        u8 i = 1 ; 
		ptr_Temp = ptr_Head ;                    // &Temp =&Head 
		
		while ( ptr_Temp -> ptr_next != NULL  )
		{   printf("Node Number %d = %d\n", i, ptr_Temp -> data);
	        i++ ; 
			ptr_Temp = ptr_Temp -> ptr_next ;   // &Temp = &Temp+1 = ptr_next
		}
		printf("Node Number %d = %d\n", i , ptr_Temp -> data);

	}
	
	else
	{
		printf("List is Empty\n");
	}
	
	printf("----------------------\n\n\n");
}