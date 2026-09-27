#include<stdio.h>
int main(){
int x=1,y;
int total = 0;
while(x<=10){
    y=x*x*x;
    printf("%d\n", y);
    total+=y;
    ++x;
}
printf("The total is %d \n", total);

    return 0;
}