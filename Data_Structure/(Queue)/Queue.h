#ifndef QUEUE_ARRAY_H_
#define QUEUE_ARRAY_H_

#define Max_Size       5 
#define Empty          1
#define NotEmpty       0
#define NotFully       0 
#define Fully          1 




void Enqueue(u32 Data);

void Dequeue(void);

u8 Isfully(void);

u8 Isempty(void);

void print_queue(void);



#endif