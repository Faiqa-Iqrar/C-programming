#include<stdio.h>
int main(){
int i,j;

printf("(A)\n");

    for( i = 1 ; i<=10 ; i++){
        for( j = 1 ; j<=i ; j++){
            printf("%s", "*");;
        }
        printf("\n");
    }


printf("\n");

printf("(B)\n");


for( i = 1 ; i<=10 ; i++){
        for( j = 10 ; j>=i ; j--){

            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");
printf("(C)\n");

for( i = 1 ; i<=10 ; i++){
    for(int s = 0 ; s<i; s++){
        printf("%s", " ");
    }
        for( j = 10 ; j>=i ; j--){
            printf("%s", "*");
        }
        printf("\n");
    }

            printf("\n");

printf("(D)\n");

    for( i = 1 ; i<=10 ; i++){
        for(int s=10 ; s>i ; s--){
            printf("%s", " ");
        }
        for( j = 1 ; j<=i ; j++){
            printf("%s", "*");;
        }
        printf("\n");
    }

    return 0;
}