// LAB 6, Q.NO.5. :-
// This program removes all duplicate elements from an array and prints the
// resulting array along with its new size.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);}
    
        int write = 0, read;
        for( read = 0 ; read < n ; read++)
        {
            int duplicate=0;
            for( int k = 0 ; k < write ; k++){
                if(arr[k]==arr[read]){
                    duplicate = 1;
                    break;
                }
            }
            if(!duplicate){
                arr[write] = arr[read];
                write++;
            }
        }
        
    int newSize = write;
printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\nNew size: %d\n", newSize);

    return 0;
}