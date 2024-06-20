#include<stdio.h>
int main()
{
    float p1,p2,d1,d2,val1,val2,maximumprofit;
    printf("enter p1 value");
    scanf("%f",&p1);
    printf("enter p2 value");
    scanf("%f",&p2);
    printf("enter d1 value");
    scanf("%f",&d1);
    printf("enter d2 value");
    scanf("%f",&d2);
    val1=p1+p2-d2;
    val2=p1+p2-d1;
    maximumprofit=d1>d2?val1:val2;
    p1>0 && p2>0 && d1>=0 && d2>=0?printf("%f",maximumprofit):printf("Error Message");
    return 0;
}
