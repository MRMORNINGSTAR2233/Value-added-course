#include <stdio.h>

int main()
{
    int i, num, count_p = 0, count_n = 0, count_z = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d numbers: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            count_p++;
        else if (arr[i] < 0)
            count_n++;
        else if (arr[i] == 0)
            count_z++;
        else
        {
            printf("Wrong Entry\n");
            return 1; // Exit the program with an error code
        }
    }

    printf("Positive Numbers: %d\n", count_p);
    printf("Negative Numbers: %d\n", count_n);
    printf("Zero Numbers: %d\n", count_z);

    return 0;
}