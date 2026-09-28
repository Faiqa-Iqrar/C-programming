/*
3.25 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
A A+3 A+6 A+9
7 10 13 63
14 17 20 126
21 24 27 189
28 31 34 252
35 38 41 315
*/
#include<stdio.h>
int main(){
int a;
printf("A\tA+3\tA+6\tA+9\n");
for(a=7; a<=35; a+=7){
printf("%d\t%d\t%d\t%d\n", a, a+3, a+6, a+9 );
}
return 0;
}