#include<stdio.h>

void takeInput(int arr[], int n){
for(int i=0; i<n ; i++){
    printf("Enter Element %d:", i);
    scanf("%d", &arr[i]);
}
}

int findlargest(int arr[], int n){
    int max = arr[0];
    for( int i = 1; i < n; i++ ){
        max = (arr[i] > max)? arr[i] : max;
    }
    return max;
}


int main()
{
    int n = 5;
int Roll_No[n];
takeInput(Roll_No, n);
int max = findlargest(Roll_No, n);
printf("The largest number from the elements is %d.\n", max);


    return 0;
}