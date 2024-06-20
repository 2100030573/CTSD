#include<stdio.h>
void calencrypt(char msg[10]);
int main()
{
	char msg[10];
	printf("enter your message");
	scanf("%s",msg);
	calencrypt(msg);
	return 0;
	
}
void calencrypt(char msg[10])
{
	printf("after encription");
    printf("%c",msg[0]+1);
	printf("%c",msg[1]+1);
	printf("%c",msg[2]+1);
	printf("%c",msg[3]+1);
	printf("%c",msg[4]+1);
	printf("%c",msg[5]+1);
	printf("%c",msg[6]+1);
	printf("%c",msg[7]+1);
	printf("%c",msg[8]+1);
	printf("%c",msg[9]+1);	
}
