/*1. Read N numbers and print the sum and average.*/

#include<stdio.h>
int main(){
int n;
float sum=0.0;


printf("Enter the number of elements in an arrray:");
scanf("%d", &n);

    float arr[n];

    for(int i = 0; i<n ; i++){
    printf("Enter Element of Index %d:", i);
    scanf("%f", &arr[i]);
        sum+=arr[i];
}

printf("The sum of the elements of array is %.2f.\n", sum);
printf("The average of the elements of array is %.2f.\n", sum/n);

return 0;
}
