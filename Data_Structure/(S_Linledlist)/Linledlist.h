#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

struct node 
{
	u8 data ; 
	struct node *ptr_next;
};

typedef struct node Element ; // new D.T = Element


Element* Creat_Element ();
void Add_Element();
Element* Search_Element (u8 data_sear);
void Delete_Element (u8 data_sear);
void Print_LinkedList();

#endif