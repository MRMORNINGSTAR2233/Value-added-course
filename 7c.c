#include <stdio.h>

// Function to find the 2nd smallest and 3rd biggest numbers
void findDifference(int arr[], int size)
{
    if (size < 3)
    {
        printf("Array size should be at least 3.\n");
        return;
    }

    // Find the 2nd smallest and 3rd biggest
    int first_min, second_min, first_max, second_max;
    first_min = second_min = first_max = second_max = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < first_min)
        {
            second_min = first_min;
            first_min = arr[i];
        }
        else if (arr[i] < second_min && arr[i] != first_min)
        {
            second_min = arr[i];
        }

        if (arr[i] > first_max)
        {
            second_max = first_max;
            first_max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != first_max)
        {
            second_max = arr[i];
        }
    }

    // Calculate and print the difference
    int difference = second_min - second_max;
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
