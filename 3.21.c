#include<stdio.h>
int main(){
int a=1, b=0;

printf("%d\n", ++a);
//a = 2
printf("%d\n", a); 
// a=2
printf("%d\n", b++);
// prints b=0 then increments b=1
printf("%d\n", b);
//prints 1
printf("%d\n", ++a+b);
//increments a to 3 then adds b(1) and prints 4 
printf("%d\n", a);
// prints 3
printf("%d\n", ++b+a);
// increments b to 2 and adds a(3) and prints 5
printf("%d\n", b++);
//prints b(2) and increments it to 3
return 0;
}