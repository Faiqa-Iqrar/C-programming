/*
c) Write a program that computes the value of e^x by using the formula
e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ...
*/

#include<stdio.h>
int main(){
    int terms;
    double fact = 1.0;
    double e_to_x = 1.0; // Initialized to 1.0 (represents 1 / 0!)
    double power = 1.0;

    printf("Enter no. of terms to estimate the value of e^x:");
    scanf("%d", &terms);

    double x;
    printf("Enter exponent(x) for e:");
    scanf("%lf", &x);

    if(terms<0)
    printf("Enter a positive integer.\n");

    else{
// Loop runs (terms - 1) times since e already includes term #1
    for(int i=1; i<terms ; i++){
        fact*=i;
        power*=x;
        double temp = power/fact;
        e_to_x+=temp;
    }
        printf("The estimated value of e raised to %.2f after %d terms is %.5f.\n",x, terms, e_to_x);
               
    }
    return 0;
}