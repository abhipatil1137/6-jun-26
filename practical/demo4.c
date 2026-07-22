#include <stdio.h>

int main() {
    int likes;
    int *ptrLikes;

    likes = 42;
    ptrLikes = &likes;

    printf("Value pointed to by ptrLikes: %d\n", *ptrLikes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);

    return 0;
}