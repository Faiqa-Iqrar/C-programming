/*3.36 (Armstrong Numbers) 
Armstrong numbers are numbers that are equal to the sum of their digits raised to power of the number of digits in them. 
The number 153, for example, equals 13 + 53 + 33 . Thus, it is an Armstrong number. 
Write a program to display all three-digit Armstrong numbers.  */

#include<stdio.h>
int main(){

    printf("ALL 3-DIGITS ARMSTRONG NUMBERS:\n");
    for(int num=100; num<=999; num++){
    int temp = num;
    int sum = 0;

    while(temp!=0){
       int remainder = temp % 10;
sum += (remainder*remainder*remainder);
temp/=10;
    }
if(sum==num){
    printf("%d\n", sum);
}
    }
    return 0;
}