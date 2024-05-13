  // Volume of Sphere

#include <stdio.h>
void main()
{
  int volume, radius, height; // V=πr2h
  
  printf("Enter your radius ");
  scanf("%d", &radius);

  volume = (4.0 / 3.0) * 3.14159 * (radius * radius * radius);
  
  printf("%d", volume);

}

// it is the perfect answer 