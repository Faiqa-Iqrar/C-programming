// LAB 8, Q.NO.4:-
// This program demonstrates a pointer to a pointer ( int ** ): change the value
// of a variable through a double pointer and print the value, address and pointer
// addresses at each level.

#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;        /* pointer to int */
    int **pp = &p;      /* pointer to pointer to int */

    printf("--- Before ---\n");
    printf("x      = %d\n", x);
    printf("&x     = %p\n", (void *)&x);
    printf("p      = %p  (value of p = &x)\n", (void *)p);
    printf("&p     = %p\n", (void *)&p);
    printf("pp     = %p  (value of pp = &p)\n", (void *)pp);
    printf("&pp    = %p\n", (void *)&pp);
    printf("*p     = %d  (same as x)\n", *p);
    printf("**pp   = %d  (same as x)\n", **pp);

    /* ---- Modify x through the double pointer ---- */
    **pp = 99;

    printf("\n--- After **pp = 99 ---\n");
    printf("x      = %d\n", x);          /* 99 */
    printf("*p     = %d\n", *p);         /* 99 */
    printf("**pp   = %d\n", **pp);       /* 99 */

    return 0;
}