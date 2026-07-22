#include <stdio.h>
#include <ctype.h>

// Reusable function to capitalize first character of any string
void capitalizeFirstLetter(char str[])
{
    if (str[0] != '\0')   // Check string is not empty
    {
        str[0] = toupper(str[0]);
    }
}

int main()
{
    char product[50];
    char username[50];

    // Product name
    printf("Enter product name: ");
    scanf("%s", product);

    capitalizeFirstLetter(product);

    printf("Product Name: %s\n", product);


    // Username
    printf("Enter username: ");
    scanf("%s", username);

    capitalizeFirstLetter(username);

    printf("Username: %s\n", username);

    return 0;
}