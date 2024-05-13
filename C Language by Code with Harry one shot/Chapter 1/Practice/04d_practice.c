#include<stdio.h>

int main(){
  int principle =10000, rate =4, years=1;
  int simpleInterest = (principle * rate * years);

  printf("The value of simple interest is %d", simpleInterest);

  return 0;
}