#include <stdio.h>

void findDifference(int arr[], int size)
{
    if (size < 3)
    {
        printf("Array size should be at least 3.\n");
        return;
    }

    int firstMin = arr[0], secondMin = arr[0];
    int firstMax = arr[0], secondMax = arr[0];

    // Find 2nd smallest and 3rd biggest
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < firstMin)
        {
            secondMin = firstMin;
            firstMin = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != firstMin)
        {
            secondMin = arr[i];
        }

        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }

    // Calculate and print the difference
    int difference = secondMin - secondMax;
    printf("Difference between 2nd smallest and 3rd biggest: %d\n", difference);
}

int main()
{
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 3)
    {
        printf("Array size should be at least 3.\n");
        return 1;
    }

    int arr[size];

    // Get input for the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the difference
    findDifference(arr, size);

    return 0;
}
