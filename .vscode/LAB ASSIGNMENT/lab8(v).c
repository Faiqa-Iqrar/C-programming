// LAB 8, Q.NO.5 :-
// This function takes an array and its size via a pointer and returns both the
// minimum and maximum values to main() through pointer parameters.
#include<stdio.h>
void MinMax(int *arr, int n, int *min, int *max);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n<=0) {printf("Invalid Size!");
    return 1;}
    int arr[n];
    for(int i = 0; i<n ; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", arr+i);
    }
    int min, max;
    MinMax(arr, n, &min, &max);
    printf("The maximum element of your array is %d.\n", max);
    printf("The minimum element of your array is %d.\n", min);

    return 0;
}
void MinMax(int *arr, int n, int *min, int *max){
    *min = *arr;
    *max = *arr;
    for(int i = 0; i<n ; i++){
    if(*(arr+i) < *min) *min = *(arr+i);
    if(*(arr+i) > *max) *max = *(arr+i);
}
}