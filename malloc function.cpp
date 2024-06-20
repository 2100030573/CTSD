#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p;
	printf("enter n value");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter your values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("values in array are");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
