#include <stdio.h>
int main(void) {
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;
    unsigned int totalGrades = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade;

    while ((grade = getchar()) != EOF) {
        switch (grade) {
            case 'A': 
            case 'a':
                ++aCount;
                ++totalGrades;
                break;
            case 'B': 
            case 'b':
                ++bCount;
                ++totalGrades;
                break;
            case 'C': 
            case 'c':
                ++cCount;
                ++totalGrades;
                break;
            case 'D': 
            case 'd':
                ++dCount;
                ++totalGrades;
                break;
            case 'F': 
            case 'f':
                ++fCount;
                ++totalGrades;
                break;
            case '\n': 
            case '\t': 
            case ' ':
                break;
            default:
                printf("Incorrect letter grade entered.\n");
                break;
        }
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    if (totalGrades > 0) {
        double gpa = (4.0 * aCount + 3.0 * bCount + 2.0 * cCount + 1.0 * dCount + 0.0 * fCount) / totalGrades;
        printf("\nClass Average Grade (GPA scale 0-4): %.2f\n", gpa);
    } else {
        printf("\nNo valid grades entered.\n");
    }

    return 0;
}