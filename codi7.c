#include <stdio.h>

void findDifference(int arr[], int size)
{
    if (size < 3)
    {
        printf("Array size should be 3 or more.\n");
        return;
    }

    int smallest = arr[0], secondSmallest = arr[0];
    int biggest = arr[0], thirdBiggest = arr[0];

    for (int i = 1; i < size; ++i)
    {
        // Find 2nd smallest
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }

        // Find 3rd biggest
        if (arr[i] > biggest)
        {
            thirdBiggest = biggest;
            biggest = arr[i];
        }
        else if (arr[i] > thirdBiggest && arr[i] != biggest)
        {
            thirdBiggest = arr[i];
        }
    }

    // Calculate and display the difference
    int difference = secondSmallest - thirdBiggest;
    printf("2nd smallest: %d\n", secondSmallest);
    printf("3rd biggest: %d\n", thirdBiggest);
    printf("Difference: %d\n", difference);
}

int main()
{
    int size;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 3)
    {
        printf("Array size should be 3 or more.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Find and display the difference
    findDifference(arr, size);
    return 0;
}
