//! convert to kelvin 

#include <stdio.h>
void main (){
  float celsius, kelvin;
  printf ("Enter the temp in celsius ");
  scanf ("%f", & celsius);

  kelvin = celsius + 273.15;

  printf ("%2f", kelvin);

}