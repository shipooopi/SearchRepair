#include <stdio.h>
#include <math.h>

int main(void) 
{ 
  double first ;
  double second ;
  double third ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers seperated by spaces > ");
  scanf("%lf", & first);
  scanf("%lf", & second);
  scanf("%lf", & third);
  if ((first > second && first < third) || (first < second && first > third)) {
    printf_tmp0 = first;
  }
  if ((second > first && second < third) || (second < first && second > third)) {
    printf_tmp0 = second;
  }
  if ((third > first && third < second) || (third < first && third > second)) {
    printf_tmp0 = third;
  }
  {
  printf("%.0lf is the median\n", printf_tmp0);
  return (0);
  }
}
}

