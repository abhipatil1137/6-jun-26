#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10];
    int max, min;
    int sum = 0;
    float mean;

    printf("Enter exactly 10 integers:\n");

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


    mean = (float)sum / 10;


    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d", min);
    printf("\nArithmetic Mean: %.2f", mean);



    // Ascending order sorting
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    printf("\nSorted Array: ");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }



    float diffMin = fabs(mean - min);
    float diffMax = fabs(max - mean);


    if(diffMin < diffMax)
        printf("\nMean is closer to minimum");

    else if(diffMax < diffMin)
        printf("\nMean is closer to maximum");

    else
        printf("\nMean is exactly midway");


    return 0;
}