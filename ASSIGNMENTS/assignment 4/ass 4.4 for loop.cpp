#include<stdio.h>
int main()
{
	int i,n,x=1;
	printf("factorial of number :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
    {
     printf("%d*",i);
     x=x*i;
    }
    printf("\nthe answer is %d",x);
    
}
