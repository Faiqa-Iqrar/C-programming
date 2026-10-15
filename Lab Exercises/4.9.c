/*4.9 (Sum and Average of Integers) Write a program to sum a sequence of integers and calculate their average. 
Assume that the first integer read with scanf specifies the number of values to be entered. 
Your program should read only one value each time scanf is executed. 
A typical input sequence might be 7 678 234 315 489 536 456 367 
where the 7 indicates that the subsequent 7 values are to be summed. */

#include<stdio.h>
int main(){

int n,i;
float x, sum=0.0;
printf("Enter the number of values you want to sum:");
scanf("%d", &n);

for(i=1 ; i<=n ; i++){
    printf("Enter number %d:", i);
    scanf("%f", &x);
    sum+=x;
}
printf("The total sum of your %d numbers is %.2f\n", n, sum);
printf("The average is %.2f\n", sum/n);
    return 0;
}