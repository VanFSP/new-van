#include <stdio.h>
char a[100];
char* trstring(char* str)
{
	int i=0;
	char *p;
	p=str;
	while(*str)
	{
		a[i]=*str;
		if(a[i]=='F')
		{	
			a[i]='f';
			a[++i]='l';
			a[++i]='y';
		}
		i++;
		str++;
	}
	a[i]=*str;
	p=a;
	return p;
}
int main()
{
	char c[100]="123FabcF456";
	printf("%s",trstring(c));
	return 0;
}
