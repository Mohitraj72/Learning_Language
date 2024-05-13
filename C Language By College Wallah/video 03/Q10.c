//!  Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms 

#include <stdio.h>

int main()
{
  int i, n, a = 2;
  printf("Enter your number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    printf("%d ", a);
    a = a * 2;
  }
  return 0;
}