/*4.11 (Calculating the Sum of Multiples) 
Write a program to calculate and print the sum of all multiples of 7 from 1 to 100. */

#include<stdio.h>
int main(){
    int sum = 0;
for(int i = 7; i<=100 ; i+=7){
    sum+=i;
}

printf("The sum of all multiples of 7 from 1 to 100 is %d.\n", sum);
    return 0;
}