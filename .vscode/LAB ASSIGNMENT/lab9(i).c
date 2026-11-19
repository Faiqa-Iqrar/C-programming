// LAB 9, Q.NO.1 :-
// This program takes a paragraph of text from the user and writes it to a file
// named notes.txt , then reads the file and displays its contents on screen.
#include<stdio.h>
#include<string.h>
int main()
{
    char paragraph[1000];
    FILE *fp;
//read paragraph from user
    printf("Enter a paragraph: ");
    if(fgets(paragraph, sizeof(paragraph), stdin) == NULL){
        printf("NO INPUT!\n");
        return 1;
    }
        // fgets keeps the trailing '\n' — which is fine, it goes into the file
// write paragraph to the file
fp = fopen("notes.txt", "w");
if(fp==NULL){
 printf("Error: could not open notes.txt for reading.\n");
        return 1;
    }
fputs(paragraph, fp);
fclose(fp); // MUST close before reopening 


//read back
fp = fopen("notes.txt", "r");
if(fp==NULL){
 printf("Error: could not open notes.txt for reading.\n");
        return 1;
    }
printf("\nContents of notes.txt:\n");
char line[1000];
   while(fgets(line, sizeof line, fp) != NULL){
    printf("%s", line);  // fgets kept the '\n', so no extra 
   } 
fclose(fp);

return 0;
}