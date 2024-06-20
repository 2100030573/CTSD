 #include<stdio.h>
float calkg(float m);
float calheight(float kg,float p);
int main()
{
	float m,kg,height,p;
	printf("enter m and p value");
	scanf("%f%f",&m,&p);
	kg=calkg(m);
	height=calheight(kg,p);
	printf("height=%f",height);
	return 0;
	
}
float calkg(float m)
{
	float kg;
	kg=m*(2.2046);
	return kg;
	
}
float calheight(float kg,float p)
{
	float height;
	height=p/(kg*9.8);
	return height;
	
}

