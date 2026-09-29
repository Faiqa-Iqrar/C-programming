
/*3.22 (Checking if a Number is Prime) 
A prime number is any natural number greater than 1 that is divisible only by 1 and by itself. 
Write a C program that reads an integer and determines whether
it is a prime number or not. 
*/

#include<stdio.h>
int main(){
int num;
int isPrime=1; // Flag=> 1 means prime and 0 means not prime
printf("Enter a number to check if its prime:\n");
scanf("%d", &num);
if(num<=1){
    isPrime=0; //Numbers<=1 are not prime
    }else{
        for(int i = 2; i*i<=num; ++i){
            if(num%i==0){
            isPrime=0;
            break;
        }
    }
}
    if(isPrime==1)
        printf("You have entered a prime number\n");
    else
                printf("Your number is not prime\n");

    


    return 0;
}