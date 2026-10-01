/*3.33 (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32 
so that it prints a hollow square. 
For example, if your program reads a size of 5, it should print

*****
*   *
*   *
*   *
*****


*/

#include <stdio.h>
int main(){
int size;
printf("Enter size of square (1-20):");
scanf("%d", &size);
while(size<1 || size>20){
    printf("Invalid Entry\nEnter size of square again(1-20):");
scanf("%d", &size);
}
for(int i = 1; i<=size ; i++){
    for(int j = 1; j<=size ; j++){
        if(i==1 || i==size || j==1 || j==size)
    printf("*");
    else
        printf(" ");

}
    printf("\n");
}

    return 0;
}
