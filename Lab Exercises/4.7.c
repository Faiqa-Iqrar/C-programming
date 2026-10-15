/*4.7 Write for statements that print the following sequences of values:  

a) 1, 3, 5, 7, 9, 11, 13  

b) 2, 5, 8, 11, 14, 17  

c) 30, 20, 10, 0, –10, –20, –30  

d) 15, 23, 31, 39, 47, 55 */



#include<stdio.h>
int main(){

// a)
for (int x = 1; x <= 13; x+=2 ) {
    printf("%d, ", x);
}
printf("\n");

// b)
for(int y = 2; y<=17 ; y+=3){
    printf("%d, ",y);
}
printf("\n");

// c)
for(int y = 30; y>=-30 ; y-=10){
    printf("%d, ",y);
}

// d)
printf("\n");
for(int y=15; y<=55 ; y+=8){
    printf("%d, ",y);
}

return 0;
}