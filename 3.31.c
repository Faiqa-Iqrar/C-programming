/*3.31 (Another Dangling-Else Problem) 
Modify the following code to produce the output shown. 
Use proper indentation techniques. 
You may not make any changes other than inserting braces. 
The compiler ignores the indentation in a program. 
We eliminated the indentation from the following code to make the problem more challenging. 
[Note: It’s possible that no modification is necessary.] 

if ( y == 8 ) 

if ( x == 5 ) 

puts( "@@@@@" ); 

else 

puts( "#####" ); 

puts( "$$$$$" ); 

puts( "&&&&&" ); 

a) Assuming x = 5 and y = 8, the following output is produced. 

@@@@@
$$$$$ 
&&&&& 


b) Assuming x = 5 and y = 8, the following output is produced. 

@@@@@ 

c) Assuming x = 5 and y = 8, the following output is produced. 

@@@@@ 
&&&&& 

d) Assuming x = 5 and y = 7, the following output is produced. 

##### 
$$$$$ 
&&&&& 
*/


#include<stdio.h>
int main(){
int x = 5, y = 8;

printf("Part a\n");
if ( y == 8 ){ 

if ( x == 5 ) 
puts( "@@@@@" ); 
else 
puts( "#####" );

} 
puts( "$$$$$" ); 
puts( "&&&&&" ); 

printf("\n");

printf("Part b\n");

if ( y == 8 ){ 
if ( x == 5 ) 
puts( "@@@@@" ); } 
else{ 
puts( "#####" ); 

puts( "$$$$$" ); 

puts( "&&&&&" );} 

printf("\n");
 

printf("Part c\n");
if ( y == 8 ){ 

if ( x == 5 ) 

puts( "@@@@@" );} 

else{ 
puts( "#####" ); 
puts( "$$$$$" );} 
puts( "&&&&&" ); 

printf("\n");

printf("Part d\n");
x=5, y=7;
if ( y == 8 ){ 

if ( x == 5 ) 

puts( "@@@@@" );} 

else{ 

puts( "#####" ); 

puts( "$$$$$" ); 

puts( "&&&&&" );} 

return 0;
}
 