#include<stdio.h>
void convert( char str[5]);
int main()
{
	char str[5];
	printf("enter your word");
	scanf("%s",str);
	convert(str);
	return 0;
}
void convert( char str[5])
{
	str[0]=str[0]-32;
	str[1]=str[1]-32;
	str[2]=str[2]-32;
	str[3]=str[3]-32;
	str[4]=str[4]-32;
	printf("%s",str);
}
