#include <stdio.h>

int main() {
    char song[100];

    // Open playlist.txt in read mode
    FILE *fptr = fopen("playlist.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file! Make sure playlist.txt exists.\n");
        return 1;
    }

    printf("Your Spotify Playlist:\n");

    // Read and display each line until end of file
    while (fgets(song, sizeof(song), fptr) != NULL) {
        printf("%s", song);
    }

    // Close the file
    fclose(fptr);

    return 0;
}