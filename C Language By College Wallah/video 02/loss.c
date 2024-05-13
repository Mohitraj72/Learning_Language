#include <stdio.h>

int main() {
    // Declare variables
    float costPrice, sellingPrice, profitLoss, profitPercentage, lossPercentage;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    profitLoss = sellingPrice - costPrice;

    // Calculate profit or loss percentage
    if (profitLoss > 0) {
        profitPercentage = (profitLoss / costPrice) * 100;
        printf("Profit Percentage: %.2f%% ", profitPercentage);
        printf("Profit of %.2f", &profitLoss);
    } else if (profitLoss < 0) {
        lossPercentage = (-profitLoss / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
