#include<stdio.h>
int calasstprof(int departments,int assistantprofessors,int assistantprofessors1,int assistantprofessors2);
int main()
{
	int departments,assistantprofessors,assistantprofessors1,assistantprofessors2,asstprof;
	printf("enter no of departments");
	scanf("%d",&departments);
	printf("enter  assistant professors");
	scanf("%d",&assistantprofessors);
	printf("enter  assistant professors1");
	scanf("%d",&assistantprofessors1);
	printf("enter  assistant professors2");
	scanf("%d",&assistantprofessors2);
	asstprof=calasstprof(departments,assistantprofessors,assistantprofessors1,assistantprofessors2);
	printf("assistant professors is %d",asstprof);
	return 0;
}
int calasstprof(int departments,int assistantprofessor,int assistantprofessor1,int assistantprofessor2)
{
	int asstprof;
	asstprof=(assistantprofessor+assistantprofessor1+assistantprofessor2)-(departments*departments);
	return asstprof;
}
