#include <stdio.h>

int main(void){
char income [9];
char utilities [9];
char groceries[9];
char car [9]; 
printf("this is a budget calculator.\n How much do you make a month ");
scanf("%s", income); 
printf ("you make %s\n",income);
printf(" How much do your utilities cost\n ");
scanf("%s", utilities);
printf ("you make %s\n",income);
float spend[]= (float) income- (float) utilities;
printf ("%s", spend);
return 0;

}