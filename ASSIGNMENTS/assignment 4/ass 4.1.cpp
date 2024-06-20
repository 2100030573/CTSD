#include<stdio.h>
int main()
{
    int a,b,c,maximum;
    printf("enter three values");
    scanf("%d%d%d",&a,&b,&c);
    maximum=a>b?a:b;
    maximum=maximum>c?maximum:c;
    printf("maximium value is %d",maximum);
    return 0;
}
	    
