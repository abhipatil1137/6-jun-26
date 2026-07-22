#include <stdio.h>

// Structure to store Zomato-style menu item details
struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    // Initialize an array of 3 FoodItem structures with menu data
    struct FoodItem menu[3] = {
        {"Butter Chicken", 320.00, 4.5},
        {"Paneer Tikka",   250.00, 4.3},
        {"Veg Biryani",    180.00, 4.1}
    };

    printf("Zomato Menu:\n");
    printf("---------------------------------------------\n");

    // Loop through the array and display each item's details
    for (int i = 0; i < 3; i++) {
        printf("Item %d:\n", i + 1);
        printf("  Name   : %s\n", menu[i].itemName);
        printf("  Price  : Rs. %.2f\n", menu[i].price);
        printf("  Rating : %.1f / 5\n", menu[i].rating);
        printf("---------------------------------------------\n");
    }

    return 0;
}