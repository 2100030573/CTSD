#include <stdio.h> 
#include <math.h>
  int main() 
  {
    float x,sinvalue;
    printf("enter value of x:");
    scanf("%f", &x);
    if (x>0.0 || x<0.0) 
	{    
      sinvalue= sin(1/x);
      printf("Value of sin(1/x) is %0.4f",sinvalue);
    }
    else
    {
    
      printf("Value of x should not be zero.");
    }
   return 0;
  }
