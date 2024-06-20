#include<stdio.h>
int main()
{
	int i,j,n,count;
	printf("enter i value");
	scanf("%d",&i);
	for( ;i<=j;i++)
	{
		count=0;
		for(j=1;j<=100;j++)
		{
			if(n%i==0)
			 count++;
		}
		if (count==2)
		printf("\n%d",n);
		
	}
}
