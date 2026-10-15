/*This program loops from ASCII value 0 to 127 and prints 10 characters per line.*/


#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 127; i++) {
        // Print character representation (note: some low values are control characters)
        printf("%3c ", i);
        
        // Print 10 characters per line
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}