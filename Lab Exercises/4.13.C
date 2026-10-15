/*4.13 (Natural Numbers Arithmetic) 
Write a program that prints the sum, 
the sum of the squares, 
and the sum of the cubes of all natural numbers from 1 till any number entered by the user.  */

#include<stdio.h>
int main(){

    int sum=0, sum_sq=0, sum_cube=0;
    int n;
    printf("Enter the number of values you want to sum:");
    scanf("%d", &n);

    for(int i = 1 ; i<=n ; i++){
        sum+=i;
            sum_sq+=i*i;
                sum_cube+=i*i*i;
    }

    printf("The sum of first %d numbers is %d.\n", n, sum);
    printf("The sum of squares of first %d numbers is %d.\n", n, sum_sq);
    printf("The sum of cubes of first %d numbers is %d.\n", n, sum_cube);

    return 0;
}