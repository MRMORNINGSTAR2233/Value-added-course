/*#include <stdio.h>

int main()
{
    int n, i, j,k,l;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        for (j = i; j >= 1; j--)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}
*/
/*#include <stdio.h>

int main()
{
    int i, j, k;
    char letters[] = "ABCDEFG";
    int len = sizeof(letters) - 2; // Subtract 2 to ignore 'G' and '\0'

    for (i = len; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", letters[j]);
        }
        for (k = j; k >= 0; k--)
        {
            printf("%c ", letters[k]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*#include <stdio.h>

int main()
{
    int i, j;
    char letters[] = "ABCDEFG";
    int len = sizeof(letters) - 2; // Subtract 2 to ignore 'G' and '\0'
    i = len;

    while (i >= 0)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", letters[j]);
        }
        for (j = i; j >= 0; j--)
        {
            printf("%c  ", letters[j]);
        }
        printf("\n");
        i--;
    }

    return 0;
}*/
#include <stdio.h>
int main()
{

    int i, j, k, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // int n=10;

    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
            printf("%c", 65 + j);

        for (k = 1; k < (n - i); k++)
            printf("  ");

        for (j = i; j >= 0; j--)
            printf("%c", 65 + j);

        printf("\n");
    }
    return 0;

}