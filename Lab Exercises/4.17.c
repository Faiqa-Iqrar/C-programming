/*4.17 (Calculating Credit Limits) 
Collecting money becomes increasingly difficult during periods of recession, 
so companies may tighten their credit limits to prevent their accounts receivable (money owed to them) from becoming too large. 
In response to a prolonged recession, one company has cut its customers’ credit limits in half. 
Thus, if a particular customer had a credit limit of $2000, it’s now $1000. 
If a customer had a credit limit of $5000, it’s now $2500.  

Write a program that analyzes the credit status of three customers of this company. For each customer you’re given:  

a) The customer’s account number.  

b) The customer’s credit limit before the recession.  

c) The customer’s current balance (i.e., the amount the customer owes the company).  

Your program should calculate and print the new credit limit for each customer 
and should determine (and print) which customers have current balances that exceed their new credit limits.  */

#include<stdio.h>
int main(){

float acc_no, current_credit, current_balance, new_credit ;

for( int i = 1 ; i<=3 ; i++){
printf("----- Customer %d -----\n", i);
    printf("Enter your account number:");
    scanf("%f", &acc_no);
    printf("Enter credit limit before recession:");
    scanf("%f", &current_credit);
    printf("Enter current balance:");
    scanf("%f", &current_balance);

    new_credit = current_credit / 10.0;

    printf("Account number: %.2f\n", acc_no);
    printf("New credit limit: %.2f\n", new_credit);
    printf("Current balance: %.2f\n", current_balance);

if(current_balance>new_credit)
    printf("Credit Limit Exceeded!\n");
    else
        printf("Credit Status: Within Limit!\n");
        printf("\n");


}
}