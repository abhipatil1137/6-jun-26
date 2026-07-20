#include <stdio.h>

struct StudyLog {
    char subject[40];
    float hours[7];
};

// Function to calculate and display weekly report
void displayReport(struct StudyLog logs[], int n) {
    float total, average;

    printf("\n=========== Weekly Productivity Report ===========\n");

    for (int i = 0; i < n; i++) {
        total = 0;

        for (int j = 0; j < 7; j++) {
            total += logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total Hours: %.2f\n", total);
        printf("Daily Average: %.2f hours\n", average);

        printf("Progress Chart:\n");

        for (int j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);

            int dots = (int)logs[i].hours[j];

            for (int k = 0; k < dots; k++) {
                printf("•");
            }

            printf(" (%.2f hours)\n", logs[i].hours[j]);
        }
    }
}

// Function to save data into file
void saveToFile(struct StudyLog logs[], int n) {

    FILE *file = fopen("productivity_log.txt", "w");

    if (file == NULL) {
        printf("File opening error!\n");
        return;
    }

    for (int i = 0; i < n; i++) {

        fprintf(file, "%s", logs[i].subject);

        for (int j = 0; j < 7; j++) {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("\nData saved successfully in productivity_log.txt\n");
}


int main() {

    struct StudyLog logs[3] = {
        {"Programming", {0}},
        {"Database", {0}},
        {"Mathematics", {0}}
    };

    int choice;

    while (1) {

        printf("\n====== Student Productivity Tracker ======\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);


        switch(choice) {

            case 1:
            {
                int day;

                printf("\nEnter day number (1-7): ");
                scanf("%d", &day);

                if(day < 1 || day > 7) {
                    printf("Invalid day number!\n");
                    break;
                }

                for(int i = 0; i < 3; i++) {

                    printf("Enter study hours for %s: ",
                           logs[i].subject);

                    scanf("%f", &logs[i].hours[day-1]);
                }

                printf("Study hours logged successfully!\n");

                break;
            }


            case 2:
                displayReport(logs, 3);
                break;


            case 3:
                saveToFile(logs, 3);
                printf("Exiting program...\n");
                return 0;


            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}