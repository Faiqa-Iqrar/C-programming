/*3.36 (Armstrong Numbers) 
Armstrong numbers are numbers that are equal to the sum of their digits raised to power of the number of digits in them. 
The number 153, for example, equals 1^3 + 5^3 + 3^3 . 
Thus, It's an Armstrong number.
Write a program to check if the user inputs an Armstrong No. or Not  
*/

#include<stdio.h>
int main(){
    char choice;

    do{
int digit=0;
int num;
printf("Enter your number:");
scanf("%d", &num);

while(num<100 || num>999){
    printf("Invalid. Enter number of 3 digits only:");
    scanf("%d", &num);    
}
int original_num=num;
int temp=num;
// 1. Count the number of digits
while(temp!=0){
    digit++;
 temp/=10;
}

printf("No. of digits are %d\n", digit);

// Reset temp to process digits again
int sum = 0;
temp=num; 

// 2. Calculate the sum of digits raised to the power of 'digit'

while(temp!=0){
int remainder=temp%10;  // Extract last digit without modifying temp

int power=1; //Reset power to 1 for each digit
for(int i=1; i<=digit; i++){
power*=remainder;
}

sum+=power;
temp/=10; // Drop the last digit
}


// 3. Compare sum with original input number

if (sum == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is NOT an Armstrong number.\n", original_num);
    }

// Ask the user if they want to check another number
        printf("\nDo you want to check another number? (y/n): ");
        scanf(" %c", &choice); // Space before %c skips leftover newline characters

        printf("----------------------------------------\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished. Goodbye!\n");
    return 0;
}