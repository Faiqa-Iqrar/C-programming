#include<stdio.h>
int main(){
char word[100];
printf("Type any word:");
scanf("%99s", word);
int length = 0;

while(word[length]!='\0'){
length++;
}

printf("Length of the word is %d\n", length);


    return 0;
}