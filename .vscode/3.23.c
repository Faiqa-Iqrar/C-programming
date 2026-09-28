/*
3.23 (Find the Largest Number)
 The process of finding the largest number (i.e., the maximum of a group of numbers) 
 is used frequently in computer applications. For example, 
 a program that determines the winner of a sales contest would input the number of units sold by each salesperson. 
The salesperson who sells the most units wins the contest. 
Write a pseudocode program and then a program that inputs a series of 10 non-negative numbers and determines 
and prints the largest of the numbers. [Hint: Your program should use three variables as shown below.] 
counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed) 
number: The current number input to the program 
largest: The largest number found so far
*/


#include<stdio.h>
int main(){

int units, count, largest=0, previous;

for(count=1; count<10; count++){
printf("Enters units sold:");
scanf("%d", &units);
if(units>largest)
largest=units;
}

printf("The largest units sold are %d", largest);

    return 0;
}