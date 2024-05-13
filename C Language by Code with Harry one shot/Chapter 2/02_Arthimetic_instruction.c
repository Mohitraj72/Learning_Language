#include <stdio.h>
#include <math.h>

int main()
{
  int a = 4;
  int b = 8;

  printf("The value of a+b is %d\n", a + b);
  printf("The value of a - b is %d\n", a - b);
  printf("The value of a * b is %d\n", a * b);

  int z;
  z = b * a; //! legal
  // b * a = z; //*Illegal
  printf("The value of Z is %d\n", z);

  printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
  printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
  printf("-5 when divided by 2 leaves a remainder of %d\n", 5 % -2);

  //*No Operators is assumed to be present
  printf("The Value of 4*5 is %d\n", (4) * (5));

  //* there is no operator to perform exponentiation in c
  printf("The Value of 4 ^ 5 is %d\n", 4 ^ 5); //!--> will not produce 4 to power 5

  printf("The Value of 4 to the power 5 is %f\n", pow(2, 5));


  //! Arthimetic Operators 

  printf("The value of 6+5 is %d\n", 6+5);
  printf("The value of 6+5.6 is %f\n", 6+5.6);
  printf("The value of 6+5 is %f\n", 6.1+5.8);
  printf("The value of 6+5 is %d\n", 6/5);
  printf("The value of 6+5 is %f\n", 6.0/5);

  return 0;
}