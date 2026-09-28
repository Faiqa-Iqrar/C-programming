#include<stdio.h>
int main(){
float sales, salary;

printf("Enter sales in dollars (-1 to quit):");
scanf("%f", &sales);
while(sales!=-1){
    salary=200+((9.0/100.0)*sales);
    printf("Salary is :$%.2f\n", salary);
printf("Enter sales in dollars (-1 to quit):");
scanf("%f", &sales);

}
    return 0;
}