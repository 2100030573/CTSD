#include<stdio.h>
int main()
{
	int n,f1,f2,f3,i;
	printf("enter n value");
	scanf("%d",&n);
	
	f1=0;
	f2=1;
	printf("%d\n%d\n",f1,f2);
	for(i=1;i<=n;i++)
	{
		f3=f1+f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;		
	}
	
}
