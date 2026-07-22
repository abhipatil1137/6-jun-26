#include <stdio.h>
#include <string.h>

int main()
{
    // Declare strings with enough space
    char source[] = "Flipkart";
    char shoppingApp[20];

    // Copy source string into shoppingApp
    strcpy(shoppingApp, source);

    // Print copied string
    printf("Shopping App: %s\n", shoppingApp);

    return 0;
}