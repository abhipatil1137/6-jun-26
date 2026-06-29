#include <stdio.h>

int main() {
    int likes = 800;
    int comments = 250;
    int shares = 60;

    if (likes >= 1000 || (comments > 200 && shares >= 50)) {
        printf("Trending Post\n");
    } else {
        printf("Not Trending\n");
    }

    return 0;
}