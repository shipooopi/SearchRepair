#include <stdio.h>
#include <math.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int printf_tmp0 ;

  {
  printf("Please enter three integers separated by spaces > ");
  scanf("%d%d%d", & a, & b, & c);
  while (a < b && a < c) {
    if (b < c) {
      printf_tmp0 = b;
      break;
    } else {
      printf_tmp0 = c;
      break;
    }
  }
  while (b < a && b < c) {
    if (a < c) {
      printf_tmp0 = a;
      break;
    } else {
      printf_tmp0 = c;
      break;
    }
  }
  while (c < a && c < b) {
    if (b < a) {
      printf_tmp0 = b;
      break;
    } else {
      printf_tmp0 = a;
      break;
    }
  }
  {
  printf("%d is the median\n", printf_tmp0);
  return (0);
  }
}
}

