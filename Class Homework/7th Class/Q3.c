#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i += 2;
    }

    printf("Sum of the series 1 + 3 + 5 + ... + %d is: %d\n", n, sum);

    return 0;
}
