// LAB 9, Q.NO.4 :-
// This program stores records of 5 students (roll number, name, CGPA) in a file
// using fprintf() , then reads them back using fscanf() and displays only the
// students with CGPA above 3.0.

#include <stdio.h>

#define N 5

struct Student {
    int roll;
    char name[50];
    float cgpa;
};

int main(void)
{
    struct Student s[N];
    FILE *fp;

    /* ---- Input ---- */
    for (int i = 0; i < N; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");   scanf("%d", &s[i].roll);
        printf("Name: ");   scanf("%49s", s[i].name);
        printf("CGPA: ");   scanf("%f", &s[i].cgpa);
    }

    /* ---- Write ---- */
    fp = fopen("students.txt", "w");
    if (fp == NULL) { printf("Error opening file for writing.\n"); return 1; }

    for (int i = 0; i < N; i++)
        fprintf(fp, "%d %s %.2f\n", s[i].roll, s[i].name, s[i].cgpa);

    fclose(fp);

    /* ---- Read back and filter ---- */
    fp = fopen("students.txt", "r");
    if (fp == NULL) { printf("Error opening file for reading.\n"); return 1; }

    printf("\nStudents with CGPA > 3.0:\n");
    printf("%-6s %-15s %-6s\n", "Roll", "Name", "CGPA");

    int roll;
    char name[50];
    float cgpa;

    while (fscanf(fp, "%d %s %f", &roll, name, &cgpa) == 3) {
        if (cgpa > 3.0)
            printf("%-6d %-15s %-6.2f\n", roll, name, cgpa);
    }

    fclose(fp);
    return 0;
}