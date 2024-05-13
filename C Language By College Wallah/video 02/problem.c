#include <stdio.h>
void main (){
  int x, y, z, a, b, total, avg;
  printf("Enter five subject marks: ");
  scanf ("%d %d %d %d %d", &x, &y, &z, &a, &b);

  total = x+y+z+a+b;
  avg = total/5;

  if (avg >= 60)
  printf("first");
  else if (avg >= 45 && avg < 60)
  printf("second");
  else if (avg >= 30)
  printf ("third");

  else 
  printf("fail");
}