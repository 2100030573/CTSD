#include<stdio.h>
void calbill(int units);
int main()
{
	int units;
	float bill;
    printf("enter units consumed");
	scanf("%f",&units);
	calbill(units);
	return 0;
}
void calbill(int units)
{
    float bill;
    if (units<=50)
	bill=units*2.00; 
    else if	(units>50 && units<=100)
	bill=units*3.00; 
    else if (units>100 && units<=300)
	bill=(units*5.00)+100; 
    else if (units>300 && units<=450)
	bill=(units*6.00)+200; 
    else    
	bill=(units*8.00)+250;
    printf("\nbill is %f",bill);
}
    
    
