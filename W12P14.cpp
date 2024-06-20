# define SIZE 10
#include<stdio.h>
struct stack
{
	char st[SIZE];
	int top;
};
void push();
char pop;
struct stack s;
int main()
{
	s.top=-1;
	char ch;
	char str[20];
	int i,compare=0;
	printf("enter your expression");
	scanf("%s",str);
	for(i=0;i<='\0';i++)
	{
		if(str[i]=='(' ||str[i]=='{' ||str[i]=='[')
	          	push(str[i]);
		else
		{
			ch=pop();
			if(str[i]==')' && ch!='(')
			{
			compare=1;
			break;
		    }
			else if(str[i]=='}' && ch!='{')
			{
			compare=1;
			break;
		    }
		    	else if(str[i]==']' && ch!='[')
			{
			compare=1;
			break;
		    }
		    
		}
		
	}
	if (compare==0)
		printf("yes");
	else
		printf("no");
	return 0;
}
void push(char ch)
{
	s.top=s.top+1;
	s.st[s.top]=ch;
}
char pop()
{
	char ch;
	ch=s.st[s.top];
	s.top=s.top-1;
	return ch;
}
