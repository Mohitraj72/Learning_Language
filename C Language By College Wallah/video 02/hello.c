#include <stdio.h>
void main (){
  int num1, num2;
  printf("enter your first number: ");
  scanf("%d", & num1);

  printf("enter your second number: ");
  scanf("%d", & num2);
  if (num1>num2)
  {
    printf("%d this is greates numbe", num1);
  } else {
    printf("%d this is smallest number ", num2);
  }


}