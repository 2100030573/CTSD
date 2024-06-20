#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *first;
void create();
void findmax();
int main()
{
  int n,i;
  printf("enter number of values: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    create();
  }
  findmax();
  return 0;
}
void create()
{
  struct node *newnode ,*temp;
  int value;
  printf("enter your values :");
  scanf("%d",&value);
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=NULL;
  if(first == NULL)
  first=newnode;
  else
  {
    temp=first;
    while(temp->next !=NULL)
    {
      temp=temp->next;
    }
    temp->next=newnode;
  }
}
void findmax()
{
  int max;
  struct node *temp;
  temp=first;
  while(temp!=NULL)
  {
    if( max<temp->data)
    {
      max=temp->data;
    }
     temp=temp->next;
 }
printf("max=%d",max);
}
