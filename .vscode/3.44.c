/*
3.44 (Sides of a Right Triangle) 
Write a program that reads three nonzero integers 
and determines and prints whether they could be the sides of a right triangle. 
*/
#include<stdio.h>
int main(){
int a,b,c;

printf("Enter integer 1:\n");
scanf("%d", &a);
printf("Enter integer 2:\n");
scanf("%d", &b);
printf("Enter integer 3:\n");
scanf("%d", &c);
if(a<=0 || b<=0 || c<=0)
printf("Side lengths must be positive nonzero integers.\n");
else if((a*a + b*b)== c*c || (b*b + c*c)== a*a || (a*a + c*c)== b*b)
printf("The integers (%d,%d,%d) entered can be represented as the sides of a right triangle.\n",a,b,c);
else
printf("The integers (%d,%d,%d) cannot be represented as the sides of a right triangle.\n", a,b,c);

    return 0;
}