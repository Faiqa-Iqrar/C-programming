// LAB 8, Q.NO.1. :-
// This program declares an integer, a float and a char variable, and prints the
// value and address of each variable using pointers.
#include <stdio.h>

int main(void)
{
    int   x  = 2;
    float y  = 2.5;
    char  ch = 'a';

    int   *ptrx  = &x;
    float *ptry  = &y;
    char  *ptrch = &ch;
// %p expects a void * argument, therefore we cast it
    printf("x:   value = %d,   address = %p\n", *ptrx,  (void *)ptrx);
    printf("y:   value = %.2f, address = %p\n", *ptry,  (void *)ptry);
    printf("ch:  value = %c,   address = %p\n", *ptrch, (void *)ptrch);

    return 0;
}