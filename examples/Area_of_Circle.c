#include<stdio.h>
void main()
{ 
  float a,r;
  const float b = 3.1416;
  
  printf("Enter the Radius : ");
  scanf("%f",&r);
  
  a = pi * r * r;
  
  printf("Area is %f",a);
  
  return 0;
}
