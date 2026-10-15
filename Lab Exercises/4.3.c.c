#include<stdio.h>
#include<math.h>

int main(){

// a) Sum odd integers between 1 and 99 using a for statement 

int sum = 0; 

for(int i = 1 ; i <= 99 ; i+=2){ 

sum+=i; 

} 

 

// b) Print the value 333.546372 in a field width of 15 with precisions 1 to 5 (left-justified) 

float value = 333.546372;
printf("%-15.1f\n", value); 

printf("%-15.2f\n", value); 

printf("%-15.3f\n", value); 

printf("%-15.4f\n", value); 

printf("%-15.5f\n", value);

// c) Calculate 2.5^3 using pow and print with precision 2 in a field width of 10 

float ans = pow(2.5,3);
printf("%-10.2f\n", ans);

// d) Print integers 1 to 20 using a while loop (5 per line) 
int i = 1;
int k=1;
while(i<=4){
    int j=1;
    while(j<=5){
printf("%d\t", k);
k++; j++;
    }
printf("\n");
i++;
}

//Alternative code

int x = 1;
while(x<=20){
        printf("%d", x);
    if(x%5==0)
    printf("\n");
    else
    printf("\t");
    x++;
}
    

// e) Repeat Exercise 4.3(d) using a for statement

for(int y=1 ; y<=20 ; y++){
    printf("%d", y);
    if(y%5==0)
    printf("\n");
    else
    printf("\t");
}

return 0;
}
