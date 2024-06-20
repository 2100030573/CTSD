#include<stdio.h>
int calsugar(int initialtemp,int finaltemp,int solubility,int increasedsolubility);
int main()
{
	int initialtemp,finaltemp,solubility,increasedsolubility,sugardissolves;
	printf("enter initialtemperature");
	scanf("%d",&initialtemp);
	printf("enter  finaltemperature");
	scanf("%d",&finaltemp);
	printf("enter solubility");
	scanf("%d",&solubility);
	printf("enter incrasedsolubility");
	scanf("%d",&increasedsolubility);
	sugardissolves=calsugar(initialtemp,finaltemp,solubility,increasedsolubility);
	printf("sugar can be dissolved is %d",sugardissolves);
	return 0;
}
int calsugar(int initialtemp,int finaltemp,int solubility,int increasedsolubility)
{
	int sugardissolves;
	sugardissolves=solubility+((finaltemp-initialtemp)*increasedsolubility);
	return sugardissolves;
}

