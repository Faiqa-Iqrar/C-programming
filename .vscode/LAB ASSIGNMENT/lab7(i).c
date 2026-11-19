// LAB 7, Q.NO.1. :-
// Define a structure Student with members: roll number, name and marks of 3
// subjects. Take data for 5 students and display each student's total and percentage.
#include<stdio.h>
struct Student
{   
    int roll;
    char name[50];
    float marks[3];
};

int main()
{
   struct Student s[5];
for(int i = 0; i<5 ; i++){
    printf("\nEnter Student %d Details:\n", i+1);
    printf("Roll number: "); 
    scanf("%d", &s[i].roll);
    printf("Name: "); 
    scanf("%49s", s[i].name);
for(int j = 0 ; j<3 ; j++){
    printf("Enter Marks for Subject %d: ", j+1);
    scanf("%f", &s[i].marks[j]);
}
}

printf("\n%-5s %-15s %-5=s %-5s\n", "Roll", "Name", "Total", "Percentage");
for(int i = 0; i<5 ; i++){
    float total = 0.0;
    for(int j = 0 ; j<3 ; j++){
        total += s[i].marks[j];
    }
    float perc = total/3.0;
    printf("%-5d %-15s %-5.2f %-5.2f\n", s[i].roll, s[i].name, total, perc);
}

    
    return 0;
}