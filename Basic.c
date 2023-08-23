// #include<stdio.h>
// #include<math.h>

// int main() {
    // 1. Write a C program to print your name, date of birth. and mobile number.
    // printf("Name      : Rohit kumar\n");
    // printf("DOB       : 29/07/22\n");
    // printf("Mobile No : 6204364880\n");

    // 2. Write a C program to get the C version you are using.
//     #include <stdio.h> 
// int main(int argc, char** argv) {
// #if __STDC_VERSION__ >=  201710L
//   printf("We are using C18!\n");
// #elif __STDC_VERSION__ >= 201112L
//   printf("We are using C11!\n");
// #elif __STDC_VERSION__ >= 199901L
//   printf("We are using C99!\n");
// #else
//   printf("We are using C89/C90!\n");
// #endif
//   return 0;
// }

    /* 3. Write a C program to print block F using (#), where the F has a height of six 
    character and width five and four characters. And also to print a big 'C'. */
    // printf("######\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#####\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");
    // printf("\n");
    // printf("  ######\n");
    // printf("##      ##\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");
    // printf("##      ##\n");
    // printf("  ######\n");

    /* 4. Write a C program to print following characters in a reverse way.
    Test Characters : 'X', 'M', 'L' */ 
    // char char1 = 'X';
    // char char2 = 'M';
    // char char3 = 'L';
    // printf("The reverse of %c %c %c is %c %c %c\n", char1, char2, char3, char3, char2, char1);

    /* 5. Write a C program to compute the perimeter and Area of a rectangle with a height 
    of 7 inches. and width of 5 inches. */
    // int height, width;
    // height = 7;
    // width = 5;
    // int area, Perimeter;
    // Perimeter = 2 * (height + width);
    // printf("Perimeter of the rectangle : %d inches\n", Perimeter);
    // area = height * width;
    // printf("Area of the rectangle : %d inches\n", area);

    /* 6. Write a C program to compute the perimeter and Area of a circle with a given 
    radius */
    // float radius;
    // float perimeter, area;
    // radius = 6;
    // perimeter = 2 * 3.14 * radius;
    // printf("Perimeter of the circle : %.2f inches\n", perimeter);
    // area = 3.14 * radius * radius;
    // printf("Area of the circle : %.2f square inches\n", area);

    /* 7. Write a C program to display multiple variables.
    Sample variable : 
    a + c, x + c, dx + x, ((int)dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
    Delcration : 
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890; */

    // int a = 125, b = 12345;
    // long ax = 1234567890;
    // short s = 4043;
    // float x = 2.13459;
    // double dx = 1.1415927; 
    // char c = 'W';
    // unsigned long ux = 2541567890; 
    // printf("a + c = %d\n", a + c);
    // printf("x + c = %f\n", x + c);
    // printf("dx + x = %f\n", dx + x);
    // printf("((int)dx) + ax = %ld\n", ((int) dx) + ax);
    // printf("a + x = %f\n", a + x);
    // printf("s + b = %d\n", s + b);
    // printf("ax + b = %ld\n", ax + b);
    // printf("s + c = %hd\n", s + c);
    // printf("ax + c = %ld\n", ax + c);
    // printf("ax + ux = %u\n", ax + ux);

    /* 8. Write a C program to convert specified days, into years, weeks and days.
    Number of days : 1329 */
    // int days, years, weeks;
    // printf("Enter day : ");
    // scanf("%d", &days);
    // // Converts days to years, weeks and days
    // years = days / 365;
    // weeks = (days % 365) / 7;
    // days  = days - ((years * 365) + (weeks * 7));

    // printf("Years  : %d\n", years);
    // printf("Weeks  : %d\n", weeks);
    // printf("Days   : %d\n", days);

    /* 9. Write a c program that accepts two integers from the user and calculate the sum of two integers. */
    // int sum1, sum2, sum;
    // printf("Input the first integer : ");
    // scanf("%d", &sum1);
    // printf("Input the second integer : ");
    // scanf("%d", &sum2);
    // sum = sum1 + sum2;
    // printf("Sum of the above the two integers : %d\n", sum);

    /* 10. Write a program that accepts two integers from user and calculate the product of two integers. */
    // int pro1, pro2, product;
    // printf("Input the first integer : ");
    // scanf("%d", &pro1);
    // printf("Input the second integers : ");
    // scanf("%d", &pro2);
    // product = pro1 * pro2;
    // printf("Product of the above the two integers : %d\n", product);
    // printf("C language basic programs questions\n");
    // printf("w3resource\n");

    /* 11. Write a program to accepts two itme's weight(floating point's values) and number of purcheas 
    (floating points' values) and calculate the average value of itmes. */
    // double w1, c1, w2, c2, result;
    // printf("Weight- itme1 : ");
    // scanf("%lf", &w1);
    // printf("No. of itme1 : ");
    // scanf("%lf", &c1);
    // printf("Weight- itme2 : ");
    // scanf("%lf", &w2);
    // printf("No. of itme2 : ");
    // scanf("%lf", &c2);
    // result = ((w1 * c1) + (w2 * c2)) / (c1 + c2);
    // printf("Average value : %f\n", result);

    /* 12. Write a C program that accepts an employee's ID, total working hours of a month and the amonunt he
    recieved per hour. Print the employee's ID and salary(with to decimapl places) of a particular month. */
    // char id[10];
    // int hour;
    // double salary, value;
    // printf("Input the employees ID (Max. 10 chars) : ");
    // scanf("%s", &id);
    // printf("Input the working hrs : ");
    // scanf("%d", &hour);
    // printf("Salary amount/hr : ");
    // scanf("%lf", &value);
    // salary = value * hour;
    // printf("Employees ID = %s\n Salary = U$ %.2lf\n", id, salary);

    /* 13. Write a C program that accepts three integers and find the maximum of three. */
    // int num1, num2, num3;
    // printf("Enter any three number : \n");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // if(num1>num2 && num1>num3) {
    //     printf("%d is a maximum number\n", num1);
    // }
    // else if(num2>num3) {
    //     printf("%d is a maximum number\n", num2);
    // }
    // else {
    //     printf("%d is maximum number\n", num3);
    // }

    /* 14. Write a C program to calculate a bike's average consumption from the given total distance(integer value)
    traveled(in km) spend fuel(in liter, float number-2 decimal point). */
    // int distance;
    // printf("Input total distance in km : ");
    // scanf("%d", &distance);
    // float fuel;
    // printf("Input total fuel spend in liter : ");
    // scanf("%f", &fuel);
    // printf("Average consumption(km/lt) : %.3f\n", distance/fuel);

    /* 15. Write a C program to calculate the distance between the two point. */
    // float x1, y1, x2, y2, distance;
    // printf("Input x1 : ");
    // scanf("%f", &x1);
    // printf("Input y1 : ");
    // scanf("%f", &y1);
    // printf("Input x2 : ");
    // scanf("%f", &x2);
    // printf("Input y2 : ");
    // scanf("%f", &y2);
    // distance = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    // printf("Distance between the said points : %.4f\n", sqrt(distance));
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>

// int main() {
    /* 1. Write a program to sawp the value of two variables using a third variable. Take the value of A and B form the user. */

    // int a, b, t;
    // printf("Enter a 1st number : ");
    // scanf("%d", &a);
    // printf("Enter a 2nd number : ");
    // scanf("%d", &b);
    // printf("Normal number :- a = %d & b = %d\n", a, b);
    // t = a;
    // a = b;
    // b = t;
    // printf("Swaping number :- a = %d & b = %d\n", a, b);

    /* 2. Write a Program to sawp the value of two variable using a third variable. Take the value of A and B form the user. */

    // int a, b;
    // printf("Enter a 1st number : ");
    // scanf("%d", &a);
    // printf("Enter a 2nd number : ");
    // scanf("%d", &b);
    // printf("Normal number :- a = %d & b = %d\n", a, b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("Swaping number :- a = %d & b = %d\n", a, b);

    /* 3. Write a Program to take to numbers as input and print the sum as an output. */

    // int a, b, sum;
    // printf("Enter a 1st number : ");
    // scanf("%d", &a);
    // printf("Enter a 2nd number : ");
    // scanf("%d", &b);
    // sum = a + b;
    // printf("Sum is : %d\n", sum);

    /* 4. Write a program to find the average the 5 numbers. */

    // int a, b, c, d, e;
    // float avg;
    // printf("Enter a five numbers : ");
    // scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    // avg = (a + b + c + d + e) / 5;
    // printf("Average the 5 numbers is : %f\n", avg);

    /* 5. Calculate Simple Interest Principle amount 5000 for a peroid of 5 year at a rate of Interest 10% peramount. */

    // int principle, rate , year;
    // float SI;
    // printf("Enter a principle : ");
    // scanf("%d", &principle);
    // printf("Enter a rate : ");
    // scanf("%d", &rate);
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // SI = (principle * rate * year) / 100;
    // printf("Simple Interest peranmount is : %f\n", SI);

    /* 6. Write a program to calculate the area of triangle. */

    // int base, height;
    // float triangle;
    // printf("Enter a Base : ");
    // scanf("%d", &base);
    // printf("Enter a height : ");
    // scanf("%d", &height);
    // triangle = (base * height) / 2;
    // printf("Area of a triangle is : %f\n", triangle);

    /* 7. Write a program to calculate the area of a scalene triangle. */

    // int a, b, c;
    // float area, s;
    // printf("Enter a three numbers : ");
    // scanf("%d %d %d", &a, &b, &c);
    // s = (a + b + c) / 2;
    // printf("Scalene triangle is : %f\n", s);
    // area = sqrt(s * (s - a) * (s - b) * (s - c));
    // printf("Area of a Scalene triangle is : %f\n", area);

    /* 8. Find the root of a quadratic ax2 + bx + c = 0. */

    // int a, b, c;
    // float alph, bita, root_part;
    // printf("Enter a three numbers : ");
    // scanf("%d %d %d", &a, &b, &c);
    // root_part = (sqrt(b * b - 4 * a * c)) / 2 * a;
    // printf("Root Part is : %f\n", root_part);
    // alph = (-b + root_part);
    // bita = (-b - root_part);
    // printf("Alph = %f & Bita = %f\n", alph, bita);

    /* 9. Write a Program two inter change value of two different variables. */

    // int a, b, t;
    // a = 5;
    // b = 3;
    // printf("Normal number :- a = %d & b = %d\n", a, b);
    // t = a;
    // a = b;
    // b = t;
    // printf("Inter change number :- a = %d & b = %d\n", a, b);

    /* 10. Write a program two inter change value of two different variable without another variable. */

//     int a, b;
//     a = 4, b = 3;
//     printf("Normal number :- a = %d & b = %d\n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("Inter change number :- a = %d & b = %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     /*1. Write a program to give loan to a customer at a fixed intered rate of 11.5% per annum . The customer will provide the loan amount and also the ten year of the loan. Calculate the total amount to be paid by the customer to the bank also display the extra amount the customer is paying after the loan period.*/

//     int p, t;
//     float Amount, SI, R = 5;
//     printf("Enter a loan amount : ");
//     scanf("%d", &p);
//     printf("Enter a loan time : ");
//     scanf("%d", &t);
//     SI = (p * t * R) / 100;
//     printf("Simple Interest is : %f\n", SI);
//     Amount = (SI + p);
//     printf("You paying after the loan period is : %f\n", Amount);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     /*2. Write a program to reverse a 5 digit number without using loop.*/

//     int a = 12345;
//     printf("Original number = %d\n", a);
//     printf("Now reverscing : ");
//     int b, c, d, e, f;
//     b = a % 10;
//     printf("%d", b);
//     a = a / 10;
//     c = a % 10;
//     printf("%d", c);
//     a = a / 10;
//     d = a % 10;
//     printf("%d", d);
//     a = a / 10;
//     e = a % 10;
//     printf("%d", e);
//     a = a / 10;
//     f = a % 10;
//     printf("%d\n", f);
//     return 0;
// }

// #include<stdio.h>
// #define pi 3.14

// int main() {
//     float radius, Area;
//     printf("Enter a radius : ");
//     scanf("%f", &radius);
//     Area = pi * radius * radius;
//     printf("Area of a radius is : %f\n", Area);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     float Celsius = 25, Fahrenheit;
//     Fahrenheit = (Celsius * 9 / 5) + 32;
//     printf("Fahrenheit : %f\n", Fahrenheit);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     float Fahrenheit = 98.599998, Celsius;
//     Celsius = (Fahrenheit - 32) * 5 / 9;
//     printf("Celsius is : %f\n", Celsius);
//     return 0;
// }

// #include<stdio.h>
// #define pi 3.14

// int main() {
//     float radius = 3, Area;
//     Area = pi * radius * radius;
//     printf("Area of a circle is : %f\n", Area);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int x = 3, y = 2, z = 4, temp;
//     printf("Before shifting value : x = %d, y = %d, z = %d\n", x, y, z);
//     temp = x;
//     x = z;
//     z = y;
//     y = temp;
//     printf("After shifting value : x = %d, y = %d, z = %d\n", x, y, z);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     float num = 4.5;
//     printf("Before printing floating number is : %f\n", num);
//     printf("After printing integral number is : %d", (int)num);

//     // float num;
//     // int x;
//     // scanf("%f", &num);
//     // x = (int)num;
//     // printf("%d", x % 10);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int height, width;
//     float rec, peri;
//     printf("Enter a height : ");
//     scanf("%d", &height);
//     printf("Enter a width : ");
//     scanf("%d", &width);
//     rec = height * width;
//     printf("Area of a rectangle is : %f\n", rec);
//     peri = 2 * (height + width);
//     printf("Perimeter of a rectangle is : %f\n", peri);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int sum = 0, n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     printf("Answer is : %d\n", sum);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=10; i++) {
//         printf("%d X %d = %d\n", n, i, n*i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter a continuous 5 number : ");
//     scanf("%d", &a);
//     printf("Original number = %d\n", a);
//     printf("Now reversing : ");
//     int sum, num1, num2, num3, num4, num5;
//     num1 = a % 10;
//     printf("%d", num1);
//     a = a / 10;
//     num2 = a % 10;
//     printf("%d", num2);
//     a = a / 10;
//     num3 = a % 10;
//     printf("%d", num3);
//     a = a / 10;
//     num4 = a % 10;
//     printf("%d", num4);
//     a = a / 10;
//     num5 = a % 10;
//     printf("%d\n", num5);
//     sum = num1 + num2 + num3 + num4 + num5;
//     printf("Answer is : %d\n", sum);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter a continuously 4 numbers : ");
//     scanf("%d", &a);
//     int sum, num1, num2, num3, num4;
//     num1 = a % 10;
//     // printf("%d", num1);
//     a = a / 10;
//     num2 = a % 10;
//     // printf("%d", num2);
//     a = a / 10;
//     num3 = a % 10;
//     // printf("%d", num3);
//     a = a / 10;
//     num4 = a % 10;
//     // printf("%d", num4);
//     sum = num1 + num2 + num3 + num4;
//     printf("The sum of four digit is : %d", sum);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     float a, b, c, discriminant, root1, root2;
//     printf("Input values of a, b, and c\n");
//     scanf("%f %f %f", &a, &b, &c);
//     discriminant = b*b - 4*a*c;
//     if(discriminant < 0){
//         printf("\n\nROOTS ARE IMAGINARY\n");
//     }
//     else{
//         root1 = (-b + sqrt(discriminant))/(2.0*a);
//         root2 = (-b - sqrt(discriminant))/(2.0*a);
//         printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1, root2);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     printf("5 6 7 8\n");
//     printf("6 7 8\n");
//     printf("7 8\n");
//     printf("8\n");
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     float a = 3.14;
//     printf("Before number : %f\n", a);
//     printf("After number : %d", (int)a);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int m, n;
//     printf("Enter a two numbers : ");
//     scanf("%d %d", &m, &n);
//     if(m == 1 && n != 0) 
//     {
//         printf("OK");
//     }
//     else
//     {
//         printf("Jump");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() 
// {
    // // (a.) Sum of the values
    // int num1, num2, num3, sum;
    // printf("Enter a three values : ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // sum = num1 + num2 + num3;
    // printf("Sum of the values is : %d\n", sum);

    // // (b.) Average of the three values
    // float num1, num2, num3, Avg;
    // printf("Enter a three values : ");
    // scanf("%f %f %f", &num1, &num2, &num3);
    // Avg = (num1 + num2 + num3) / 3;
    // printf("Average of the three values is : %f\n", Avg);

    // // Largest of the three
    // int num1, num2, num3;
    // printf("Enter a any three numbers : ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // if(num1>num2 && num1>num3){
    //     printf("%d is largest of the three numbers.", num1);
    // }
    // else if(num2>num3){
    //     printf("%d is largest of the three numbers.", num2);
    // }
    // else{
    //     printf("%d is largest of the three numbers.", num3);
    // }

    // (d.) Smallest of the three
//     int num1, num2, num3;
//     printf("Enter a any three numbers : ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     if(num1<num2 && num1<num3){
//         printf("%d is smallest of the three numbers.", num1);
//     }
//     else if (num2<num3) {
//         printf("%d is smallest of the three numbers.", num2);
//     }
//     else {
//         printf("%d is smallest of the three numbers.", num3);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     // unsigned x = 1;
//     // signed char y = -1;
//     // if(x > y)
//     // printf("x > y");
//     // else
//     // printf("x<=y");

//     int x = 10;
//     if(x = 20) printf("TRUE");
//     else printf("FALSE");
//     return 0;
// }

// #include<stdio.h>

// int main() 
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1; i<=10; i++)
//     {
//         printf("%d X %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

#include<stdio.h>

int main()
{
    int principal, rate, year;
    float SI;
    printf("Enter a principal : ");
    scanf("%d", &principal);
    printf("Enter a rate : ");
    scanf("%d", &rate);
    printf("Enter a year : ");
    scanf("%d", &year);
    SI = (principal * rate * year) / 100;
    printf("Simpal Interest is : %f\n", SI);
    return 0;
}