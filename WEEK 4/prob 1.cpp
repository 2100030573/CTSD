#include<stdio.h>
float calBMI(float height,float weight);
int main()
{
	float height,weight,BMI;
	printf("enter height and weight values");
	scanf("%f%f",&height,&weight);
	BMI=calBMI(height,weight);
	printf("BMI value is %f",BMI);
	return 0;
}
float calBMI(float height,float weight)
{
	float a,b,BMI;
	a=height*0.0254;
	b=weight*0.45359237;
	BMI=b/(a*a);
	return BMI;
}

