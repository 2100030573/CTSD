#include<stdio.h>
int calproduct(int a[4],int n);
int main()
{
	int a[4],n,product;
	n=4;
	printf("enter four values");
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	product=calproduct(a,n);
	printf("product of odd numbers is %d",product);
	return 0;
}
int calproduct(int a[4],int n)
{
    int product ;
	product=1;
	product=a[0]%2!=0?product*a[0]:product*1;
	product=a[1]%2!=0?product*a[1]:product*1;
	product=a[2]%2!=0?product*a[2]:product*1;
	product=a[3]%2!=0?product*a[3]:product*1;
	return product;
		
}
