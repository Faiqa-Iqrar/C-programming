//LAB 10, Q.NO.2 :-
// This program allocates an array using calloc() and prints its values before
// input to show they are initialized to zero. Compare this with malloc() in a comment.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;

    /* ---- calloc: zero-initialized ---- */
    int *c = calloc(n, sizeof *c);
    if (c == NULL) { printf("calloc failed\n"); return 1; }

    printf("calloc values (should all be 0):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");

    /* ---- malloc: uninitialized (garbage) ---- */
    int *m = malloc(n * sizeof *m);
    if (m == NULL) { printf("malloc failed\n"); return 1; }

    printf("malloc values (garbage / unpredictable):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", m[i]);
    printf("\n");

    free(c);
    free(m);
    return 0;

    /* COMPARISON:
 * calloc(n, size) — allocates n*size bytes AND sets every byte to 0.
                    So all elements start as 0. Slightly slower (zeroing).
                    Good when you need a clean slate (sums, counters, flags).
 
 * malloc(size)    — allocates size bytes but does NOT initialize them.
                    The memory holds whatever was there before (garbage).
                    Faster, but you MUST initialize before reading.
                    Reading uninitialized memory is undefined behavior.
 
 * Rule of thumb: use calloc when you want zeros, malloc when you will
  overwrite every element before reading it.
 */
}