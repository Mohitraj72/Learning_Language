#include <stdio.h>
#include <conio.h>

void main()
{
  char ch;
  ch = getch();
  switch (ch)
  {
  case 00:
    ch = getch();
    switch (ch)
    {
    case 97:
      printf("Hello");
      break;
    case 98:
      printf("Hii");
      break;
    case 12:
      return;
    }
  }
}