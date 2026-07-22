#include <stdio.h>

int main() {
    int choice, roll_no, marks;
    char name[50];

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. View Student\n");
        printf("3. Update Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll_no);

                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter Marks: ");
                scanf("%d", &marks);

                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\nStudent Details\n");
                printf("Roll No : %d\n", roll_no);
                printf("Name    : %s\n", name);
                printf("Marks   : %d\n", marks);
                break;

            case 3:
                printf("Enter Updated Marks: ");
                scanf("%d", &marks);

                printf("Marks updated successfully!\n");
                break;

            case 4:
                printf("Successfully Exit\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}