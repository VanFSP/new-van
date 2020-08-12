#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

#define MaxSize 10

typedef struct Queue
{
	int front;
	int rear;
	int data[MaxSize];
}queue;

void initqueue(queue *q);
bool isempty(queue *q);
bool isfull(queue *q);
bool writequeue(int data,queue *q);
bool readqueue(int* data,queue *q);

#endif
