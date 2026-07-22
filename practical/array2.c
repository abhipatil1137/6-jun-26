#include <stdio.h>

int main()
{
    // Declare 2D array: 3 playlists × 5 days
    int playlistRatings[3][5] = {
        {5, 4, 5, 3, 4},   // Playlist 1
        {4, 5, 3, 5, 5},   // Playlist 2
        {3, 4, 4, 5, 3}    // Playlist 3
    };

    // Print ratings for the second playlist (row index 1)
    printf("Ratings for Second Playlist:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    return 0;
}