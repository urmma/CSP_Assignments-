#include <stdio.h> 
int num = 20; 

int main(){ 
    if (num < 10){
    printf ("this is a sigle digit number\n"); 
    }else if (num < 100){
        printf("this is a double diget number"); 
    }else{
        printf("this is at least triple diget number"); 
    }
    return 0;
}