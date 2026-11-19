// LAB 7, Q.NO.4. :-
// This program declares a structure and a union with the same members ( int ,
// float , char[20] ). Print the size of both using sizeof() 
// The difference is explained in a comment.

#include <stdio.h>

struct S {
    int i;
    float f;
    char c[20];
};

union U {
    int i;
    float f;
    char c[20];
};

int main(void)
{
    printf("sizeof(struct S) = %zu\n", sizeof(struct S));
    printf("sizeof(union U)  = %zu\n", sizeof(union U));

    /* Explanation:
       STRUCT: members are stored one after another (plus padding).
               Size ≈ 4 + 4 + 20 = 28 bytes (padding may make it 28 or 32).
               Each member has its OWN memory.

       UNION:  all members SHARE the same memory block.
               Size = size of the LARGEST member = 20 bytes
               (rounded up to alignment, often 20 or 24).
               Writing one member OVERWRITES the others.
    */
    return 0;
}