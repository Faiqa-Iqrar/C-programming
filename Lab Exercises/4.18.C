/*4.18 (Bar-Chart Printing Program) One interesting application of computers is drawing graphs and bar charts. 
Write a program that reads five numbers (each between 1 and 30). 
For each number read, your program should print a line containing that number of adjacent asterisks. 
For example, if your program reads the number seven, it should print *******.  */

#include<stdio.h>
int main(){
int num, s;

for(int j = 1 ; j<=5 ; j++){
printf("\nEnter integer %d: (between 1-30):", j);
scanf("%d", &num);
if(num>=1 && num<=30){
for(s=1 ; s<=num ; s++)
printf("%s", "*");
}
else{
    printf("INVALID ENTRY!");
}
    }




    return 0;
}