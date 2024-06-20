#include<stdio.h>
int main()
{
	int i=1,n,x=1;
	printf("factorial of number :");
	scanf("%d",&n);
	do
    {
     
     printf("%d*",i);
     x=x*i;
     i++;
    }
    while(i<=n);
    printf(" the answer is %d",x);
}
