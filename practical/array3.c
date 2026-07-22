#include <stdio.h>

// Function to calculate average spend
float calculateAverageSpend(int orders[], int size)
{
    int sum = 0;

    // Calculate total spend
    for(int i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    // Return average
    return (float)sum / size;
}

int main()
{
    // 7 days Zomato order amounts
    int dailyOrders[7] = {250, 300, 150, 400, 350, 200, 500};

    // Call function
    float average = calculateAverageSpend(dailyOrders, 7);

    printf("Average weekly Zomato spend: Rs%.2f\n", average);

    return 0;
}