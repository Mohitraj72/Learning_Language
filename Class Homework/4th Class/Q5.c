#include <stdio.h>

int main() {
  int num, i = 1;
  printf("Enter a number: ");
  scanf("%d", &num);

  start:
  if (i <= 10) {
    printf("%d * %d = %d\n", num, i, num * i);
    i++;
    goto start;
  }

  return 0;
} 