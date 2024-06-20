#include<stdio.h>
int main()
{
	char name[100],branch[10],gender;
	long int id_num,phone_number;
	float cgpa;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%s\n",name);
	scanf("%l\n",&id_num);
	scanf("%c\n",&gender);
	scanf("%s\n",&branch);
	scanf("%l\n",&phone_number);
	scanf("%f",&cgpa);
	printf("Name =%s",name);
	printf("ID num =%l",id_num);
	printf("gender =%c",gender);
	printf("");
	printf("");
	printf("");
    }
	return 0;		
}
