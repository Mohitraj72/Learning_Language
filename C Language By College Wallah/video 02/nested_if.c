#include <stdio.h>
#include <conio.h>

int main() {
  char country;
  int age;

  printf("Enter first character of your country name: ");
  country = getche();

  if (country == 'I' || country == 'i') {
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
      printf("You may give a vote.\n");
    } else {
      printf("You are not eligible to vote.\n");
    }
  }

  return 0;
}
