/*3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
 find the two largest values of the 10 numbers. [
 Note: You may input each number only once.]  */

 #include<stdio.h>
 int main(){
 int num, largest,largest_2;
printf("Enter number 1:");
scanf("%d", &num);
largest = num;
printf("Enter number 2:");
scanf("%d", &num);
if(num>largest){
    largest_2=largest;
    largest=num;
}
else{
    largest_2=num;
}

 for(int i = 3; i<=10; i++){
printf("Enter number %d:",i);
scanf("%d", &num);
if(num>largest){
    largest_2=largest;
    largest=num;
}
else if(num>largest_2){
    largest_2=num;
}

 }

 printf("largest is %d and second largest is %d\n", largest, largest_2);

 return 0;
}