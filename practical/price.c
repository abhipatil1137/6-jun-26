#include <stdio.h>

// Function to format and print price
void formatPrice(int price) {
    if (price >= 1000)
        printf("Rs%d,%03d", price / 1000, price % 1000);
    else
        printf("Rs%d", price);
}

int main() {
    char product1[] = "Wireless Mouse";
    char product2[] = "Keyboard";
    char product3[] = "Headphones";

    int price1 = 1599;
    int price2 = 899;
    int price3 = 2499;

    printf("Product Prices:\n");

    printf("%s : ", product1);
    formatPrice(price1);
    printf("\n");

    printf("%s : ", product2);
    formatPrice(price2);
    printf("\n");

    printf("%s : ", product3);
    formatPrice(price3);
    printf("\n");

    return 0;
}