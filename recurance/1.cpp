#include<stdio.h>
void reverse(int n);
int main()
{
	int n;
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	int r;
	if(n>0)
	{
	r=n%10;
	printf("%d",r);
	n=n/10;
	reverse(n);
}
	
}
