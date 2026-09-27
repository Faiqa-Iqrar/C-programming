/*3.20 (Salary Calculator) Develop a program that will determine the gross pay for each of several employees. 
The company pays “straight time” for the first 40 hours worked by each employee 
and pays “time-and-a-half” for all hours worked in excess of 40 hours. 
You’re given a list of the employees of the company,
the number of hours each employee worked last week and the hourly rate of  each employee. 
Your program should input this information for each employee and 
should determine and display the employee's gross pay. Here is a sample input/output dialog: 

Enter # of hours worked (-1 to end): 39 

Enter hourly rate of the worker ($00.00): 10.00 

Salary is $390.00 

Enter # of hours worked (-1 to end): 40 

Enter hourly rate of the worker ($00.00): 10.00 

Salary is $400.00 

Enter # of hours worked (-1 to end): 41 

Enter hourly rate of the worker ($00.00): 10.00 

Salary is $415.00 

Enter # of hours worked (-1 to end): -1 
*/


#include<stdio.h>
int main(){

int hours, rate;
float salary;

printf("Enter the number of hours worked (enter -1 to quit): ");
scanf("%d", &hours);
while(hours!=-1){
printf("Enter hourly rate of the worker: ");
scanf("%d", &rate);

// if(hours<=40)=> gross pay = hoursxrate
// else hours>40 => standard hours = 40 , overtime hours = hours-40
//overtime pay = (hours-40) x rate x 1.5 [time-and-a-half]
//standard pay= 40xrate
//gross pay = standard pay + overtime pay = (40xrate)+((hours-40)xratex1.5)
// 1.0(Full rate), 0.5(half rate), 1.5(Time-and-a-half

if(hours<=40)
salary=(float)(hours*rate);
else 
salary=(float)(((40*rate)+((hours-40)*rate*1.5)));
printf("Salary is %.2f\n", salary);
printf("Enter the number of hours worked (enter -1 to quit): ");
scanf("%d", &hours);
}

    return 0;
}