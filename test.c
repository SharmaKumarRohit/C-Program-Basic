// #include<stdio.h>

// int main(){
//    int i = 0;
//    while(i<=20){
//     if(i>=10)
//     printf("%d\n", i);
//     i++;
//    }

// int i = 220;
// do{
//     printf("%d\n", i);
//     i++;
// }while(i<=20);

// int n;
// printf("Enter first natural number : ");
// scanf("%d", &n);

// int i = 0;
// do{
//     printf("Natural numbers is %d\n", i+1);
//     i++;
// }while(i<=n);

// int n;
// printf("Enter first natural number : ");
// scanf("%d", &n);
// for(int i=1; i<=n; i++){
//     printf("%d\n", i);
// }

// for(int i=4; i; i--){
//     printf("%d\n", i);
// }

// for(int i=4; i; i--){
//     printf("%d\n", i);
// }

// int i=0;

// do{
//     if(i==5){
//         break;
//     }
//     printf("%d\n", i);
//     i++;
// }while(i<=10);

// int i = 0;

// while(i<10){
//     i++;
//     if(i==3){
//         continue;
//     }
//     printf("%d\n", i);
// }

// for(int i=1; i<=10;i++){
//     if(i==3){
//         continue;
//     }
//     printf("%d\n", i);
// }

// int i=0;

// do{
//     i++;d
//     if(i==3){
//         continue;
//     }
//     printf("%d\n", i);
// }while(i<10);
//    return 0;

// int sum = 0;
// for(int i = 1; i<= 8; i++){
//     sum += i;
// }
// printf("Sum is %d.\n", sum);

// for(int i=1; i<=10; i++){
//     printf("%d\n", 8*i);
// }

// int sum = 0, b;
// for(int i=1; i<=10; i++){
//     b = 8 * i;
//     sum = sum + b;
// }
// printf("Eight table sum is %d.\n", sum);

// int n, fact=1;
// printf("Enter an number : ");
// scanf("%d", &n);

// for(int i=1; i<=n; i++){
//     fact = fact * i;
// }
// printf("Factorial is %d.\n", fact);

// int n=3, fact=1;
// for(int i=1; i<=n; i++){
//     fact = fact * i;
// }
// printf("The value of factorial %d is %d.\n", n, fact);

// int i = 8;
// while(i){
//     printf("%d\n", i);
//     ;
// }

// int n, prime = 1;
// printf("Enter an number : ");
// scanf("%d", &n);
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         prime = 0;
//         break;
//     }
// }
// if(prime == 0){
//     printf("This is not a prime number. \n");
// }else{
//     printf("This is a prime number.\n");
// }


// int n=11, prime =1;
// for(int i=2; i<n; i++){
//     if(n%i==0){
//         prime = 0;
//         break;
//     }
// }
// if(prime == 0){
//     printf("This is not a prime number.\n");
// }else{
//     printf("This is a prime number.\n");
// }

// int n;
// printf("Enter an number : ");
// scanf("%d", &n);

// for(int i=1;i<=10;i++){
//     printf("%d\n", n*i);
// }

// int n, i, prime = 1;
// printf("Enter an number : ");
// scanf("%d", &n);

// i=2;
// while(i<n){
//     if(n%i==0){
//         prime = 0;
//         break;
//     }
//     i++;
// }
// if(prime == 0){
//     printf("This is not a prime number.\n");
// }else{
//     printf("This is a prime number.\n");
// }

// int n, i, prime = 1;
// printf("Enter an number : ");
// scanf("%d", &n);

// i=2;
// do{
//     if(n!=2 && n%i==0){
//         prime = 0;
//         break;
//     }
//     i++;
// }while(i<n);
// if(prime == 0){
//     printf("This is not a prime number.\n", prime);
// }
// else{
//     printf("This is a prime number.\n", prime);
// }

// int n, i, prime=1;
// printf("Enter an number : ");
// scanf("%d", &n);

// for(i=2;i<n;i++){
//     if(n%2 == 0){
//         prime = 0;
//         break;
//     }
// }
// if(prime == 0){
//     printf("This is not a prime number.\n");
// }else{
//     printf("This is a prime number.\n");
// }

// int n, i, prime = 1;
// printf("Enter an number : ");
// scanf("%d", &n);

// i=2;
// while(i<n){
//     if(n%i==0){
//         prime = 0;
//         break;
//     }
//     i++;
// }
// if(prime == 0){
//     printf("This is not a prime number.\n");
// }else{
//     printf("This is a prime number.\n");
// }
// return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//     int num;
//     srand(time(0));
//     num = rand() % 100 + 1; // Generates a random number between 1 to 100.
//     printf("%d is random number.\n", num);
//     return 0;
// }

// #include<stdio.h>

// // Declaration / Prototype
// int printHello(int a);
// int main(){
//     int a = 5;
//     printHello(5);   // Call function
//     return 0;
// }
// // Function defintion
// int printHello(int a){
//     for(int i=1; i<=5; i++){
//         printf("Hello world!\n");
//     }
// }

//                      Practice Qs ---
//          Write 2 function - one to print "Hello" & second to print "good bye."

// #include<stdio.h>

// //  Declaration function / Prototype
// void printHello();
// void printgoodbye();

// int main(){
//     printHello();
//     printgoodbye();   // Function call
//     return 0;
// }

// //      function definition
// void printHello(){
//     printf("Hello world !\n");
// }
// void printgoodbye(){
//     printf("Good bye :)\n");
// }

//                                      Practice Qs ------
//      Write a function that prints Namaste if user is Inian & Bonjour if the user is French

// #include<stdio.h>

// //  Declaration function / Prototype
// void printNamaste();
// void printBonjour();

// int main(){
//     char word;
//     printf("Enter a character (i) for indian & (f) for french : ");
//     scanf("%c", &word);
//     if(word == 'i'){
//         printNamaste();
//     }
//     else if(word == 'f'){               //      Function call
//         printBonjour();
//     }
//     else{
//         printf("Enter valid character\n");
//     }
//     return 0;
// }

// //      Function definition
// void printNamaste(){
//     printf("Namaste\n");
// }
// void printBonjour(){
//     printf("Bonjour\n");
// }

//                                           practice -----

// #include<stdio.h>

// //      Declaration function / Prototype
// void printHello();

// int main(){
//     printHello();   //      Function call
//     return 0;
// }
// //   Function definition
// void printHello(){
//     printf("Hello!\n");
// }

//                                      Practice ------

// #include<stdio.h>

// // Declaration function / Prototype
// void printTable(int n);
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     printTable(n);      //  Function call
//     return 0;
// }

// //      Function definition
// void printTable(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d\n", n * i);
//     }
// }

//                                      Practice -------

// #include<stdio.h>

// //  Declaration function / Prototype
// int sum(int a, int b);

// int main(){
//     int a = 5, b = 3;
//     printf("Sum is : %d\n", a + b);
//     sum(a, b);              // Function call
//     return 0;
// }

// // Function definition
// int sum(int a, int b){
//     return a + b;
// }

//                                          Practice ------
//      changes to parameter in function don't change the value in calling function
//      Bacause a copy or argument is passed to the function.

// #include<stdio.h>

// void calculatePrice(float value);
// int main(){
//     float real = 10000000;
//     calculatePrice(real);
//     printf("This is final value is %f.\n", real);
//     return 0;
// }

// void calculatePrice(float value){
//     value = value + (0.10 * value);
//     printf("The final value is %f.\n", value);
// }

//              Practice -----
//      use library functions to calculate the square of a number give by user.

// #include<stdio.h>
// #include<math.h>

// int square(int a);
// int main(){
//     int a = 4;
//     square(a);
//     printf("%d\n", (int) pow(a,2));
//     return 0;
// }

// int square(int a){
//     return pow(a,2);
// }

//                      Practice ----
//  Write a function to calculate area of a square, a circle & a rectangle.

// #include<stdio.h>

// //      Declaration function / Prototype
// void squareArea(float side);
// void circleArea(float rad);
// void rectangleArea(float height, float width);
// int main(){
//     //      Function call
//     int side;
//     printf("Enter a side : ");
//     scanf("%d", &side);
//     squareArea(side);
    
//     int rad;
//     printf("Enter a circle : ");
//     scanf("%d", &rad);
//     circleArea(rad);

//     int height, width;
//     printf("Enter a height : ");
//     scanf("%d", &height);
//     printf("Enter a width : ");
//     scanf("%d", &width);
//     rectangleArea(height, width);
//     return 0;
// }

// //      Function definition
// void squareArea(float side){
//     printf("Area of a square is %f.\n", side * side);
// }
// void circleArea(float rad){
//     printf("Area of a square is %f.\n", 3.14 * rad *rad);
// }
// void rectangleArea(float height, float width){
//     printf("Area of a rectangle is %f.\n", height * width);
// }

//                                              Recursion -------
//                  Practice Qs -------
//   print "Hello world" 5 times.

// #include<stdio.h>

// // Declaration function / Prototype
// void printHello(int count);
// int main(){
//     //      Function call / actual parameter
//     printHello(5);
//     return 0;
// }

// //  Recursive function / Parameter / Formal parameter
// void printHello(int count){
//     if(count == 0){     // // Base case
//         return ;
//     }
//     printf("Hello world!\n");
//     printHello(count-1);
// }

//          Practice Qs -----
//     Sum of first n natural numbers.

// #include<stdio.h>

// int sum(int add);
// int main(){
//     int add;
//     printf("Enter a number : ");
//     scanf("%d", &add);
//     printf("Sum is : %d\n", sum(add));
//     return 0;
// }

// Recursive function
// int sum(int add){
//     if(add == 1){         // Base case
//         return 1;
//     }
//     int sumN1 = sum(add-1);
//     int sumN2 = sumN1 + add;
//     return sumN2;
// }

//          Practice Qs -------
//      Factorial of n.

// #include<stdio.h>

// int factorial(int fact);
// int main(){
//     int fact;
//     printf("Enter a number : ");
//     scanf("%d", &fact);
//     printf("Factorial is : %d\n", factorial(fact));
//     return 0;
// }

// // Recursive function
// int factorial(int fact){
    // if(fact == 1){          // Base case
    //     return 1;
    // }
    // int factN1 = factorial(fact - 1);
    // int factN2 = factN1 * fact;
    // return factN2;
// }

//                  Practice Qs ------
//      Write a function to convert celsius to fahrenheit.

// #include<stdio.h>

// float cels(float fah);
// int main(){
//     float far;
//     printf("Enter a number : ");
//     scanf("%f", &far);
//     printf("Fahrenheit is : %f\n", cels(far));
//     return 0;
// }

// // Recursive function
// float cels(float fah){
//     return (fah * 9.0/5.0) + 32;
// }

//           Write a function to convert fahrenheit to celsius.

// #include<stdio.h>
// float convertTem(float cels);
// int main(){
//     float Iam;
//     printf("Enter a number : ");
//     scanf("%f", &Iam);
//     printf("Celsius is : %f\n", convertTem(Iam));
//     return 0;
// }

// float convertTem(float cels){
//     return (cels - 32) * 5.0/9.0;
// }

//      Write a function to calculate percentage of a student from marks in science, math & sanskrit.

// #include<stdio.h>

// float Marks(float science, float math, float sanskrit);
// int main(){
//     int science, math, sanskrit;
//     printf("Enter a science marks : ");
//     scanf("%d", &science);
//     printf("Enter a math Marks : ");
//     scanf("%d", &math);
//     printf("Enter a sanskrit Marks : ");
//     scanf("%d", &sanskrit);
//     printf("Your three subject marks percentage is : %f.\n", Marks(science, math, sanskrit));
//     return 0;
// }

// //      Recurive function
// float Marks(float science, float math, float sanskrit){
//     return (science + math + sanskrit) / 3;
// }

//      Write a function to print n terms of the fibonacci sequence.


// #include<stdio.h>

// int fibonacci(int n);
// int main(){
//     int fib;
//     printf("Enter a number : ");
//     scanf("%d", &fib);
//     printf("Your fibonacci sequence terms is : %d.\n", fibonacci(fib));
//     return 0;
// }

// //   Recursive function
// int fibonacci(int n){
//     if(n == 0){          //  // Base case
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int fib = fibonacci(n-1);
//     int fib1 = fibonacci(n-2);
//     int fib2 = fib + fib1;
//     return fib2;
// }

//      Write a function to print the nth term of the fibonacci sequence.

// #include<stdio.h>

// int fib(int n);
// int main(){
//     int fibonacci = 9;
//     printf("Fibonacci sequence nth term is : %d.\n", fib(fibonacci));
//     return 0;
// }

// //  Recursive function
// int fib(int n){
//     if(n == 0){         // Base case
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int fibN = fib(n-1);
//     int fibN1 = fib(n-2);
//     int fibN3 = fibN + fibN1;
//     return fibN3;
// }

// #include<stdio.h>

// int main(){
//     printf("*\n");
//     printf("***\n");
//     printf("*****\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i;
//     printf("Enter a number : ");
//     scanf("%d", &i);
//     printf("%d %d %d", i, ++i, i++);
//     return 0;
// }

// #include<stdio.h>

// void printPattern(int n);
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printPattern(n);   
//     return 0;
// }

// //      Recursive function
// void printPattern(int n){
//     if(n == 1){         //   Base case
//         printf("*\n");
//         return ;
//     }
//     printPattern(n-1);
//     for(int i=0; i<(2*n-1); i++){
//         printf("*");
//     }
//     printf("\n");
// }

// #include<stdio.h>

// void printPattern(int num);
// int main(){
//     int a = 3;
//     printPattern(a);
//     return 0;
// }

// //      Recursive function
// void printPattern(int num){
//     if(num == 1){               // Base case
//         printf("*\n");
//         return ;
//     }
//     printPattern(num-1);
//     for(int i=0; i<(2*num-1); i++){
//         printf("*");
//     }
//     printf("\n");
// }

#include<stdio.h>
#include<math.h>

int main(){
    // printf("*\n");
    // printf("***\n");
    // printf("*****\n");

    // printf("*****\n");
    // printf("*****\n");
    // printf("*****\n");
    // printf("*****\n");

    // int fact = 1, n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++){
    //     fact *= i;
    // }
    // printf("Factorial is : %d\n", fact);

    // int sum = 0, n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // printf("Sum is : %d\n", sum);
    return 0;
}