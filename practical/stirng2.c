#include <stdio.h>
#include <string.h>

int main()
{
    char username1[50];
    char username2[50];

    // Take input from user
    printf("Enter first username: ");
    scanf("%s", username1);

    printf("Enter second username: ");
    scanf("%s", username2);

    // Compare usernames using strcmp()
    if(strcmp(username1, username2) == 0)
    {
        printf("Both usernames are the same.\n");
    }
    else
    {
        printf("Usernames are different.\n");
    }

    return 0;
}