#include <stdio.h>
void main(){
  int a,b;
   printf("Enter first number ");
   scanf("%d", &a);
   printf("Enter seconf number ");
   scanf("%d", &b);
  
  int sum = a+b;
  printf("%d\n", sum); 

  int sub = a-b;
  printf("%d\n", sub);

  int mul = a*b;
  printf("%d\n", mul);

  int div = a/b;
  printf("%d\n", div);

  int rem = a%b;
  printf("%d\n", rem);


   
}