#include <stdio.h>

void right_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void left_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void inverted_right_half_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_left_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void inverted_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void rhombus_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i + 1)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void diamond_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i + 1)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int choice, n;
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
    return 0;
}
