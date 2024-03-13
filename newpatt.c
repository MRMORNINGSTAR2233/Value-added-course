#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to print a prime pyramid
void printPrimePyramid(int rows)
{
    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++)
        {
            printf("  ");
        }

        // Print prime numbers
        for (int j = 0; j < i; j++)
        {
            while (!isPrime(num))
            {
                num++;
            }
            printf("%-4d", num);
            num++;
        }

        // Move to the next line
        printf("\n");
    }
}

int main()
{
    int rows;

    // Input number of rows from the user
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Displaying the prime pyramid
    printPrimePyramid(rows);

    return 0;
}
