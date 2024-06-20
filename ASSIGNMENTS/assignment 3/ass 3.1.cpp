#include<stdio.h>
int main()
{
   int i,sum;
   for(i=9;i<=300;i++)
   {
     if(i%7==0 && i%63!=0)
     sum=sum+i;
   }
   printf("sum is %d",sum);
  return 0;
}
