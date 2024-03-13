#include <stdio.h>
#include <string.h>

void deleteOccurrences(char *line, const char *word)
{
    char *match;

    while ((match = strstr(line, word)) != NULL)
    {
        memmove(match, match + strlen(word), strlen(match + strlen(word)) + 1);
    }
}

int main()
{
    // Assuming a maximum line length of 1000 characters
    char line[1000];

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Remove trailing newline character
    line[strcspn(line, "\n")] = '\0';

    // Delete occurrences of 'the' in the line
    deleteOccurrences(line, "the");

    printf("After deleting 'the': %s\n", line);

    return 0;
}
