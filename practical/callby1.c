#include <stdio.h>

// Pass by Value
void increaseFollowersByValue(int followers) {
    followers = followers + 1000;
    printf("Followers inside increaseFollowersByValue(): %d\n", followers);
}

// Pass by Reference (using pointer)
void increaseFollowersByReference(int *followers) {
    *followers = *followers + 1000;
    printf("Followers inside increaseFollowersByReference(): %d\n", *followers);
}

int main() {
    int followers = 5000;

    printf("Original followers: %d\n\n", followers);

    // Pass by Value
    increaseFollowersByValue(followers);
    printf("Followers after increaseFollowersByValue(): %d\n\n", followers);

    // Pass by Reference
    increaseFollowersByReference(&followers);
    printf("Followers after increaseFollowersByReference(): %d\n", followers);

    return 0;
}