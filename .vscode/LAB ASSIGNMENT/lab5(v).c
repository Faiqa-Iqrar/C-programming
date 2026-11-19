// LAB 5, Q.NO.5. :-
// This program uses a function int power(int base, int exp) (without using
// pow() ) and a function void printTable(int n) that prints the multiplication table
// of n up to 10. Function prototypes are declared above main() .

#include <stdio.h>

// Prototypes declared above main() 
int  power(int base, int exp);
void printTable(int n);

int main(void)
{
    int base, exp, n;

    // implementing power() function
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d ^ %d = %d\n", base, exp, power(base, exp));
   
    //Implementing printTable() -
    printf("Enter a number for its multiplication table: ");
    scanf("%d", &n);
    printTable(n);

    return 0;
}

/* power(base, exp) -> base raised to exp, computed by repeated
   multiplication. No pow(), no math.h.
Logic:  result = 1;  multiply result by base, exp times.
   base^0 = 1 (empty product) — loop runs 0 times, returns 1.
   Negative exp is not handled (integer result); caller avoids it.
   ============================================================ */
int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    result *= base;
    return result;
}

/*printTable(n) -> prints n x 1 ... n x 10, one per line.
   Returns nothing (void); it only produces output. */
void printTable(int n)
{
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}