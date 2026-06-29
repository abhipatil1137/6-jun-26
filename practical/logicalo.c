#include<stdio.h>//library input output function
#include<stdbool.h>//library for boolean data type
//logical operators&& || !
/* 
&& is 2 condition operator
|| is 2 condition operator
! is 1 condition operator
*/
int main(){
     int age=13;
     bool citizen=true;
     if(age>=18 && citizen==true){
            printf("You are eligible to vote\n");
        }
        else{
            printf("You are not eligible to vote\n");
        }
}