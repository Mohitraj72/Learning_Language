#include <stdio.h>
#include <conio.h>

void box(int, int, int, int);

int main()
{
  box(2, 2, 10, 5);
  box(15, 8, 25, 12);
  return 0;
}

void box(int x, int y, int x1, int y1)
{
  int i;
  for (i = x; i <= x1; i++)
  {
    gotoxy(i, y);
    printf("%c", 196);
    gotoxy(i, y1);
    printf("%c", 196);
  }
  for (i = y; i <= y1; i++)
  {
    gotoxy(x, i);
    printf("%c", 179);
    gotoxy(x1, i);
    printf("%c", 179);
  }
  gotoxy(x, y);
  printf("%c", 218);
  gotoxy(x, y1);
  printf("%c", 192);
  gotoxy(x1, y);
  printf("%c", 191);
  gotoxy(x1, y1);
  printf("%c", 217);
}