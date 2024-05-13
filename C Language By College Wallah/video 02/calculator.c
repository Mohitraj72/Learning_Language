#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

      // Note the space before %c to consume the newline character

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Calculation and Output
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
