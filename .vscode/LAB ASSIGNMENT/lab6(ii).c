// LAB 6, Q.NO.2. :- 
// This program sorts an array of n integers in ascending order using bubble sort,
// and then searches for a value entered by the user using linear search.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        printf("Enter Element %d (Index %d): ", i+1, i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0 ; i < n-1 ; i++){
        int swapped = 0;
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           swapped = 1;
        }
    }
    if(!swapped) break;
}
printf("The elements after bubble sort are:\n");
for(int i = 0; i<n ; i++){
    printf("Element %d: %d\n", i+1, arr[i]);
}
int key, found = 0;
printf("Enter the element you want to search in your array: ");
scanf("%d", &key);
for(int i = 0; i<n ; i++){
if(arr[i]==key){ 
    printf("The value %d is found at index %d.\n", key, i);
found++;}
}
if(found==0)
printf("The value %d is not found.\n", key);
    return 0;
}