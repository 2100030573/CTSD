#include<stdio.h>
void onwhichday(int egg);
int main()
{
	int egg;
	printf("enter the egg number");
	scanf("%d",&egg);
	onwhichday(egg);
	return 0;
}
void onwhichday(int egg)
{
	int day;
	day=2*egg-1;
	printf("The %dth egg is laid on %dth day",egg,day);	
}
