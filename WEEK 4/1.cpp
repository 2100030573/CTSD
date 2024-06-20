#include<stdio.h>
int main()
{
	int n,a,b,sum=0;
	scanf("%d",&n);
	while(n>=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("%d",sum);
    
	
}
