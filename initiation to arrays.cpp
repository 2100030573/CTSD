#include<stdio.h>
int calsum(int a[5],int n);
int main()
{
	int a[5],n,sum;
	printf("enter 5 values");
	scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	n=5;
	sum=calsum(a,n);
	printf("sum of 5 values is %d",sum);
	return 0;
}
int calsum(int a[5],int n)
{
	int sum;
	sum=a[0]+a[1]+a[2]+a[3]+a[4];
	return sum;
}

