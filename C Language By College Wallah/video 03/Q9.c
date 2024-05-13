//! Print Ap without using Formula
#include <stdio.h>

int main()
{
  int i, n;
  int a = 4;
  printf("Enter your Number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", a);
    a = a + 3;
  }
  return 0;
}