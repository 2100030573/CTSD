#include<stdio.h>
float cali(int n);
float calx(float i,float y);
int main()
{
	int n;
	float x,i,y;
	printf("enter n,y values");
	scanf("%d%f",&n,&y);
	i=cali(n);
	x=calx(i,y);
	printf("total hours=%f",x);
	return 0;
}
float cali(int n)
{
	float i;
	i=(n*(n+1))/2;
	return i;
}
float calx(float i,float y)
{
	float x;
	x=i*(y/60);
	return x;
	
}

