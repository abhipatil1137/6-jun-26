#include <stdio.h>

int main() {
    char playlistName[] = "Chill Vibes";
    int totalSongs = 50;
    float avgDuration = 3.8;

    printf("My favorite Spotify playlist is '%s', it contains %d songs, and the average song duration is %.1f minutes.\n",
           playlistName, totalSongs, avgDuration);

    return 0;
}