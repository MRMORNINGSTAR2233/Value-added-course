#include <stdio.h>

void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
}

void right_half_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        print_star(i);
    }
}

void left_half_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%*s", 2 * (n - i), "");
        print_star(i);
    }
}

void full_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%*s", n - i, "");
        print_star(2 * i - 1);
        printf("\n");
    }
}

void inverted_right_half_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        print_star(i);
    }
}

void inverted_left_half_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        printf("%*s", 2 * (n - i), "");
        print_star(i);
    }
}

void inverted_full_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        printf("%*s", n - i, "");
        print_star(2 * i - 1);
        printf("\n");
    }
}

void rhombus_pattern(int n)
{
    full_pyramid(n);
    inverted_full_pyramid(n - 1);
}

void diamond_pattern(int n)
{
    full_pyramid(n);
    inverted_full_pyramid(n);
}

int main()
{
    int choice, n;
    char repeat;

    do
    {
        printf("Enter the number of rows: ");
        scanf("%d", &n);
        printf("Choose the pattern:\n1. Right Half Pyramid\n2. Left Half Pyramid\n3. Full Pyramid\n4. Inverted Right Half Pyramid\n5. Inverted Left Half Pyramid\n6. Inverted Full Pyramid\n7. Rhombus Pattern\n8. Diamond Pattern\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            right_half_pyramid(n);
            break;
        case 2:
            left_half_pyramid(n);
            break;
        case 3:
            full_pyramid(n);
            break;
        case 4:
            inverted_right_half_pyramid(n);
            break;
        case 5:
            inverted_left_half_pyramid(n);
            break;
        case 6:
            inverted_full_pyramid(n);
            break;
        case 7:
            rhombus_pattern(n);
            break;
        case 8:
            diamond_pattern(n);
            break;
        default:
            printf("Invalid choice");
            break;
        }

        printf("Do you want to generate another pattern? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}