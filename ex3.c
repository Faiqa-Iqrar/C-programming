 #include <stdio.h>
 int main(){
 int gender;
    printf("is your gender female(1 for yes, 0 for no):");
    scanf("%d", &gender);
 if ( gender == 1 ) puts( "Woman" ); else puts( "Man" ); 
 return 0; }