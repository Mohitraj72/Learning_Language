#include <stdio.h>

void main()
{
  int n,m,i,j;
   printf("Enter a number ");
  scanf("%d", &n);   // cahiye to N ka kuch v value rakh skte hai 

   printf("Enter a number ");
  scanf("%d", &m);   // cahiye to N ka kuch v value rakh skte hai 

  for (  i = 1; i <= n; i++)
  {
    for ( j = 1; j <= m; j++)

      printf("*");
    printf("\n");
  }
}