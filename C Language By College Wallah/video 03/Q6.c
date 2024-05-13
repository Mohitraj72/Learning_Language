//!  Print the table of ‘n’. Here ‘n’ is a integer 


#include <stdio.h>

void main()
{
  int i,n ;
  printf("Enter your number: ");
  scanf("%d", &n);

  for (i = n; i <= n*10; i = i + n)
  
    printf("%d ", i);
  
  
}