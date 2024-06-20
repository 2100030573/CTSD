#include<stdio.h>
int calremaining(int total,int attended);
int main()
{
	int total,attended,result;
	printf("enter total and attended classes");
	scanf("%d%d",&total,&attended);
	result=calremaining(total,attended);
	printf("result %d",result);
	return 0;
}
int calremaining(int total,int attended)
{
	int result;
	result=(total*70)/100-attended;
	return result;
}
