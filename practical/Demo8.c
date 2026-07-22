#include <stdio.h>

// Nested structure to store bio details
struct Bio {
    char description[100];
    int age;
};

// Structure for an Instagram-style profile
struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;   // nested structure
};

int main() {
    // Initialize an InstaProfile variable with details
    struct InstaProfile myProfile = {
        "code_with_aarav",
        1520,
        {"Coder | Coffee lover | Exploring C, one pointer at a time", 21}
    };

    // Display all fields
    printf("Username    : %s\n", myProfile.username);
    printf("Followers   : %d\n", myProfile.followers);
    printf("Bio         : %s\n", myProfile.bio.description);
    printf("Age         : %d\n", myProfile.bio.age);

    return 0;
}