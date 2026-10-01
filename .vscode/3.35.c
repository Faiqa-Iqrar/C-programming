/*3.35 (Printing the Decimal Equivalent of a Binary Number) 
Input an integer (5 digits or fewer) containing only 0s and 1s (i.e., a “binary” integer) 
and print its decimal equivalent. 
[Hint: Use the re- mainder and division operators to pick off the “binary” number’s digits one at a time from right to left.
Just as in the decimal number system, in which the rightmost digit has a positional value of 1, 
and the next digit left has a positional value of 10, then 100, then 1000, and so on, 
in the binary number system the rightmost digit has a positional value of 1, 
the next digit left has a positional value of 2, then 4, then 8, and so on. 
Thus, the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. 
The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]  
*/


#include<stdio.h>
int main(){
int weight = 1;
int decimal = 0;
int binary_no;
int is_valid=1;

printf("Enter your binary number(5-digits or fewer):");
scanf("%d", &binary_no);    

while(binary_no<0 || binary_no>99999){
    printf("Invalid. Enter binary number of 5 digits or fewer:");
    scanf("%d", &binary_no);    
}
int temp=binary_no;
while(temp!=0){
int last_digit=temp%10;
if(last_digit!=0 && last_digit!=1){
    is_valid=0;
    break;
}
  decimal+=last_digit*weight;
  temp/=10;
weight*=2;
}
if(is_valid){
printf("Decimal equivalent of %d is %d\n", binary_no, decimal);}
else{
    printf("You have entered the binary number in wrong format (only 0s and 1s allowed)\n");
}
    return 0;
}