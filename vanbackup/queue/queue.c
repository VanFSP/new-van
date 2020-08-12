#include <stdbool.h>
#include "queue.h"
#include <stdio.h>

void initqueue(queue *q)
{
	q->front=q->rear=0;
}
bool isempty(queue *q)
{
	if(q->front==q->rear)
		return true;
	return false;
}
bool isfull(queue *q)
{
	if((q->rear+1)%MaxSize==q->front)
		return true;
	return false;
}
bool writequeue(int data, queue *q)
{
	if(isfull(q))
	{
		printf("queue is full !\n");
		return false;
	}
	if(q->data[q->rear]!=0)
	{
		//写入数据之前清除原有数据
		q->data[q->rear]=0;
	}
	q->data[q->rear]=data;
	q->rear=(q->rear+1)%MaxSize;
	printf("data is in\n ");
	return true;
}
bool readqueue(int* data,queue *q)
{
	if(isempty(q))
	{
		printf("queue is empty !\n");
		return false;
	}
	*data=q->data[q->front];
	q->front=(q->front+1)%MaxSize;
	return true;
}

