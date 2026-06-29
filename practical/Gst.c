#include <stdio.h>

int main() {
    const float GST_RATE = 18.0;   // Constant GST rate (18%)

    float basePrice = 500.0;       // Zomato order base price
    float gstAmount, finalPrice;

    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;

    printf("Base Price: Rs. %.2f\n", basePrice);
    printf("GST Rate: %.0f%%\n", GST_RATE);
    printf("GST Amount: Rs. %.2f\n", gstAmount);
    printf("Final Price: Rs. %.2f\n", finalPrice);

    return 0;
}