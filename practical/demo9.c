#include <stdio.h>

// Function to check whether a number is even or odd
int isEven(int num) 
{
    // The % operator gives the remainder after dividing by 2
    // If a number is divisible by 2 with no remainder, it's even
    if (num % 2 == 0) 
    {
        return 1;  // 1 represents "true" in C (even number)
    } 
    else 
    {
        return 0;  // 0 represents "false" in C (odd number)
    }
}

int main() 
{
    int number = 7;

    // Call the function and store the result
    int result = isEven(number);

    // Print whether the number is even or odd
    if (result) 
    {
        printf("%d is even\n", number);
    } 
    else 
    {
        printf("%d is odd\n", number);
    }

    return 0;
}