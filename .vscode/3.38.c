/*3.38 (Counting 9s) 
Write a program that reads an integer (5 digits or fewer) 
and determines and prints how many digits in the integer are 9s. */

#include<stdio.h>
int main(){
int num;
int count=0;
printf("Enter an integer(5-digits or fewer):");
scanf("%d", &num);

while(num<0 || num>99999){
printf("Invalid Number of Digits.\nEnter an integer(5-digits or fewer):");
scanf("%d", &num);
}

int temp = num;
while(temp!=0){
int last_digit=temp%10;
if(last_digit==9)
count++;
temp/=10;
}

printf("The total number of 9's in %d is %d\n", num, count);
    return 0;
}
