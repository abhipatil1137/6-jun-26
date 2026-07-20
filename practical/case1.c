#include <stdio.h>

int main() {
    int choice;

    printf("=== Zomato Food Suggestion Tool ===\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Suggested Dish: Masala Dosa\n");
            break;

        case 2:
            printf("Suggested Dish: Veg Biryani\n");
            break;

        case 3:
            printf("Suggested Dish: Paneer Butter Masala with Naan\n");
            break;

        case 4:
            printf("Suggested Dish: Samosa with Tea\n");
            break;

        default:
            printf("Try some fruits!\n");
    }

    return 0;
}