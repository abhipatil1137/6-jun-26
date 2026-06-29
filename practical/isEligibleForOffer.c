#include <stdio.h>
#include <stdbool.h>

bool isEligibleForOffer(int age, float orderValue) {
    return (age >= 18 && orderValue > 500);
}

int main() {
    int age = 20;
    float orderValue = 750;

    if (isEligibleForOffer(age, orderValue)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}