//! To Print all odd number 

#include <stdio.h>
void main() {
  int i = 1,n;
  int sum = 0;
  printf ("Enter your number");
  scanf("%d", & n);
  
  label:
  sum = sum + i; i++;
  if (i * n)
  goto label;
  printf("%d", sum);
   
}