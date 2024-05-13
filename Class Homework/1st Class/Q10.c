//! volume of cone = =πr^2 h/3


#include <stdio.h>
void main (){
  int radius, height;
    int PI = 3.14159265359;

  printf ("Enter the radius: ");
  scanf("%d", & radius);

  printf("Enter the height: ");
  scanf("%d", & height);

  int vloume = (PI * radius * radius * height) / 3;
  printf ("%d", vloume);
}