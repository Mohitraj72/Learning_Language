#include <stdio.h>

void main(){
  int P, R, T;
  printf("Enter your principal: ");
  scanf("%d", &P);

  printf("Enter your Rate: ");
  scanf("%d", &R);

  printf("Enter your Time: ");
  scanf("%d",& T);

  int SI = (P*R*T)/100;
  printf("%d", SI);
}