#include <stdio.h>
int main(){
int passes=0;
int fails=0;
int result, student=1;
while(student<=10){
     printf("Enter your result(pass=1, fail=2):");
scanf("%d", &result);
while(result!=1 && result!=2){
    printf("Inavalid input. Enter your result(pass=1, fail=2):");
scanf("%d", &result);
}
if(result==1){
    passes+=1;}
    else{
fails+=1;}

student+=1;


}

printf("passes=%d, fails=%d" , passes, fails);

    return 0;
}