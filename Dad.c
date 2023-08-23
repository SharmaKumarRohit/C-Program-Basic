#include<stdio.h>

// a. Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
// perimeter rectangle (P = 2(l+w)).
// l = Length, w = width.
int main(){
//     int l, w;
//     printf("Enter length : ");
//     scanf("%d", & l);
//     printf("Enter width : ");
//     scanf("%d", &w);
//     int perimeter_rectangle = 2 * (l+w);
//     printf("Perimeter of rectangle is : %d", perimeter_rectangle);
// int cube_one, cube_two, cube_three;
// printf("Enter cube one : ");
// scanf("%d", &cube_one);

// printf("Enter cube two : ");
// scanf("%d", &cube_two);

// printf("Enter cube three : ");
// scanf("%d", &cube_three);

// int All_cube_multiply = cube_one * cube_two * cube_three;
// printf("Value of cubes is : %d", All_cube_multiply);

// c. Write a comments for program a & b.
// Inter a variable and b variable.
// int a, b;
// Declear first a variabl and input give the user.
// printf("Enter first number(a) : ");
// scanf("%d", &a);
// Declear second varible and input give the user.
// printf("Etner second number(b) : ");
// scanf("%d", &b);
// Give the user a & b value and multiply a & b.
// Inter second statement
// int multiply = a * b;
// print the value of a & b (multiply).
// printf("Value is a (a&b) : %d", multiply);

// a. Write a program to print the average of 3 numbers.
// int n1, n2, n3;
// float avg;
// printf("Enter your number : ");
// scanf("%d", &n1);

// printf("Enter your number : ");
// scanf("%d", &n2);

// printf("Enter your number : ");
// scanf("%d", &n3);

// avg = (n1+n2+n3)/3;
// printf("value of average is : %f", avg);

// b. Write a program to check if given character is digit or not.
// char ch;
// printf("Please Enter character : ");
// scanf("%c", &ch);
// printf("Your character is : %c", ch>'0' && ch<'9');

// c. Write a program to print the smallest number of two.
// int a, b, small;
// printf("Enter any number : ");
// scanf("%d", &a);
// printf("Enter any number : ");
// scanf("%d", &b);
// a<b ? printf("a is smallest number.") : printf("b is smallest number.");

// int a, b;
// printf("Enter your first number(a) : ");
// scanf("%d", &a);

// printf("Enter your second number(b) : ");
// scanf("%d", &b);

// printf("Sum is : %d", a + b);

// a. Write a program to calculate area of a square. (side is given)
// int side;
// printf("Enter your side : ");
// scanf("%d", &side);

// printf("Area of a square is : %d", side * side);

// b. Write a progrma to calculate area of a circle.(Radius is given)
// float radius;
// printf("Enter your radius is : ");
// scanf("%f", &radius);

// printf("Area of a circle is : %f", 3.14 * radius * radius);
// int a = 4, b = 2;
// a+=b;
// printf("%d", a);

// a. Write a program to check if a number is divisible by 2 or not.
// && or, odd or even.
// int x;
// printf("Enter Your number(odd(0) or, even(1)) : ");
// scanf("%d", &x);

// printf("%d",x % 2 == 0);

// b. If a number is greater than 9 & less than 100 ----> True
// (2 digit number)
// int x;
// printf("Enter your number(9-100) : ");
// scanf("%d", &x);
// printf("%d", x>9 && x<100);

// a. Write a program to check if a student passed or failed.
// marks > 30 is pass
// marks <= 30 is fail
// int marks;
// printf("Enter your marks(0-100) : ");
// scanf("%d", &marks);
// marks > 30 && marks <= 100 ? printf("PASS") : printf("FAIL");

// int age;
// printf("Enter your age : ");
// scanf("%d", &age);
// if(age > 18 && age < 50){
//     printf("Your are adult.\n");
//     printf("They can vote.\n");
//     printf("They can drive.\n");
// }
// else{
//     printf("Your not adult.\n");
//     printf("They can not vote .\n");
//     printf("They can not drive\n");
// }
//     printf("Thank you\n");
// int age;
// printf("Enter your age : ");
// scanf("%d", &age);

// if(age>18){
//     printf("Your are adult.\n");
// }else if(age>13 && age<=18){
//     printf("Your are tennager.\n");
// }else{
//     printf("Your are child.\n");
// }
// Practice Qs- 9
// Write a program to check if a student passed or failed.
// marks > 30 is PASS
// marks <= 30 is FAIL
// int marks;
// printf("Enter your marks(0-100) : ");
// scanf("%d", &marks);

// marks > 30 && marks <=100 ? printf("PASS\n") : printf("FAIL\n");

// Practice Qs- 10
// Write a program to give grades to a student.
// marks <30 is c
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A 
// 90<= marks <= 100 is A+
// int marks;
// printf("Enter your marks(0-100) : ");
// scanf("%d", &marks);

// if(marks>0 && marks <30){
//     printf("C\n");
// }else if(marks >= 30 && marks < 70){
//     printf("B\n");
// }else if(marks >=70 && marks <90){
//     printf("A\n");
// }else if(marks>=90 && marks <=100){
//     printf("A+\n");
// }else{
//     printf("Your are enter wrong marks.\n");  
// }

// Write a program to find if a character entered by is upper case or not.
// Upper case ---> A, B, C, D, E..... && Lower case ----> a, b, c, d, e.....
// char ch;
// printf("Enter Your character : ");
// scanf("%c", &ch);
// if(ch>='a' && ch<='z'){
//     printf("Lower character\n");
// }else if(ch>='A' && ch<='Z'){
//     printf("Upper character\n");
// }else{
//     printf("Wrong character\n");
// }

// a. Write a program to check if a given number is Armstrong number or not.
// (Search what is Armstrong number)
int n, r, c, sum = 0, temp;
printf("Enter any number : ");
scanf("%d", &n);
temp=n;
while(n>0){
    r=n%10;
    c=r*r*r;
    sum=sum+c;
    n=n/10;
}
n=temp;
if(n==sum){
    printf("This is an armstrong number.\n");
}else{
    printf("Not, an armstrong number.\n");
}
return 0;
}