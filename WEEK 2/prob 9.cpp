#include<stdio.h>
void cal(int a[7],int n);
int main()
{
	int a[7],n;
	n=7;
	printf("enter filled or empty");
	scanf("%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6]);
	cal(a,n);
	return 0;
}
void cal(int a[7],int n)
{
	int count;
	count=count+(a[0]==1?1:0);
	count=count+(a[1]==1?1:0);
	count=count+(a[2]==1?1:0);
	count=count+(a[3]==1?1:0);
	count=count+(a[4]==1?1:0);
	count=count+(a[5]==1?1:0);
	count=count+(a[6]==1?1:0);
	printf("seats filleed is %d",count);
    printf("seats empty is %d",n-count);	
}
