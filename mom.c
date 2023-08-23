// program structure
// #include<stdio.h>   // Preprocessor Directive
// int main(){
//     // This is a single line comments.
//     /*
//        This is a Multiple line comments.
//        Thanks for accepted me.
//        printf("Hello world\n")
//        Thank you 
//        Visit again.
//        Happy Rashacha Bandhan
//     */
//     printf("Hello member\n");
//     // characters Type
//     // characters Type -->
//     // Ex --> 'a', 'p', 'p', '*', '#', '$'.
//     char hastag;
//     printf("Enter character : ");
//     scanf("%c", &hastag);
//     printf("Hastag is : %c\n", hastag);
//     // Integers Type
//     // Integers Type -->
//     // Ex --> 1, 2, 3, 4, -5, -7, -8.
//     int final_price;
//     printf("Enter final price : ");
//     scanf("%d", &final_price);

//     printf("final price is : %d\n", final_price);
//     // Real number Type
//     // Real number Type -->
//     // Ex --> 1.0, 2.0, -2.4, 5.0.
//     float pi;
//     printf("Enter pi : ");
//     scanf("%f", &pi);

//     printf("Value of pi : %f\n", pi);
//     printf("I have a nice day.\n");
//     printf("Thank you, Visit again.");
//     return 0;
// }

#include<stdio.h>
#include<math.h>

int main() 
{
    // int a, b, sum;
    // printf("Enter a first number : ");
    // scanf("%d", &a);
    // printf("Enter a second number : ");
    // scanf("%d", &b);
    // sum = a + b;
    // printf("Sum is : %d\n", sum);

    // int side, Area;
    // printf("Enter an area side : ");
    // scanf("%d", &side);
    // Area = side * side;
    // printf("Area of a square is : %d\n", Area);

    // int radius;
    // float Area;
    // printf("Enter an area radius : ");
    // scanf("%d", &radius);
    // Area = 3.14 * radius * radius;
    // printf("Area of a radius is : %.2f\n", Area);
    // printf("Chapter - 1 (varibles)");

    // int a, b, c;
    // float s, Area;
    // printf("Enter a, b & c : ");
    // scanf("%d %d %d", &a, &b, &c);
    // s = (a + b + c)/2;
    // Area = sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("Area of scalene triangle is : %.2f\n", Area);

    // printf("%f\n", sqrt(5273.4375));

    /*
     Q.  Write a program two inter change value of two different variables
    */
    //    int a, b, c;
    //    a = 3;
    //    b = 2;
    //    printf("a = %d & b = %d\n", a, b);
    //    c = a;
    //    a = b;
    //    b = c;
    //    printf("a = %d & b = %d\n", a, b);

    /* 
    Q.  Write a program two inter change value of two different variable without another variable
    */
      int a, b;
      a = 4, b = 3;
      printf("a = %d & b = %d\n", a, b);
      a = a + b;
      b = a - b;
      a = a - b;
      printf("a = %d & b = %d\n", a, b);
    return 0;
}