#include <stdio.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[10];
    int choice;
    int count = 0;
    float total;

    while (1) {
        printf("\n===== Expense Tracker Menu =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count < 10) {
                    printf("\nEnter expense category: ");
                    scanf("%s", expenses[count].category);

                    printf("Enter expense amount: ");
                    scanf("%f", &expenses[count].amount);

                    count++;

                    printf("Expense added successfully!\n");
                }
                else {
                    printf("Expense limit reached (10 entries).\n");
                }
                break;


            case 2:
                total = 0;

                printf("\n======= Expense List =======\n");
                printf("Category\tAmount\n");
                printf("----------------------------\n");

                for (int i = 0; i < count; i++) {
                    printf("%s\t\t%.2f\n",
                           expenses[i].category,
                           expenses[i].amount);

                    total += expenses[i].amount;
                }

                printf("----------------------------\n");
                printf("Total Expense: %.2f\n", total);
                break;


            case 3:
            {
                FILE *file = fopen("expenses.txt", "w");

                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                for (int i = 0; i < count; i++) {
                    fprintf(file, "%s,%.2f\n",
                            expenses[i].category,
                            expenses[i].amount);
                }

                fclose(file);

                printf("Expenses saved successfully to expenses.txt\n");
                printf("Exiting program...\n");

                return 0;
            }


            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}