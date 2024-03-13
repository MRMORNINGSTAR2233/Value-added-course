#include <stdio.h>

int main()
{
    long number;
    int lastDigit, firstDigit, sum;

    // Input the number
    printf("Enter a number: ");
    scanf("%ld", &number);

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit
    long  temp = number;
    while (temp >= 10)
    {
        temp /= 10;
    }
    firstDigit = temp;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    // Display the result
    printf("Sum of the first and last digit of %ld is: %d\n", number, sum);
    printf("firstdigit: %ld",firstDigit);
    printf("Lastdigit: %ld",lastDigit);
    return 0;
}
