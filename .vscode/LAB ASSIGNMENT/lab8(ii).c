// LAB 8, Q.NO.2 :-
// This program finds the sum and the largest element of an array using pointer
// arithmetic only (no array indexing [] ).

#include <stdio.h>

#define MAX 100

int main(void)
{
    int n;
    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[MAX];                     // always 100, but use only n

    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", arr + i);
    }

    int sum = 0, max = *arr;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
        if (*(arr + i) > max) max = *(arr + i);
    }

    printf("Sum = %d\nLargest = %d\n", sum, max);
    return 0;
}