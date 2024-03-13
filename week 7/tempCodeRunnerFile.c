#include <stdio.h>
#include <stdlib.h>

// Function to remove odd elements and square even elements
void modifyVector(int arr[], int n)
{
    int write_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[write_index++] = arr[i] * arr[i];
        }
    }
    // Set the remaining elements to 0
    for (int i = write_index; i < n; i++)
    {
        arr[i] = 0;
    }
}

// Function to sort the vector (using bubble sort)
void sortVector(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    modifyVector(arr, n);
    sortVector(arr, n);

    printf("Modified and sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
