#define SIZE 10
#include<stdio.h>
void push();
void pop();
void peakelement();
void display();
struct stack
{
	int a[SIZE];
	int top;
};
struct stack s;
int main()
{
	int choice;
	char ch;
	while(1)
	{
		printf("1.push 2.pop 3.peak element 4.display");
		printf("enter your choice");
		scanf("%d",&choice);
		if(choice==1)
		push();
		else if(choice==2)
		pop();
		else if(choice==3)
		peakelement();
		else
		display();
		printf("do you want to continue");
		scanf("%c",ch);
		if(ch=='n' || ch=='N')
		break;
	}
	return 0;
}
void push()
{
	int value;
	if(s.top==SIZE-1)
	    printf("stack overflow");
	else 
	{
		printf("enter you value");
		scanf("%d",value);
		s.top=s.top+1;
		s.a[s.top]=value;
	}
}
void pop()
{
	int value;
	if(s.top==-1)
	printf("stack underflow");
	else
	{
		s.top=s.top-1;
		s.a[s.top]=value;
	}
}
void peakelement()
{
	if(s.top==-1)
	{
		printf("stack is empty");
	}
	else
	printf("peak element is %d",s.a[s.top]);
}
void display()
{
	if(s.top==-1)
	printf("stack is empty");
	else
	
	for(int i=0;i<=s.top;i++)
	{
		printf("%d",s.a[i]);
	}
}
