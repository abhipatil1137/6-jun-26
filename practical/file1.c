#include <stdio.h>

int main() {
    // Open (or create) playlist.txt in write mode
    FILE *fptr = fopen("playlist.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write top 3 favorite songs into the file
    fprintf(fptr, "Blinding Lights\n");
    fprintf(fptr, "Perfect\n");
    fprintf(fptr, "Shape of You\n");

    // Close the file
    fclose(fptr);

    printf("Songs written to playlist.txt successfully!\n");

    return 0;
}