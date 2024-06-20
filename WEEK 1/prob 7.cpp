#include<stdio.h>
float calarea(float l,float b,float h);
float calcost(float area);
int main()
{
	float l,b,h,area,cost;
	printf("enter l,b,h values");
	scanf("%f%f%f",&l,&b,&h);
	area=calarea(l,b,h);
	cost=calcost(area);
	printf("cost %f",cost);
	return 0;
}
float calarea(float l,float b,float h)
{
	float area;
	area=2*((l*b)+(b*h)+(h*l));
	return area;
}
float calcost(float area)
{
	float cost;
	cost=((area*5)/100);
	return cost;
}
