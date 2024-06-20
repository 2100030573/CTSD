#include<stdio.h>
int main()
{
	int a[9],product=1;
	printf("enter 10 values\n");
	scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8]);
	(a[0]%2==1)?product=product*a[0]:product=product*1;
	(a[1]%2==1)?product=product*a[1]:product=product*1;
	(a[2]%2==1)?product=product*a[2]:product=product*1;
	(a[3]%2==1)?product=product*a[3]:product=product*1;
	(a[4]%2==1)?product=product*a[4]:product=product*1;
	(a[5]%2==1)?product=product*a[5]:product=product*1;
	(a[6]%2==1)?product=product*a[6]:product=product*1;
	(a[7]%2==1)?product=product*a[7]:product=product*1;
	(a[8]%2==1)?product=product*a[8]:product=product*1;
	printf("product of odd numbers is %d",product);
	return 0;
}
