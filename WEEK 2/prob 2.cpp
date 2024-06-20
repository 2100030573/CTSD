 #include<stdio.h>
void caltotal(char name[10],float quantity,float price,float total);
int main()
{
	char name[10];
	float quantity,price,balance,total,bill,t1,t2,t3;
	float amount=500.00;
	printf("enter name,quantity,price");
	scanf("%s%f%f",&name,&quantity,&price);
	t1=quantity*price;
	caltotal(name,quantity,price,t1);
	printf("enter name,quantity,price");
	scanf("%s%f%f",&name,&quantity,&price);
	t2=quantity*price;
	caltotal(name,quantity,price,t2);
	printf("enter name,quantity,price");
	scanf("%s%f%f",&name,&quantity,&price);
	t3=quantity*price;
	caltotal(name,quantity,price,t3);
	total=t1+t2+t3;
	balance=amount-total;
	printf("total bill paid is %f",total);
	printf("balance is %f",balance);
	return 0;
}
void caltotal(char name[10],float quantity,float price,float total)
{
	printf("\nname\tquantity\tprice\ttotal");
	printf("\n%s\t%d\t%f\t%f\t",name,quantity,price,total);
}	
	

