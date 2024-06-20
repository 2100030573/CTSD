#include<stdio.h>
int main()
{
	int a,b,*c;
	a=20;
	b=30;
	c=&a;
	printf("a is %d",*c);
	printf("\na adress is %u",c);
	c=&b;
	printf("\nb is %d",*c);
	printf("\nb adress is %u",c);
	return 0;
}
	
