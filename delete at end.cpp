#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first;
void create();
void deleteatend();
void display();
int main()
{
	int n,i,first=NULL;
	printf("enter number of nodes");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		create();
	}
	deleteatend();
	display();
	return 0;
}
void create()
{
	struct node *newnode,*temp;
	int value;
	printf("enter your value");
	scanf("%d",&value);
	newnode=(struct node *)malloc (sizeof(struct node));
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
		temp->next=newnode;
	}
}
void deleteatend()
{
	struct node *temp,*temp1;
	temp=first;
	while(temp->next->next != NULL)
	{
		temp=temp->next;
	}
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
}
void display()
{
	struct node *temp;
	printf("values in the list are:");
	temp=first;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
    }
}
