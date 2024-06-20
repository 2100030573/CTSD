#include<stdio.h>
float calkm(float distance);
float calmidpoint(float km);
int main()
{
	float distance;
	float km,midpoint;
	printf("enter distance");
	scanf("%f",&distance);
	km=calkm(distance);
	midpoint=calmidpoint(km);
	printf("midpoint=%f",midpoint);
	return 0;
}
float calkm(float distance)
  {
    float km;
    km=distance*1.6;
    return km;
  }
float calmidpoint(float km)
{
	float midpoint;
	midpoint=km/2;
	return midpoint;
}
