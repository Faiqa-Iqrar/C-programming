#include<stdio.h>
int main()
{

int total=0;
int count = 0;
int num;
printf("Enter a number:\n");
scanf("%d", &num);

while(num!=1){
    total+=num;
    count++;
printf("Enter a number: (1 to stop the series)\n");
scanf("%d", &num);
}

if(count!=0){
float average=total/count;
printf("Average of the series of positive numbers entered is %.2f", average);}
else{
printf("No numbers were entered");
}
    return 0;
}