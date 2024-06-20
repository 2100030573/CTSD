#include<stdio.h>
#include<string.h>
void anagram(char s1[],char s2[]);
int main()
{   
    char s1[15],s2[15];
    printf("enter first word:");
    scanf("%s",s1);
    printf("enter second word:");
    scanf("%s",s2);
    anagram(s1,s2);
    return 0;
}
void anagram(char s1[],char s2[])
{
  char temp;
  int i,j,l1,l2;
  l1=strlen(s1);
  l2=strlen(s2);
  if(l1!=l2)
  {
    printf("not anagram");
  }
  else if(l1==l2)
  {
    for (i=0;i<l1;i++) 
    {
      for (j=i+1;j<l1;j++)
      {
         if (s1[i]>s1[j]) 
         {
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
      }
   }
   for (i=0;i<l2;i++) 
    {
      for (j=i+1;j<l2;j++)
     {
         if (s2[i]>s2[j]) 
         {
            temp = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
  }
  if(strcmp(s1,s2)==0)
   {
      printf("anagram");
   }
  else
   {
    printf("not anagram");
   }
  }
	
}
