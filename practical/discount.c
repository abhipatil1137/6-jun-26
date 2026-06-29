#include <stdio.h>

int main() {
    float productPrice, discountPercentage, discountedPrice, finalPrice;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &productPrice);

    printf("Enter discount percentage: ");
    scanf("%f", &discountPercentage);

    printf("Is member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    // Apply product discount
    discountedPrice = productPrice - (productPrice * discountPercentage / 100);

    // Apply extra 5%% discount for members
    if (isMember == 1) {
        discountedPrice = discountedPrice - (discountedPrice * 5 / 100);
    }

    finalPrice = discountedPrice;

    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}