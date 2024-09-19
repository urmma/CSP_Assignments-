#include <stdio.h>
#include <string.h>
int main(void){
    char animal [20]; 
     char place [20];
     char verb [20]; 
     char sentence [700] = "The";
    printf ("Name an animal: ");
    scanf ("%s",animal);
    printf ("Name a place:");
    scanf (place, sizeof (place), stdin);
    scanf ("Name a  past tence verb: ");
    scanf (verb, sizeof (verb), stdin);
    strcat (sentence, animal);
    strcat(sentence,"went to the");
    strcat (sentence, place); 
    strcat(sentence, "and");
    strcat (sentence, verb); 
    strcat(sentence, "with his firend the angry turtle\n");
    scanf("%s", sentence);

return 0;

}
