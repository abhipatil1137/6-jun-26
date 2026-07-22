#include <stdio.h>

int main()
{
    // Declare 1D array with 7 elements
    int dailySteps[7] = {5000, 6500, 7000, 8000, 4500, 9000, 10000};

    // Print step count for each day
    for(int i = 0; i < 7; i++)
    {
        printf("Day %d steps: %d\n", i + 1, dailySteps[i]);
    }

    return 0;
}