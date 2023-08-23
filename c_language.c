// #include<stdio.h>

// int main(){
//     char ch;
//     printf("Enter operator(+,-,*,/) : ");
//     scanf("%c", &ch);
//     int a, b;
//     printf("Enter a & b : \n");
//     scanf("%d%d", &a, &b);
//     switch(ch){
//         case '+' : printf("%d + %d = %d\n", a, b, a + b);
//                    break;
//         case '-' : printf("%d - %d = %d\n", a, b, a - b);
//                    break;
//         case '*' : printf("%d x %d = %d\n", a, b, a * b);
//                    break;
//         case '/' : printf("%d / %d = %dm\n", a, b, a / b);
//                    break;
//         default : printf("Error ! (Enter valid operator)");                      
//     }
//     return 0;
// }

// Program to print 0 message 
// #include<stdio.h>    // header file
// #include<math.h>

// int main(){          // main function
//     // printf("This is a C program\n");     // output statement
//     // int a, b;
//     // printf("Enter a & b : ");
//     // scanf("%d%d", &a, &b);
//     // int sum = a + b;
//     // printf("Sum is : %d\n", sum);

//     // Example 5.5 :-
//     int choice, n;
//     // control statements, Arrys and Function
//     printf("\n Enter any number :-n ");
//     scanf("%d", &n);
//     printf("choice is as follows :\n\n");
//     printf("1.To find square of the number\n");
//     printf("2.To find square-root of the number\n");
//     printf("3.To find cube of the number\n");
//     printf("4.To find square-root of the number\n");
//     printf("Enter your choice :\n");
//     scanf("%d", &choice);
//     switch(choice){
//         case 1 : printf("The square of the number is %d\n", n * n);
//         break;
//         case 2 : printf("The square-root of the number is %.2f\n", pow(n,n));
//         break;
//         case 3 : printf("The cube of the number is %d\n", n * n * n);
//         break;
//         case 4 : printf("The find square-root of the number is %.2f\n", pow(n,n));
//         break;
//         default : printf("The number you had given is wrong.\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     printf("This is a C program\n");
//     int average;
//     printf("Enter a marks : ");
//     scanf("%d", &average);
//     if(average>50){
//         printf("PASS\n");
//     }
//     else {
//         printf("FAIL\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     printf("This is a C Program\n");
//     int average;
//     printf("Enter your marks : ");
//     scanf("%d", &average);
//     if(average>=75 && average<=100){
//         printf("Grade = A\n");
//     }
//     else if(average>=65 && average<=74){
//         printf("Grade = B\n");
//     }
//     else if(average>=55 && average<=64){
//         printf("Grade = C\n");
//     }
//     else if(average>=45 && average<=54){
//         printf("Grade = S\n");
//     }
//     else if(average>=0 && average<=44){
//         printf("Grade = F\n");
//     }
//     else {
//         printf("Invalid average marks\n");
//     }
//     return 0;
// }

// 1. Write a C program to print the number entered by user only if the number entered is negative
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a negative number : ");
//     scanf("%d", &n);
//     if(n<0){
//         printf("%d is a negative number", n);
//     }
//     else {
//         printf("Error!! Enter negative number");
//     }
//    return 0;
// }

// 2. Write a C program to check whether a number entered by user is even or odd.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number & check even or odd : ");
//     scanf("%d", &n);
//     if(n % 2 != 0){
//         printf("%d is an odd number", n);
//     }
//     else {
//         printf("%d is an even number", n);
//     }
//     return 0;
// }

// 3. Write a C program to relate two integers entered by user using = or > or < sign
// #include<stdio.h>

// int main(){
//     int num1, num2;
//     printf("Enter any two number : ");
//     scanf("%d%d", &num1, &num2);
//     if(num1 == num2){
//         printf("Result : %d = %d", num1, num2); // checking whether two integers are equal.
//     }
//     else if(num1 > num2){
//         printf("Result : %d > %d", num1, num2); // checking whether num1 is greater than num2.
//     }
//     else {
//         printf("Result : %d < %d", num1, num2); // checking whether num1 is less than num2.
//     }
//     return 0;
// }

//                                  C Programming for Loop
/* 1. Write a program to find the sum of first n natural numbers where n is entered by user. Note : 1, 2, 3...
are called natural numbers.  */
// #include<stdio.h>

// int main(){
//     int n, sum = 0;
//     printf("Enter any natural number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     printf("Sum = %d\n", sum);
//     return 0;
// }

// 2. Write a C prgram to find the factorial of a number, where the number is entered by user.
// #include<stdio.h>

// int main(){
//             // while Loop ---->
//     int n, fact = 1;
//     printf("Enter any number : ");
//     scanf("%d", &n);
//     int i=1;
//     while(i<=n){
//         fact *= i;
//         i++;
//     }
//     printf("Factorial = %d\n", fact);
//                 // do while Loop ----->
// #include<stdio.h>
//    int main(){

//     int num, factorial = 1;
//     printf("Enter any number : ");
//     scanf("%d", &num);
//     int j = 1;
//     do{
//         factorial *=j;
//         j++;
//     }while(j<=num);
//     printf("Factorial = %d\n", factorial);
//     return 0;
// }

// 3. Write a C program to add all the numbers entered by a user until user entered 0.
/* C program to demonstrate the working of do...while statement */
// #include<stdio.h>
// int main(){
//     int n, sum = 0;
//     do{
//         printf("Enter a number : ");
//         scanf("%d", &n);
//         sum += n;
//     }while(n != 0);
//     printf("Sum = %d\n", sum);
//     return 0;
// }

/*     C Programming to find averagae of maximum of n postive numbers entered by user. But, if the input is 
negative, display the average(excluding the average of negative input) and end the program.

/* C program  to demonstrate the working of break statement by terminating a loop, if user inputs negative number */
// #include<stdio.h>

// int main(){
//     float num, average, sum;
//     int i, n;
//     printf("Maximum no. of inputs\n");
//     scanf("%d", &n);
//     for(i=1; i<=n; ++i){
//         printf("Enter n%d : ", i);
//         scanf("%f", &num);
//         if(num<0.0) break; // for loop breaks if num<0.0 sum=sum+num;
//     }
//     average = sum/(i-1);
//     printf("Average=%.2f", average);
//     return 0;
// }

// Write a C program to find the product of 4 integers entered by a user. If user enters 0 skip it.
// Program to demonstrate the working of contine statement in C programming
// #include<stdio.h>

// int main(){
//     int num, n, product = 1;
//     printf("Enter your total product : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         printf("Enter product %d : ", i);
//         scanf("%d", &num);
//         if(num == 0){
//             continue;
//         }
//         product *= num;
//     }
//     printf("Your total %d product amonunt is : %d", n, product);
//     return 0;
// }

//              C Programming switch....case Statement
/* Write a program that asks user an arithmetic operator('+','-','*','/') and two operands and perform the 
corresponding calculation on the operands. */
// #include<stdio.h>

// int main(){
//     char ch;
//     float num1, num2;
//     printf("Enter operator (+,-,*,/) : ");
//     scanf("%c", &ch);
//     printf("Enter two oprands : ");
//     scanf("%f%f", &num1, &num2);
//     switch(ch){
//         case '+' : printf("num1 + num2 = %.2f\n", num1 + num2);
//         break;
//         case '-' : printf("num1 - num2 = %.2f\n", num1 - num2);
//         break;
//         case '*' : printf("num1 x num2 = %.2f\n", num1 * num2);
//         break;
//         case '/' : printf("num1 / num2 = %.2f\n", num1 / num2);
//         break;
//         default : printf("Error!! Enter valid operator.\n");
//     }

//     return 0;
// }

// #include<stdio.h> // Perprocessor directive

// int main(){
//     printf("Hello world\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a, b;
//     printf("Enter value of a : ");
//     scanf("%d", &a);
//     printf("Enter value of b : ");
//     scanf("%d", &b);
//     // int sum = a + b;
//     printf("Sum = %d\n", a + b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int side;
//     printf("Enter side : ");
//     scanf("%d", &side);
//     printf("Area of a square is : %d", side * side);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     float radius;
//     printf("Etner radius : ");
//     scanf("%f", &radius);
//     printf("Area of a circle is : %.2f", 3.14 * radius * radius);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter number How to print I am a best : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         printf("I am a best. %d any time\n", i);
//     }
//     printf("I am a best.\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a = 1.999999;
//     printf("%d\n", a);
//     printf("%d\n", 4 * 3 / 6 * 2);
//     // Ture(1) or False(0)
//     printf("%d\n", 4 == 4);
//     printf("%d\n", 4>=4);
//     printf("%d\n", 4<=4);
//     printf("%d\n", 4 != 4);
//     printf("%d\n", !(4 >=3));
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     // printf("%d\n", 4>3 && 4<5);
//     // printf("%d\n", 4>3 || 4<5);
//     // int d;
//     // printf("Enter a number : ");
//     // scanf("%d", &d);
//     // // even = 1 or odd = 0
//     // printf("%d\n", d % 2 == 0);
//     int a = 8^8;  // ---->  Valid
//     int x; int y = x;  // ----> valid
//     int x , int y = x;  // ----> Invalid
//     char stars = '**';  // ----> Invalid
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int issunday = 1;
//     int issnowing = 1;
//     printf("%d\n", issunday && issnowing);

//     int ismonday = 0;
//     int israining = 1;
//     printf("%d\n", ismonday || issunday);

//     int n;
//     printf("Enter a number(9 to 100 under) : ");
//     scanf("%d", &n);
//     printf("%d\n", n>9 && n<100);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);
//     if(age>18){
//         printf("You are adult.\n");
//         printf("They can vote.\n");
//         printf("They can drive.\n");
//     }
//     else{
//         printf("Your are not adult.\n");
//     }
//     int ageis;
//     printf("Enter your age : ");
//     scanf("%d", &ageis);
//     ageis>18 ? printf("You are adult.\n") : printf("You are not adult.\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int day; // 1 (Mon) , 2 (Tue)
//     printf("Etner day(1-7) : ");
//     scanf("%d", &day);
//     switch(day){
//         case 1 : printf("Monday\n");
//         break;
//         case 2 : printf("Tuesday\n");
//         break;
//         case 3 : printf("wednesday\n");
//         break;
//         case 4 : printf("Thursday\n");
//         break;
//         case 5 : printf("Firday\n");
//         break;
//         case 6 : printf("Saturday\n");
//         break;
//         case 7 : printf("Sunday\n");
//         break;
//         default : printf("Not a valid day\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int marks;
//     printf("Enter your marks : ");
//     scanf("%d", &marks);
//     marks>30 && marks<=100 ? printf("PASS\n") : printf("FAIL\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int marks;
//     printf("Enter your marks : ");
//     scanf("%d", &marks);
//     if(marks>=0 && marks<30){
//         printf("Grade = C\n");
//     }else if(marks>=30 && marks<70){
//         printf("Grade = B\n");
//     }else if(marks>=70 && marks<90){
//         printf("Grade = A\n");
//     }else if(marks>=90 && marks<=100){
//         printf("Grade = A+\n");
//     }else {
//         printf("Error!! Enter correct marks.\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x = 2;
//     if(x = 1){
//         printf("X is equal to 1.\n");
//     }else {
//         printf("X is not equal to 1.\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char ch;
//     printf("Enter upper case character : ");
//     scanf("%c", &ch);
//     if(ch>='A' && ch<='Z'){
//         printf("UPPER CASE\n");
//     }else {
//         printf("Error!! Enter upper case character.\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int number;
//     printf("Enter natural number : ");
//     scanf("%d", &number);
//     if(number>=1){
//         printf("%d is a natural number.\n", number);
//     }else {
//         printf("Error!! Enter correct natural number.\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int arms;
//     printf("Enter a number : ");
//     scanf("%d", &arms);
//     int check, rem, sum = 0;
//     check = arms;
//     while(check != 0){
//         rem = check % 10;
//         sum += (rem * rem * rem);
//         check /= 10;
//     }
//     if(arms == sum){
//         printf("%d is an armstrog number.\n", arms);
//     }else {
//         printf("%d is not an armstrong number.\n", arms);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
       // Iterator ; counter
    // for(int i=1; i<=5; i++){
    //     printf("Hello wrold\n");
    // }
    // printf("End\n");
    // for(int i=10; i>=1; i--){
    //     printf("%d\n", i);
    // }
    // printf("End\n");
    // for(int i=0; i<=10; i++){
    //     printf("%d\n", i);
    // }
    // printf("End");
    // int i=10;
    // printf("%d\n", i++);  // use , then increment
    // printf("%d\n", i);
    // int j=11;
    // printf("%d\n", ++j);  // increment , then use
    // printf("%d\n", j);

    // int k=12;
    // printf("%d\n", k--);   //  use, then decrement
    // printf("%d\n", k);

    // int l=13;
    // printf("%d\n", --l);  // Decrement, then use
    // printf("%d\n", l);

    // for(int i=1; i<=10; ){     // Infinite loop
    //     printf("%d", i);
    // }

    // int m=1;
    // while(m<=5){
    //     printf("Hello world\n");
    //     m++;
    // }
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=0;
    // while(i<=n){
    //     printf("%d\n", i);
    //     i++;
    // }
    // printf("End\n");
    // int j = 1;
    // do{
    //     printf("%d\n", j);
    //     j++;
    // }while(j<=5);

    // int n, sum = 0;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=1;
    // do{
    //     sum += i;
    //     i++;
    // }while(i<=n);
    // printf("Sum = %d\n", sum);

    // int n, sum = 0;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=n;
    // do{
    //     sum += i;
    //     i--;
    // }while(i>=1);
    // printf("Sum = %d\n", sum);

    // int n;
    // printf("What's number print the table : ");
    // scanf("%d", &n);
    // int i=1;
    // do{
    //     printf("%d\n", n * i);
    //     i++;
    // }while(i<=10);

    // for(int i=1; i<=5; i++){
    //     if(i == 4){
    //         break;
    //     }
    //     printf("%d\n", i);
    // }
    // int i=1;
    // while(i<=5){
    //     if(i==3){
    //         break;
    //     }
    //     printf("%d\n", i);
    //     i++;
    // }

    // int i=1;
    // do{
    //     if(i==3){
    //         break;
    //     }
    //     printf("%d\n", i);
    //     i++;
    // }while(i<=5);
    // int i=1;
    // while(1){
    //     printf("Enter a number : ");
    //     scanf("%d", &i);
    //     printf("%d\n", i);
    //     if(i % 2 != 0){
    //         break;
    //     }
    // }
    // printf("End\n");

    // int n;
    // do{
    //     printf("Ente a number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 7 == 0){
    //         break;
    //     }
    // }while(1);
    // printf("End\n");

    // for(int i=1; i<=5; i++){
    //     if(i==3){
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    // int i=1;
    // while(i<=5){
    //     if(i==3){
    //         continue;
    //     }
    //     printf("%d\n", i);
    //     i++;
    // }

    // int i=1;
    // do{
    //     if(i==3){
    //         continue;
    //     }
    //     printf("%d\n", i);
    //     i++;
    // }while(i<=5);

    // for(int i=1; i<=10; i++){
    //     if(i==6){
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }
    // for(int i=5; i<=50; i++){
    //     if(i % 2 == 0){
    //         continue;
    //     }
    //     printf("%d\n", i);
    //     i++;
    // }

    // int n, fact = 1;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=1;
    // do{
    //     fact *= i;
    //     i++;
    // }while(i<=n);
    // printf("Factorial = %d\n", fact);

    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=10;
    // while(i>=1){
    //     printf("%d\n", n * i);
    //     i--;
    // }

    // int i=5, sum = 0;
    // do{
    //     sum += i;
    //     i++; 
    // }while(i<=50);
    // printf("Sum = %d\n", sum);

    // int i = 0;
    // do{
    //     if(i>=10)
    //     printf("%d\n", i);
    //     i++;
    // }while(i<=20);

    // int i=5, sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i<=50);
    // printf("Sum = %d\n", sum);
    // return 0;
// }

// #include<stdio.h>

// void printHello();
// int main(){
//     printHello();
//     return 0;
// }

// void printHello(){
//     printf("Hello world\n");
// }

// #include<stdio.h>

// void printHello();
// void printGoodbye();
// int main(){
//     printHello();
//     printGoodbye();
//     return 0;
// }

// void printHello(){
//     printf("Hello\n");
// }
// void printGoodbye(){
//     printf("Goodbye :)\n");
// }

// #include<stdio.h>

// void Namaste();
// void Bonjour();
// void Error();

// int main(){
//     char ch;
//     printf("Enter i for indan & f for french : ");
//     scanf("%c", &ch);
//     if(ch == 'i'){
//         Namaste();
//     }
//     else if(ch == 'f'){
//         Bonjour();
//     }
//     else{
//         Error();
//     }
//     return 0;
// }

// void Namaste(){
//     printf("Namaste\n");
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }
// void Error(){
//     printf("Error!! Enter correct statement.\n");
// }

// #include<stdio.h>

// void printHello();
// int main(){
//     printHello();
//     return 0;
// }
// void printHello(){
//     printf("Hello :)\n");
// }

// #include<stdio.h>

// void printTable(int n);
// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     printTable(num);
//     return 0;
// }
// void printTable(int n){
//     int i=1;
//     do{
//         printf("%d\n", n * i);
//         i++;
//     }while(i<=10);
// }

// #include<stdio.h>

// int sum(int a, int b);
// int main(){
//     int x = 5, y = 3;
//     printf("Sum = %d\n", sum(x,y));
//     return 0;
// }
// int sum(int a, int b){
//     return a + b;
// }

// #include<stdio.h>

// void calculatePrice(float value);
// int main(){
//     int price = 100;
//     calculatePrice(price);
//     return 0;
// }
// void calculatePrice(float value){
//     value += (0.18 * value);
//     printf("Result = %.2f\n", value);
// }

// #include<stdio.h>

// float square(float side);
// float circle(float radius);
// float rectangle(float h, float w);
// int main(){
//     int side = 4;
//     printf("Area of a square is : %.2f\n", square(side));
//     int radius = 3;
//     printf("Area of a circle is : %.2f\n", circle(radius));
//     int h = 5, w = 2;
//     printf("Area of a rectangle is : %.2f\n", rectangle(h,w));
//     return 0;
// }
// float square(float side){
//     return side * side;
// }
// float circle(float radius){
//     return 3.14 * radius * radius;
// }
// float rectangle(float h, float w){
//     return h * w;
// }

// #include<stdio.h>

// void printHello(int count);
// int main(){
//     printHello(5);
//     return 0;
// }
// void printHello(int count){
//     if(count == 0){
//         return ;
//     }
//     printf("Hello world\n");
//     printHello(count-1);
// }

// #include<stdio.h>

// int sum(int n);
// int main(){
//     int n;
//     printf("Enter a natural number : ");
//     scanf("%d", &n);
//     printf("Sum = %d\n", sum(n));
//     return 0;
// }
// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     int sumN = sum(n-1);
//     int sumN1 = sumN + n;
//     return sumN1;
// }

// #include<stdio.h>

// int factorial(int n);
// int main(){
//     int n;
//     printf("Enter a factorial number : ");
//     scanf("%d", &n);
//     printf("Factorial = %d\n", factorial(n));
//     return 0;
// }
// int factorial(int n){
//     if(n == 1){
//         return 1;
//     }
//     int fact = factorial(n-1);
//     int factN = fact * n;
//     return factN;
// }

// #include<stdio.h>

// float convert(float cel);
// int main(){
//     int cel = 37;
//     printf("Celsius to fahrenheit = %.2f\n", convert(cel));
//     return 0;
// }
// float convert(float cel){
//     return (cel * 9.0/5.0) + 32;
// }

// #include<stdio.h>

// float Marks(float science, float math, float sanskrit);
// int main(){
//     int science = 80;
//     int math = 76;
//     int sanskrit = 69;
//     printf("Total marks percentage is : %.2f\n", Marks(science,math,sanskrit));
//     return 0;
// }
// float Marks(float science, float math, float sanskrit){
//     return (science + math + sanskrit) / 3;
// }

// #include<stdio.h>

// int fib(int n);
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("Fibonacci sequence %dth terms is : %d\n", n, fib(n));
//     return 0;
// }
// int fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int Fib = fib(n-1);
//     int FibN = fib(n-2);
//     int FibN1 = Fib + FibN;
//     return FibN1;
// }

// #include<stdio.h>

// int fib(int n);
// int main(){
//     int n = 9;
//     printf("Fibonacci 9th terms is : %d\n", fib(n));
//     return 0;
// }
// int fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int Fib = fib(n-1);
//     int Fib1 = fib(n-2);
//     int Fib2 = Fib + Fib1;
//     return Fib2;
// }

// #include<stdio.h>

// int sumdigit(int sum);
// int main(){
//     int num, sum;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     sum = sumdigit(num);
//     printf("Sum of digit of %d = %d\n", num, sum);
//     return 0;
// }
// int sumdigit(int sum){
//     if(sum == 0){
//         return 0;
//     }
//     return ((sum % 10) + sumdigit(sum / 10)); 
// }

#include<stdio.h>

int main(){
//     char i = 'z';
//     char *ptr = &i;
//     do{
//         printf("%c\n", *ptr);
//         (*ptr)++;
//     }while(*ptr<='A');

printf("Hello world\n");
for(int i=0; i<=5; i++) {
    printf("%d\n", i);
}

int a = 5, b = 3;
printf("%d\n", a + b);
    return 0;
}