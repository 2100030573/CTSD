#include<stdio.h>
int main()
{
	int i,n,x=1;
	printf("factorial of number :");
	scanf("%d",&n);
	while (i=n)
    {
     i>0;
     printf("%d*",i);
     n--;
     x=x*i;
 }
     
printf("the answer is %d\n",x);
return 0;
}
