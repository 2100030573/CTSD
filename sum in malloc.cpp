#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter your values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("%d",sum);
}
