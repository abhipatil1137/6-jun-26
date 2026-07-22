#include <stdio.h>

int main() {
    // Open playlist.txt in append mode
    FILE *fptr = fopen("playlist.txt", "a");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Add two more songs without deleting existing content
    fprintf(fptr, "Levitating\n");
    fprintf(fptr, "Bad Habits\n");

    // Close the file
    fclose(fptr);

    printf("Two new songs added to playlist.txt successfully!\n");

    return 0;
}