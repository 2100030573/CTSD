#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first;
void create();
void insertatfirst();
void insertatmiddle(int n);
void insertatend();
void deleteatfirst();
void deleteatmiddle(int n);
void deleteatend();
void display();
int main()
{
	int n,i,first=NULL;
	printf("enter number of nodes in your list :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		create();
	}
	insertatfirst();
	display();
	insertatmiddle(n);
	display();
	insertatend();
	display();
	deleteatfirst();
	display();
    deleteatmiddle(n);
    display();
    deleteatend();
    display();
	display();
	display();
	return 0;
}
void create()
{
	struct node *newnode,*temp;
	int value;
	printf("enter your value ");
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
void insertatfirst()
{
    struct node *newnode;
	int value;
	printf("value to be inserted");
	scanf("%d",&value);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=first;
	first=newnode;	
}
void insertatmiddle(int n)
{
	struct node *newnode,*temp;
	int i,value;
	printf("enter value to be inserted");
	scanf("%d",&value);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	temp=first;
	for(i=1;i<=n/2;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void insertatend()
{
    struct node *newnode,*temp;
	int value;
	printf("value to be inserted");
	scanf("%d",&value);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	temp=first;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void deleteatfirst()
{
    struct node *temp;
	temp=first;
	first=first->next;
	free(temp);
	printf("delete at first");
}
void deleteatmiddle(int n)
{
	struct node *temp,*temp1;
	temp=first;
	for(int i=1;i<=n/2;i++)
	{
		temp=temp->next;
		temp1=temp->next;
		temp->next=temp->next->next;
		free(temp1);
	}
	printf("delete at middle");	
}
void deleteatend()
{
	struct node *temp,*temp1;
	temp=first;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	printf("delete at end");
}
void display()
{
	struct node *temp;
	printf("values in the list are: ");
	temp=first;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

