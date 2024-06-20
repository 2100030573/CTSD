#include <stdio.h>
int callbyreference(int *p1, int *p2);
int main()
{
   int firstnumber,secondnumber,sum;
   printf("input the first number : ");
   scanf("%d", &firstnumber);
   printf("input the second  number : ");
   scanf("%d", &secondnumber);   
   sum =callbyreference(&firstnumber,&secondnumber);
   printf("the sum is %d",sum);
   return 0;
}
int callbyreference(int *p1,int *p2) 
{
   int sum;
   sum = *p1 + *p2;
   return sum;
}
