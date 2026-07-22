#include <stdio.h>

// Function to format a follower count like Instagram does
// Examples: 950 -> "950", 1500 -> "1.5K", 1200000 -> "1.2M"
void formatFollowersCount(long count, char *result)
{
    // Case 1: Millions (1,000,000 and above)
    if (count >= 1000000)
    {
        // Divide by 1,000,000 to get the "millions" value
        double millions = count / 1000000.0;

        // Format with 1 decimal place and add "M"
        sprintf(result, "%.1fM", millions);
    }
    // Case 2: Thousands (1,000 to 999,999)
    else if (count >= 1000)
    {
        // Divide by 1,000 to get the "thousands" value
        double thousands = count / 1000.0;

        // Format with 1 decimal place and add "K"
        sprintf(result, "%.1fK", thousands);
    }
    // Case 3: Below 1000, just show the number as-is
    else
    {
        sprintf(result, "%ld", count);
    }
}

int main()
{
    // A buffer to hold the formatted string result
    // (large enough to safely hold any formatted number + suffix)
    char formatted[20];

    // Test values to check our function works correctly
    long testValues[] = {950, 1500, 1200000, 999, 1000000, 25000};
    int numTests = sizeof(testValues) / sizeof(testValues[0]);

    // Loop through each test value and print the formatted result
    for (int i = 0; i < numTests; i++)
    {
        // Call our formatting function
        formatFollowersCount(testValues[i], formatted);

        // Print the original number and its formatted version
        printf("Instagram: %ld -> '%s'\n", testValues[i], formatted);
    }

    return 0;
}