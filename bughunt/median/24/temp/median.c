#include <stdio.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int m ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d %d %d", & a, & b, & c);
  if (a == b || a == c) {
    m = a;
  } else
  if (b == c || b == a) {
    m = b;
  } else
  if (c == a || c == b) {
    m = c;
  } else
  if ((a >= b && a <= c) || (a >= c && a <= b)) {
    m = b;
  } else
  if ((b >= a && b <= c) || (b >= c && b <= a)) {
    m = b;
  } else
  if ((c >= a && c <= b) || (c >= b && c <= a)) {
    m = c;
  }
  printf("%d is the median\n", m);
  return (0);
}
}

