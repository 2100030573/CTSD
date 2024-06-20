#include<stdio.h>
int caly(int m,int x);
int main()
{
	int m,x,d,y;
	printf("enter m,x and d values");
	scanf("%d%d%d",&m,&x,&d);
	y=caly(m,x);
	y>=d?printf("%d",y):printf("%d",d);
	return 0;
}
int caly(int m,int x)
{
	int y;
	y=m*x;
	return y;
}
