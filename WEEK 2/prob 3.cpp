#include<stdio.h>
float calamount(float meal,float tip,float tax);
int main()
{
	float meal,tip,tax;
	float amount;
	printf("enter meal,tippercentage,taxpercentage");
	scanf("%f%f%f",&meal,&tip,&tax);
	amount=calamount(meal,tip,tax);
	printf("amount is %f",amount);
	return 0;
}
float calamount(float meal,float tip,float tax)
{
	float amount;
	tip=(tip/100)*meal;
	tax=(tax/100)*meal;
	amount=meal+tip+tax;
	return amount;
}

