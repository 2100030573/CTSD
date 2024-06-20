#include<stdio.h>  
struct student  
{  
  char name[50],branch[3];
  int number,year,fees;  
};  
int  main()  
{  
 int n;
 printf("enter number of students");
 scanf("%d",&n);
 struct student s[n];  
 int i; 
 for(i=0;i<n;i++)  
 {  
  printf ("enter student name,number,branch,year,fees:\n");  
  scanf(" %s %d %s %d %d",s[i].name,&s[i].number,s[i].branch)
  
  
  
  
  
  
  ,&s[i].year,&s[i].fees);  
 }  
 for(i=0;i<n;i++)
 {
 	printf("%d\t%s\t%s\t%\t%d\n",s[i].number,s[i].name,s[i].branch,s[i].year,s[i].fees);
 }
 
 return 0;
}
