// LAB 6, Q.NO.1. :-
// This program takes 10 integers into an array and finds the largest element, the
// smallest element and the average of all elements.
#include<stdio.h>
#define SIZE 10
int main()
{
int arr[SIZE];
for(int i = 0; i < SIZE ; i++){
    printf("Enter Element %d(Index %d): ", i+1, i );
    scanf("%d", &arr[i]);
}
int max = arr[0]; 
int min = arr[0];
double sum = 0.0;
for(int i = 0 ; i<SIZE ; i++){
    max = (arr[i]>max)? arr[i] : max; 
        min = (arr[i]<min)? arr[i] : min; 
sum += arr[i];
}
printf("The largest element is %d.\n", max);
printf("The smallest element is %d.\n", min);
printf("The average of elements is %.2f.\n", sum/SIZE);
return 0;
}
