#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter i,j values");
	scanf("%d%d",&i,&j);
	for( ;i<=j;i++)
	{
		for(k=1;k<=10;k++)
		{
			printf("\n%d*%d=%d",i,k,i*k);
		}
		printf("\n");
	}
}
