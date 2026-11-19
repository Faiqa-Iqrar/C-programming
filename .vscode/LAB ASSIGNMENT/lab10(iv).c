// LAB 10, Q.NO.4 :-
// This program dynamically allocates memory for a string whose length is
// entered by the user, takes the string as input, and prints it in uppercase.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len;
    printf("Enter max string length: ");
    scanf("%d", &len);

    if (len <= 0) { printf("Invalid length.\n"); return 1; }

    char *str = malloc((len + 1) * sizeof *str);   /* +1 for '\0' */
    if (str == NULL) { printf("malloc failed\n"); return 1; }

    printf("Enter string: ");
    scanf("%s", str);                               /* no & — str is a pointer */

    /* ---- Uppercase in place ---- */
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');           /* -32 */
    }

    printf("Uppercase: %s\n", str);

    free(str);
    return 0;
}