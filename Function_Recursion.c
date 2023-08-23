// #include<stdio.h>

// // Declaration / prototype
// void printHello();

// int main(){
//     printHello();       // Function call
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// // Function definition
// void printHello(){
//     printf("Hello world!\n");
//     printf("Hello Rohit\n");
// }

// #include<stdio.h>

// void printHello();
// void printgoodbye();

// int main(){
//     printHello();
//     printgoodbye();
//     return 0;
// }

// void printHello(){
//     printf("Hello\n");
// }

// void printgoodbye(){
//     printf("Goodbye:)\n");
// }

// #include<stdio.h>

// void Namaste();
// void Bonjour();
// void Enter_wrong_country_name();

// int main(){
//     char ch;
//     printf("Enter i for indian & enter f for french : ");
//     scanf("%c", &ch);
//     if(ch == 'i'){
//         Namaste();
//     }else if(ch == 'f'){
//         Bonjour();
//     }else{
//         Enter_wrong_country_name();
//     }
//     return 0;
// }

// void Namaste(){
//     printf("Namaste\n");
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }
// void Enter_wrong_country_name(){
//     printf("Enter worng country name\n");
// }

// #include<stdio.h>

// int sum(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter an a : ");
//     scanf("%d", &a);
//     printf("Enter an b : ");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("Sum is : %d\n", s);
//     return 0;
// }
// int sum(int x, int y){
//     return x + y;
// }

// #include<stdio.h>

// void printTable(int n);

// int main(){
//     int n;
//     printf("Enter an number : ");
//     scanf("%d", &n);

//     printTable(n); // argrment / actual parameter

//     return 0;
// }

// void printTable(int n){
//     for(int i=1;i<=10;i++){  // parameter/formal parameter
//         printf("%d\n", n*i);
//     }
// }

// #include<stdio.h>

// void calculatePrice(float value);

// int main(){
//     float value = 100.0;
//     calculatePrice(value);
//     printf("Final value is : %f\n", value);
//     return 0;
// }
// void calculatePrice(float value){
//     value = value + (0.18 * value);
//     printf("Final price is : %f\n", value);
// }

// #include<stdio.h>

// int findSquare(int num);
// int main(){
//     int num;
//     printf("Enter a side : ");
//     scanf("%d", &num);
//     findSquare(num);
//     return 0;
// }

// int findSquare(int num){
//     printf("Square is : %d\n", num * num);
// }

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n=4;
//     printf("%f\n", pow(n,2));
//     return 0;
// }

// #include<stdio.h>

// int Square(int num);
// void Circle(float circle);
// int rectangle(int height, int width);
// int main(){
//     int num;
//     printf("Enter an number : ");
//     scanf("%d", &num);
//     Square(num);

//     float circle;
//     printf("Enter a circle : ");
//     scanf("%f", &circle);
//     Circle(circle);

//     int height, width;
//     printf("Enter a height & width : ");
//     scanf("%d%d", &height, &width);
//     rectangle(height, width);
//     return 0;
// }

// int Square(int num){
//     printf("Area of a square is : %d\n", num);
// }
// void Circle(float circle){
//     printf("Area of a circle is : %f\n", 3.14 * circle *circle);
// }
// int rectangle(int height, int width){
//     printf("Are of a rectangle is : %d\n", height * width);
// }

// #include<stdio.h>

// float squareArea(float side);
// float circleArea(float radius);
// float rectangleArea(float height, float width);

// int main(){
//     float height = 5.0;
//     float width = 10.0;

//     printf("Area of a rectangleArea : %f\n", rectangleArea(height,width));

//     float radius = 3.0;
//     printf("Area of a circle is : %f\n", circleArea(radius));

//     float side = 4.0;
//     printf("Area of a square is : %f\n", squareArea(side));
//     return 0;
// }

// float squareArea(float side){
//     return side * side;
// }
// float circleArea(float radius){
//     return 3.14 * radius * radius;
// }
// float rectangleArea(float height, float width){
//     return height * width;
// }

// #include<stdio.h>

// void printHW(int count);
// int main(){
//     printHW(10);
//     return 0;
// }

// // recursive function
// void printHW(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello world\n");
//     printHW(count-1);
// }

// #include<stdio.h>

// int sum(int n);
// int main(){
//     printf("Sum is : %d\n", sum(5));
//     return 0;
// }
// // Recrsive function
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumnum1 = sum(n-1);  // Sum of 1 to n
//     int sumN = sumnum1 + n;
//     return sumN;
// }

// #include<stdio.h>

// int fact(int n);

// int main(){
//     printf("Factorial is : %d\n", fact(5));
//     return 0;
// }
// // Recrsive function
// int fact(int n){
//     if(n == 1){
//         return 1;
//     }
//     int factnum1 = fact(n-1);  // Fact of 1 to n
//     int factN = factnum1 * n;
//     return factN;
// }

// #include<stdio.h>

// int fact(int n);
// int main(){
//     printf("Factorial is : %d\n", fact(5));
//     return 0;
// }
// // Recrsive funtion
// int fact(int n){
//     printf("calculate factorial of n : %d\n", n);
//     int factnum1 = fact(n-1);
//     int factN = factnum1 * n;
//     return factN;
// }

// #include<stdio.h>

// float fah(float cel);
// int main(){
//     printf("Funtion to convert celsius to fahrenheit : %f\n", fah(37));
//     return 0;
// }
// // Recursive function
// float fah(float cel){
//     float Fah = (cel * 9.0/5.0) + 32;
//     return Fah;
// }

// #include<stdio.h>

// float marks(float sci, float math, float sans);

// int main(){
//     printf("This subject percentage is %f\n", marks(80, 76, 69));
//     return 0;
// }

// // Recrsive funtion 
// float marks(float sci, float math, float sans){
//     float total = (sci + math + sans)/3;
//     return total;
// }

// #include<stdio.h>

// int fib(int n);
// int main(){
//     printf("Fibonacci number 6th terms is %d\n", fib(6));
//     return 0;
// }

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }

// #include<stdio.h>

// int fib(int num);

// int main(){
//     printf("Fibonacci number 9th terms is %d.\n", fib(9));
//     return 0;
// }

// int fib(int num){
//     if(num==0){
//         return 0;
//     }
//     if(num==1){
//         return 1;
//     }
//     int fibNm1 = fib(num-1);
//     int fibNm2 = fib(num-2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }

// #include<stdio.h>

// // Declaration / prototype 
// void printHello();

// int main(){
//     printHello();   // Function call
//     return 0;
// }

// // Function definition 
// void printHello(){
//     printf("Hello world!\n");
// }

// Practice Qs 27
// Write 2 functions-one to print "Hello" & second to print "good bye."

// #include<stdio.h>

// //  Declaration / prototype
// void printHello();
// void printgoodbye();

// int main(){
//     printHello();
//     printgoodbye(); //  Function call
//     return 0;
// }

// //  Function definition
// void printHello(){
//     printf("Hello\n");
// }
// void printgoodbye(){
//     printf("Good bye :)\n");
// }

//  Practice Qs 28
//  Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

// #include<stdio.h>

// //    Declaration / prototype
// void printNamaste();
// void printBonjour();
// void printError();

// int main(){
//     char country;
//     printf("Enter (i) for indian & (f) for french : ");         // Function call
//     scanf("%c", &country);
//     if(country == 'i'){
//         printNamaste();
//     }else if(country == 'f'){
//         printBonjour();
//     }else{
//         printError();
//     }
//     return 0;
// }

// //      Function definition
// void printNamaste(){
//     printf("You are Indian.\n");
// }
// void printBonjour(){
//     printf("Your are French.\n");
// }
// void printError(){
//     printf("ERROR!!\n");
// }

//      A function gets called directly or indirectly from main.
// #include<stdio.h>

// void Namaste();
// void Bonjour();
// int main(){
//     char ch;
//     printf("Enter i for indian & f for french : ");
//     scanf("%c", &ch);
//     Namaste();
// }
// void Namaste(){
//     printf("Indian\n");
//     printf("French\n");
// }
// void Bonjour(){
//     printf("French\n");
// }

//      Passing Arguments
//      void printHello();  <------

// #include<stdio.h>

// //      Declaration / Prototype
// void printHello();

// int main(){
//     printHello();       // Function call
//     return 0;
// }

// // Function Definition
// void printHello(){
//     printf("Hello!\n");
// }

//          void printTable(int n);      <-------

// #include<stdio.h>

// void printTable(int n);
// int main(){
//     int num;
//     printf("Enter an number : ");
//     scanf("%d", &num);
//     printTable(num);
//     return 0;
// }

// void printTable(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d\n", n*i);
//     }
// }

//          int sum(int a, int b);      <---------

// #include<stdio.h>

// int sum(int x, int y);

// int main(){
//     int x, y;
//     printf("Enter an number : ");
//     scanf("%d", &x);
//     printf("Enter an number : ");
//     scanf("%d", &y);

//     sum(x,y);
//     return 0;
// }

// int sum(int x, int y){
//     printf("Sum is : %d.\n", x + y);
//     return x + y;
// }

// #include<stdio.h>

// void printTable(int n);

// int main(){
//     int num;
//     printf("Enter an number : ");
//     scanf("%d", &num);

//     printTable(num);        // Argument / actual parameter
//     return 0;               // Value that are passed in function call
// }                           // used to send value

// void printTable(int n){             // Parameter / formal parameter
//     for(int i=1; i<=10; i++){       // Value in function declaration & definition
//         printf("%d\n", n*i);        // used to receive value
//     }
// }

// Changes to Parameters in function don't change the value in calling function
// Because a copy or argument is passed to the function.

// #include<stdio.h>
// #include<math.h>

// void CalculatePrice(float value);
// int main(){
//     // float Price = 100000.0;
//     // CalculatePrice(Price);
//     // printf("Final price is %f\n", Price);

//     //          Practice Qs 29
//     //          Use library functions to calculate the square of a number give by user.
//     int n = 4;
//     printf("%f\n", pow(n,2));
//     return 0;
// }

// void CalculatePrice(float value){
//     value = value + (0.10 * value);
//     printf("Final price is %f\n", value);
// }

//   Paractice Qs 31
//   Write function to calculate area of a square, a circle & a rectangle.

// #include<stdio.h>

// // Declaration function
// void squareArea(float side);
// void circleArea(float radius);
// void rectangleArea(float height, float width);
// int main(){
//     float side;
//     printf("Enter a side : ");
//     scanf("%f", &side);

//     squareArea(side);     //          Function call

//     float radius;
//     printf("Enter a circle : ");
//     scanf("%f", &radius);

//     circleArea(radius);

//     float height, width;
//     printf("Enter a height : ");
//     scanf("%f", &height);
//     printf("Enter a width : ");
//     scanf("%f", &width);

//     rectangleArea(height, width);
//     return 0;
// }

// // Function definition
// void squareArea(float side){
//     printf("Area of a Square is : %f\n", side * side);
// }
// void circleArea(float radius){
//     printf("Area of a circle is : %f\n", 3.14 * radius * radius);
// }
// void rectangleArea(float height , float width){
//     printf("Area of a rectangle is : %f\n", height * width);
// }

// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter an number : ");
//     scanf("%d", &a);
//     printf("Enter an number : ");
//     scanf("%d", &b);
//     printf("Sum is : %d\n", sum(a,b));
//     return 0;
// }

// int sum(int a, int b){
//     return a + b;
// }

// #include<stdio.h>

// void printTable(int n);

// void printTable(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d\n", n * i);
//     }
// }
// int main(){
//     int num;
//     printf("Enter an number : ");
//     scanf("%d", &num);

//     return 0;
// }

//              Recursion ----> When a function calls itself, it's called recursion.

//          Practice Qs 32
//          print "Hello world" 5 times.

// #include<stdio.h>

// void printHW(int count);
// int main(){
//     printHW(5);
//     return 0;
// }
// void printHW(int count){
//     if(count == 0){
//         return ;
//     }
//     printf("Hello world\n");
//     printHW(count-1);
// }

//          Practice Qs 30
//          Sum of the first n natural numbers.

// #include<stdio.h>

// int sum(int n);
// int main(){
//     int num;
//     printf("Enter an number : ");
//     scanf("%d", &num);

//     printf("Sum is : %d.\n", sum(5));
//     return 0;
// }

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumNm2 = sumNm1 + n;
//     return sumNm2;
// }

// #include<stdio.h>

// void printword(int time);
// int main(){
//     printword(5);
//     return 0;
// }

// //      Recursive function
// void printword(int time){
//     if(time == 0){               // //       Base case
//         return ;
//     }
//     printf("Hello world\n");
//     printword(time-1);
// }

// Practice Qs 30
// Sum of the first n natural numbers.                (*.) Note -------------> (n - 1) + n.
// #include<stdio.h>

// int sum(int num);
// int main(){
//     int add;
//     printf("Enter an number : ");
//     scanf("%d", &add);
//     printf("Sum is : %d.\n", sum(add));
//     return 0;
// }

// //       Recursive function
// int sum(int num){
//     if(num == 1){                // //       Base case
//         return 1;
//     }
//     int sumNm1 = sum(num-1);
//     int sumNm2 = sumNm1 + num;
//     return sumNm2;
//     }

// Practice Qs 31
// Factorial of n.                       (*.) Note  --------------> (n - 1) * n.

// #include<stdio.h>
// int fact(int multi);
// int main(){
//     int n;
//     printf("Enter an number : ");
//     scanf("%d", &n);
//     printf("Factorial is : %d.\n", fact(n));
//     return 0;
// }

// //      Recursive function
// int fact(int multi){
//     if(multi == 1){             //      Base case
//         return 1;
//     }
//     int factNm1 = fact(multi-1);
//     int factNm2 = factNm1 * multi;
//     return factNm2;
// }

// Practice Qs 32
// Write a function to convert celsius to fahrenheit.

// #include<stdio.h>

// float fahren(float celsius);
// int main(){
//     float  celsi;
//     printf("Enter a celsius : ");
//     scanf("%f", &celsi);
//     printf("Convert celsius to fahrenheit : %f\n", fahren(celsi));
//     return 0;
// }

// //      Recursive function
// float fahren(float celsius){
//     float fah = (celsius * 9.0 / 5.0) + 32;
//     return fah;
// }

//  practice Qs - Quick quij

// #include<stdio.h>

// int celsius(int fahren);
// int main(){
//     int Fah;
//     printf("Enter a fahrenheit : ");
//     scanf("%d", &Fah);
//     printf("Convert fahrenhiet to celsius : %d\n", celsius(Fah));
//     return 0;
// }

//      Recursive function
// int celsius(int fahren){
//     int cel = (fahren - 32) * 5 / 9;
//     return cel;
// }

// Practice Qs 33
// Write a function to calculate Percentage of a students from Marks in Science, Math and Sanskrit.

// #include<stdio.h>

// float Marks(float science, float math, float sanskrit);

// int main(){
//     float sci, mat, sans;
//     printf("Enter your three subject marks : ");
//     scanf("%f%f%f", &sci, &mat, &sans);
//     printf("Student marks percentage is : %f\n", Marks(sci, mat, sans));
//     return 0;
// }

// float Marks(float science, float math, float sanskrit){
//     float marks = (science + math + sanskrit) / 3;
//     return marks;
// }

// Practice Qs 34
// Write a function to print n terms of the fibonacci sequence.

// #include<stdio.h>

// int fib(int fibon);
// int main(){
//     int fibonacci;
//     printf("Enter an fibonacci : ");
//     scanf("%d", &fibonacci);
//     printf("Fibonacci number is : %d.\n", fib(fibonacci));
//     return 0;
// }

// //     Recursive function
// int fib(int fibon){
    
//     if(fibon == 0){         // Base case
//         return 0;
//     }
//     if(fibon == 1){
//         return 1;
//     }
//     int fibN1 = fib(fibon-1);
//     int fibN2 = fib(fibon-2);
//     int fibN3 = fibN1 + fibN2;
//     return fibN3;
// }

// Practice Qs 35
// Write a function print the nth terms in the fibonacci sequence.

// #include<stdio.h>

// int fibonacci(int fib);
// int main(){
//     int fibon;
//     printf("Enter a fibonacci(nth terms) : ");
//     scanf("%d", &fibon);

//     printf("Fibonacci number is : %d.\n", fibonacci(fibon));
//     return 0;
// }
// //       Recursive function
// int fibonacci(int fib){
//     if(fib == 0){
//         return 0;
//     }                                     //      Base case 
//     if(fib == 1){
//         return 1;
//     }
//     int fibN1 = fibonacci(fib-1);
//     int fibN2 = fibonacci(fib-2);
//     int fibN3 = fibN1 + fibN2;
//     return fibN3;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         if(n == 0){
//             return 0;
//         }
//         if(n == 1){
//             return 1;
//         }
//         int fibN1 = (n-1);
//         int fibN2 = (n-2);
//         int fibN3 = fibN1 + fibN2;
//         printf("Fibonacci number is : %d\n", i);
//     }
//     return 0;
// }

//          Homework set        <-------------
// Write a function to find sum of digit of a number.

// #include<stdio.h>

// //      Declaration function / Prototype
// int sumdigit(int sum);
// int main(){
//     int sum, num;
//     printf("Enter any number to find sum of digit of a number : ");
//     scanf("%d", &num);

//     sum = sumdigit(num);
//     printf("Sum of digit of %d = %d\n", num, sum);
//     return 0;
// }

// //          Recursive function to find sum of digit of a number
// int sumdigit(int sum){
//     if(sum == 0){           // Base condition 
//         return 0;
//     }
//     return ((sum % 10) + sumdigit (sum / 10));
// }

// Write a function to find square root of a number.

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     int number;
//     srand(time(0));
//     number = rand() % 100 + 1;
//     if(number>9 || number<100){
//     printf("%d is a random number.\n", number);
//     }
//     return 0;
// }

//                          Chepter ---- 5. Practice set
//      Write a program using function to find average of three numbers.

// #include<stdio.h>

// float average(int a, int b, int c);
// int main(){
//     int a, b, c;
//     printf("Enter value of a : ");
//     scanf("%d", &a);
//     printf("Enter value of b : ");
//     scanf("%d", &b);
//     printf("Enter value of c : ");
//     scanf("%d", &c);
//     printf("Average result is : %f.\n", average(a, b, c));
//     return 0;
// }

// float average(int a, int b, int c){
//     float result = (float) (a + b + c) / 3;
//     return result;
// }

//          Write a function to convert celsius temperature int fahrenheit.

// #include<stdio.h>

// float cels(float fah);
// int main(){
//     int fah;
//     printf("Enter a temperature(celsius) : ");
//     scanf("%d", &fah);
//     printf("Fahrenheit is : %f.\n", cels(fah));
//     return 0;
// }

// float cels(float fah){
//     float result = (float) (fah * 9.0/5.0) + 32;
//     return result;
// }

//      Write a function to calculate force of attraction on a body of mass m exerted by earth.
//                                                                          (g = 9.8 m/s^2)

// #include<stdio.h>

// float force(float mass);
// int main(){
//     float m;
//     printf("Enter a mass : ");
//     scanf("%f", &m);
//     printf("The value force of Newton is : %.2jf .\n", force(m));
//     return 0;
// }
// float force(float mass){
//     float result = (mass * 9.8);
//     return result;
// }

//  Write a program using recursion to calculate nth term fibonacci series.

#include<stdio.h>

int fib(int n);
int main(){
    int fibonacci;
    printf("Enter a fobonacci nth term : ");
    scanf("%d", &fibonacci);
    printf("Fibonacci number %dth term is : %d .\n", fibonacci, fib(fibonacci));
    return 0;
}

//   Recursive function 
int fib(int n){
    if(n == 0){              // // Base case
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN = fib(n-1);
    int fibN1 = fib(n-2);
    int fibN2 = fibN + fibN1;
    return fibN2;
}

//      What will the following line produce in a c program :- int a = 3;   
//                          printf("%d%d%d\n", a, ++a, a++);

// #include<stdio.h>

// int main(){
//     int a = 3;
//     printf("%d %d %d\n", a, ++a, a++);
//     return 0;
// }

//      Write a recursive function to calculate the sum of first n natural numbers.

// #include<stdio.h>

// int sum(int n);
// int main(){
//     int sumn;
//     printf("Enter a number : ");
//     scanf("%d", &sumn);
//     printf("Sum is : %d .\n", sum(sumn));
//     return 0;
// }

//      Recursive function
// int sum(int n){
//     if(n == 1){          // Base case
//         return 1;
//     }
//     int sumN = sum(n-1);
//     int sumN1 = sumN + n;
//     return sumN1;
// }

//      Write a program using function to print the following pattern (first n lines).
// * 
// ***
// *****

// #include<stdio.h>

// void printPattern(int n);
// int main(){
//     int n = 3;
//     printPattern(n);
//     return 0;
// }

// for n = 3;
// * 
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n - 1)
//  Recursive function 
// void printPattern(int n){
//     if(n == 1){                 //  Base case
//         printf("*\n");
//         return ;
//     }
//     printPattern(n-1);
//     for(int i=0; i<(2*n-1); i++){
//         printf("*");
//     }
//     printf("\n");
// }