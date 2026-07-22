#include <stdio.h>

int main()
{
    // Loop through numbers from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Use '==' to COMPARE (not '=' which ASSIGNS a value)
        // If the remainder of i divided by 2 is 0, the number is even
        if (i % 2 == 0)
        {
            // "%d" tells printf to format the value as an integer
            printf("%d\n", i);
        }
    }

    return 0;
}