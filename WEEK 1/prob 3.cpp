#include<stdio.h>
#include<math.h>
float caldeg(float r);
float caly(float deg);
int main()
{
	float deg,r,y;
	printf("enter r value");
	scanf("%f",&r);
	deg=caldeg(r);
	y=caly(deg);
	printf("answer=%f",y);
	return 0;
}
float caldeg(float r)
{
	float deg;
	deg=0.0174533*r;
	return deg;
}
float caly(float deg)
{
	float y;
	y=tan(deg);
	return y;
}
