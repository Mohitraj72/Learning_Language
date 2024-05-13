#include <stdio.h>

int main()
{
  int a = 4; //! this is integer number (the use of %d)
  // int b = 8.5; //*it is recommended bcz it is not integer
  float b = 8.5; //? This is real value number (the use of %f) 
  char c = 'u';  //* This is Charcter (the use %c)

  
  int d = 45;
  int e = 67 + 65;

  printf("the value of a is %d %d \n", a, a);
  printf("the value of a is  %f \n", b);
  printf("the value of a is  %c \n", c);
  printf("the value of a is  %d \n", a + d);
  printf("the value of a is  %d \n", a - d);
  printf("the value of a is  %d", e);

  return 0;
}
