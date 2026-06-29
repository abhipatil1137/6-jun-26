#include <stdio.h>

int main() {
    int number = 12345;

    number%= 10;

    printf("last digit = %d", number);

    return 0;
}