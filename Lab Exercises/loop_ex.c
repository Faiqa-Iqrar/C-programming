#include<stdio.h>
int main(){
   /* int num;
do{
    printf("ENTER A NUMBER (1 TO EXIT):");
    scanf("%d", &num);
    if(num!=1){
        printf("Square of %d is %d\n", num, num*num);
    }
}while(num!=1);
*/

/*
int roll_no = 101;
    int start = roll_no;
    int end = roll_no + 200;
    int num, i, isPrime;

    for (num = start; num <= end; num++)
    {
        isPrime = 1;                 //assume prime for each new number

        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)        // i divides num, so not prime
            {
                isPrime = 0;
                break;               // no need to keep checking 
            }
        }

        if (isPrime)                 // print only after the check is done 
            printf("%d\n", num);
    }
*/
for(int i=1; i<=10; i++){
            printf("%d %d ", i, 11-i);
    }

    for(int i = 1,j=10; i<=10; i++, j--){

     printf("%d %d ", i, j);

    }
return 0;
}