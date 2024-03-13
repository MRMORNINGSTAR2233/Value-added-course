#include <stdio.h>

int main() {
    int number, firstdigit, lastdigit, sum,n;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &number);
      }
    lastdigit = number % 10; // Used to obtain the last digit
    printf("lastdigit %d\n", lastdigit);

    // A loop can be used find the first digit
    for (firstdigit = number; firstdigit >=n; firstdigit /= 10) {
        // Here continous divison takes place to first digit
    }
    printf("firstdigit %d\n",firstdigit);
    

    sum = firstdigit + lastdigit;

    printf("Sum of the first and last digits is : %d\n", sum);

    return 0;
}
