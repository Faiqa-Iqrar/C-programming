//LAB 10, Q.NO.1 :-
// This program asks the user for n, allocates memory for n integers using
// malloc() , takes input, prints the sum, and frees the memory.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof *arr);    /* n ints, uninitialized */
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);

    free(arr);                             /* release the heap block */
    arr = NULL;                            /* optional: avoid dangling pointer */

    return 0;
}