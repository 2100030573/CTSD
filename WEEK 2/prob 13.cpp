#include<stdio.h>
float calpercentage(int m[5]);
int main()
{
	int m[5];
	float percentage;
	printf("enter marks of five subjects");
	scanf("%d%d%d%d%d%d",&m[0],&m[1],&m[2],m[3],m[4]);
	percentage=calpercentage(m);
	printf("percentage is %f",percentage);
	return 0;
}
float calpercentage(int m[5])
{
	float percentage;
	percentage=((m[0]+m[1]+m[2]+m[3]+m[4])/500)*100;
	return percentage;
}
