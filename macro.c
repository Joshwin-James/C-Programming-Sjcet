#include <stdio.h>
#define PI 3.14159
int main(){
  float r,h;
  printf("\n Enter radius:");
  scanf("%f",&r);
  printf("\n Enter height:");
  scanf("%f",&h);
  float areaCircle,areaCylinder;
  areaCircle=PI*r*r;
  areaCylinder=2*PI*r*(r+h);
  printf("Area of circle=%f \n Area of cylinder=%f", areaCircle, areaCylinder);
  return 0;
}
