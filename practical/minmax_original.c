#include <stdio.h>

int main()
{
    int arr[10];
    int max, min;
    float sum = 0, mean;

    printf("Enter 10 integers:\n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < 10; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    mean = sum / 10;

    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d", min);
    printf("\nMean: %.2f", mean);


    // Sorting array
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array: ");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }


    // Mean comparison
    if(mean - min < max - mean)
        printf("\nMean is closer to minimum");

    else if(max - mean < mean - min)
        printf("\nMean is closer to maximum");

    else
        printf("\nMean is exactly midway");


    return 0;
}