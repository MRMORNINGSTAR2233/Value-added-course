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

// Function to print a prime pyramid within a given range
void printPrimePyramidInRange(int start, int end)
{
    int num = start;
    for (int i = start; i <= end; i++)
    {
        // Print leading spaces
        for (int j = 0; j < end - i; j++)
        {
            printf("  ");
        }

        // Print prime numbers
        for (int j = start; j <= i; j++)
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
    long start, end;

    // Input start and end range from the user
    printf("Enter the start of the range: ");
    scanf("%ld", &start);

    printf("Enter the end of the range: ");
    scanf("%ld", &end);

    // Displaying the prime pyramid within the given range
    printPrimePyramidInRange(start, end);

    return 0;
}