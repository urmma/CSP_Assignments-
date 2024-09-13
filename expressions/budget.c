#include <stdio.h>

int main(void){
float income, rent, utilities, grocieries, transportation,savings,expenses,spend;
float prent, putilities, pgrocieries, ptransportation, psavings, pexpenses;
printf("this is a budget calculator.\n How much do you make a month\n");
scanf("%f", &income); 
printf(" How much does your rent cost\n ");
scanf("%f", &rent);
printf(" How much does your utilities cost\n ");
scanf("%f", &utilities);
printf(" How much do your groceries cost\n ");
scanf("%f", &grocieries);
printf(" How much does your transportation cost\n ");
scanf("%f", &transportation); 
 savings = income* .2;
expenses = rent + utilities + grocieries + transportation;
 spend = income - expenses - savings;
printf ("you make %.2f\n", income);
printf ("you spend%.2f\n", expenses);
printf ("you save %.2f\n", savings);
printf ("your saving money is %.2f\n", spend);
prent = rent/income*100;
putilities= utilities/income*100;
pgrocieries= grocieries/income*100;
ptransportation= transportation/income*100;
psavings= savings/income*100;
pexpenses= expenses/income*100;
printf("your rent is %d%% of your income.", (int)prent);
printf("your utilities is %d%% of your income.", (int)putilities);
printf("your grocieries are %d%% of your income.", (int)pgrocieries);
printf("your transpotation is %d%% of your income.", (int)ptransportation);
printf("your savings are %d%% of your income.", (int)psavings);
printf("your expenses are %d%% of your income.", (int)pexpenses);
return 0;

}