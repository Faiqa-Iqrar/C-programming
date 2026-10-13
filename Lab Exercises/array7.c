#include<stdio.h>

int searchNumber(int arr[], int n, int key){
    for(int i = 0; i<n ; i++){
        if(arr[i] == key)
        return i;
    }
    return -1;
}
int main(){

    int n = 10;
int arr[n], key;
for(int i = 0; i<n ; i++){
printf("Element %d:", i);
scanf("%d", &arr[i]);
}
printf("Enter the number for search:");
scanf("%d", &key);

int result= searchNumber(arr, n, key);
int count = 0;
for (int i = 0; i < n; i++)
{
    if (arr[i] == key)
    {
        printf("Found at index %d\n", i);
        count++;
    }
}
if (count == 0)
    printf("Number not found.\n");
  return 0;
}