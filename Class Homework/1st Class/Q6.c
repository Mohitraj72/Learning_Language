// Volume of cylinder 

#include <stdio.h>
void main()
{
  int volume, radius, height; // V=πr2h
  int PI = 3.14159265359;
  
  printf("Enter your radius ");
  scanf("%d", &radius);

  printf("Enter your Height ");
  scanf("%d", &height);
  
  volume = PI * radius * radius * height;

  // Volume of Sphere = 4/3 π r³
  
  int sphere = (4/3)*(PI*radius*radius*radius);
  
  printf("volume of cylinder %d", volume);
  printf("%d", sphere);

}