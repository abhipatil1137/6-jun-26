#include <stdio.h>
#include <string.h>

int main()
{
    // Declare string variable
    char songTitle[] = "Tum Hi Ho";

    // Calculate and print string length
    printf("Song Title: %s\n", songTitle);
    printf("Length of song title: %lu characters\n", strlen(songTitle));

    return 0;
}