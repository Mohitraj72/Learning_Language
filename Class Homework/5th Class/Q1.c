#include <stdio.h>
void main()
{
  int i = 1, n, count = 0;
  printf("rnter your Number: ");
  scanf("%d", &n);

label:
  if (i <= n)
  {
    if (n % i == 0)
      count++;
    i++;
    goto label;
  }
  if (count == 2)
    printf("Prime no");
  else
    ("Not prime Number");
}