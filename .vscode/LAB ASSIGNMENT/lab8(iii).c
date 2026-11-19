// LAB 8, Q.NO.3 :-
// This function void reverse(char *str) reverses a string using pointers.
#include<stdio.h>
void reverse(char *str);
int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%99s", s);

    printf("Before reverse: %s\n", s);
    reverse(s);
    printf("After reverse: %s\n", s);

    return 0;
}

void reverse(char *str){
if(*str=='\0') return; //empty string guard
//finding length
   char *start = str;
   char *end = str;
   while(*end != '\0'){
    end++;
   }
   end--; //since end is on '\0' we decrement by 1
   // now end is the last real char
while(start < end){
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
