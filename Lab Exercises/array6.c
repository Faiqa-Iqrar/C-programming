#include<stdio.h>
int main()
{

int n=101;
long long int arr[n];;
arr[0] = 0;
arr[1] = 1;

for(int i = 2; i < n; i++){
    arr[i] = arr[i-1] + arr[i-2];
}
 printf("FIBONACCI SERIES:\n");

for(int i = 0; i < n; i++){

    printf("%lld\t", arr[i]);
}
    return 0;
}