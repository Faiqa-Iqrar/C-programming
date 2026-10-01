/*
3.45 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · ... · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
*/

#include<stdio.h>
int main(){
    int num;
    long long int fact = 1;
    printf("Enter an integer:");
    scanf("%d", &num);

    if(num<0)
    printf("Factorial of negative integers doesn't exist.\n");

    else{

    for(int i=1; i<=num ; i++){
        fact*=i;
    }
        printf("Factorial of %d is %lld.\n", num, fact);

    }
    return 0;
}