#include<stdio.h>
#include<math.h>
float caldistance(int x1,int x2,int x3,int x4);
float caltotaldistance(float distance);
int main()
{
	int x1,x2,y1,y2;
	float distance,totaldistance;
	printf("enter x1 value");
	scanf("%d",&x1);
	printf("enter x2 value");
	scanf("%d",&x2);
	printf("enter y1 value");
	scanf("%d",&y1);
	printf("enter y2 value");
	scanf("%d",&y2);
	distance=caldistance(x1,x2,y1,y2);
	totaldistance=caltotaldistance(distance);
	printf("total distance is %f",totaldistance);
	return 0;
}
float caldistance(int x1,int x2,int y1,int y2)
{
	float distance;
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return distance;
}
float caltotaldistance(float distance)
{
	float totaldistance;
	totaldistance=distance+2.000;
	return totaldistance;
}

 
