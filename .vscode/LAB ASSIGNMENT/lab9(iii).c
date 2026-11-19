// LAB 9, Q.NO.3 :-
// This program copies the contents of one file into another file, where both file
// names are entered by the user and displays an error if the source file does not exist.
#include<stdio.h>
int main()
{
    char src[100];
    char dest[100];
printf("Enter filename for source file: ");
scanf("%99s", src);
printf("Enter filename for destination file: ");
scanf("%99s", dest);

FILE *in = fopen(src, "r");
if(in==NULL){
    printf("Error: source file '%s' does not exist or cannot be opened.\n", src);
return 1;
}

FILE *out = fopen(dest, "w");
if(out == NULL){
        printf("Error: destination file '%s' can not be created.\n", dest);
        fclose(in);
return 1;}

int c;
while((c=fgetc(in)) != EOF)
fputc(c, out);
fclose(in);
fclose(out);
printf("File copied succesfully: %s -> %s\n", src, dest);
    return 0;
}