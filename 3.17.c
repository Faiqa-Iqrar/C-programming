/*3.17 (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank cus- tomer's mortgage. For each customer, the following facts are available: 

a) the account number 

b) the mortgage amount  

c) the mortgage term  

d) the interest rate 

The program should input each fact, 
calculate the total interest payable ( = mortgage amount × interest rate × mortgage term), 
and add it to the mortgage amount to get the total amount payable. 
It should calculate the required monthly payment by 
dividing the total amount payable by the number of months in the mortgage term. 
The program should display the required monthly payment rounded off to the nearest dollar. 
The program should process each customer's account at a time. Here is a sample input/output dialog. 
Enter account number (-1 to end): 100 

Enter mortgage amount (in dollars): 6500 

Enter mortgage term (in years): 3 

Enter interest rate (as a decimal): 0.075 

The monthly payable interest $ 221 

Enter account number (-1 to end): 200 

Enter mortgage amount (in dollars): 12000 

Enter mortgage term (in years): 10 

Enter interest rate (as a decimal): 0.045 

The monthly payable interest is: $ 145 

Enter account number (-1 to end): -1 
*/

#include<stdio.h>
#include<string.h>
int main(){

    int acc_no, mortg_amt, mortg_term;
    double intersetRate, total_interest, total_amt, req_payment;
printf("Enter account number (-1 to end):\n");
scanf("%d", &acc_no);

while(acc_no!=-1){
printf("Enter mortgage amount (in dollars):\n");
scanf("%d", &mortg_amt);
printf("Enter mortgage term (in years):\n");
scanf("%d", &mortg_term);
printf("Enter interest rate (as a decimal):\n");
scanf("%lf", &intersetRate);

total_interest=mortg_amt*intersetRate*mortg_term;
total_amt=total_interest+mortg_amt;
req_payment=total_amt/(float)(mortg_term*12);

printf("The monthly payable interest is $ %.0f\n", req_payment);

printf("Enter account number (-1 to end):\n");
scanf("%d", &acc_no);
}
return 0;
}