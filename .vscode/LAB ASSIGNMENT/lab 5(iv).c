#include <stdio.h>
/*  SWAP BY VALUE
   x and y are COPIES of a and b. Swapping x and y only
   rearranges the copies on the stack. When the function
   returns, the copies are destroyed and a, b in main()
   are UNCHANGED. This is the default C behavior: arguments
   are passed by value.
*/
void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    // x and y swapped locally — but this dies on return 
}
/*    SWAP USING POINTERS (pass by address / "simulated" reference)
   x and y are POINTERS holding the ADDRESSES of a and b.
   *x and *y dereference them, i.e. "the int stored at that
   address" — which is the ORIGINAL variable in main().
   So writing *x = *y really changes a. This is how C fakes
   pass-by-reference: pass the address, modify through it. */
void swapByPointer(int *x, int *y)
{
    int temp = *x;   // temp = value at address x (i.e. a)
    *x = *y;         // a = value at address y (i.e. b)   
    *y = temp;       // b = old a   
}
int main(void)
{
    int a = 10, b = 20;
    printf("Before:            a = %d, b = %d\n", a, b);
    // by value: originals unchanged 

    swapByValue(a, b);
    printf("After swapByValue: a = %d, b = %d   <-- NOT swapped\n", a, b);
    // by pointer: originals swapped 
    swapByPointer(&a, &b);
    printf("After swapByPtr:   a = %d, b = %d   <-- SWAPPED\n", a, b);
    return 0;
}