#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 10;
  printf("The value of a is %d\n", a);

  *ptrtoa = 18;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

 float d= 12.34;
 float e= 33.33;

 printf("The value of d is %f\n", d);
 printf("The address of d is %f\n", &d);

 printf("The value of e is %f\n", e);
 printf("The address of e is %f\n", &e);

 float* ptrtod = &d;
 float* ptrtoe = &e; 

 float temp = *ptrtod;
 *ptrtod = *ptrtoe;
 *ptrtoe = temp;

  printf("The value of d is now e:  %f\n", d);
  printf("The value of e is now d:  %f\n", e);

}
