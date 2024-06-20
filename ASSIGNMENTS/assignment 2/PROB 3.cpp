#include<stdio.h>
int main()
{
	int a[5],largest;
    printf("enter 5 values\n");
    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    largest=a[0]>a[1]?a[0]:a[1];
    largest=largest>a[2]?largest:a[2];
    largest=largest>a[3]?largest:a[3];
    largest=largest>a[4]?largest:a[4];
    printf("maximun element is %d",largest);
	return 0;
}
