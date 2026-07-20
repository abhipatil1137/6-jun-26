#include<stdio.h>

float deposite( float amount, float balance){
    return balance+amount;
}
float withdraw(float amount, float balance){
    return amount-balance;

}
int main(){
    float balance=1000;
    float amount;
    printf("enter amount to diposite: ");
    scanf("\n %f",&amount);
    float current_balance=deposite(amount,balance);
    printf("current balance=%f",current_balance);
    printf("\n enter amount withdraw: ");
    scanf("\n %f",&amount);
    
    if(amount>current_balance)
    {
        printf("insufficient balance");
    }
    else{
        current_balance=withdraw(amount,current_balance);
        printf("remanig balance%f",current_balance);
    }
    return 0;
}