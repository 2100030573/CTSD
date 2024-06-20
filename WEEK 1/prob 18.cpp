#include<stdio.h>
float calradius(float sidelength);
int main()
{
	float sidelength,radius;
	printf("enter sidelength value");
	scanf("%f",&sidelength);
	radius=calradius(sidelength);
	printf("%.2f",radius);
	return 0;
	
}
float calradius(float sidelength)
{
	float radius;
	radius=(sidelength/2)*3.28;
	return radius;
}
