/*3.32 (Square of Asterisks) Write a program that reads in the side of a square and then 
prints that square out of asterisks. 
Your program should work for squares of all side sizes between 1 and 20. 
For example, if your program reads a size of 4, it should print 

**** 
**** 
**** 
**** 

*/
#include <stdio.h>
int main(){
int size;

printf("Enter size of square (1-20):");
scanf("%d", &size);
while(size<1 || size>20){
    printf("Invalid Entry\nEnter size of square again(1-20):");
scanf("%d", &size);
}
for(int i = 1; i<=size ; i++){
    for(int j = 1; j<=size ; j++){
    printf("*");
    }
    printf("\n");
}

    return 0;
}
