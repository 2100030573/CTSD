#include<stdio.h>
int suma(int n);
int main()
{
	int n,sum;
	scanf("%d",n);
	printf("%d",suma);
	sum=suma(n);
	
	return 0;
}
int suma(int n)
{
	if (n==1)
	 return 1;
	 
	 else
	  return(n+suma(n-1));
	  
}
