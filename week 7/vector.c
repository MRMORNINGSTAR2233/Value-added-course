#include <stdio.h>
#include <stdlib.h>

// Function to remove odd elements from the array
// and square the even elements
void removeAndSquare(int arr[], int size)
{
    int evenCount = 0;

    // Count even numbers and square them
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[evenCount++] = arr[i] * arr[i];
        }
    }

    // Sort the array
    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = 0; j < evenCount - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array after removing odd elements and squaring even elements:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    removeAndSquare(arr, size);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
