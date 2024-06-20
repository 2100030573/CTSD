#include<stdio.h>
int calsum(int a[10],int n);
int main()
{
	int a[10],n,sum;
	printf("enter phone number ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	sum=calsum(a,n);
	printf("sum is %d",sum);
	return 0;
}
int calsum(int a[10],int n)
{
	int sum;
	sum=a[0]+a[1]+a[8]+a[9];
	return sum; 
}

