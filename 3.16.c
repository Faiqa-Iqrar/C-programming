/*(Sales Tax) Sales tax is collected from buyers and remitted to the government. A retailer
has to file a monthly sales tax report which lists the sales for the month and the amount of sales
tax collected, at both the county and state levels. Develop a program that will input the total col-
lections for a month, calculate the sales tax on the collections, and display the county and state
taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax. Here is a sample
input/output dialog.

*/

#include<stdio.h>
#include<string.h>
int main(){

    double total, sales, county_tax, state_tax;
    char month[20];
printf("Enter total amount collected (-1 to quit):");
scanf("%lf", &total);
while(total!=-1){
printf("Enter name of month:");
scanf("%s", month);
printf("Total Collections: $ %.2f\n", total);

// since total = sales+(4/100)*sales+(5/100)*sales = (109/100)*sales =. sales = total / 1.09

sales=total/1.09;
printf("Sales: $ %.2f\n", sales);
county_tax=(5.0 / 100.0 )*sales;
printf("County Sales Tax: $ %.2f\n", county_tax);
state_tax=(4.0 / 100.0)*sales;
printf("State Sales Tax: $ %.2f\n", state_tax);
printf("Total Sales Tax Collected: $ %.2f", county_tax+state_tax);
printf("Enter total amount collected (-1 to quit):");
scanf("%lf", &total);

}
    return 0;
}