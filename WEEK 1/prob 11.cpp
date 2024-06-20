#include<stdio.h>
int calminutes(int hour1,int min1,int hour2,int min2);
int main()
{
	int hour1,hour2,min1,min2,minutes;
	printf("enter first hour");
	scanf("%d",hour1);
	printf("enter first  min");
	scanf("%d",min1);
	printf("enter second hour");
	scanf("%d",hour2);
	printf("enter second min");
	scanf("%d",min2);
	minutes=calminutes(hour1,hour2,min1,min2);
	printf("problem solved in minutes is %f",minutes);
	return 0;
}
int calminutes(int hour1,int min1,int hour2,int min2)
{
	int minutes;
	minutes=((hour2*60)+min2)-((hour1*60)-min1);
	return minutes;
}
