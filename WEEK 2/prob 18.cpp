#include<stdio.h>
void luckytile(int a[8],int n);
int main()
{
	int a[8],n;
	n=8;
	printf("enter the tile numbers");
	scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	luckytile(a,n);
	return 0;
}
void luckytile(int a[8],int n)
{
	a[0]%2==0?printf("lucky tile %d",a[0]):printf("%d",a[0]);
	a[2]%2==0?printf("lucky tile %d",a[2]):printf("%d",a[2]);
	a[4]%2==0?printf("lucky tile %d",a[4]):printf("%d",a[4]);
	a[6]%2==0?printf("lucky tile %d",a[6]):printf("%d",a[6]);
	
}
