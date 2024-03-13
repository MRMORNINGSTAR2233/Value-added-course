#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove vowels from a sentence
void removeVowels(char *sentence)
{
    int i, j = 0;

    for (i = 0; sentence[i] != '\0'; ++i)
    {
        if (!isVowel(sentence[i]))
        {
            sentence[j] = sentence[i];
            ++j;
        }
    }

    sentence[j] = '\0';
}

int main()
{
    const int maxLength = 1000;
    char sentence[maxLength];

    // Input a sentence
    printf("Enter a sentence:\n");
    fgets(sentence, maxLength, stdin);

    // Remove vowels from the sentence
    removeVowels(sentence);

    // Display the sentence without vowels
    printf("\nSentence without vowels:\n%s\n", sentence);

    return 0;
}
