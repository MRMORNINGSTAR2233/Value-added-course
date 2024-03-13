#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check for equality
    if (originalNum == reversedNum)
    {
        printf("The original and reversed numbers are equal.\n");
    }
    else
    {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}
