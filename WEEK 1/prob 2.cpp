#include<stdio.h>
float calltr(float gallons);
float calleftover(float ltr);
int main()
{
	float gallons,ltr,leftover;
	printf("enter milk in gallons:");
	scanf("%f",&gallons);
	ltr=calltr(gallons);
	leftover=calleftover(ltr);
	printf("milk leftover is:%f",leftover);
	return 0;
}
float calltr(float gallons)
{
	float ltr;
	ltr=gallons*3.785;
	return ltr;
}
float calleftover(float ltr)
{
	float leftover;
	leftover=(ltr-36);
	return leftover;
}
