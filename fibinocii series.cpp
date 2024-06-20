#include<stdio.h>
int main()
{
    int f1,f2,f3,i;
    scanf("%d%d",&f1,&f2);
    f3=f1+f2;
    printf("%d\n",f3);
    for(i=1;i<=6;i++)
	{
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("%d\n",f3)
	} 
}
