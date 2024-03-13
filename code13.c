#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void bubbleSort(char names[][50], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                swap(names[j], names[j + 1]);
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][50];

    // Input names
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort names
    bubbleSort(names, n);

    // Display sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
