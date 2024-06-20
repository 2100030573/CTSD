#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf(" value in a is %d",a);
	printf(" value in b is %d",b);
	return 0;
}
