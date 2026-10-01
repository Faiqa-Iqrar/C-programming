/*
b) Write a program that estimates the value of the mathematical constant e by using the
formula:
e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ...
*/



#include<stdio.h>
int main(){
    int terms;
    double fact = 1.0;
    double e = 1.0; // Initialized to 1.0 (represents 1 / 0!)
    printf("Enter no. of terms to estimate the value of e:");
    scanf("%d", &terms);

    if(terms<0)
    printf("Enter a positive integer.\n");

    else{
// Loop runs (terms - 1) times since e already includes term #1
    for(int i=1; i<terms ; i++){
        fact*=i;
        double temp = 1.0/fact;
        e+=temp;
    }
        printf("The estimated value of e after %d terms is %.10lf.\n",terms, e);
               
    }
    return 0;
}