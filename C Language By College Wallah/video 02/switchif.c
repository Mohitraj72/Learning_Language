//
#include <stdio.h>
void main()
{
  int a, b, c;
  char operator;

  printf("Enter first no: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  // printf(" 1---- Addition\n 2---- Subtraction\n 3---- Multiplication\n 4----division\n 5----Exit\n");

  printf("Enter your choice");
  scanf("%c", &operator);

  switch (operator)
  {
  case '+':
    c = a + b;
    printf("%d", c);
    break;
  case '-':
    c = a - b;
    printf("%d", c);
    break;
  case '*':
    c = a * b;
    printf("%d", c);
    break;
  case '/':
    if (b != 0) {
                c = a / b;
                printf("Result: %.2f\n", c);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
    case 5: 
    return;

  default:
    printf("invalid Choice");
  }
  // printf("%d", c);
}
