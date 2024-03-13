#include <stdio.h>

int main()
{
    int num, originalNum, newNum = 0, placeValue = 1;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Process each digit
    while (num != 0)
    {
        int digit = num % 10;

        // Add one to the digit and update the new number
        newNum += (digit + 1) * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Move to the next digit
        num /= 10;
    }

    // Display the new number
    printf("Original Number: %d\n", originalNum);
    printf("New Number: %d\n", newNum);

    return 0;
}
