#include<stdio.h>

int main()
{
   int a = 545;

  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));

   char b = 178;

  // print value and size of an int variable
  printf("int b value %d (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));

   float c = 275.1;

  // print value and size of an int variable
  printf("int c value %d (oct %o, hex %x) and size %d bytes.\n", c, c, c, sizeof(c));

   double d = 64.111;

  // print value and size of an int variable
  printf("int d value %d (oct %o, hex %x) and size %d bytes.\n", d, d, d, sizeof(d));

   long int e = 25;

  // print value and size of an int variable
  printf("int e value %d (oct %o, hex %x) and size %d bytes.\n", e, e, e, sizeof(e));

   unsigned int f = 981.1;

  // print value and size of an int variable
  printf("int f value %d (oct %o, hex %x) and size %d bytes.\n", f, f, f, sizeof(f));


}
