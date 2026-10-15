/*4.14 (Factorials) The factorial function is used frequently in probability problems. 
The factorial of a positive integer n (written n! and pronounced “n factorial”) 
is equal to the product of the positive integers from 1 to n. 
Write a program that evaluates the factorials of the integers from 1 to 5. */

#include<stdio.h>
int main(){

long long int fact = 1;

for(int i = 1; i<=5 ; i++){
fact*=i;
printf("The factorial of %d is %lld.\n", i, fact);

}
    return 0;
}