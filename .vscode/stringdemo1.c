#include<stdio.h>
int main(){
    char address[100];

    printf("enter your address :");
    fgets(address,sizeof(address),stdin);
    printf("address is %s",address);
    
    return 0;
    
}