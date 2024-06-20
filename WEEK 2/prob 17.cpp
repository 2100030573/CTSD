#include<stdio.h>
void min(int m[5]);
void max(int m[5]);
int main()
{
	int m[5],n;
	n=5;
	printf("enter marks of numebr of students ");
	scanf("%d%d%d%d%d,&m[0],&m[1],&m[2],&m[3],&m[4]");
	min (m);
	max (m);
	return 0;
}
void min(int m[5])
{
	int min=0;
	min=m[0]<m[1]?m[0]:m[1];
	min=min<m[2]?min:m[2];
	min=min<m[3]?min:m[3];
	min=min<m[4]?min:m[4];
	printf("minimum value is %d",min);
}
void max (int m[5])
{
	int max=0;
	max=m[0]>m[1]?m[0]:m[1];
	max=max>m[2]?max:m[2];
	max=max>m[3]?max:m[3];
	max=max>m[4]?max:m[4];
	printf("maximum value is %d",max);
}
