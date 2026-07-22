#include <stdio.h>

int main() {
    float orderAmounts[5] = {250.50, 480.00, 150.75, 620.25, 99.99};
    float *ptr = orderAmounts;  // pointer initialized to the first element

    printf("Zomato Order Amounts:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Order %d: Amount = %.2f | Address = %p\n", i + 1, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}