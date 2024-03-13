#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main()
{
    int number;

    // Read input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate and display the factorial
        printf("Factorial of %d is: %d\n", number, factorial(number));
    }

    return 0;
}
/*#include <stdio.h>

int factorial(int n)
{
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is: %d\n", number, (number < 0) ? -1 : factorial(number));

    return 0;
}*/