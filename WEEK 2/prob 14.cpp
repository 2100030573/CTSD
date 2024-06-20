#include<stdio.h>
int main()
{
	char ch[5];
	printf("enter characters");
	scanf("%c%c%c%c%c",&ch[0],&ch[1],&ch[2],&ch[3],&ch[4]);
	scanf("%c",&ch[0] );
	scanf("%c", &ch[1] );
	scanf("%c", &ch[2] );
	scanf("%c", &ch[4]);
	printf("%c",*ch[0]);
	printf("%c",*ch[1]);
	printf("%c",*ch[2]);
	printf("%c",*ch[3]);
	printf("%c",*ch[4]);
	return 0;
}
