#include <stdio.h>
#include <math.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int d ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d %d %d", & a, & b, & c);
  if ((a < b && a > c) || (a > b && a < c)) {
    d = a;
  } else
  if ((b > a && b < c) || (b < a && b > c)) {
    d = b;
  } else {
    d = c;
  }
  printf("%d is the median\n", d);
  return (0);
}
}

