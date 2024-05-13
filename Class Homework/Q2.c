#include <stdio.h>
#include <conio.h>
void main()
{
  char ch;
  printf("Enter an alphabet Key ");
  ch = getche(); // getch    getche  getchar
  switch (ch)
  {
  case 'A':
  case 'a':
    printf("You are present");
    break;
  case 'B':
  case 'b':
    printf("The absent alphabet ");
    break;

  default:
    printf("invalid key ");
  }
}