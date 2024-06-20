#define SIZE 10 
#include<stdio.h> 
struct queue 
{ 
    int a[SIZE]; 
    int front,rear; 
}; 
void enqueue(); 
void dequeue(); 
void display(); 
struct queue q; 
int main() 
{ 
    q.front=-1; 
    q.rear=-1; 
    int choice; 
    char ch; 
    while(1) 
    { 
       printf("1.enqueue 2.dequeue 3.display"); 
       printf("enter your choice"); 
       scanf("%d",&choice); 
       if(choice==1) 
       enqueue(); 
       if(choice==2) 
       dequeue(); 
       if(choice==3) 
       display(); 
       printf("do you want to continue y/n"); 
       scanf(" %c",&ch); 
       if(ch=='n'||ch=='N') 
       break; 
    } 
   return 0;  
} 
void enqueue() 
{ 
    int value; 
    if(q.rear==SIZE-1) 
    printf("queue stackoverflow"); 
    else 
    { 
    printf("enter your value"); 
    scanf("%d",&value); 
    if(q.rear==-1 && q.front==-1) 
    { 
        q.rear=q.front=0; 
    } 
    q.a[q.rear]=value; 
    } 
} 
void dequeue() 
{ 
    if(q.front==-1 && q.rear==-1) 
    printf("queue is underflow"); 
    else 
    { 
        printf("%d is deleted ",q.a[q.front]); 
        if(q.front==SIZE-1 && q.rear==SIZE-1) 
        { 
        q.front=q.rear=-1; 
        } 
     
    else 
    q.front=q.front+1; 
    } 
} 
void display() 
{ 
    int i; 
    printf("value in the queue"); 
    for(i=q.front;i<=q.rear;i++) 
    printf("\n%d",q.a[i]); 
}
