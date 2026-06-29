#include <stdio.h>

int main() {
    int stock = 100;
    int sold = 5;

    stock = stock - sold;   // Assignment operation

    printf("Remaining Stock = %d", stock);

    return 0;
}