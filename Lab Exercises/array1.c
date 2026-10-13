#include<stdio.h>
int main(){
int arr[10];
int max=0;
int min;
for(int i = 0; i<3; i++){
printf("Enter Element %d:", i);
scanf("%d", &arr[i]);
max = (arr[i]>max)? arr[i] : max;
if(i==0){
min=arr[0]; }
else{
    min= (arr[i]<min)? arr[i] : min;
}
}

printf("maximum : %d\n", max);
printf("minimum  : %d", min);


    return 0;
}