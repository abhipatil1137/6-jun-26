#include <stdio.h>
#include <string.h>

// Structure to store song details
struct Playlist {
    char title[50];
    char artist[50];
    int duration;   // duration in seconds
};

int main() {
    // Initialize a Playlist variable with song details
    struct Playlist mySong = {"Blinding Lights", "The Weeknd", 200};

    // Print each field
    printf("Title: %s\n", mySong.title);
    printf("Artist: %s\n", mySong.artist);
    printf("Duration: %d seconds\n", mySong.duration);

    return 0;
}