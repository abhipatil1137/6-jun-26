/* ============================================================
   MUSIC LISTENING LOGGER
   ------------------------------------------------------------
   Mini Project: Student Productivity Tracker (C version)

   Concepts covered:
     - Arrays        : store minutes listened for each of 7 days
     - Loops         : menu loop, input loops, report loops
     - File Handling  : persist data to "music_log.txt"
     - Functions     : clean, modular menu-driven design

   File format (music_log.txt):
     One line per day, in order Day1..Day7.
     A value of -1 means that day has not been logged yet.
   ============================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DAYS 7
#define FILENAME "music_log.txt"

/* ---------- Function Prototypes ---------- */
void showMenu(void);
void loadFromFile(int minutes[]);
void saveToFile(int minutes[]);
void logMinutes(int minutes[]);
void viewWeeklySummary(int minutes[]);
void resetData(int minutes[]);
void clearInputBuffer(void);
const char* dayName(int index);

/* ---------- Main ---------- */
int main(void) {
    int minutes[DAYS];   /* array holding minutes listened each day */
    int choice;

    /* Load any previously saved data when the app starts */
    loadFromFile(minutes);

    printf("=====================================\n");
    printf("   Welcome to Music Listening Logger \n");
    printf("=====================================\n");

    int running = 1;
    while (running) {   /* loop until user selects Exit */
        showMenu();
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                logMinutes(minutes);
                break;
            case 2:
                viewWeeklySummary(minutes);
                break;
            case 3:
                resetData(minutes);
                break;
            case 4:
                printf("\nGoodbye! Keep enjoying your music. \n");
                running = 0;
                break;
            default:
                printf("\nInvalid choice. Please select 1-4.\n\n");
        }
    }

    return 0;
}

/* ---------- Display the main menu ---------- */
void showMenu(void) {
    printf("-------------------------------------\n");
    printf("MENU\n");
    printf("1. Log listening minutes for a day\n");
    printf("2. View weekly summary/report\n");
    printf("3. Reset weekly data\n");
    printf("4. Exit\n");
    printf("-------------------------------------\n");
}

/* ---------- Helper: get day name for display ---------- */
const char* dayName(int index) {
    static const char *names[DAYS] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };
    return names[index];
}

/* ---------- Helper: clear leftover input in stdin ---------- */
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }
}

/* ---------- Load saved data from file into array ---------- */
void loadFromFile(int minutes[]) {
    FILE *fp = fopen(FILENAME, "r");

    /* If no file exists yet, initialize all days as "not logged" (-1) */
    for (int i = 0; i < DAYS; i++) {
        minutes[i] = -1;
    }

    if (fp == NULL) {
        return;  /* first run, nothing to load */
    }

    for (int i = 0; i < DAYS; i++) {
        if (fscanf(fp, "%d", &minutes[i]) != 1) {
            minutes[i] = -1;
        }
    }

    fclose(fp);
}

/* ---------- Save entire array to file (overwrite each time) ---------- */
void saveToFile(int minutes[]) {
    FILE *fp = fopen(FILENAME, "w");

    if (fp == NULL) {
        printf("Error: could not open %s for writing.\n", FILENAME);
        return;
    }

    for (int i = 0; i < DAYS; i++) {
        fprintf(fp, "%d\n", minutes[i]);
    }

    fclose(fp);
}

/* ---------- Log listening minutes for a chosen day ---------- */
void logMinutes(int minutes[]) {
    int day, mins;

    printf("\nWhich day do you want to log?\n");
    for (int i = 0; i < DAYS; i++) {
        printf("  %d. %s\n", i + 1, dayName(i));
    }
    printf("Enter day number (1-%d): ", DAYS);

    if (scanf("%d", &day) != 1 || day < 1 || day > DAYS) {
        printf("Invalid day number.\n\n");
        clearInputBuffer();
        return;
    }

    printf("Enter minutes listened on %s: ", dayName(day - 1));
    if (scanf("%d", &mins) != 1 || mins < 0) {
        printf("Invalid number of minutes.\n\n");
        clearInputBuffer();
        return;
    }

    minutes[day - 1] = mins;   /* update array */
    saveToFile(minutes);       /* persist to music_log.txt */

    printf("Logged %d minutes for %s. Saved to %s.\n\n",
           mins, dayName(day - 1), FILENAME);
}

/* ---------- Read data and print weekly summary/report ---------- */
void viewWeeklySummary(int minutes[]) {
    int total = 0, count = 0, highest = -1, highestDay = -1;

    printf("\n===== Weekly Music Listening Report =====\n");

    for (int i = 0; i < DAYS; i++) {
        if (minutes[i] >= 0) {
            printf("  %-10s: %d minutes\n", dayName(i), minutes[i]);
            total += minutes[i];
            count++;
            if (minutes[i] > highest) {
                highest = minutes[i];
                highestDay = i;
            }
        } else {
            printf("  %-10s: (not logged)\n", dayName(i));
        }
    }

    printf("------------------------------------------\n");

    if (count == 0) {
        printf("No data logged yet this week.\n");
    } else {
        double average = (double) total / count;
        printf("Total minutes    : %d\n", total);
        printf("Average per day  : %.2f minutes (over %d logged day%s)\n",
               average, count, count == 1 ? "" : "s");
        printf("Highest listening: %d minutes on %s\n",
               highest, dayName(highestDay));
    }
    printf("==========================================\n\n");
}

/* ---------- Reset weekly data (array + file), with confirmation ---------- */
void resetData(int minutes[]) {
    char confirm;

    printf("\nAre you sure you want to reset all weekly data? (y/n): ");
    scanf(" %c", &confirm);
    clearInputBuffer();

    if (confirm == 'y' || confirm == 'Y') {
        /* Clear the array */
        for (int i = 0; i < DAYS; i++) {
            minutes[i] = -1;
        }

        /* Delete the contents of music_log.txt */
        FILE *fp = fopen(FILENAME, "w");  /* opening in "w" truncates it */
        if (fp != NULL) {
            fclose(fp);
        }
        remove(FILENAME);  /* optionally remove the file entirely */

        printf("All weekly data has been reset.\n\n");
    } else {
        printf("Reset cancelled. Your data is safe.\n\n");
    }
}