#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Queue.h"

typedef unsigned char           u8  ;
typedef unsigned short int      u16 ;
typedef unsigned long int       u32 ;
typedef unsigned long long int  u64 ;

u8 DataArry[Max_Size] = {0};

s8 size = 0 ; 
u8 Head = 0 ;    //Anwer -> index number 0 
u8 Tail = 0 ;    // Anwer -> 

void Enqueue(u32 Data)
{
	if (Isfully())
	{
		printf("The Qeue is full \n");
	}
	
	else
	{
		DataArry[Tail++] = Data ;
		size++;
	}
}

void Dequeue(void)
{
	if (Isempty() )
	{
	   printf("The Queue is empty ...\n");
	}
	
	else
	{
		printf("the element will be deleted : %d\n",DataArry[Head++]);
		size--;
	}
}

u8 Isempty(void)
{
	if ( Head == Tail )
	{
		printf("\n-Queue is Empty ...\n");
		return Empty ;
	}
   else 
	{
		return NotEmpty ; 
	}
}

u8 Isfully(void)
{
	// or ((Tail - Head ) == ( Max_Size -1 )) || (Head - Tail = 1) ;
	
	if( size == Max_Size )
	{
		printf("\n-Queue is Fully ...\n");
		return Fully ; 
	}
	else 
	{
		return NotFully ; 
	}
}

void print_queue(void)
{
	if(Isempty())
	{  printf("******** The queue is empty *********** "); }
	else
	{
		if(Head>Tail)
		{	
			for(u32 counter=Head;counter<Max_Size;counter++)
			{
				printf("-----\n");

				printf("the data in index %d : %d\n",counter,DataArry[counter]);			
			}
			for(u32 counter1=0;counter1<Tail;counter1++)
			{
				printf("-----\n");

				printf("the data in index %d : %d\n",counter1,DataArry[counter1]);			
			}
		}
		else
		{
			for(u32 counter2=Head;counter2<Tail;counter2++)
			{
				printf("-----\n");

				printf("the data in index %d : %d\n",counter2,DataArry[counter2]);
			}
		}
	}
}
