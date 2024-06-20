#include<stdio.h>
void weekday(int n);
int main()
{
	int n;
	printf("enter no day");
	scanf("%d",&n);
	weekday(n);
	return 0;
}
void weekday(int n)
{
	switch (n)
	{
		case  1: 
		         printf("monday");
		         break;
		
		case  2: 
		         printf("tuesday");
		         break;
		
		case  3: 
		         printf("wednessday");
		         break;
	    
	    case  4: 
		         printf("thursday");
		         break;
		case  5: 
		         printf("friday");
		         break;
		case  6: 
		         printf("saturday");
		         break;
		case  7: 
		         printf("sunday");
		         break;
				 
		 default:
		 	     printf(" invalid");
}}
