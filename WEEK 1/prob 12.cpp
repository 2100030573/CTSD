#include<stdio.h>
int calage(int presentyear,int presentmonth,int birthyear,int birthmonth);
int main()
{
	int  presentyear,presentmonth,birthyear,birthmonth,age,years;
	int months;
	printf("enter present year ");
	scanf("%d",&presentyear);
	printf("enter  present month");
	scanf("%d",&presentmonth);
	printf("enter birth year");
	scanf("%d",&birthyear);
	printf("enter birth month");
	scanf("%d",&birthmonth);
	age=calage(presentyear,presentmonth,birthyear,birthmonth);
	years=age/12;
	months=age%12;
	printf(" age in years is %d",years);
	printf("\nage in months is %d",months);
	return 0;
}
int calage( int presentyear,int presentmonth,int birthyear,int birthmonth)
{
	int age;
	age=(presentyear*12+presentmonth)-(birthyear*12+birthmonth);
	return age;
	
}
