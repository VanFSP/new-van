#include <stdio.h>
#include "queue.h"

int main(void)
{
	queue q;
	int data;
	initqueue(&q);
	printf("enter a array:\n");
	while(scanf("%d",&data))
	{
		if((!writequeue(data,&q))||data==999)
		{
			//printf("queue is full !");
			break;
		}
	}
	printf("%d\n",data);
	while(readqueue(&data,&q))
	{
		printf("%d ",data);
	}

	return 0;
}

