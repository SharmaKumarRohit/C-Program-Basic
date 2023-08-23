// #include<stdio.h>

// int main(){
    // conditional statement--> Type --> if-else
    // int age;
    // printf("Enter your age : ");
    // scanf("%d", &age);
    // age>=18 && age<=50? printf("You are adult.\n"): printf("you are not adult.\n");

    // conditional operators --> Ternary operators
    // condition ? do something if True : do something if False;
    // int marks;
    // printf("Enter your marks : ");
    // scanf("%d", & marks);
    // marks>=30 && marks<=100? printf("PASS\n"): printf("FAIL\n");

    /*
     conditional operators --> switch :-
     switch(number){
        case c1: // do something 
               break;
        case c2: // do something 
               break;
        default : // do something 
    }
    */
   
//    char years;  // J--january, F--February, M--March, A--April, m--May, j--June, u--july, a--August, S--September,
   // O--October, N--November, D--December.
//    printf("Enter years(1-12 month) first character : ");
//    scanf("%c", &years);
//    switch(years){
//     case 'J' : printf("january\n");
//               break;
//     case 'F' : printf("February\n");  
//               break;
//     case 'M' : printf("March\n");
//               break;
//     case 'A' : printf("April\n");
//               break;
//     case 'm' : printf("May\n");
//               break;
//     case 'j' : printf("June\n");
//               break;
//     case 'u'  : printf("July\n");
//               break;
//     case 'a' : printf("August\n");
//               break;
//     case 'S' : printf("September\n");
//               break;
//     case 'O' : printf("October\n");
//               break;
//     case 'N' : printf("November\n");
//               break;
//     case 'D' : printf("December\n");
//               break;
//     default : printf("Not a valid years.\n");
//     }
//     printf("I have nice day.\n");
//     printf("Thank you, visit again.\n"); 
// a. Write a program to the average of 3 numbers.
// int n1, n2, n3;
// float average;
// printf("Enter your number : ");
// scanf("%d", &n1);

// printf("Enter your number(n2) : ");
// scanf("%d", &n2);

// printf("Enter your number(n3) : ");
// scanf("%d", &n3);

// average = (n1+n2+n3)/3;
// printf("%f", average);

// b. Write a program to check if given character is digit or not.


//      char ch;
//      printf("C program to check given character is digit or not \n");
//      printf("Please enter a character: ");
//      scanf("%c", &ch);
//      if(ch>='0' && ch<='9')
//      {
//         printf("Given Character %c is Digit.", ch);
//      }
//      else
//      {
//         printf("Given Character %c is Not Digit.", ch);
//      }
// char ch;
// printf("please enter a character : ");
// scanf("%c", &ch);
// printf("character is : %c", ch>='0' && ch<='9');

// c. Write a program to print the smallest number of two.
// int a, b, small;
// printf("Enter any number : ");
// scanf("%d", &a);

// printf("Enter any number : ");
// scanf("%d", &b);

// printf("%d", a<b);
// small=a;

// small=b;
// printf("%d", small);
// for(char i='A'; i<='Z'; i++){
//     printf("%c ", i);
// }
// int day;
// printf("Enter day(1-7) : ");
// scanf("%d", &day);
// switch(day){
//     case 1 : printf("Monday\n");
//             break;
//     case 2 : printf("Tuesday\n");
//             break;
//     case 3 : printf("Wednesday\n");
//     if(day>5){
//         printf("This day is a brithday day.\n");
//     }else{
//         printf("Don't have a day.\n");
//     }
//             break;
//     case 4 : printf("Thrusday\n");
//              break;
//     case 5 : printf("Firday\n");
//              break;
//     case 6 : printf("Saturday\n");
//              break;
//     case 7 : printf("Sunday\n");
//              break;
//     default : printf("Not a valid day.\n");
// }

// a. Write a program to check if a given number is Armstrong number or not.(Search What is Armstrong number)

// int n1, n2, n3, n, r;
// printf("Enter any number : ");
// scanf("%d%d%d", &n1,&n2, &n3);
// int sum = n1*n1*n1+n2*n2*n2+n3*n3*n3;
// n=sum;
// r=n1,n2,n3;
// if(n == r){
//     printf("This number is an armstrong number.\n");
// }else{
//     printf("Not, an armstrong number.\n");
// }
// printf("Thank you, visit again.\n");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     // int n, sum = 0;
//     // printf("Enter a number : ");
//     // scanf("%d", &n);
//     // for(int i=1; i<=n; i++){
//     //     sum += i;
//     // }
//     // printf("Sum is : %d\n", sum);
//      int a, b, c, e;
//       char d;
//       a = 3;
//       b = 5;
//       c = a + b;
//       d = 'a';
//       e = d;
//       printf("c = %d , d = %c \n", c, d);
//     return 0;
// }

/*
C program to demonstrate the working of switch...case statement
*/
/*
Program to create a simple calculator for addition, subtraction, multiplication and division
*/
// #include<stdio.h>
// int main(){
//     char operator;
//     float num1, num2;
//     printf("Enter operator +, -, * or / :\n");
//     scanf("%c", &operator);
//     printf("\nEnter two operands :\n");
//     scanf("%f%f", &num1, &num2);
//     switch(operator){
//         case '+' : printf("num1 + num2 = %.2f", num1 + num2);
//         break;
//         case '-' : printf("num1 - num2 = %.2f", num1 - num2);
//         break;
//         case '*' : printf("num1 * num2 = %.2f", num1 * num2);
//         break;
//         case '/' : printf("num1 / num2 = %.2f", num1 / num2);
//         break;
//         default : /*
//            If operaor is other than +, -, * or / , error message is shown
//         */
//        printf("Error! operator is not correct");
//        break;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
    // int n, sum = 0;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i<=n);
    // printf("Sum is : %d\n", sum);

//     int n, fact = 1;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int i = 1;
//     while(i<=n){
//         fact *= i;
//         i++;
//     }
//     printf("Factorial is : %d\n", fact);
//     return 0;
// }

// #include<stdio.h>

// int fib(int n);
// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("Fibonacci %dth terms is : %d\n", n, fib(n));
//     return 0;
// }
// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fibN = fib(n-1);
//     int fibN1 = fib(n-2);
//     int fibN2 = fibN + fibN1;
//     return fibN2;   
// }

// #include<stdio.h>

// int main() {
//     printf("Enter any number & print this number table\n");
//     printf("------------------------------------------\n");
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//         }
//     return 0;
// }

// #include<stdio.h>

// int main() {
    // printf("Enter character & check if the given character is a vowel or consonant\n");
    // printf("----------------------------------------------------------------------\n");
    // char ch;
    // printf("Enter a character : ");
    // scanf("%c", &ch);
    // switch(ch) {
    //     case 'A' : 
    //     case 'a' :
    //     case 'E' : 
    //     case 'e' :
    //     case 'I' :
    //     case 'i' : 
    //     case 'O' : 
    //     case 'o' : 
    //     case 'U' : 
    //     case 'u' : printf("%c is a vowel\n", ch);
    //     break;
    //     default : printf("%c is a consonant\n", ch);
    // }
    // printf("Enter a character & check if the given character is a vowel or consonant\n");
    // printf("------------------------------------------------------------------------\n");
    // char ch;
    // printf("Enter a character : ");
    // scanf("%c", &ch);
    // if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
    //     printf("%c is a vowel\n", ch);
    // }
    // else {
    //     printf("%c is a consonant\n", ch);
    // }
    // return 0;
// }

// #include<stdio.h> // Perprocessor directive
/* This is a C program. */

// int main() {
    // printf("Hello Rohit\n");
    // printf("\n");

    // printf("Enter number & calculate two numbers sum\n");
    // printf("----------------------------------------\n");
    // int a, b;
    // printf("Enter a number(a) : ");
    // scanf("%d", &a);
    // printf("Enter a number(b) : ");
    // scanf("%d", &b);
    // // int sum = a + b; 
    // // printf("Sum is : %d\n", sum);
    // printf("Sum is : %d\n", a + b);
    // printf("\n");

    // printf("Enter number & calculate area of a square\n");
    // printf("-----------------------------------------\n");
    // int side;
    // printf("Enter a number : ");
    // scanf("%d", &side);
    // // int square = side * side;
    // // printf("Area of a square is : %d\n", square);
    // printf("Area of a square is : %d\n", side * side);
    // printf("\n");

    // printf("Enter number & calculate area of a circle\n");
    // printf("-----------------------------------------\n");
    // float radius;
    // printf("Enter a number : ");
    // scanf("%f", &radius);
    // // float circle = 3.14 * radius * radius;
    // // printf("Area of a circle is : %.2f\n", circle);
    // printf("Area of a circle is : %.2f\n", 3.14 * radius * radius);
    // #include<math.h>
    // int a = 4, b = 2;
    // int power = pow(a, b);
    // int power = pow(4, 2);
    // printf("Power is : %.2f\n", pow(4, 2));
    // int a = 1.999999;
    // printf("%d\n", a);

    // printf("Enter number & check if a number is divisble by 2 or not & check even(1) or odd(0)\n");
    // printf("----------------------------------------------------------------------------------\n");
    // int x;
    // printf("Enter a number : ");
    // scanf("%d", &x);
    // printf("%d\n", x % 2 == 0);

    // int r = 8^8;
    // printf("%d\n", r);
    // int x; int y = x;
    // int x, int y = x;
    // char stars = '**';

    // printf("Check if it's Sunday & it's snowing ---> true(1)\n");
    // printf("---------------------------------------------\n");
    // int isSunday = 1;
    // int isSnowing = 1;
    // printf("%d\n", isSunday && isSnowing);

    // printf("Check if it's Monday or it's raining ---> true(1)\n");
    // printf("----------------------------------------------\n");
    // int isMonday = 0;
    // int isRaining = 1;
    // printf("%d\n", isMonday || isRaining);

    // printf("Enter number & check if a number is greater than 9 & less than 100 than True(1) & False(0)\n");
    // printf("------------------------------------------------------------------------------------------\n");
    // int x;
    // printf("Enter a number : ");
    // scanf("%d", &x);
    // printf("%d\n", x>9 && x<100);

    // printf("Enter number & calculate perimeter of rectangle. Take a side, a & b from the user\n");
    // printf("---------------------------------------------------------------------------------\n");
    // int side_a, side_b, c = 2;
    // printf("Enter side_a : ");
    // scanf("%d", &side_a);
    // printf("Enter side_b : ");
    // scanf("%d", &side_b);
    // int perimeter = c * (side_a + side_b);
    // printf("Perimeter of rectangle is : %d\n", perimeter);

    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // printf("Cube is : %d\n", n * n* n);

    // int a, b, c;
    // printf("Enter a three : \n");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("Average of three number is : %d\n", (a + b + c) / 3);

    // int age;
    // printf("Enter your age : ");
    // scanf("%d", &age);
    // if(age>=18) {
    //     printf("Adult\n");
    // }
    // else {
    //     printf("Not adult\n");
    // }
    // int marks;
    // printf("Enter a marks : ");
    // scanf("%d", &marks);
    // marks>=30 && marks<=100 ? printf("PASS\n") : printf("FAIL\n");

    // int day;
    // printf("Enter the day : ");
    // scanf("%d", &day);
    // switch(day) {
    //     case 1 : printf("Monday\n");
    //     break;
    //     case 2 : printf("Tuesday\n");
    //     break;
    //     case 3 : printf("Wednesday\n");
    //     break;
    //     case 4 : printf("Thrusday\n");
    //     break;
    //     case 5 : printf("Firday\n");
    //     break;
    //     case 6 : printf("Saturday\n");
    //     break;
    //     case 7 : printf("Sunday\n");
    //     break;
    //     default : printf("Not a valid day\n");
    // }

    // int marks;
    // printf("Enter your marks : ");
    // scanf("%d", &marks);
    // if(marks<30) {
    //     printf("Grade = C\n");
    // }
    // else if(marks>=30 && marks<70) {
    //     printf("Grade = B\n");
    // }
    // else if(marks>=70 && marks<90) {
    //     printf("Grade = A\n");
    // }
    // else if(marks>=90 && marks<=100) {
    //     printf("Grade = A+\n");
    // }

    // int x = 2;
    // if(x = 1) {
    //     printf("x is equal to 1 ");
    // }
    // else {
    //     printf("x is not equal to 1 ");
    // }

    // printf("Enter character & find if a character entered by user is upper case or not\n");
    // printf("--------------------------------------------------------------------------\n");
    // char ch;
    // printf("Enter a character : ");
    // scanf("%c", &ch);
    // if(ch>='A' && ch<='Z') {
    //     printf("Character is upper case\n");
    // }
    // else {
    //     printf("Character is not upper case\n");
    // }

    // for(int i=0; i<=10; i++) {
    //     printf("%d\t", i);
    // }
    // printf("\n");
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++) {
    //     printf("%d\t", i);
    // }

    // int n, sum = 0;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i = 0;
    // while(i<=n) {
    //     sum += i;
    //     i++;
    // }
    // printf("Sum is : %d\n", sum);

    // int n, fact = 1;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i = 1;
    // do{
    //     fact *= i;
    //     i++;
    // }while(i<=n);
    // printf("Factorial is : %d\n", fact);

    // 1. Write a program to check if given character is digit or not.
    // char ch;
    // printf("Enter character : ");
    // scanf("%c", &ch);

    // if(ch>='0' && ch<='9') {
    //     printf("%c is a DIGIT\n");
    // }else {
    //     printf("%c is not a DIGIT\n");
    // }

    // 2. Write a program to print the smallest number of two.
    // int num1, num2;
    // printf("Enter any number : ");
    // scanf("%d", &num1);
    // printf("Enter any number : ");
    // scanf("%d", &num2);

    // if(num1<num2) {
    //     printf("%d is a smallest number\n", num1);
    // }
    // else {
    //     printf("%d is a smallest number\n", num2);
    // }

    /* 3. Write a program to check if a given number is Armstrong number or not.
    (Search what is Armstrong number) */
    // int arms;
    // printf("Enter three digit number : ");
    // scanf("%d", &arms);
    // int check, rem, sum = 0;
    // check = arms;

    // while(check != 0) {
    //     rem = check % 10;
    //     sum = sum + (rem * rem * rem);
    //     check = check / 10;
    // }

    // if(sum == arms) {
    //     printf("%d is an armstrong number\n", arms);
    // }
    // else {
    //     printf("%d is not an armstrong number\n", arms);
    // }

    /* 4. Write a program to check if the given number is a natural number. */
    // int natural;
    // printf("Enter natural number : ");
    // scanf("%d", &natural);
    
    // if(natural>=1) {
    //     printf("%d is a natural number\n", natural);
    // }
    // else {
    //     printf("%d is not a natural number\n", natural);
    // }

    // int number, root;
    // printf("Enter square root number : ");
    // scanf("%d", &number);
    // root = sqrt(number);
    // printf("Square root of %d = %d\n", number, root);
    // printf("Power is : %.2f\n", pow(number,root));
    
    // 1. Print the numbers from 0 to 10
    // int i=0;
    // do{
    //     printf("%d\t", i);
    //     i++;
    // }while(i<=10);

    // 2. Infinite loop
    // int n;
    // printf("Enter any number : ");
    // scanf("%d", &n);
    // for(int i=1;i<=n;) {
    //     printf("%d\n", i);
    // }

    // 3. Print the number from 0 to n, if n is given by user
    // int n;
    // printf("Enter any number : ");
    // scanf("%d", &n);
    // int i = 0;
    // while(i<=n) {
    //     printf("%d\t", i);
    //     i++;
    // }

    // 4. Print the sum of first n natural number
    // int n;
    // printf("Enter any number : ");
    // scanf("%d", &n);
    // int i = 1, sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // } while(i<=n);
    // printf("Sum is : %d\n", sum);

    // Also, print them in reverse.
    // int n;
    // printf("Enter any number : ");
    // scanf("%d", &n);
    // int sum = 0, i = n;
    // do{
    //     sum += i;
    //     --i;
    // }while(i>=0);
    // printf("Reverse sum of %d = %d\n", n, sum);

    // 5. Print the table of a number input by the user.
    // printf("Enter number & print given number table\n");
    // printf("---------------------------------------\n");
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i=1;
    // do{
    //     printf("%d x %d = %d\n", n, i, n * i);
    //     i++;
    // }while(i<=10);

    // 6. Break statement
    // for(int i=1; i<=5; i++) {
    //     if(i == 3) {
    //         break;
    //     }
    //     printf("%d\t", i);
    // }

    // int i = 1;
    // while(i<=5) {
    //     if(i == 3) {
    //         break;
    //     }
    //     printf("%d\t", i);
    //     i++;
    // }

    // int i = 1;
    // do{
    //     if(i == 3) {
    //         break;
    //     }
    //     printf("%d\t", i);
    //     i++;
    // }while(i<=5);

    // 7. Keep taking numbers as input from user until user enters an odd number.
    // int n;
    // while(1) {
    //     printf("Enter any number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 2 != 0) {
    //         break;
    //     }
    // }
    // printf("End program, visit agian\n");

    // 8. Keep taking numbers as input from user until user enters a numbers which is multiple of 7.
    // int n;
    // do{
    //     printf("Enter any number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 7 == 0) {
    //         break;
    //     }
    // }while(1);
    // printf("End program, visit again\n");

    // 9. continue statement
    // for(int i=1; i<=5; i++) {
    //     if(i == 3) {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    // 11. Print all number from 1 to 10 except for 6.
    // for(int i=1; i<=10; i++) {
    //     if(i == 6) {
    //         continue;
    //     }
    //     printf("%d\t", i);
    // }

    // 12. Print the all the odd numbers from 5 to 50.
    // for(int i=5; i<=50; i++) {
    //     if(i % 2 == 0) {
    //         continue;
    //     }
    //     printf("%d\t", i);
    // }

    // 13. Print the factorial of a number n.
    // int n, fact = 1;
    // printf("Enter factorial number : ");
    // scanf("%d", &n);
    // int i=1;
    // do{
    //     fact *= i;
    //     i++;
    // }while(i<=n);
    // printf("Factorial of %d = %d\n", n, fact);

    // 14. Print reverse of the table for a number n.
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // int i = 10;
    // while(i>=1) {
    //     printf("%d x %d = %d\n", n, i, n * i);
    //     i--;
    // } 

    // 15. Calculate the sum of all numbers between 5 and 50. (including 5 & 50)
    // #include<stdio.h>
    // int main()
    // {
    // int i = 5, sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i<=50);
    // printf("5 to 50 sum is : %d\n", sum);

    /* 16. Quick Quij : Write a program to print natural numbers from 10 to 20 when initial loop conuteri is 
    initialged to 0. */
    // int i = 0;
    // while(i<=20) {
    //     if(i>=10) 
    //     printf("%d\t", i);
    //     i++;
    // }

    // 17. Search on what a "nested loop" is & print this pattern using it.
    // for(int j=1; j<=4; j++) {
    //     for(int i=1; i<=5; i++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 18. Write a program to check if a number is prime or not.
    // int i, num, count = 0;
    // printf("Enter any number : ");
    // scanf("%d", &num);
    // for(i = 1; i<=num; i++) {
    //     if(num % i == 0) {
    //         count++;
    //     }
    // }
    // if(count == 2) {
    //     printf("%d is a Prime number\n", num);
    // }else {
    //     printf("%d is not a Prime number\n", num);
    // }

    // 19. Write a program to print prime numbers in a range.
    // #include<stdio.h>
    // int isPrime(int n) {
    //     for(int i=2; i*i<=n; i++) {
    //         if(n % i == 0) {
    //             return 0;
    //         }
    //     }
    //     return 1;
    // }
    // int main() {
    //     int n1, n2;
    //     printf("Enter first number : ");
    //     scanf("%d", &n1);
    //     printf("Enter second number : ");
    //     scanf("%d", &n2);
    //     printf("The prime numbers between %d and %d are : ", n1, n2);
    //     for(int i=n1; i<=n2; i++) {
    //         if(isPrime(i)) {
    //             printf("%d\n", i);
    //         }
    //     }
    //     return 0;
    // }

    #include<stdio.h>
    int main() 
    {
        for(int i = -2; i<=2; i++)
        {
            printf("%d\t", 2*i);
        }
        return 0;
    }