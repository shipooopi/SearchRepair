#include <stdio.h>
#include <math.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int z ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", & a, & b, & c);
  if ((b < a && a < c) || (c < a && a < b)) {
    z = a;
  } else
  if ((a < b && b < c) || (c < b && b < a)) {
    z = b;
  } else
  if ((a < c && c < b) || (b < c && c < a)) {
    z = c;
  }
  printf("%d is the median\n", z);
  return (0);
}
}

