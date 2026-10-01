/*3.42 What’s wrong with the following statement? 
printf( "%d", --( x * y ) ); 
Rewrite it to accomplish what the programmer was probably trying to do. 
*/

#include<stdio.h>
int main(){

    int x = 2;
    int y = 4;
    int z = x*y;
printf( "%d\n", --z ); 

//OR
printf( "%d\n", (x*y)-1 ); 


    return 0;
}