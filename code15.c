#include <stdio.h>
#include <string.h>

// Function to find the frequency of each character in a string
void findCharacterFrequency(const char *str)
{
    int frequency[256] = {0}; // Assuming ASCII characters

    // Iterate through each character in the string
    for (int i = 0; i < strlen(str); ++i)
    {
        char currentChar = str[i];
        ++frequency[currentChar];
    }

    // Display character frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; ++i)
    {
        if (frequency[i] > 0)
        {
            printf("'%c': %d times\n", (char)i, frequency[i]);
        }
    }
}

int main()
{
    // Maximum length of the input string
    const int maxLength = 100;

    // Input string
    char inputString[maxLength];
    printf("Enter a string:\n");
    fgets(inputString, maxLength, stdin);

    // Remove newline character if present
    inputString[strcspn(inputString, "\n")] = '\0';

    // Find and display character frequencies
    findCharacterFrequency(inputString);

    return 0;
}