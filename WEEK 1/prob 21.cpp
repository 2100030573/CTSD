#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	a>0?printf("1000"):a<0?printf("-200"):printf("5000");
	return 0;
}
