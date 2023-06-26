#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "D_Linledlist.h"

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

Element *Head = NULL ; 
Element *Tail = NULL ; 
Element *user = NULL ;
Element *Temp = NULL ; 



Element* Creat_Element ()
{
	return (Element*)malloc( sizeof( Element ) );  // ptr = (casting *)malloc(num of ele * sizeof( Element )); 
}

void Add_Element()
 {/*1-will call the Create Function Element*/
	 user =  Creat_Element () ;   // if (ptr_user == null){break;}
                                      // else {  .........  }	 
	
/*2-will scan the Data from User */
	 printf("Enter the Data : ");
	 scanf ("%d" , &( user -> data ) );
//or scanf ("%d" , (*user).data );	
	
/*3-Will assign the Next var for this elemet = NULL*/
	 user -> next = NULL ;
	 
						 
/*4-Case-one should be check if we didn't have any linkedlist */
	if (Head == NULL && Tail == NULL)
	{
		user -> prevs = NULL ;
		Head = user ;
		Tail = user ;
	}
	
	else 
	{
		Tail -> next = user ;
		user -> prevs = Tail ;
		user -> next = NULL ;
		Tail = user ;
	}
 }	
		
		
Element* Search_Element (u8 data_sear)
{
	u8 flage = 0 ; 
	Temp = Head ;
	
	while ( Temp -> next != NULL  )
	{   
       if ( Temp -> data == data_sear )
	   {
		  // ptr_Temp = ptr_Temp -> ptr_next ;

           return  Temp ;
		   flage++ ; 
		   break ; 		   
	   }

		Temp = Temp -> next ;   
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
	Temp = Search_Element (data_sear) ;
	Element *Temp2 = Head ;
	
if ( Temp != NULL )	
{
	
/*case-1 the linkedlist have 1    element */
      
   if ( Temp == Head && Temp == Tail ) 
   {
	   Head = NULL ;
	   Tail = NULL ; 
   }  

/*case-2 the element is the end   element */
	
   else if ( Temp == Tail )
   {
	   Tail = Tail-> prevs ; 
	   Tail-> next =  NULL ; 
   }     

/*case-3 the element is the first element */
	
  else if ( Temp == Head )
   {
	   Head = Head ->  next ;
	   Head -> prevs = NULL ; 
   }

/*case-4 the element is insert    element */

   else
   {
	  (Temp->prevs) ->next  = Temp->next   ;
	  (Temp->next) ->prevs  = Temp ->prevs ; 
   } 
	
   free( Temp) ;
}

else { printf("List is Empty\n"); }

}


void Print_LinkedList()
{
	printf("\n\n----------------------\n");
	
	if (Head != NULL)
	{
/* Print all nodes util you find the last node that next pointer equals to NULL  */

        u8 i = 1 ; 
		Temp = Head ;                    // &Temp =&Head 
		
		while ( Temp != NULL  )
		{   printf("Node Number %d = %d\n", i, Temp -> data);
	        i++ ; 
			Temp = Temp -> next ;   // &Temp = &Temp+1 = ptr_next
		}

	}
	
	else
	{
		printf("List is Empty\n");
	}
	
	printf("----------------------\n\n\n");
}