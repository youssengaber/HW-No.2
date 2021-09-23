#include <stdio.h>

int main(void) {
  float PI = 3.14;
  int R = 10;
  float v = 4/3*PI*R*R*R;
  
  printf("the volume of the sphere is 4/3*PI*R^3, so if we have the value of the PI as %f, and the value of the R as %d, the the result must be %f", PI, R, v);
  return 0;
}