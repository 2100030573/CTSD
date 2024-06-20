#include<stdio.h>
int main()
{
 int n,i;
 printf("enter number of tokens");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(i%2==0)
  {
   printf("number %d plz wait to meet Dr.Amrutha\n",i);
  }
  else
  {
   printf("number %d plz wait to meet Dr.Diwakar\n",i);
  }
 }
}
