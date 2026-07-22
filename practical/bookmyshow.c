#include <stdio.h>

// Nested structure to store show time (hours and minutes)
struct Time {
    int hours;
    int minutes;
};

// Structure for a BookMyShow-style movie show
struct MovieShow {
    char movie[50];
    int screen;
    struct Time showTime;   // nested structure
};

int main() {
    // Initialize a MovieShow variable with movie details
    struct MovieShow show1 = {"Pathaan", 3, {18, 45}};

    // Print details in the required format
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show1.movie, show1.screen, show1.showTime.hours, show1.showTime.minutes);

    return 0;
}