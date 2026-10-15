#include <stdio.h>

int main(void) {
    long long principal_cents = 100000; // $1000.00 represented as 100000 pennies
    int rate_percentage = 5;            // 5% annual interest rate

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (unsigned int year = 1; year <= 10; ++year) {
        // Compound interest calculation using integer math (pennies)
        principal_cents = (principal_cents * (100 + rate_percentage)) / 100;

        long long dollars = principal_cents / 100;
        long long cents = principal_cents % 100;

        printf("%4u%14lld.%02lld\n", year, dollars, cents);
    }

    return 0;
}