// Surface area of cone = πr(r+h2+r2)

#include <stdio.h>
#include <math.h>

void main()
{
  float radius, height, surface_area;
  printf("Enter radius of the cone: ");
  scanf("%f", &radius);
  printf("Enter height of the cone: ");
  scanf("%f", &height);

  surface_area = 3.14 * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
  printf("The surface area of the cone is: %f", surface_area);
}