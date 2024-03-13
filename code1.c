#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (number < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &number);
    }

    for (; number > 0; number /= 10) {
        sum += number % 10;
        
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
