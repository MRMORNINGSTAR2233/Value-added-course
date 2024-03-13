#include <stdio.h>

// Function to remove duplicate elements
void removeDuplicates(int arr[], int *size)
{
    int i, j, k;

    // Traverse the array
    for (i = 0; i < *size; ++i)
    {
        // Check if the current element is a duplicate of any previous elements
        for (j = 0; j < i; ++j)
        {
            if (arr[i] == arr[j])
            {
                // Shift the subsequent elements to left
                for (k = i; k < *size - 1; ++k)
                {
                    arr[k] = arr[k + 1];
                }
                // Decrease size since duplicate element is removed
                --*size;
                // Decrease i to recheck the current position
                --i;
                break;
            }
        }
    }
}

int main()
{
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    removeDuplicates(arr, &size);

    // Print the array without duplicates
    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
