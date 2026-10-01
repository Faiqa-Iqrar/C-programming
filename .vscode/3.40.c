/*3.40 (Powers of 3 with an Infinite Loop) 
Write a program that keeps printing the powers of the integer 3, namely 3, 9, 27, 91, 273, and so on. 
Your loop should not terminate (i.e., you should create an infinite loop). 
What happens when you run this program? */



#include<stdio.h>
int main(){
    int power=3;

while(1){
    printf("%d\n", power);
    power*=3;
    sleep(1); // Pauses the execution for 1 second between iterations
}

return 0;
}

/*What happens when you run this program? 

Integer Overflow: 

Standard signed integers in C (usually 32-bit) 
have a maximum limit of $2,147,483,647$. 
As power is multiplied by 3 repeatedly, it quickly exceeds this limit. 

Negative Values & Unexpected Numbers: 
When the value exceeds the maximum limit, overflow occurs. 
The integer wraps around into negative numbers and eventually prints 0 continuously. 

Infinite Output: 
Because the loop condition while (1) is always true, 
the program will run continuously printing numbers until you manually force-stop it 
(e.g., pressing Ctrl + C in the terminal). */