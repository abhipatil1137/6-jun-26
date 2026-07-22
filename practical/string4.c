#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[50];
    char username[10];

    // Take full name input
    printf("Enter your full name: ");
    scanf("%s", fullName);

    // Check length of name
    if(strlen(fullName) < 5)
    {
        // Copy full name if shorter than 5 characters
        strcpy(username, fullName);
    }
    else
    {
        // Copy first 5 characters
        strncpy(username, fullName, 5);
        username[5] = '\0';  // Add null character at end
    }

    // Print generated username
    printf("Generated Username: %s\n", username);

    return 0;
}