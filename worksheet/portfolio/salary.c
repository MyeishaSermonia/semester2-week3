
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Johann Myeisha Sermonia
 * ID: 201865495
 */

 int main( void ) {
   // define and initialise variables for the problem data 
   float salary = 30000;
   float NI_rate = 9;
   float tax_rate = 25;

   // calculate the deductions and final take-home salary
   float NI_cont = salary * (NI_rate/100);
   float sal_aft_NI = salary - NI_cont;
   float tax_cont = 0;

   if (sal_aft_NI > 12500) {
      float tax_amount = sal_aft_NI - 12500;
      tax_cont = tax_amount * (tax_rate/100);
   }
   float take_home_sal = sal_aft_NI - tax_cont;  


   // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", NI_cont);
   printf("Tax contribution £%.2f\n", tax_cont);
   printf("Take home salary £%.2f\n", take_home_sal);

   return 0;
 }