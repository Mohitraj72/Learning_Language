//!  volume of a hemisphere = (2/3)πr3 cubic units
#include <stdio.h>
void main()
{
  int radius;
  int PI = 3.14159265359;
  printf("Enter the Radius of hemisphere: ");
  scanf("%d", & radius);

  int volume = (4/3)*( PI * radius * radius * radius );
  printf("The volume of hemishere is: %d", volume);
}