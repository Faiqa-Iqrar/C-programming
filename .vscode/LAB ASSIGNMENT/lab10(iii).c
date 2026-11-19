//LAB 10, Q.NO.3 :-
// This program first allocates memory for 5 integers, then uses realloc() to
// increase the size to 10, takes input for the new elements, and prints all 10 values.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* ---- Step 1: 5 ints ---- */
    int *arr = malloc(5 * sizeof *arr);
    if (arr == NULL) { printf("malloc failed\n"); return 1; }

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    /* ---- Step 2: grow to 10 ---- */
    int *tmp = realloc(arr, 10 * sizeof *arr);
    if (tmp == NULL) {
        printf("realloc failed — original 5 values still intact.\n");
        free(arr);                       /* free original before exit */
        return 1;
    }
    arr = tmp;                           /* only now replace */

    /* ---- Step 3: fill new slots ---- */
    printf("Enter 5 more integers:\n");
    for (int i = 5; i < 10; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    /* ---- Step 4: print all 10 ---- */
    printf("All 10 values: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}