#include <stdio.h>
int grade; 

int main(){
    printf("what percent do you have in the class\n");
    scanf("%d", &grade);
    if (grade>= 90){
        printf("your grade is an a\n"); 
    }else if (grade>= 88){
        printf("your grade is a B\n ");
    }else if (grade>= 70){
        printf("your grade is a C\n ");
    }else if (grade >= 60){
        printf("your grade is a D\n ");
    }else{
        printf ("your grade is a F\n"); 
    }
     
    return 0; 
    }
