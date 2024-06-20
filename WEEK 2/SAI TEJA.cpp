#include<stdio.h>
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	if (n<9)
	   {
	   	printf("the given number is less than 9");
	   }
	else if (n==9)
	   {
	   	printf("the given number is equal to 9");
	   }
	else
	   {
	   	printf("the given number is grater than 9");
	   }
	 return 0;
}
