//! To Print all odd number 

#include <stdio.h>
void main() {
  int num = 1,n;
  printf ("Enter your number");
  scanf("%d", & n);
  
  label:
  if (num <= n) {
    if (num % 3 == 0) {
      printf("%d\n", num);
    }
    num++;
    goto label;
  }
}