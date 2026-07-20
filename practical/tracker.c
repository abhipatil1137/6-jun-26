#include <stdio.h>

int main()
{
    float hours[7];
    float total = 0, average;
    int highestDay = 0;
    int i, j;

    // Accept study hours for 7 days
    for (i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d (0-24): ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24)
            {
                printf("Invalid input! Hours must be between 0 and 24. Try again.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total += hours[i];

        // Find day with highest study hours
        if (hours[i] > hours[highestDay])
        {
            highestDay = i;
        }
    }

    // Calculate average
    average = total / 7;

    // Print summary
    printf("\n----- Weekly Study Summary -----\n");
    printf("Total Study Hours: %.2f\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d (%.2f hours)\n",
           highestDay + 1, hours[highestDay]);

    // Print visual bars
    printf("\nStudy Hours Visualization:\n");

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        // Print one star per completed hour
        for (j = 0; j < (int)hours[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}