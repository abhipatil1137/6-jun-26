#include<stdio.h>

float calcluate(int units){

    if(units<100){
        return(units*2);

    }else if(units<200){
        return(units*3);
    }else{
        return(units*5);
    }
}
    int main(){
        printf("\n your bill is%f",calcluate(201));
    }
    
