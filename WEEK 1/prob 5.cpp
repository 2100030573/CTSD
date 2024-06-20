#include<stdio.h>
int calheight(int d);
float calcm(int height);
int main()
{
	int d,height;
    float cm;
	printf("enter the day number");
	scanf("%d",&d);
	height=calheight(d);
	cm=calcm(height);
	printf("height in centimeters is :%f",cm);
	return 0;
}
int calheight(int d)
{
	int height;
	height=1+2*(d-1);
	return height;
}
  float calcm(int height)
{
	float centimeter;
	centimeter=height*2.54;
	return centimeter;
}
