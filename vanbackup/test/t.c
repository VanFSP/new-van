#include <stdio.h>
void redata(int* *data)
{
	int a=20;
	*data=&a;
	printf("%d",**data);
}
int main()
{
	int da=10;
	int *data;
	data=&da;
	redata(&data);
	printf("%d\n",*data);
	return 0 ;
}
