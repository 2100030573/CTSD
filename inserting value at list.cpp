#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first;
void create();
void max();
int main()
{
	int i,n;
	printf("enter number of values");
	scanf("%d",&n);
	first=NULL;
	for(i=0;i<=n;i++)
	{
		create();
	}
	max();
	return 0;
}
void create()
{
	struct node *newnode,*temp;
	int value;
	printf("enter your value");
	scanf("%d",&value);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next = NULL;
	if(first==NULL)
	{
		first=newnode;
	}
	else
	{
		temp=first;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->data=newnode;
	}

}
void max()
{
	struct node *newnode,*temp;
	int maxval;
	temp=first;
	maxval=temp->next;
	while(temp!=NULL)
	{
		if (max< temp->data)
		{
			maxval=temp->data;
		}
		temp=temp->next;
	}
	printf("%d",maxval);
}

