#include <stdio.h>

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int printf_tmp0 ;

  {
  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", & a, & b, & c);
if((c <= b &&b <= a )  ||(a <= b &&b <= c )  )  { printf_tmp0 = b  ;
}
else if((b <= c &&c <= a )  ||(a <= c &&c <= b )  )  { printf_tmp0 = c  ;
}

else { printf_tmp0 = a  ;
}


  {
  printf("%d is the median\n", printf_tmp0);
  return (0);
  }
}
}

