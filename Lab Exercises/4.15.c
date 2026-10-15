/*4.15 (Modified Compound-Interest Program) 
Modify the compound-interest program of Section 4.6 to repeat 
its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. 
Use a for loop to vary the interest rate. */
// Fig. 4.6: fig04_06.c
// Calculating compound interest.

/*#include <stdio.h>
#include <math.h>

int main(void)
{
double principal = 1000.0; // starting principal
for(int i=5 ; i<=)
double rate = .05; // annual interest rate
// output table column heads
printf("%4s%21s\n", "Year", "Amount on deposit");

// calculate amount on deposit for each of ten years
for (unsigned int year = 1; year <= 10; ++year) {

    // calculate new amount for specified year
double amount = principal * pow(1.0 + rate, year);

// output one table row
printf("%4u%21.2f\n", year, amount);
 }
*/

 /* Exercise 4.15: Modified Compound-Interest Program */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; // starting principal

    // Loop to vary the interest rate from 5% (.05) to 10% (.10)
    for (double rate = 0.05; rate <= 0.10; rate += 0.01) {
        
        // Print a header for the current interest rate
        printf("\nInterest Rate: %.1f%%\n", rate * 100.0);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        // calculate amount on deposit for each of ten years
        for (unsigned int year = 1; year <= 10; ++year) {
            // calculate new amount for specified year using the current rate
            double amount = principal * pow(1.0 + rate, year);
            // output one table row
            printf("%4u%21.2f\n", year, amount);
        }
    }

    return 0;
}


 

