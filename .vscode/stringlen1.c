#include<stdio.h>
#include<string.h>
int main(){


    char password[]="Admin123";

    pritnf("lenth of password is %d",strlen(password));

    if(strlen(password)>=8 && strlen(password)<16){
        pritnf("\n valid password length");

    }
    else
    {
        
        printf("\n not valid password");
    }
return 0;

}
