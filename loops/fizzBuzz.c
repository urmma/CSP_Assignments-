#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50]; 
char two[50];
char three[50]; 
int main(){
    printf("Give me a number");
    scanf("%d", &usr);
    printf("give me a short word"); 
    scanf("%s", &one);
    printf("give me a another short word"); 
    scanf("%s", &two);
    strcat(three, one); 
    strcat(three, two);
    //loop counts to 50
    for(i=0;i<=usr;i++){
     //replace numbers divisable by 3 and 5 with "fizzbuzz"
        if(i%3==0 && i%5==0 ){
            strcat(one,two);
            printf("%s\n", one);
        }else if(i%3==0){
        //replace numbers divisable by 3 with "fizz"
        printf("%s\n", one);
        }else if (i%5==0){
        // replace numbers divisable by 5 with "buzz"
        printf("%s\n",two);
        }else if{
        printf("%d\n", i); //print the number
        }
    }
    return 0;
}