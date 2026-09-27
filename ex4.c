#include<stdio.h>
int main(){

    int z=100;
    int sum=0;
    while(z>=0){
        sum+=z;
        z--;
    }
    printf("%d",sum);
    return 0;
}