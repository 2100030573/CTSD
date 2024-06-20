#include<stdio.h>
float calpenprice(int pens);
float calchocolateprice(int chocolates);
float caltotalprice(float penprice,float chocolateprice);
int main()
{
	int pens,chocolates;
	float penprice,chocolateprice,totalprice,moneygiven,moneygaveback;
	printf("enter no. of pens");
	scanf("%d",&pens);
	printf("enter no. of chocolates");
	scanf("%d",&chocolates);
	penprice=calpenprice(pens);
	chocolateprice=calchocolateprice(chocolates);
	totalprice=penprice+chocolateprice;
	printf("totalprice is %f",totalprice);
 	printf("enter amount given");
	scanf("%f",&moneygiven);
	moneygaveback=moneygiven-totalprice;
 	printf("money to be returned is %f",moneygaveback);
	return 0;	
}
float calpenprice(int pens) 
{
	float penprice;
	penprice=pens*1.5;
	return penprice;
}
float calchocolateprice(int chocolates)
{
	float chocolateprice;
	chocolateprice=chocolates*10;
	return chocolateprice;
}

 
