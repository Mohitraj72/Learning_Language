//! To Print all even  number 

#include <stdio.h>
void main() {
  int num = 1;
  
  
  label:
  if (num <= 200) {
    if (num % 2 == 0) {
      printf("%d\n", num);
    }
    num++;
    goto label;
  }
}