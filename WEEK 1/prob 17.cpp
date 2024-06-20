#include<stdio.h>
int calphd(int btech,int mtech,int ms,int total);
float calbtechpercentage(int btech,int total);
float calmtechpercentage(int mtech,int total);
float calmspercentage( int ms,int total);
float calphdpercentage(int phd,int total);
int main()
{
	int btech,mtech,ms,phd,total;
	float btechpercentage,mtechpercentage,mspercentage,phdpercentage;
	printf("enter total number of students");
	scanf("%d",&total);
	printf("number of students in btech");
	scanf("%d",&btech);
	printf("number of students in mtech");
	scanf("%d",&mtech);
	printf("number of students in ms");
	scanf("%d",&ms);
	phd=calphd(btech,mtech,ms,total);
	btechpercentage=calbtechpercentage(btech,total);
    mtechpercentage=calmtechpercentage(mtech,total);
    mspercentage=calmspercentage(ms,total);
    phdpercentage=calphdpercentage(phd,total);
	printf("students joined in phd are %d",phd);
	printf("percentage in btech is %f",btechpercentage);
	printf("percentage in mtech is %f",mtechpercentage);
	printf("percentage in ms is %f",mspercentage);
	printf("percentage in phd is %f",phdpercentage);
	return 0;
}
int calphd(int btech,int mtech,int ms,int total)
{
	int phd;
	phd=total-(btech+mtech+ms);
	return phd;
}
float calbtechpercentage(int btech,int total)
{
	float btechpercentage;
	btechpercentage=(float)btech/total*100;
	return btechpercentage;
}
float calmtechpercentage(int mtech,int total)
{
	float mtechpercentage;
	mtechpercentage=(float)mtech/total*100;
	return mtechpercentage;
}
float calmspercentage(int ms,int total)
{
	float mspercentage;
	mspercentage=(float)ms/total*100;
	return mspercentage;
}
float calphdpercentage(int phd,int total)
{
	float phdpercentage;
	phdpercentage=(float)phd/total*100;
	return phdpercentage;
}
