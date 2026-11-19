// LAB 9, Q.NO.2 :-
// This program reads a text file and counts the number of characters, words and
// lines in it.

#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp = fopen("notes.txt", "r");
    if(fp==NULL){
        printf("Error: Could not open notes.txt.\n");
        return 1;
    }

    int chars=0, lines = 0, words = 0, inWord = 0;
    int c;
   while((c = fgetc(fp)) != EOF){
    chars++;

    if(c=='\n')
    lines++;

    if(isspace(c)){  //if c is any whitespace('\n', '\t', etc...)
        inWord=0; // between words
    }
    else if(!inWord)
    {
words++;
inWord=1;
   }
   }
   fclose(fp);
      
   // If file doesn't end with newline, the last line still counts
   if(c>0 && lines==0){
lines = 1;
   }

   printf("Characters: %d\n", chars);
    printf("Words:      %d\n", words);
    printf("Lines:      %d\n", lines);
    return 0;
}