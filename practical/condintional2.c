#include <stdio.h> 

int main() {
    int balance = 10000;
    int amount = 15000;

    if(amount > balance) {
        printf("\nInsufficient balance");
    } else {
        printf("\nWithdrawal successful");
    }

    int marks = 75;

    if(marks > 90) {
        printf("\nPass");
    } else {
        printf("\nNot eligible for grade A");
    }

    return 0;
}