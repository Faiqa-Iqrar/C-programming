#include<stdio.h>
int main(){
int x, sum;    
x = 1;
    sum = 0;
while(x<=10){
    
    sum+=x;
    x++;
}

printf("Sum of 1st 10 number is %d.\n", sum);
return 0;
}