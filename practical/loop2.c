#include<stdio.h>
/*
1 deposit
2 withdraw
3 balance 
4 exit
*/
int main(){
    int choice;

    while(1){
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n you selected deposit:");
                break;
            case 2:
                printf("\n you selected withdraw:");
                break;
            case 3:
                printf("\n you selected balance:");
                break;
            case 4:
                printf("\n you selected exit:");
                return 0;
            default:
                printf("\n invalid choice:");
                return 0;
        }
    }
}