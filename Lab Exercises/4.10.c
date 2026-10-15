/*4.10 (Conversion Celsius to Fahrenheit) Write a program that converts temperatures from 30 C to 50 C to the Fahrenheit scale. 
The program should print a table displaying temperatures in the two scales side by side. [Hint: F = C + 32] */

#include<stdio.h>
int main(){

    int C;
    printf("Celsius\t\tFahrenheit\n");
    for(C=30 ; C<=50 ; C++){
printf("%4d\t\t%5.1f\n", C, (9.0/5.0)*C+32);
    }

    return 0;
}