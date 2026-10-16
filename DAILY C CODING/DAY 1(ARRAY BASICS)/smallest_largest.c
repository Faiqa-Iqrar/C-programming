//  2. ★ Find the largest and smallest element.

#include<stdio.h>
int main(){
int n; 
printf("Enter number of subjects:");
scanf("%d", &n);

float marks[n];
for(int i = 0; i<n ; i++){
    printf("Enter Marks of Subject %d:", i+1);
    scanf("%f", &marks[i]);
}

float max = marks[0];
for(int i = 1 ; i<n ; i++){
    max = (marks[i]>max)? marks[i] : max;
}

float min = marks[0];
for( int i = 1 ; i<n ; i++){
    min = (marks[i]<min)? marks[i] : min;
}

printf("The highest marks obtained are %.2f.\n", max);
printf("The lowest marks obtained are %.2f.\n", min);
    return 0;
}