#include<stdio.h>
float calintrest(float rate,float principle,float months);
int main()
{
	float rate,principle,months,intrest;
	printf("enter rate,principle,months");
	scanf("%f%f%f",&rate,&principle,&months);
	intrest=calintrest(rate,principle,months);
	printf("simple intrest is %f",intrest);
	return 0;
	
}
float calintrest(float rate,float principle,float months)
{
	float intrest;
	intrest=(principle*months *rate)/100;
	return intrest;
}
