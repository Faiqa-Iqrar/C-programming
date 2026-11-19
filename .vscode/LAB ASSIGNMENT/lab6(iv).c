// LAB 6, Q.NO.4. :-
// This program takes a string as input (character array) and, without using
// library string functions, counts its vowels and consonants and checks whether it is a
// palindrome.

#include<stdio.h>
int main()
{
    char s[100];

    printf("Enter your word: ");
    scanf("%99s", s);
int vowels = 0, consonants = 0;

    for(int i = 0 ; s[i]!='\0' ; i++){
char ch = s[i];
    if(ch>='A' && ch<='Z'){
        ch = ch + ('a' - 'A'); //change to lowercase 
    }
    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        else 
        consonants++;
    }
}
printf("Total Number of Vowels : %d.\n", vowels);
printf("Total Number of Consonants : %d.\n", consonants);
int isPalindrome = 1; //assuming its a palindrome
//finding length of string
int start = 0, end = 0;
while(s[end]!='\0'){
    end++;
}
end--;

while (start<end){
    if(s[start] != s[end]){
        isPalindrome=0;
        break;
    }
    start++;
    end--;
}

if(isPalindrome){
    printf("\"%s\" is a Palindrome.\n", s);
}
else     printf("\"%s\" is Not a Palindrome.\n", s);

    return 0;
}