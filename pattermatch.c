#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computeLPSArray(char *pattern, int M, int *lps)
{
    int len = 0;
    int i = 1;
    lps[0] = 0;

    while (i < M)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(char *pattern, char *text)
{
    int M = strlen(pattern);
    int N = strlen(text);

    // Create lps[] that will hold the longest prefix suffix values for pattern
    int *lps = (int *)malloc(sizeof(int) * M);
    if (lps == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    computeLPSArray(pattern, M, lps);

    int i = 0; // index for text
    int j = 0; // index for pattern

    while (i < N)
    {
        if (pattern[j] == text[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            printf("Pattern found at index %d\n", i - j);
            j = lps[j - 1];
        }
        else if (i < N && pattern[j] != text[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    free(lps);
}

int main()
{
    char text[] = "abcxabcdxabcdabcdabcy";
    char pattern[] = "abcdabcy";

    printf("Text: %s\n", text);
    printf("Pattern: %s\n", pattern);

    KMPSearch(pattern, text);

    return 0;
}
