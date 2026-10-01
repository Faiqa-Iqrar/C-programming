/*
3.41 (Diameter, Circumference and Area of a Cirle) 
Write a program that reads the radius of a circle (as a float value) 
and computes and prints the diameter, the circumference and the area. 
Use the value 3.14159 for π. 
*/

#include<stdio.h>
#define PI 3.14159
#define Diameter(r) (2*(r))
#define Circumference(r) (2*PI*(r))
#define AreaCircle(r) (PI*(r)*(r))

int main(){
    float radius;
    float diameter;
printf("Enter Radius of Circle:");
scanf("%f", &radius);

printf("The Diameter of circle is %.2f\n", Diameter(radius));
printf("The Circumference of circle is %.2f\n", Circumference(radius));
printf("The Area of circle is %.2f\n", AreaCircle(radius));
    return 0;
}