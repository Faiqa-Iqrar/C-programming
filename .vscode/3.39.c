/*
3.39 (Checkerboard Pattern of Asterisks) 
Write a program that displays the following checker- board pattern: 

* * * * * * * * 
 * * * * * * * * 
* * * * * * * * 
 * * * * * * * * 
* * * * * * * * 
 * * * * * * * * 
* * * * * * * * 
 * * * * * * * * 
 

 */

#include<stdio.h>
int main(){


    for(int row=1 ; row<=8 ; row++){
        if(row%2==0) //if row is even print a space to indent
        printf("%s", " " );

        for(int col=1 ; col<=8 ; col++){
            printf("%s", "* " );
        }
        puts(""); //prints a newline
    }


    return 0;
}