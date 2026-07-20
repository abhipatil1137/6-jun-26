#include <stdio.h>

int main() {
    float amount, discount = 0, finalAmount;

    printf("Enter the total cart amount: ");
    scanf("%f", &amount);

    if (amount > 1000) {
        if (amount > 2000) {
            discount = amount * 0.20;   // 20% discount
        } else {
            discount = amount * 0.10;   // 10% discount
        }
    } else {
        discount = 0;   // No discount
    }

    finalAmount = amount - discount;

    printf("\nCart Amount      : %.2f", amount);
    printf("\nDiscount         : %.2f", discount);
    printf("\nFinal Amount Pay : %.2f\n", finalAmount);

    return 0;
}