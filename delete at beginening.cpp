#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first;
void create();
void deleteatbegenning();
void display();
int main()
{
	int n,i,first=NULL;
	printf("enter number of values");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		create();
	}
	deleteatbegenning();
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
void deleteatbegenning()
{
	struct node *temp;
	temp=first;
	first=first->next;
	free(temp);
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
