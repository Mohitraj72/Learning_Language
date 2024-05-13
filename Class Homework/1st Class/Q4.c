#include <stdio.h>
//#include <math.h>

void main (){
int radius;                // area of circle  = πr2
int PI= 3.14159265359;
printf ("Enter the radius of circle: ");
scanf ("%d", & radius);

int area = PI * radius * radius;
printf("Area of the circle: %d\n", area);

}