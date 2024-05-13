//! Print hello world take input from user 
#include<stdio.h>

int main(){
  int n;
  printf("Enter your number: ");
  scanf ("%d", &n);
  for ( int i = 1; i <=n; i++)
  {
    printf("Heloo World\n");
  }
  

  return 0;
}