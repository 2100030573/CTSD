#include<stdio.h>
void calbill(int n);
int main()
{
	int n;
	printf("enter no of copies");
	scanf("%d",&n);
	calbill(n);
	return 0;
}
void calbill(int n)
{
	int total;
	
	if (n<=5)
	{
    total=n*5000;
    printf("\n total amount is %d",total);
    }
    	
    else if (n<10)
    {
    total=n*5000;
    printf("\n total amount is %d",total);
    total=total-((1/10)*total);
    printf("\n total amount afetr discount is %d",total);
    }
    
 
    else if (n<20)
    {
    total=n*5000;
    printf("\n total amount is %d",total);
    total=total-((15/100)*total);
    printf("\n total amount afetr discount is %d",total);
    }
    else
    
    total=n*5000;
    printf("\n total amount is %d",total);
    total=total-((1/5)*total);
    printf("\n total amount afetr discount is %d",total);
    
  }
