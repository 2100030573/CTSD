#include<stdio.h>
void mintomax(int n1,int n2,int n3);
int main()
{
    int n1,n2,n3;
	printf("neter n1,n2,n3 values");
	scanf("%d%d%d",&n1,&n2,&n3);
	mintomax(n1,n2,n3);
	return 0;
}
void mintomax(int n1, int n2,int n3)
{
	int temp;
	if (n1>n2)
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
	if (n1>n3)
	{
		temp=n1;
		n1=n3;
		n3=temp;
	}
	if (n2>n3)
	{
		temp=n2;
		n2=n3;
		n3=temp;
	}
	printf("min to max order is \n%d\n%d\n%d",n1,n2,n3);
}
