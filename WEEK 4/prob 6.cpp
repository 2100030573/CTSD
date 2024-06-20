#include<stdio.h>
void displayvowel(char ch);
int main()
{
     char ch;
	 printf("enter the letter" );
	 scanf("%c",&ch);
	 displayvowel(ch);
	 return 0;	
}
void displayvowel(char ch)
{
	if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	{
		printf("given letter is vowel");
	}
	else
	{
	    printf("given letter is  consonant");	
	}
}
