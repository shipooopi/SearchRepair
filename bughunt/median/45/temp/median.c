#include <stdio.h>
#include <math.h>

int main(void) 
{ 
  int frst ;
  int scnd ;
  int thrd ;
  int cmp1 ;
  int cmp2 ;
  int med ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d %d %d", & frst, & scnd, & thrd);
  if (frst <= scnd) {
    cmp1 = frst;
  } else {
    cmp1 = scnd;
  }
  if (scnd <= thrd) {
    cmp2 = scnd;
  } else {
    cmp2 = thrd;
  }
  if (cmp1 >= cmp2) {
    med = cmp1;
  } else {
    med = cmp2;
  }
  printf("%d is lesser of first 2\n%d is lesser of second 2\n", cmp1, cmp2);
  printf("%d is the median\n", med);
  return (0);
}
}

