#include<stdio.h>
void displaystatus(int temp,char cold);
int main()
{
	int temp;
	char cold;
	printf("enter temperature value");
	scanf("%d",&temp);
	printf("enter cold status");
	scanf("%c",&cold);
	displaystatus(temp,cold);
	return 0;
}
void displaystatus(int temp,char cold)
{
	if (temp>=99)
	{
		if (cold=='y' || cold=='Y')
		printf("covid center");
		else
		printf("quarantine");		
	}
	else 
	{
		if (cold=='Y'  || cold=='y')
		printf("seperate office");
		else
		printf("regular office");
    }
		
	}


