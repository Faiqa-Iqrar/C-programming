// LAB 7, Q.NO.2. :- Using the same Student structure as in Q.NO.1, This program finds and displays the
// details of the student with the highest percentage.
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
int best = 0;                                  // index of best student
float bestPct = -1;                            // start below any real percentage
for (int i = 0; i < 5; i++) {
    float total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
    float pct = total / 3.0;
    if (pct > bestPct) {                       // strictly greater → first max wins on ties
        bestPct = pct;
        best = i;
    }
}
// now s[best] is the top student
 printf("\n--- Highest Percentage ---\n");
    printf("Roll: %d\n", s[best].roll);
    printf("Name: %s\n", s[best].name);
    printf("Marks: %.2f %.2f %.2f\n",
           s[best].marks[0], s[best].marks[1], s[best].marks[2]);
    printf("Total: %.2f\n",
           s[best].marks[0] + s[best].marks[1] + s[best].marks[2]);
    printf("Percentage: %.2f\n", bestPct);
return 0;

}