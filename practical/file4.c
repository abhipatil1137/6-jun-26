#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Custom case-insensitive substring search (like Python's 'in', but for C)
int containsIgnoreCase(const char *text, const char *word) {
    char textCopy[100], wordCopy[100];

    // Convert both strings to lowercase for comparison
    int i;
    for (i = 0; text[i]; i++)
        textCopy[i] = tolower((unsigned char)text[i]);
    textCopy[i] = '\0';

    for (i = 0; word[i]; i++)
        wordCopy[i] = tolower((unsigned char)word[i]);
    wordCopy[i] = '\0';

    // strstr checks if wordCopy exists inside textCopy
    return strstr(textCopy, wordCopy) != NULL;
}

int main() {
    char song[100];

    // Open playlist.txt in read mode
    FILE *fptr = fopen("playlist.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file! Make sure playlist.txt exists.\n");
        return 1;
    }

    printf("Songs containing 'love':\n");

    // Read each line and check if it contains 'love' (case-insensitive)
    while (fgets(song, sizeof(song), fptr) != NULL) {
        // Remove trailing newline for cleaner output
        song[strcspn(song, "\n")] = '\0';

        if (containsIgnoreCase(song, "love")) {
            printf("%s\n", song);
        }
    }

    fclose(fptr);

    return 0;
}