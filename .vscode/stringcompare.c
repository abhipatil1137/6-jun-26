#include<stdio.h>
#include<string.h>

int main(){

    char pass[]="admin";
    
    if(strcmp(pass,"admin")==0){

        printf("valid pass");
    }
    else
    {
        printf("invalid pass");
    }
    return 0;

}