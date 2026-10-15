/*4.12 (Prime Numbers) 
Write a program to calculate and print a list of all prime numbers from 1 to 100. */

#include<stdio.h>
int main(){

    int isPrime;
    int n=1;
do{
    isPrime=1;

    for(int i = 2; i*i<=n ; i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1 && n!=1)
printf("%d ", n);

n++;
    }while(n<=100);
printf("\n");



    return 0;
}