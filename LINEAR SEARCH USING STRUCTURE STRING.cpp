#include<stdio.h>
#include<string.h>
struct student
{
	int stnum;
	char name[15];
	int age;
	
};
int main()
{
	int i,n;
	printf("enter number od students");
	scanf("%d",&n);
	struct student s[10];
	
	for(i=1;i<n;i++);
	{
		printf("enter students name,student number,age");
		scanf("%d%s%d",&s[i].stnum,s[i].name,s[i].age);
	}
	printf("enter student name to be seaeched");
	char name[15];
	scanf("%s",&name);
	int search;
	for(i=1;i<n;i++);
	{
		if(strcmp(s[i].name,name==0))
		{
			search=1;
		    break;
		}
	}
	if(search==1)
	{
		printf("given name exist");
	}
	else
	{
		printf("not exist");
	}
	
	
}
