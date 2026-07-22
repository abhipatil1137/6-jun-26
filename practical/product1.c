#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 10
#define MAX_NAME_LENGTH 50

void addToCart(char cart[][MAX_NAME_LENGTH], int *count, char product[]) {
    if (*count < MAX_PRODUCTS) {
        strcpy(cart[*count], product);
        (*count)++;

        printf("\nUpdated Cart:\n");
        for (int i = 0; i < *count; i++) {
            printf("%d. %s\n", i + 1, cart[i]);
        }
    } else {
        printf("Cart is full!\n");
    }
}

int main() {
    char cart[MAX_PRODUCTS][MAX_NAME_LENGTH];
    int count = 0;

   
    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");
    addToCart(cart, &count, "Keyboard");

    printf("\nCart in main():\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}