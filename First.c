#include<stdio.h>

// Write a program to check if a student passed or failed.
// marks > 30 is pass
// marks <= 30 is fail.
int main(){
// int marks;
// printf("Enter your marks : ");
// scanf("%d", &marks);
// marks>30 && marks<100? printf("PASS") : printf("FAIL");

// Write a program to give grades to a student.
// int marks;
// printf("Enter your marks : ");
// scanf("%d", &marks);
// if(marks < 30){
//     printf("Your grades is : C\n");
//     printf("Work for very-very hard.\n");
// }else if(marks>=30 && marks<70){
//     printf("Your grades is : B\n");
//     printf("work for hard.\n");
// }else if(marks>=70 && marks<90){
//     printf("Your grades is : A\n");
//     printf("Good marks.\n");
// }else if(marks>=90 && marks<=100){
//     printf("Your grades is : A+\n");
//     printf("Very good marks.\n");
// }else{
//     printf("You are enter valid marks(0-100 under).");
// }

// Will this code?
// int x=2;
// if(x=1){
//     printf("x is equal to 1.\n");
// }else{
//     printf("x is not equal to 1.\n");
// }

// Write a program to find if a character entered by user is upper case or not.
// char ch;
// printf("Enter upper character : ");
// scanf("%c", &ch);
// if(ch>='A' && ch<='Z'){
//     printf("This character is uppper character.\n");
// }else if(ch>='a' && ch<='z'){
//     printf("This character is lower character.\n");
// }else{
//     printf("You are enter valid character.");
// }
  int arms;
   printf("Enter your number : ");
   scanf("%d", &arms); 
   int check, rem, sum = 0;
   check = arms;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == arms) 
      printf("%d is an armstrong number.", arms);
   else 
      printf("%d is not an armstrong number.", arms);
    return 0;
}