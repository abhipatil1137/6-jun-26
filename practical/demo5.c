#include <stdio.h>

// Function to swap the number of songs in two playlists using pointers
void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1Songs = 22;   // e.g., "Chill Vibes" playlist
    int playlist2Songs = 40;   // e.g., "Workout Mix" playlist

    printf("Before swap:\n");
    printf("Playlist 1 songs: %d\n", playlist1Songs);
    printf("Playlist 2 songs: %d\n", playlist2Songs);

    swapPlaylistCounts(&playlist1Songs, &playlist2Songs);

    printf("\nAfter swap:\n");
    printf("Playlist 1 songs: %d\n", playlist1Songs);
    printf("Playlist 2 songs: %d\n", playlist2Songs);

    return 0;
}
