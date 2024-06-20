#include<stdio.h>
float calounce(int d);
float calliter(float ounce);
int main()
{
	int d;
	float ounce,liter;
	printf("enter the day number");
	scanf("%d",&d);
	ounce=calounce(d);
	liter=calliter(ounce);
	printf("water in liters on required day %f",liter);
	return 0;
}
float calounce(int d)
{
	float ounce;
	ounce=(d*(d+1)*(2*d+1))/6;
	return ounce;
}
float calliter(float ounce)
{
	float liter;
	liter=ounce*0.03;
	return liter;
}
