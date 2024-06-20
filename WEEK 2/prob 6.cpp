#include<stdio.h>
int caltotalresistance(int a[10],int n);
int main()
{
	int a[10],n,totalresistance;
	printf("enter number of resistance");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	n=10;
	totalresistance=caltotalresistance(a,n);
	printf("totalresistance is %d",totalresistance);
	return 0;
}
int caltotalresistance(int a[10],int n) 
{
	int totalresistance;
	totalresistance=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
	return totalresistance;
}
