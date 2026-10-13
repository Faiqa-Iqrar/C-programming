#include<stdio.h>
int main(){
float sum=0.0;
float arr[10];

for(int i=0; i<10; i++){
printf("Enter Element %d:", i);
scanf("%f", &arr[i]);
sum+=arr[i];
}

printf("Sum of all elements of array is %f:", sum );
return 0;}