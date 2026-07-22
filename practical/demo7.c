#include <stdio.h>

// Function to increment each follower count by 100 using pointer arithmetic
void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) += 100;
    }
}

int main() {
    int igFollowers[5] = {1200, 850, 3000, 450, 2100};  // 5 friends' follower counts
    int n = 5;

    printf("Before increment:\n");
    for (int i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, igFollowers[i]);
    }

    incrementFollowers(igFollowers, n);

    printf("\nAfter increment (+100 each):\n");
    for (int i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, igFollowers[i]);
    }

    return 0;
}