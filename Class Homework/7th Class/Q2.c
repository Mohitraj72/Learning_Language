#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i * i;
        i++;
    }

    printf("Sum of the series 1 + 4 + 9 + ... + %d^2 is: %d\n", n, sum);

    return 0;
}
