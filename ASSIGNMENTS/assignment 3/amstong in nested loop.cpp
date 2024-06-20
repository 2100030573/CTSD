#include<stdio.h>
int main()
{
	int n,m,r,temp,sum;
	printf("enter n,m values");
	scanf("%d%d",&n,&m);
	for(   ;n<=m;n++)
	{
		temp=n,sum=0;
		while (n>0)
		{
			r=n%10;
			sum=sum+r*r*r;
			n=n/10;
		}
		if (sum==temp)
		 printf("\n%d",temp);
		 n=temp;
	}
}
