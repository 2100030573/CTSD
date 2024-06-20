#include<stdio.h>
float calbmi(float height,float weight);
int main()
{
  float bmi,weight,height;
  printf("enter height,wight value");
  scanf("%f%f",&height,&weight);
  bmi=calbmi(height,weight);
  printf("bmi=%f",bmi);
  return 0;
}
float calbmi(float height,float weight)
{
  float bmi,nheight,nwight;
  nheight=height*0.0254;
  nwight=weight*0.45359237;
  bmi=nwight/(nheight*nheight);
  return bmi;
}
