#include<stdio.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int median ;
  int temp ;
  int printf_tmp0 ;

  {
  median = 0;
  temp = 0;
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", & a, & b, & c);
  if (a >= b) {
    temp = b;
    b = a;
    a = temp;
  }
  if (a < c) {
    median = b;
  } else
  if (b > c) {
    median = a;
  } else {
    median = c;
  }
  printf("%d is the median\n", median);
  return (0);
}
}

