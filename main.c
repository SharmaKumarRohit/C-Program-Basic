
//    int day ;
//    printf("Enter day(1-7) : ");
//    scanf("%d", &day);
//    switch(day){
//     case 1: printf("Monday\n");
//          break;
//     case 2: printf("Tuesday\n");
//          break;
//     case 3: printf("Wednesday\n");
//          break;
//     case 4: printf("Thursday\n");
//          break;
//     case 5: printf("Friday\n");
//          break;
//     case 6: printf("Saturday\n");
//          break;
//     case 7: printf("Sunday\n");
//          break;
//    }
//    printf("Thank you\n");
//    printf("I have nice day\n");
//    printf("visit again");
// for(char i='a';i<='z';i++){
//      printf("%c\n", i);
// }
// for(int i=1; i<=100; i++){
//      printf("%d\n", i);
// }
// for(float i=1.0; i<=100.0; i++){
//      printf("%d\n", i);
// }
// int marks;
// printf("Enter your marks : ");
// scanf("%d", &marks);
// marks>=30 && marks<=100? printf("PASS") : printf("FAIL");
// for(int i=10000; i>=1; i--){
//     printf("%d\n", i);
// }
// for(int ch ='a'; ch<='z'; ch++){
//     printf("%c\n", ch);
// }
// printf("Hello world");
// int i=1;
// while(i<=100){
//     printf("Hello Mom and Dad\n");
//     i++;
// }

// printf("%d", 8%5);
// printf("%d", 5!=5);
// printf("%d", 4<2 && 4<3);
// printf("%d", !(5>7));
// printf("%d", 2*3/8%5+4-2);
// int a=1, b=2;
// a = b;
// printf("%d", a);

// a. (i) Write a program to cheak if a number is divisible by 2 or not.
//    (ii) or, odd or even.

// int x;
// printf("Enter your number : ");
// scanf("%d", &x);
// printf("Odd(0) or Even(1) : %d", x%2 == 0);

// b. Are the following valid or not?
// int a = 8^8;      // ----> valid
// printf("%d", a); 
// int x; int y=x;    // ----> valid
// int x, int y=x;    // ----> invalid
// char starts ='**';  // ----> invalid
// printf("%c", starts);

// c. if it's snuday & it's snowing  ----> true
// int issunday=1;
// int issnowing=1;
// printf("%d", issunday && issnowing);

// If it's monday or it's raining ----> true
// int ismonday=0;
// int israining=1;
// printf("%d", ismonday || israining);

// If a number is greater than 9 & less than 100 ----> true
// (2 digit number)
// int x;
// printf("Enter your number : ");
// scanf("%d", &x);

// printf("%d", x>9 && x<100);

// int a;
// printf("Enter your number : ");
// scanf("%d", &a);
// printf("%d", a>1 && a<100);
// int arms;
// printf("Enter any number : ");
// scanf("%d", &arms);
// int check, rem, sum = 0;
// check = arms;

// while(check != 0){
//    rem = check % 10;
//    sum = sum + (rem * rem * rem);
//    check = check / 10;
// }

// if(sum == arms){
//    printf("%d is an armstrong number.\n", arms);
// }else{
//    printf("%d is not an armstrong number.\n", arms);
// }

// printf the number from 0 to 10.

// for(int i=0; ; i++){
//    printf("%d\n", i);
// }

// Write a program print n table.
// int n;
// printf("Enter any number : ");
// scanf("%d", &n);
// for(int i=10; i>1; i--){
//    printf("%d\n", n*i);
// }
// for(int i=1; i<10; i++){
//     printf("Namastai Mom\n");
// }

#include<stdio.h>
int main(){
    // Increment operator :-
    // (i.) ++i (pre increment)
    // (ii.) i++ (post increment)
    // int i=2;
    //printf("%d\n", i++);    // use, then increment
    //printf("%d\n", i);

    //printf("%d\n", ++i);    // increment, then use
    //printf("%d\n", i);

    // Decrement operator :-
    // (i.) --i (pre decrement)
    // (ii.) i-- (post decrement)

    // printf("%d\n", i--);     // use, then decrement
    // printf("%d\n", i);

    // printf("%d\n", --i);     // decrement, then use
    // printf("%d\n", i);
    // int n;
    // do{
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);

    //     if(n % 2 != 0){
    //         break;
    //     }
    // }while(1);
    // printf("Thanks for you.");

    // a. Print the sum of first n Natural numbers.
    // n = 4
    // Also, print them in reverse.
    // First rule :-
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //    sum = sum + i;  // sum += i;
    // }

    // printf("Sum is : %d\n", sum);

    // for(int i=n; i>=1; i--){
    //     printf("%d\n", i);
    // }

    // Second rule :-
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // int sum = 0;
    // for(int i=1, j=n; i<=n && j>=1; i++, j--){
    //     sum = sum + i;
    //     printf("%d\n", j);
    // }
    // printf("Sum is : %d\n", sum);

    // Third rule :-
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // int sum = 0;
    // for(int j=n; j>=1; j--){
    //     sum = sum + j;
    // }
    // printf("Sum is : %d\n", sum);

    // b. Print the multiply of a number input by the user.
    // n=2
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // int mult = 1;
    // for(int i=1; i<=n; i++){
    //     mult = mult * i;
    // }
    // printf("%d\n", mult);

    // b. Print the table of a number input by the user.
    // n=2
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // for(int i=1; i<=10; i++){
    //     printf("%d\n", n*i);
    // }
    // c. Keep taking numbers as input from user until user enters an odd number.
  // int total = 500, marks = 331, percentage = 100;
  //   printf("My marks total percentage is %d.\n", (int) marks / total * percentage);
    return 0;
}