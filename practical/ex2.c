#include <stdio.h>

int main() {
    int followerCount = 100;

    printf("Initial follower count = %d\n", followerCount);

    // Pre-increment
    printf("Using pre-increment (++followerCount): %d\n", ++followerCount);
    printf("Follower count after pre-increment = %d\n", followerCount);

    // Reset value
    followerCount = 100;

    // Post-increment
    printf("Using post-increment (followerCount++): %d\n", followerCount++);
    printf("Follower count after post-increment = %d\n", followerCount);

    return 0;
}