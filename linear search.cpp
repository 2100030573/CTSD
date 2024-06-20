#include <stdio.h>
int search(int arr[],int n,int x);
int main()
{

    int arr[10],j;
    printf("enter your array\n");
    for(j=0;j<10;j++)
    {
    	scanf("%d",&arr[j]);
	}
    int x;
    printf("enter X");
    scanf("%d",&x);
    int n = sizeof(arr) / sizeof(arr[0]);
    int result=search(arr, n, x);
    (result==-1)?printf("Element is not present in array"):printf("Element is present at index %d", result);
    return 0;
}
int search(int arr[],int n,int x)
{
    int i;
    for (i=0;i<n;i++)
        if(arr[i]==x)
         return i;
    return -1;
}
