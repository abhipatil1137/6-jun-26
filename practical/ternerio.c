#include<stdio.h>
int main() {
    int amount=54000;
    int discount=amount>5000?10:0;
    printf("discount is : %d%%",discount);

    return 0;

}