// LAB 10, Q.NO.5 :-
// This program dynamically allocates an array of structures for n students (roll
// number, marks), takes input, and displays the class average. In a comment, explain two
// differences between static and dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main(void)
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) { printf("Invalid size.\n"); return 1; }

    struct Student *s = malloc(n * sizeof *s);   /* n students on heap */
    if (s == NULL) { printf("malloc failed\n"); return 1; }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");   scanf("%d", &s[i].roll);
        printf("Marks: ");  scanf("%f", &s[i].marks);
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += s[i].marks;

    float average = sum / n;

    printf("\nClass average = %.2f\n", average);

    free(s);
    return 0;
}
/* TWO DIFFERENCES BETWEEN STATIC AND DYNAMIC MEMORY ALLOCATION:
 
 * 1. WHEN THE SIZE IS DECIDED:
     Static  — size is fixed at COMPILE TIME.  e.g.  struct Student s[5];
               You must know the count when writing the code. Can't grow.
     Dynamic — size is decided at RUNTIME.    e.g.  malloc(n * sizeof *s);
               n comes from the user. Can be any value. Can be resized
               with realloc.
 
 * 2. WHERE AND HOW LONG THE MEMORY LIVES:
     Static  — lives on the STACK (locals) or in the data segment (globals).
               Automatically freed when the scope ends. Size limited
               (stack is typically a few MB).
     Dynamic — lives on the HEAP. Persists until you explicitly free() it
               (or the program exits). Much larger limit (RAM-bound).
               If you forget free(), it leaks.
 
 * (A third: static memory is accessed directly by name; dynamic memory is
   accessed through a pointer, so you must check NULL and free manually.)
 */