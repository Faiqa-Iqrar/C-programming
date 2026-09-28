/*3.24 (Tabular Output) Write a program that uses looping to print the following table of values. 


Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.*/

#include<stdio.h>
int main(){


    
    printf("N\tN^2\tN^3\tN^4\n");

for(int i = 1; i<=10; i++){
int square=i*i;
    int cube=i*i*i;
    int quad=i*i*i*i;
    printf("%d\t%d\t%d\t%d\n", i, square, cube, quad);
}
    return 0;
}