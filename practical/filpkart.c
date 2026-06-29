#include <stdio.h>

int main() {
    // Variable declarations
    char productName[] = "Wireless Earbuds";
    float price = 1499.99f;
    double rating = 4.5;

    // Printing values and data types
    printf("Product Name: %s\n", productName);
    printf("Data Type: string (char array)\n\n");

    printf("Price: %.2f\n", price);
    printf("Data Type: float\n\n");

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: double\n");

    return 0;
}