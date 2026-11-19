// LAB 7, Q.NO.3. :- Define a structure Date (day, month, year) and nest it inside a structure Employee
// (ID, name, salary, joining date). Take input for 3 employees and display their records.
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining;
};

int main(void)
{
    struct Employee emp[3];

    /* ---- Input ---- */
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");      scanf("%d", &emp[i].id);
        printf("Name: ");    scanf("%49s", emp[i].name);
        printf("Salary: ");  scanf("%f", &emp[i].salary);
        printf("Joining date (dd mm yyyy): ");
        scanf("%d %d %d",
              &emp[i].joining.day,
              &emp[i].joining.month,
              &emp[i].joining.year);
    }

    /* ---- Display ---- */
    printf("\n%-5s %-15s %-10s %-12s\n",
           "ID", "Name", "Salary", "Joining");
    for (int i = 0; i < 3; i++) {
        printf("%-5d %-15s %-10.2f %02d/%02d/%04d\n",
               emp[i].id, emp[i].name, emp[i].salary,
               emp[i].joining.day, emp[i].joining.month, emp[i].joining.year);
    }
    return 0;
}