#include<stdio.h>

int main(){
  int i  =1;
  label:
  printf("%d\n", i);
  i++;
  if (i<100)
  goto label;

  return 0;
}