#include<stdio.h>
float calfahrenheit(float degrees);
int main()
{
	float degrees,fahrenheit;
	printf("enter temperature in degrees");
	scanf("%f",&degrees);
	fahrenheit=calfahrenheit(degrees);
	printf("temperature in fahrenheit %f",fahrenheit);
	return 0;
	
}
float calfahrenheit(float degrees)
{
	float fahrenheit;
	fahrenheit=(9*degrees/5)+32;
	return fahrenheit;
	
}
