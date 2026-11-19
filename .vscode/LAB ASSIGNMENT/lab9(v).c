// LAB 9, Q.NO.4 :-
// This program appends new records to an existing file without deleting the old
// data, and then displays the full updated file.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float cgpa;
};

int main(void)
{
    int m;
    printf("How many new students to append? ");
    scanf("%d", &m);

    struct Student s;

    /* ---- APPEND mode: old data preserved ---- */
    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL) { printf("Error opening file.\n"); return 1; }

    for (int i = 0; i < m; i++) {
        printf("\nNew Student %d\n", i + 1);
        printf("Roll: ");   scanf("%d", &s.roll);
        printf("Name: ");   scanf("%49s", s.name);
        printf("CGPA: ");   scanf("%f", &s.cgpa);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.cgpa);
    }
    fclose(fp);

    /* ---- Reopen in read mode: display FULL file ---- */
    fp = fopen("students.txt", "r");
    if (fp == NULL) { printf("Error opening file for reading.\n"); return 1; }

    printf("\n--- Full updated file ---\n");
    printf("%-6s %-15s %-6s\n", "Roll", "Name", "CGPA");

    int roll;
    char name[50];
    float cgpa;

    while (fscanf(fp, "%d %s %f", &roll, name, &cgpa) == 3) {
        printf("%-6d %-15s %-6.2f\n", roll, name, cgpa);
    }

    fclose(fp);
    return 0;
}