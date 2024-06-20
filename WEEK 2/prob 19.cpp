#include<stdio.h>
int calchocolate(int days);
int main()
{
	int days,chocolates;
	printf("enter the day number");
	scanf("%d",days);
	chocolates=calchocolate(days);
	printf("chocolates in the given day is %d",chocolates);
	return 0;
}
int calchocolate(int days)
{
	int chocolates;
	chocolates=days*(days+1)/2;
	return chocolates;
 } 
