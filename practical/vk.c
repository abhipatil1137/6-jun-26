#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[]) {
    printf("%c", toupper(name[0]));

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c", toupper(name[i + 1]));
            break;
        }
    }
}

int main() {
    char name[] = "Virat Kohli";

    printf("Name: %s\n", name);
    printf("Initials: ");
    getUserInitials(name);

    return 0;
}