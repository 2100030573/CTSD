#include<stdio.h>
#include<math.h>
float calradians(float angle);
float caldistance(float height,float radians);
int main()
{
	float height,angle,radians,distance;
	printf("enter angle and height");
	scanf("%f%f",&angle,&height);
	radians=calradians(angle);
	distance=caldistance(height,radians);
	printf(" distance:%f",distance);
	return 0;
}
float calradians(float angle)
{
	float radians;
	radians=(3.141/180)*angle;
	return radians;
}
float caldistance(float height,float radians)
{
	float distance;
	distance=(height/tan(radians));
	return distance;
}
