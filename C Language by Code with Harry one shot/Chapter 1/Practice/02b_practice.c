#include <stdio.h>

int main()
{
  int radius = 3;
  float pi = 3.14;

  printf("The area of this circle is %f\n", pi * radius * radius);
  int height =5;

  //*this is the modification in language

  printf("The area of this circle is %f\n", pi * radius * radius*height);

  return 0;
}