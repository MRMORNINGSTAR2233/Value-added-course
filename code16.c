#include <stdio.h>

// Function to find the sum of elements in an array
int findArraySum(int arr[], int size)
{
    int sum = 0;

    // Iterate through each element in the array and add it to the sum
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    // Maximum size of the array
    const int maxSize = 100;

    // Input array size
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Validate array size
    if (size <= 0 || size > maxSize)
    {
        printf("Invalid array size. Please enter a valid size.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    int arr[maxSize];
    printf("Enter %d elements, one per line:\n", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Find and display the sum of array elements
    int sum = findArraySum(arr, size);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
