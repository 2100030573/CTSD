#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
    int temp;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&temp;
	temp=*x;
	a=*y;
	b=*z;
	printf("after swapping %d %d",*x,*y);	
}


