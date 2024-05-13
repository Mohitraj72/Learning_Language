#include <stdio.h>

int main() {
    // Declare variables
    float basicSalary, daPercent, hraPercent, ma, pfPercent, da, hra, pf, netSalary;

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Input deduction percentages and fixed Medical Allowance
    printf("Enter Dearness Allowance percentage: ");
    scanf("%f", &daPercent);

    printf("Enter House Rent Allowance percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter Medical Allowance: ");
    scanf("%f", &ma);

    printf("Enter Provident Fund percentage: ");
    scanf("%f", &pfPercent);

    // Calculate deduction amounts
    da = (daPercent / 100) * basicSalary;
    hra = (hraPercent / 100) * basicSalary;
    pf = (pfPercent / 100) * basicSalary;

    // Calculate net salary
    netSalary = basicSalary - (da + hra) + ma - pf;

    // Display net salary
    printf("\nNet Salary: %.2f\n", netSalary);

    return 0;
}

