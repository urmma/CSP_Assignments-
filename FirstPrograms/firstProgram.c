#include <stdio.h>

int main(void){
char favoriteColor [30];
printf ("what is you favorite color?: \n");
fgets(favoriteColor, sizeof (favoriteColor), stdin);
printf("Cute!");
return 0;

}