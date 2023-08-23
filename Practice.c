// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int a , b, c;
//     float s, area;
//     printf("Enter a three number : ");
//     scanf("%d %d %d", &a, &b, &c);
//     s = (a + b + c) / 2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Area of a scalene triangle is : %.2f\n", area);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a, b, c, root1, root2, root_part;
//     printf("Enter a three number : \n");
//     scanf("%f %f %f", &a, &b, &c);
//     root_part = (b * b - 4 * a * c);
//     if (root_part < 0)
//     {
//         printf("<--------------Error!!--------------->\n");
//         printf("Enter a Another Value...\n");
//     }
//     else
//     {
//         root1 = (-b + sqrt(root_part)) / (2.0 * a);
//         root2 = (-b - sqrt(root_part)) / (2.0 * a);
//         printf("Root1 = %5.2f\nRoot2 = %5.2f\n", root1, root2);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j;
//     char input, alphabet = 'A';
//     printf("Enter an upper character then print the last row: ");
//     scanf("%c", &input);
//     for(i=1; i<=(input - 'A' + 1); i++) {
//         for(j=1; j<=i; j++) {
//             printf("%c ", alphabet);
//         }
//         alphabet++;
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(j=1; j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(j=1; j<=i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, space, rows, k = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++, k = 0) {
//         for(space = 1; space <= rows - i; space++) {
//             printf("  ");
//         }
//         while(k != 2 * i - 1) {
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     float root1, root2, root_part, a, b, c;
//     printf("Enter the value of a, b and c: \n");
//     scanf("%f %f %f", &a, &b, &c);
//     root_part = (b*b - 4*a*c);
//     if(root_part > 0) {
//         root1 = (-b + sqrt(root_part)) / 2.0*a;
//         root2 = (-b - sqrt(root_part)) / 2.0*a;
//         printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
//     }
//     else {
//         printf("Error!!--------------->\n");
//         printf("Please Enter Another Value.\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     float a, b, c, s, area;
//     printf("Enter the value of a, b, and c:\n");
//     scanf("%f %f %f", &a, &b, &c);
//     s = (a + b + c) / 2.0;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Area of a Scalene triangle of %.2f\n", area);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a;
//     printf("Enter a 5 digit number : ");
//     scanf("%d", &a);
//     printf("Original value      = %d\n", a);
//     printf("Now Reversing vlaue = ");
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
//     printf("%d", f);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int x, n, i, y = 1;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printf("Enter a power : ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++) {
//         y *= x;
//     }
//     printf("%d the power of %d is %d.\n", x, n, y);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int x, i, n, y = 1;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printf("Enter a power : ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++) {
//         y *= x;
//     }
//     printf("%d the power of %d = %d\n", x, n, y);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     double i, n, fact = 1;
//     printf("Enter a number : ");
//     scanf("%lf", &n);
//     i=1;
//     while(i<=n) {
//         fact *= i;
//         i++;
//     }
//     printf("%.0lf! = %.0lf", n, fact);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i;
//     printf("Even :\t");
//     for(i=1; i<=12; i++) {
//         if(i % 2 == 0) {
//             printf("%d\t", i);
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i;
//     for(i=1; i<=32; i=i*2) {
//         printf("%d\t", i);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i;
//     for(i=1; i<=243; i=i*3) {
//         printf("%d\t", i);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i;
//     i = -4;
//     do {
//         if(i % 2 == 0) {
//             printf("%d\t", i);
//         }
//         i++;
//     }while(i<=4);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, num1 = -10;
//     for(i=0; i<=5; i++) {
//         printf("%d\t", num1);
//         num1 -= 1 << (i ? i : 1);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
    // int i, num1 = 1, num2 = 1, n, fib;
    // printf("Enter a nth number : ");
    // scanf("%d", &n);
    // for(i=1; i<=n; i++) {
    //     printf("%d\t", num1);
    //     fib = num1 + num2;
    //     num1 = num2;
    //     num2 = fib;
    // }

    // int i, num1 = 1, num2 = 1, n, fib;
    // printf("Enter a nth number : ");
    // scanf("%d", &n);
    // i=0;
    // while(i<=n) {
    //     printf("%d\t", num1);
    //     fib = num1 + num2;
    //     num1 = num2;
    //     num2 = fib;
    //     i++;
    // }

//     int i, num1 = 1, num2 = 1, n, fib;
//     printf("Enter a nth number : ");
//     scanf("%d", &n);
//     i = 0;
//     do {
//         printf("%d\t", num1);
//         fib = num1 + num2;
//         num1 = num2;
//         num2 = fib;
//         i++;
//     }while(i<=n);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, space, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(space = 1; space <= rows - i; space++)
//         printf("  ");
//         for(j=i; j<=2*i-1; j++)
//         printf("* ");
//         for(j=0; j<i-1; j++)
//         printf("* ");
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, space, rows, k = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++, k = 0) {
//         for(space = 1; space <= rows - i; space++) {
//             printf("  ");
//         }
//         while(k != 2*i-1) {
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= rows; j++) {
//             if(i ==1 || i == rows || j == 1 || j == rows) {
//                 printf("# ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int m;
//     for(m=1; m<=10; m++) {
//         printf("abc\t");
//         m+=3;
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int x = 2, y = 3, z = 4;
//     x=y==z;
//     printf("%d", x);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // char ch = 'A';
//     // char _ch = "A";
//     // printf("%c\n", ch);
//     // printf("%c\n", _ch);

//     int i = 0;
//     for(i = 0; i<20; i++) {
//         switch(i) {
//             case 0: 
//             i+= 5;
//             case 1:
//             i+= 2;
//             case 5:
//             i+= 5;
//             default :
//             i+= 4;
//             break;
//         }
//         printf("%d", i);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n, reversed = 0, remainder, original;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     original = n;
//     while(n != 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }
//     if(original == reversed) {
//         printf("%d is a Palindrome number.\n", original);
//     }
//     else {
//         printf("%d is not a Palindrome number.\n", original);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
    // printf("Hello, World!");
    // char ch;
    // printf("Enter a character : ");
    // scanf("%c", &ch);
    // printf("ASCII value %c of %d\n", ch, ch);
    // int dividend, divisor, quotient, remainder;
    // printf("Enter a dividend : ");
    // scanf("%d", &dividend);
    // printf("Enter a divisor : ");
    // scanf("%d", &divisor);

    // quotient = dividend / divisor;

    // remainder = dividend % divisor;
    // printf("Quotient = %d\n", quotient);
    // printf("Remainder = %d\n", remainder);

    // int num1, num2, num3;
    // printf("Enter a three number : ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // if(num1 > num2 && num1 > num3) {
    //     printf("%d is a Largest Number.", num1);
    // }
    // else if(num2 > num3) {
    //     printf("%d is a Largest Number.", num2);
    // }
    // else {
    //     printf("%d is a Largest Number.", num3);
    // }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     double a, b, c, root1, root2, root_part;
//     printf("Enter a, b & c :\n");
//     scanf("%lf %lf %lf", &a, &b, &c);
//     root_part = (b*b - 4*a*c);
//     if(root_part < 0) {
//         printf("ROOT PART ARE IMAGINARY PART\n");
//     }
//     else
//     {
//         root1 = (-b + sqrt(root_part)) / 2.0*a;
//         root2 = (-b - sqrt(root_part)) / 2.0*a;
//         printf("Root1 = %lf\nRoot2 = %lf\n", root1, root2);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int x, i, n;
//     printf("Enter first number : ");
//     scanf("%d", &x);
//     printf("Enter second number : ");
//     scanf("%d", &n);
//     for(i=x; i<=n; i++) {
//         if(x % 2 != 0) {
//             printf("%d\t", x);
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// long convert(int);
// void main() {
//     int n, bin;
//     printf("Enter a decimal number : ");
//     scanf("%d", &n);
//     bin = convert(n);
//     printf("%d in decimal = %ld in binary.", n, bin);
//     getch();
// }

// long convert(int n) {
//     long bin = 0;
//     int rem, i = 1;

//     while(n != 0) {
//         rem = n % 2;
//         n /= 2;
//         bin += rem * i;
//         i *= 10;
//     }
//     return bin;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int convert(long long);
// void main() {
//     long long n;
//     printf("Enter a binary number : ");
//     scanf("%lld", &n);
//     printf("%lld in binary = %d in decimal.", n, convert(n));
//     getch();
// }

// int convert(long long n) {
//     int dec = 0, i = 0, rem;

//     while(n != 0) {
//         rem = n % 10;
//         n /= 10;
//         dec += rem * pow(2, i);
//         i++;
//     }
//     return dec;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int op;
//     double a, b;
//     printf("Enter a two Operand : \n");
//     scanf("%lf %lf", &a, &b);
//     printf("Enter Your Choose : \n");
//     printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. division\n");
//     printf("Enter Here Your choose : ");
//     scanf("%d", &op);
//     switch(op) {
//         case 1 : 
//         printf("Addition : %.1lf + %.1lf = %.1lf\n", a, b, a + b);
//         printf("Thank You, Visit Again\n");
//         break;
//         case 2 : printf("Subtraction: %.1lf - %.1lf = %.1lf\n", a, b, a - b);
//         printf("Thank You, Visit Again\n");
//         break;
//         case 3 : 
//         printf("Multiplication : %.1lf x %.1lf = %.1lf\n", a, b, a * b);
//         printf("Thank You, Visit Again\n");
//         break;
//         case 4 : 
//         printf("Division : %.1lf / %.1lf = %.1lf\n", a, b, a / b);
//         printf("Thank You, Visit Again\n");
//         break;
//         default : 
//         printf("<------------Error !!------------>\n");
//         printf("Your Choose is Invalid\n");
//         printf("Please Enter Valid Choose(1 to 4)\n");
//         printf("Thank You, Visit Again\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     long long bin = 0;
//     int rem, i = 1, n;
//     clrscr();
//     printf("Enter a decimal number : ");
//     scanf("%d", &n);
//     printf("%d in decimal = ", n);

//     while(n != 0) {
//         rem = n % 2;
//         n /= 2;
//         bin += rem * i;
//         i *= 10;
//     }
//     printf("%lld in binary", bin);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, mar[9], sum = 0, avg;
//     printf("Enter the marks of physics :\n");
//     for(i = 0; i<10; i++) {
//         scanf("%d", &mar[i]);
//     }
//     printf("The marks taken as input : \t");
//     for(i = 0; i<10; i++) {
//         printf("%d\t", mar[i]);
//     }
//     printf("\n");
//     for(i=0; i<10; i++) {
//         sum = sum + mar[i];
//     }
//     printf("Sum = %d\n", sum);
//     avg = sum / 10;
//     printf("Average = %d\n", avg);
//     getch(); 
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int Roll[9], sub1[9], sub2[9], sub3[9], num;
//     printf("How Many Data You Want to Stroe?\n");
//     scanf("%d", &num);
//     for(int i=0; i<=num-1; i++) {
//         printf("Student %d info : \n", i+1);
//         printf("Enter Roll No. : ");
//         scanf("%d", &Roll[i]);
//         printf("Enter Subject 1 marks : ");
//         scanf("%d", &sub1[i]);
//         printf("Enter Subject 2 marks : ");
//         scanf("%d", &sub2[i]);
//         printf("Enter Subject 3 marks : ");
//         scanf("%d", &sub3[i]);
//     }
//     printf("\n\n");
//     printf("-----------------------------\n");
//     printf("RollNo.\tSub1\tSub2\tSub3\n");
//     printf("-----------------------------\n");
//     for(int j=0; j<=num-1; j++) {
//         printf("%d\t %d\t %d\t %d\n", Roll[j], sub1[j], sub2[j], sub3[j]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int arr[10], i, j, t;
//     printf("Enter an any ten number :\n");
//     for(i=0; i<10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<10; i++) {
//         for(j=i+1; j<10; j++) {
//             if(arr[i] > arr[j]) {
//                 t = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = t;
//             }
//         }
//     }
//     printf("Ascending Order :\t");
//     for(i=0; i<10; i++) {
//         printf("%d\t", arr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int arr[30], i, j, t;
//     printf("Enter an any ten number : ");
//     for(i=0; i<10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<10; i++) {
//         for(j=i+1; j<10; j++) {
//             if(arr[i] > arr[j]) {
//                 t = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = t;
//             }
//         }
//     }
//     printf("Ascending Number :\t");
//     for(i=0; i<10; i++) {
//         printf("%d\t", arr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sum[30][30], i, j, r, c;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     printf("Enter the number of columns : ");
//     scanf("%d", &c);
//     printf("Enter Elements of 1st Matrix :\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d : ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter Elements of 2nd Matrix :\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d : ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("Sum of two Matrices : \n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d   ", sum[i][j]);
//          if(j == c - 1) {
//             printf("\n\n");
//          }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sum[30][30], i, j, r, c;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     printf("Enter the number of columns : ");
//     scanf("%d", &c);
//     printf("Enter element 1st Matrices : \n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d : ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element 2nd Matrices :\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d : ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("Sum of two Matrices :\n");
//     for(i=0; i<r; i++) {
//         for(j=0;j<c; j++) {
//             printf("%d\t", sum[i][j]);
//             if(j == c - 1) {
//                 printf("\n\n");
//             }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sub[30][30], r, c, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     printf("Enter element 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d : ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d : ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sub[i][j] = a[i][j] - b[i][j];
//         }
//     }
//     printf("Subtraction of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", sub[i][j]);
//             if(j == c - 1) {
//                 printf("\n\n");
//             }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], multi[30][30], sum = 0, r, c, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     printf("Enter element 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d : ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element 2nd Matrix: \n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d : ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             for(int k=0; k<3; k++) {
//                 sum += a[i][k] * b[j][k];
//             }
//             multi[i][j] = sum;
//             sum = 0;
//         }
//     }
//     printf("Multiplication of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", multi[i][j]);
//         }
//         printf("\n\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sum[30][30], r, c, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     printf("Enter element of 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element of 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("Sum of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", sum[i][j]);
//             if(j == c - 1) {
//                 printf("\n\n");
//             }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], multi[30][30], r, c, i, j, sum = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     printf("Enter element of 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element of 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             for(int k=0; k<3; k++) {
//                 sum += a[i][k] * b[j][k];
//             }
//             multi[i][j] = sum;
//             sum = 0;
//         }
//     }
//     printf("\n\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", multi[i][j]);
//         }
//         printf("\n\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(j=i; j<=rows; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[3][2], b[2][3], multi[3][2],i, j, sum = 0;
//     printf("Enter element of 1st Matrix:\n");
//     for(i=0; i<3; i++) {
//         for(j=0; j<2; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter element of 2nd Matrix:\n");
//     for(i=0; i<2; i++) {
//         for(j=0; j<3; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i=0; i<3; i++) {
//         for(j=0; j<2; j++) {
//             for(int k=0; k<3; k++) {
//                 sum += a[i][k] * b[j][k];
//             }
//             multi[i][j] = sum;
//             sum = 0;
//         }
//     }
//     printf("Multiplication of two Matrices:\n");
//     for(i=0; i<3; i++) {
//         for(j=0; j<2; j++) {
//             printf("%d\t", multi[i][j]);
//         }
//         printf("\n\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sum[30][30], r, c, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     printf("Enter element of 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter element of 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }


//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     printf("\n\n");
//     printf("Sum of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", sum[i][j]);
//             if(j == c - 1) {
//                 printf("\n\n");
//             }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], sub[30][30], r, c, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);

//     printf("Enter element of 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter element of 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }


//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sub[i][j] = a[i][j] - b[i][j];
//         }
//     }

//     printf("Subtraction of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", sub[i][j]);
//             if(j == c - 1) {
//                 printf("\n\n");
//             }
//         }
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[30][30], b[30][30], multi[30][30], r, c, i, j, sum = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);

//     printf("Enter element 1st Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter element 2nd Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter element b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }


//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             for(int k=0; k<3; k++) {
//                 sum += a[i][k] * b[j][k];
//             }
//             multi[i][j] = sum;
//             sum = 0;
//         }
//     }

//     printf("Multiplication of two Matrices:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d\t", multi[i][j]);
//         }
//         printf("\n\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printHello();
// void main() {
//     printHello();
//     printHello();
//     printHello();
// }

// void printHello() {
//     printf("Hello World :)\n");
//     printf("My name is Rohit Kumar Sharma\n");
// }

// #include<stdio.h>
// #include<conio.h>
// void printHello();
// void printGoodBye();
// void main() {
//     printHello();
//     printGoodBye();
//     getch();
// }

// void printHello() {
//     printf("Hello\n");
// }
// void printGoodBye() {
//     printf("good bye\n");
// }

// #include<stdio.h>
// #include<stdio.h>

// void printNamaste();
// void printBonjour();
// void main() {
//     char ch;
//     printf("Enter an I for Indian & F for French: ");
//     scanf("%c", &ch);

//     printNamaste();
//     getch();
// }

// void printNamaste() {
//     printf("Namaste\n");
//     printBonjour();
// }
// void printBonjour() {
//     printf("Bonjour\n");
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int a, int b);
// void main() {
//     int s, x, y;
//     printf("Enter a two number:\n");
//     scanf("%d %d", &x, &y);
//     s = sum(x, y);
//     printf("%d + %d = %d\n", x, y, s);
//     getch();
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<stdio.h>
// #include<conio.h>

// void printTable(int n);
// void main() {
//     int x;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printTable(x);
//     getch();
// }

// void printTable(int n) {
//     for(int i=1; i<=10; i++) {
//     printf("%d X %d = %d\n", n, i, n * i);
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// void calculatePrice(float value);
// void main() {
//     int price = 100.0;
//     calculatePrice(price);
//     getch();
// }

// void calculatePrice(float value) {
//     value = value + (0.18 * value);
//     printf("Price = %.2f\n", value);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int square(int n);
// void main() {
//     // int x;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // printf("Square of a number is : %d\n", square(x));

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("%.2f\n", pow(n, 2));
//     getch();
// }

// int square(int n) {
//     return n * n;
// }

// #include<stdio.h>
// #include<conio.h>

// int square(int n);
// float circle(float radius);
// float rectangle(float h, float w);
// void main() {
//     int n;
//     printf("1. Enter a number: ");
//     scanf("%d", &n);
//     printf("Area of a Square = %d\n", square(n));
//     float radius;
//     printf("2. Enter a number: ");
//     scanf("%f", &radius);
//     printf("Area of a Circle = %.2f\n", circle(radius));
//     float h, w;
//     printf("3.(i) Enter Height: ");
//     scanf("%f", &h);
//     printf("(ii) Enter width: ");
//     scanf("%f", &w);
//     printf("Area of a Rectangle = %.2f\n", rectangle(h, w));
//     getch();
// }

// int square(int n) {
//     return n * n;
// }
// float circle(float radius) {
//     return 3.14 * radius * radius;
// }
// float rectangle(float h, float w) {
//     return (h * w);
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrimeNumber(int n);
// void main() {
//     int n1, n2, j, prime;
//     printf("Enter two Positive integer: ");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 - n2;
//     }
//     printf("Prime Number between %d and %d are: ", n1, n2);
//     for(j=n1 + 1; j < n2; j++) {
//         prime = checkPrimeNumber(j);
//         if(prime == 1) {
//             printf("%d ", j);
//         }
//     }
//     getch();
// }

// int checkPrimeNumber(int n) {
//     int i, prime = 1;
//     for(i=2; i<n/2; i++) {
//         if(n % i == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     return prime;
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrimeNumber(int n);
// void main() {
//     int n1, n2, prime;
//     printf("Enter two positive integer: ");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 - n2;
//     }
//     printf("Prime Numbers between %d and %d are: ", n1, n2);
//     for(int i=n1 + 1; i<n2; i++) {
//         prime = checkPrimeNumber(i);
//         if(prime == 1) {
//             printf("%d  ", i);
//         }
//     }
//     getch();
// }

// int checkPrimeNumber(int n) {
//     int j, prime = 1;
//     for(j = 2; j<=n/2; j++) {
//         if(n % j == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     return prime;
// }

// #include<stdio.h>
// #include<conio.h>

// void printHW(int count);
// void main() {
//     printHW(5);
//     getch();
// }

// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello World\n");
//     printHW(count - 1);
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int n);
// void main() {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     printf("Sum of First Natural Number 1 to %d = %d", x, sum(x));
//     getch();
// }

// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }

//     int sum1 = sum(n - 1);
//     int sum2 = sum1 + n;
//     return sum2;
// }

// #include<stdio.h>
// #include<conio.h>

// int fact(int n);
// void main() {
//     int x;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printf("%d! = %d\n", x, fact(x));
//     getch();
// }

// int fact(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int fact1 = fact(n - 1);
//     int fact2 = fact1 * n;
//     return fact2;
// }

// #include<stdio.h>
// #include<conio.h>

// float calTem(float c);
// void main() {
//     float x;
//     printf("Enter Temparcture: ");
//     scanf("%f", &x);
//     printf("fahrenheit = %.2f\n", calTem(x));
//     getch();
// }

// float calTem(float c) {
//     float cal1 = (c*9.0/5.0);
//     float cal2 = cal1 + 32;
//     return cal2;
// }

// #include<stdio.h>
// #include<conio.h>

// float calPer(float math, float science, float sanskrit);
// void main() {
//     float math, science, sanskrit;
//     math = 76;
//     science = 80;
//     sanskrit = 69;
//     printf("Final Result = %.2f\n", calPer(math, science, sanskrit));
//     getch();
// }

// float calPer(float math, float science, float sanskrit) {
//     float cal = (math + science + sanskrit) / 3.0;
//     return cal;
// }


// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int x;
//     printf("Enter nth number: ");
//     scanf("%d", &x);
//     printf("Fibonacci %dth term is %d\n", x, fib(x));
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fib1 = fib(n - 1);
//     int fib2 = fib(n - 2);
//     int fib3 = fib1 + fib2;
//     return fib3;
// }

// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int n;
//     printf("Enter a nth number: ");
//     scanf("%d", &n);
//     printf("Fibonacci sequence %dth term is %d", n, fib(n));
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fib1 = fib(n - 1);
//     int fib2 = fib(n - 2);
//     int fib3 = fib1 + fib2;
//     return fib3;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int num = 1, num1 = 1, i, n, fib;
//     printf("Enter nth number: ");
//     scanf("%d", &n);
//     for(i=2; i<n; i++) {
//         printf("%d\t", num);
//         fib = num + num1;
//         num = num1;
//         num1 = fib;
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrime(int n);
// void main() {
//     int i, n1, n2, prime;
//     printf("Enter two positive integer: ");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 + n2;
//     }

//     printf("Prime Number between %d and %d are:\t", n1, n2);
//     for(i=n1+1; i<n2; i++) {
//         prime = checkPrime(i);
//         if(prime == 1) {
//             printf("%d\t", i);
//         }
//     }
//     getch();
// }

// int checkPrime(int n) {
//     int j, prime = 1;
//     for(j=2; j<=n/2; j++) {
//         if(n % j == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     return prime;
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrimeNumber(int n);
// void main() {
//     int j, n1, n2, prime;
//     printf("Enter two positive number : ");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 - n2;
//     }
//     printf("Prime Numbers between %d and %d are:\t", n1, n2);
//     for(j=n1+1; j<n2; j++) {
//         prime = checkPrimeNumber(j);
//         if(prime == 1) {
//             printf("%d\t", j);
//         }
//     }
//     getch();
// }

// int checkPrimeNumber(int n) {
//     int i, prime = 1;
//     for(i=2; i<=n/2; i++) {
//         if(n % i == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     return prime;
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrimeNumber(int n);
// void main() {
//     int i, n1, n2, prime;
//     printf("Enter two positive integer:\n");
//     scanf("%d %d", &n1, &n2);

//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 - n2;
//     }

//     printf("Prime Numbers between %d and %d are:\t", n1, n2);
//     for(i=n1+1; i<n2; i++) {
//         prime = checkPrimeNumber(i);
//         if(prime == 1) {
//             printf("%d\t", i);
//         }
//     }
//     getch();
// }

// int checkPrimeNumber(int n) {
//     int j, prime = 1;
//     for(j=2; j<=n/2; j++) {
//         if(n % j == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     return prime;
// }

// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int n;
//     printf("Enter the nth number: ");
//     scanf("%d", &n);
//     printf("Fibonacci %dth term is %d\n", n, fib(n));
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fibN1 = fib(n - 1);
//     int fibN2 = fib(n - 2);
//     int fibN = fibN1 + fibN2;
//     return fibN;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int age = 20;
//     int *ptr = &age;
//     // int _age = *ptr;
       
//     // printf("%d\n", age);
//     // printf("%d\n", *ptr);
//     // printf("%d\n", _age);

//     // printf("%u\n", &age);
//     // printf("%u\n", ptr);
//     // printf("%u\n", &ptr);

//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));

//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     float age = 20.0;
//     float *ptr = &age;
//     float **pptr = &ptr;
//     float _age = **pptr;

//     printf("%f\n", _age);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i = 2;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("Value of i = %d\n", **pptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void square(int n);
// void _square(int *n);
// void main() {
//     int number = 2;
//     square(number);
//     printf("square = %d\n", number);

//     _square(&number);
//     printf("square = %d\n", number);
//     getch();
// }

// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }
// void _square(int *n) {
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }

// #include<stdio.h>
// #include<conio.h>

// void square(int n);
// void _square(int *n);
// void main() {
//     int number = 4;
//     square(number);
//     printf("Square = %d\n", number);

//     _square(&number);
//     printf("_Square = %d\n", number);
//     getch();
// }

// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }
// void _square(int *n) {
//     *n = (*n) * (*n);
//     printf("_square = %d\n", *n);
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int a, int b);
// void _swap(int *a, int * b);
// void main() {
//     int x = 2, y = 3;
//     // swap(x,y);
//     // printf("x = %d & y = %d\n", x, y);

//     _swap(&x, &y);
//     printf("x = %d & y = %d\n", x, y);
//     getch();
// }

// void swap(int a, int b) {
//     int t = a;
//     a = b; 
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }
// void _swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
//     // printf("a = %d & b = %d\n", *a, *b);
// }

// #include<stdio.h>
// #include<conio.h>
// void printAddress(int n);
// void main() {
//     int n = 4;
//     printf("%p\n", &n);
//     printAddress(n);
//     getch();
// }

// void printAddress(int n) {
//     printf("%p\n", &n);
// }

// #include<stdio.h>
// #include<conio.h>

// void _printAddress(int *n);
// void main() {
//     int x = 4;
//     printf("%p\n", &x);
//     _printAddress(&x);
//     getch();
// }

// void _printAddress(int *n) {
//     printf("%p\n", n);
// }

// #include<stdio.h>
// #include<conio.h>

// void Calculate(int a, int b, int *sum, int *prod, int *avg);
// void main() {
//     int x = 4, y = 2, sum, prod, avg;
//     Calculate(x, y, &sum, &prod, &avg);
//     printf("Sum : %d + %d = %d\nProduct : %d X %d = %d\nAverage : (%d + %d) / 2 = %d", x, y, sum, x, y, prod, x, y, avg);
//     getch();
// }

// void Calculate(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + 2) / 2;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int marks[3];
//     printf("Enter phy: ");
//     scanf("%d", &marks[0]);

//     printf("Enter chem: ");
//     scanf("%d", &marks[1]);

//     printf("Enter math: ");
//     scanf("%d", &marks[2]);

//     printf("Phy = %d  Chem = %d  Math = %d\n", marks[0], marks[1], marks[2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     float price[3] = {100.0, 200.0, 300.0};
//     // printf("Enter 1st Item price: ");
//     // scanf("%f", &price[0]);

//     // printf("Enter 2nd Item price: ");
//     // scanf("%f", &price[1]);

//     // printf("Enter 3rd Item price: ");
//     // scanf("%f", &price[2]);

//     price[0] = (price[0] + (price[0] * 0.18));
//     price[1] = (price[1] + (price[1] * 0.18));
//     price[2] = (price[2] + (price[2] * 0.18));

//     printf("1st Item final cost with gst = %.2f\n", price[0]);
//     printf("2nd Item final cost with gst = %.2f\n", price[1]);
//     printf("3rd Item final cost with gst = %.2f\n", price[2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int age = 20;
//     // int *ptr = &age;
//     // printf("%u\n", ptr);
//     // ptr++;
//     // printf("%u\n", ptr);
//     // ptr--;
//     // printf("%u\n", ptr); 

//     // float price = 100.0;
//     // float *ptr = &price;
//     // printf("%u\n", ptr);
//     // ptr++;
//     // printf("%u\n", ptr);
//     // ptr--;
//     // printf("%u\n", ptr);

//     char ch = 'A';
//     char *ptr = &ch;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int age = 20;
//     int _age = 21;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf("%u and %u Difference = %u\n", ptr, _ptr, ptr - _ptr);
//     _ptr = &age;
//     printf("Comparsion = %u\n", ptr == _ptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index : ", i);
//         scanf("%d", &aadhar[i]);
//     }
//     for(int i=0; i<5; i++) {
//         printf("%d index : %d\n", i, aadhar[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printNumbers(int *arr, int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     getch();
// }

// void printNumbers(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int marks[2][3];
//     marks[0][0] = 61;
//     marks[0][1] = 61;
//     marks[0][2] = 62;

//     marks[1][0] = 61;
//     marks[1][1] = 61;
//     marks[1][2] = 62;

//     printf("%d\n", marks[0][2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int countOdd(int arr[], int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("odd : %d", countOdd(arr, 6));
//     getch();
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {  
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d\n", *(arr+2));
//     printf("%d\n", *(arr+5));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int reverse(int arr[], int n);
// int printNumbers(int arr[], int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     reverse(arr, 5);
//     printNumbers(arr, 5);
//     getch();
// }

// int printNumbers(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
// }
// int reverse(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstValue = arr[i];
//         int secondValue = arr[n-i-1];
//         arr[i] = secondValue;
//         arr[n-i-1] = firstValue;
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n;
//     printf("Enter a nth number: ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i = 2; i<n; i++) {
//         fib[i] = fib[i - 1] + fib[i -2];
//         printf("%d\t", fib[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int printTable(int arr[][10], int n, int m, int number);
// void main() {
//     int tables[2][10];
//     printTable(tables, 0, 10, 2);
//     printTable(tables, 1, 10, 3);
//     for(int i=0; i<10; i++) {
//         printf("%d\n", tables[0][i]);
// }
// printf("\n");
// for(int i=0; i<10; i++) {
//         printf("%d\n", tables[1][i]);
// }
//     getch();
// }
// int printTable(int arr[][10], int n, int m, int number) {
//     for(int i=0; i<10; i++) {
//         arr[n][i] = number * (i+1);
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     // int x;
//     // printf("Enter a number : ");
//     // scanf("%d", &x);
//     // printf("%d\n",x % 2 == 0);

//     // int x;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // printf("%d\n", x > 9 && x < 100);

//     // int num, orignalnum, rem, result = 0;
//     // printf("Enter a three-digit number: ");
//     // scanf("%d", &num);
//     // orignalnum = num;
//     // while(orignalnum != 0) {
//     //     rem = orignalnum % 10;
//     //     result += rem * rem * rem;
//     //     orignalnum /= 10;
//     // }
//     // if(result == num) {
//     //     printf("%d is a Armstrong number.\n", num);
//     // }
//     // else {
//     //     printf("%d is not a Armstrong number.\n", num);
//     // }

//     // int num, originalnum, rem, res = 0;
//     // printf("Enter three-digit number: ");
//     // scanf("%d", &num);
//     // originalnum = num;
//     // while(originalnum != 0) {
//     //     rem = originalnum % 10;
//     //     res = res + rem * rem * rem;
//     //     originalnum = originalnum / 10;
//     // }
//     // if(res == num) {
//     //     printf("%d is a Armstrong number.\n", num);
//     // }
//     // else{
//     //     printf("%d is not a Armstrong number.\n", num);
//     // }

//     // int low, high, number, originalnumber, rem, count = 0;
//     // double result = 0.0;
//     // printf("Enter a two digit number(intrvals): ");
//     // scanf("%d %d", &low, &high);
//     // printf("Armstrong numbers between %d and %d are: ", low, high);
//     // if(high < low) {
//     //     high = high + low;
//     //     low = high - low;
//     //     high = high - low;
//     // }
//     // for(number = low+1; number < high; number++) {
//     //     originalnumber = number;
//     //     while(originalnumber != 0) {
//     //         originalnumber /= 10;
//     //         count++;
//     //     }
//     //     originalnumber = number;
//     //     while(originalnumber != 0) {
//     //     rem = originalnumber % 10;
//     //     result = result + pow(rem, count);
//     //     originalnumber /= 10;
//     //     }
//     //     if((int)result == number){
//     //     printf("%d ", number);
//     //     }
//     //     count = 0;
//     //     result = 0;
//     // }

//     // int low, high, rem, number, originalnumber, count = 0;
//     // double result = 0.0;
//     // printf("Enter a two number(intrvals): ");
//     // scanf("%d %d", &low, &high);
//     // printf("Armstrong number between %d and %d are:\t", low, high);

//     // if(high < low) {
//     //     high = high + low;
//     //     low = high - low;
//     //     high = high - low;
//     // }

//     // for(number = low+1; number < high; number++) {
//     //     originalnumber = number;
//     //     while(originalnumber != 0) {
//     //         originalnumber /= 10;
//     //         count++;
//     //     }
//     //     originalnumber = number;
//     //     while(originalnumber != 0) {
//     //         rem = originalnumber % 10;
//     //         result = result + pow(rem, count);
//     //         originalnumber /= 10;
//     //     }
//     //     if((int)result == number) {
//     //         printf("%d\t", number);
//     //     }
//     //     count = 0;
//     //     result = 0;
//     // }

//     // int x, sum = 0;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // for(int i=1; i<=x; i++) {
//     //     sum += i;
//     // }
//     // printf("Sum %d of %d.\n", x, sum);

//     // int x, sum = 0;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // for(int i=x; i>=1; i--) {
//     //     sum += i;
//     // }
//     // printf("Sum %d of %d.\n", x, sum);

//     // int x;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // for(int i=1; i<=10; i++) {
//     //     printf("%d X %d = %d\n", x, i, i*x);
//     // }

//     // int x;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // for(int i=10; i>=1; i--) {
//     //     printf("%d X %d = %d\n", x, i, i*x);
//     // }

//     // int x, fact = 1;
//     // printf("Enter a number: ");
//     // scanf("%d", &x);
//     // for(int i=1; i<=x; i++) {
//     //     fact *= i;
//     // }
//     // printf("%d! = %d\n", x, fact);

//     int x, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     for(int i=x; i>=1; i--) {
//         fact *= i;
//     }
//     printf("%d! = %d\n", x, fact);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printString(char arr[]);
// void main() {
//     // char name[] = {'R', 'O', 'H', 'I', 'T', '\0'};
//     // char name[] = "ROHIT";
//     // char class[] = "BC College";

//     char firstName[] = "Rohit Kumar";
//     char lastName[] = " Sharma";
//     printString(firstName);
//     printString(lastName);
//     getch();
// }

// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // char name[50];
//     // printf("What's Your Name?\n");
//     // printf("Enter Here: ");
//     // scanf("%s", name);
//     // printf("Your Name is %s.", name);

//     // char name[10];
//     // gets(name);
//     // puts(name);

//     // char name[100];
//     // fgets(name,100,stdin);
//     // puts(name);

//     char *canChange = "Rohit Kumar Sharma";
//     puts(canChange);
//     canChange = "Rohit Kumar";
//     puts(canChange);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int countLength(char arr[]);
// void main() {
//     char name[50];
//     printf("What's Your Name?\n");
//     fgets(name,100,stdin);
//     printf("Length of %d.\n", countLength(name));
//     getch();
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i] != 0; i++) {
//         count++;
//     }
//     return count - 1;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main() {
//     // char name[] = "Rohit";
//     // int length = strlen(name);
//     // printf("Length is %d\n", length);

//     // char firstName[] = "Abhay Sharma";
//     // char secondName[] = "Rohit Kumar Sharma";
//     // printf("My New Name is %s.\n", strcpy(firstName,secondName));

//     // char oldStr[] = "oldStr";
//     // char newStr[] = "newStr";
//     // strcpy(newStr,oldStr);
//     // puts(newStr);

//     // char firstName[100] = "Rohit ";
//     // char lastName[] = "Kumar";
//     // strcat(firstName,lastName);
//     // puts(firstName);

//     // char str[] = "HHH";
//     // char str2[] = "HHH";
//     // printf("%d", strcmp(str,str2));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     char str[100];
//     char ch;
//     int i=0;

//     while(ch != '\n') {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// void salting(char password[]);
// void main() {
//     char password[50];
//     scanf("%s", password);
//     salting(password);
//     getch();
// }

// void salting(char password[]) {
//     char slat[] = "@123";
//     char newPass[100];

//     strcpy(newPass,password);
//     strcat(newPass,slat);
//     puts(newPass);
// }

// #include<stdio.h>
// #include<conio.h>

// void slice(char str[], int n, int m);
// void main() {
//     char str[] = "HelloWorld";
//     slice(str,3,6);
//     getch();
// }

// void slice(char str[], int n, int m) {
//     char newStr[50];
//     int j = 0;
//     for(int i=n; i<=m; i++, j++) {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// #include<stdio.h>
// #include<conio.h>

// int countvowels(char str[]);
// void main() {
//     char str[] = "Rohit";
//     printf("Vowels are: %d\n", countvowels(str));
//     getch();
// }

// int countvowels(char str[]) {
//     int count = 0;
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         count++;
//     }
//     return count;
// }

// #include<stdio.h>
// #include<conio.h>

// void checkStr(char str[], char ch);
// void main() {
//     char str[50] = "Sharmaeditx375";
//     char ch = 'r';
//     checkStr(str,ch);
//     getch();
// }

// void checkStr(char str[], char ch) {
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             printf("Character is Present!\n");
//             return;
//         }
//     }
//     printf("Character is NOT Present!\n");
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // for(int i=1; i<=5; i++) {
//     //     if(i == 3) {
//     //         break;
//     //     }
//     //     printf("%d\t", i);
//     // }

//     // int i = 1;
//     // while(1) {
//     //     printf("Enter Number: ");
//     //     scanf("%d", &i);
//     //     if(i % 2 != 0) {
//     //         break;
//     //     }
//     // }
//     // printf("Thank You!!\n");

//     // int i = 1;
//     // do {
//     //     printf("Enter number: ");
//     //     scanf("%d", &i);
//     //     if(i % 7 == 0) {
//     //         break;
//     //     }
//     // }while(1);
//     // printf("Thanks Your!!\n");

//     // for(int i=1; i<=10; i++) {
//     //     if(i == 6) {
//     //         continue;
//     //     }
//     //     printf("%d\t", i);
//     // }

//     // for(int i=5; i<=50; i++) {
//     //     if(i % 2 != 0) {
//     //         printf("%d\t", i);
//     //     }
//     // }

//     // int i, sum = 0;
//     // for(i=5; i<=50; i++) {
//     //     sum += i;
//     // }
//     // printf("Sum 5 to 50 of %d\n", sum);

//     // int i;
//     // for(i=0; i<=20; i++) {
//     //     if(i >= 10) {
//     //         printf("%d\t", i);
//     //     }
//     // }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printHello();
// void printbye();
// void main() {
//     printHello();
//     printbye();
//     getch();
// }

// void printHello() {
//     printf("Hello\n");
// }
// void printbye() {
//     printf("Good Bye :)\n");
// }

// #include<stdio.h>
// #include<conio.h>

// void printNamaste();
// void printBonjour();
// void main() {
//     char ch;
//     printf("Enter i for Indian & f for French: ");
//     scanf("%c", &ch);
//     if(ch == 'i') {
//         printNamaste();
//     }
//     else {
//         printBonjour();
//     }
//     getch();
// }

// void printNamaste() {
//     printf("Namaste\n");
// }
// void printBonjour() {
//     printf("Bonjour\n");
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int a, int b);
// void main() {
//     int x = 2, y = 3;
//     printf("%d + %d = %d", x, y, sum(x,y));
//     getch();
// }
// int sum(int a, int b) {
//     return a + b;
// }

// #include<stdio.h>
// #include<conio.h>

// void printTable(int n);
// void main() {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     printTable(x);
//     getch();
// }

// void printTable(int n) {
//     for(int i=1; i<=10; i++) {
//         printf("%d X %d = %d\n", n, i, i*n);
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// void value(float price1, float price2, float price3);
// void main() {
//     float x = 100.0, y = 200.0, z = 300.0;
//     value(x, y, z);
//     getch();
// }

// void value(float price1, float price2, float price3) {
//     printf("Final Value one is %.2f\n", price1 = (price1 + (price1 * 0.18)));
//     printf("Final Value two is %.2f\n",price2 = (price2 + (price2 * 0.18)));
//     printf("Final Value three is %.2f\n", price3 = (price3 + (price3 * 0.18)));
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     float x = 4;
//     printf("%.2f\n", pow(2, x));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// float square(float n);
// float circle(float radius);
// float rect(float Len, float Wei);
// void main() {
//     float n = 3;
//     printf("Square is %.2f\n", square(n));
//     float rad = 3;
//     printf("Area of a Circle is %.2f\n", circle(rad));
//     float l = 4, w = 3;
//     printf("Area of a rectangle is %.2f\n", rect(l, w));
//     getch();
// }
// float square(float n) {
//     n = n * n;
//     return n;
// }
// float circle(float radius) {
//     radius = 3.14 * radius * radius;
//     return radius;
// }
// float rect(float Len, float Wei) {
//     float recangle = Len * Wei;
//     return recangle;
// }

// #include<stdio.h>
// #include<conio.h>

// void printStatement(int count);
// void main() {
//     printStatement(5);
//     getch();
// }

// void printStatement(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("B C College\n");
//     printStatement(count - 1);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[50];
// };
// void main() {
//     struct student s1;
//     s1.roll = 102;
//     s1.cgpa = 6.6;
//     strcpy(s1.name,"Rohit Kumar");

//     printf("Student Name : %s\n", s1.name);
//     printf("Student Roll : %d\n", s1.roll);
//     printf("Student CGPA : %.1f\n", s1.cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// void main() {
//     printf("-----Students Information -----\n");
//     struct student s1;
//     s1.roll = 103;
//     s1.cgpa = 6.6;
//     strcpy(s1.name, "Rohit Kumar");

//     printf("Student Name : %s\n", s1.name);
//     printf("Student Roll : %d\n", s1.roll);
//     printf("Student CGPA : %.1f\n", s1.cgpa);

//     struct student s2;
//     s2.roll = 104;
//     s2.cgpa = 7.9;
//     strcpy(s2.name, "Dheeraj Kumar");

//     printf("Student Name : %s\n", s2.name);
//     printf("Student Roll : %d\n", s2.roll);
//     printf("Student CGPA : %.1f\n", s2.cgpa);

//     struct student s3;
//     s3.roll = 105;
//     s3.cgpa = 5.9;
//     strcpy(s3.name, "Shivam Kumar");

//     printf("Student Name : %s\n", s3.name);
//     printf("Student Roll : %d\n", s3.roll);
//     printf("Student CGPA : %.1f\n", s3.cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[50];
// };
// void main() {
//     // struct student BCA[0];
//     // BCA[0].roll = 103;
//     // BCA[0].cgpa = 6.6;
//     // strcpy(BCA[0].name,"Rohit Kumar");

//     // printf("Student Name: %s\n", BCA[0].name);
//     // printf("Student Roll: %d\n", BCA[0].roll);
//     // printf("Student CGPA: %.1f\n", BCA[0].cgpa);

//     struct student BCA = {103,6.6,"Rohit Kumar"};
//     printf("Student Name: %s\n", BCA.name);
//     printf("Student Roll: %d\n", BCA.roll);
//     printf("Student CGPA: %.1f\n", BCA.cgpa);

//     // struct student *ptr = &BCA;
//     // printf("Student Name: %s\n", (*ptr).name);
//     // printf("Student Roll: %d\n", (*ptr).roll);
//     // printf("Student CGPA: %.1f\n", (*ptr).cgpa);

//     struct student *ptr = &BCA;
//     printf("Student Name: %s\n", ptr->name);
//     printf("Student Roll: %d\n", ptr->roll);
//     printf("Student CGPA: %.1f\n", ptr->cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[50];
// };

// void printInfo(struct student s1);
// void main() {
//     struct student s1 = {103,6.6,"Rohit Kumar"};
//     printInfo(s1);
//     getch();
// }

// void printInfo(struct student s1) {
//     printf("----- Student Information -----\n");
//     printf("Student Name: %s\n", s1.name);
//     printf("Student Roll: %d\n", s1.roll);
//     printf("Student CGPA: %.1f\n", s1.cgpa);
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct computerenginneringstudent {
//     int roll;
//     float cgpa;
//     char name[50];
// }coe;
// void main() {
//     coe s1 = {103,6.6,"Rohit Kumar"};
//     printf("Student Name is %s\n", s1.name);
//     printf("Student Roll is %d\n", s1.roll);
//     printf("Student CGPA is %.1f\n", s1.cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct address {
//     int houseno;
//     int block;
//     char city[100];
//     char state[100];
// }adds;

// void addressInfo(adds add);
// void main() {
//     adds add[5];
//     printf("Enter Address Person1:\n");
//     scanf("%d", &add[0].houseno);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("Enter Address Person2:\n");
//     scanf("%d", &add[1].houseno);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("Enter Address Person3:\n");
//     scanf("%d", &add[2].houseno);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("Enter Address Person4:\n");
//     scanf("%d", &add[3].houseno);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("Enter Address Person5:\n");
//     scanf("%d", &add[4].houseno);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     addressInfo(add[0]);
//     addressInfo(add[1]);
//     addressInfo(add[2]);
//     addressInfo(add[3]);
//     addressInfo(add[4]);
//     getch();
// }

// void addressInfo(adds add) {
//     printf("Address is : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct address {
//     int houseno;
//     int block;
//     char city[50];
//     char state[50];
// }adds;

// void printAddress(adds add);
// void main() {
//     adds add[5];
//     printf("----- Enter Address Person 1 -----\n");
//     scanf("%d", &add[0].houseno);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("----- Enter Address Person 2 -----\n");
//     scanf("%d", &add[1].houseno);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("----- Enter Address Person 3 -----\n");
//     scanf("%d", &add[2].houseno);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("----- Enter Address Person 4 -----\n");
//     scanf("%d", &add[3].houseno);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("----- Enter Address Person 5 -----\n");
//     scanf("%d", &add[4].houseno);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     printAddress(add[0]);
//     printAddress(add[1]);
//     printAddress(add[2]);
//     printAddress(add[3]);
//     printAddress(add[4]);

//     getch();
// }

// void printAddress(adds add) {
//     printf("Address is : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct vector {
//     int x;
//     int y;
// }vec;
// void calsum(vec v1, vec v2, vec sum);
// void main() {
//     vec v1 = {6, 8};
//     vec v2 = {7, 9};
//     vec sum = {0};

//     calsum(v1, v2, sum);
//     getch();
// }

// void calsum(vec v1, vec v2, vec sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("Sum of vector x is %d\n", sum.x);
//     printf("Sum of vector y is %d\n", sum.y);
// }

// #include<stdio.h>
// #include<conio.h>

// struct complex {
//     int img;
//     int real;
// };
// void main() {
//     struct complex number1 = {6, 3};
//     struct complex *ptr = &number1;
//     printf("Imaginary Part is %d\n", ptr->img);
//     printf("Real Part is %d\n", ptr->real);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct BankAccount {
//     int accountno;
//     char holdername[50];
// }acc;
// void main() {
//     acc a1 = {12345, "Rohit Kumar"};
//     acc a2 = {23456, "Dheeraj Kumar"};
//     acc a3 = {56891, "Kunal Kumar"};

//     printf("----- Bank Account Information -----\n");
//     printf("----- Person 1 Information -----\n");
//     printf("Account Holder Name : %s\n", a1.holdername);
//     printf("Account Number      : %d\n", a1.accountno);

//     printf("----- Person 2 Information -----\n");
//     printf("Account Holder Name : %s\n", a2.holdername);
//     printf("Account Number      : %d\n", a2.accountno);

//     printf("----- Person 3 Information -----\n");
//     printf("Account Holder Name : %s\n", a3.holdername);
//     printf("Account Number      : %d\n", a3.accountno);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // FILE *fptr;
//     // fptr = fopen("test.exe", "rb");
//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("NewTest.txt", "r");
//     // if(fptr == NULL) {
//     //     printf("File doesn't exit...");
//     // }
//     // else {
//     //     fclose(fptr);
//     // }

//     // FILE *fptr;
//     // fptr = fopen("NewTest.txt","r");

//     // char ch;
//     // fscanf(fptr,"%c",&ch);
//     // printf("Character = %c\n", ch);
//     // fscanf(fptr,"%c",&ch);
//     // printf("Character = %c\n", ch);
//     // fscanf(fptr,"%c",&ch);
//     // printf("Character = %c\n", ch);
//     // fscanf(fptr,"%c",&ch);
//     // printf("Character = %c\n", ch);
//     // fscanf(fptr,"%c",&ch);
//     // printf("Character = %c\n", ch);

//     // FILE *fptr;
//     // fptr = fopen("NewTest.txt","r");

//     // int i;
//     // fscanf(fptr,"%d",&i);
//     // printf("Integer = %d\n", i);
//     // fscanf(fptr,"%d",&i);
//     // printf("Integer = %d\n", i);
//     // fscanf(fptr,"%d",&i);
//     // printf("Integer = %d\n", i);

//     // FILE *fptr;
//     // fptr = fopen("Test.txt","r");
//     // if(fptr == NULL) {
//     //     printf("File doesn't exit...");
//     // }
//     // else {
//     //     fclose(fptr);
//     // }

//     // FILE *fptr;
//     // fptr = fopen("program.txt","a");

//     // fprintf(fptr,"%c",'A');
//     // fprintf(fptr,"%c",'p');
//     // fprintf(fptr,"%c",'p');
//     // fprintf(fptr,"%c",'l');
//     // fprintf(fptr,"%c",'e');

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "r");

//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt","w");

//     // fputc('M',fptr);
//     // fputc('A',fptr);
//     // fputc('N',fptr);
//     // fputc('G',fptr);
//     // fputc('O',fptr);

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "r");

//     // char ch;
//     // ch = fgetc(fptr);
//     // while(ch != EOF) {
//     //     printf("%c", ch);
//     //     ch = fgetc(fptr);
//     // }
//     // printf("\n");

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "r");

//     // int i;
//     // fscanf(fptr,"%d",&i);
//     // printf("%d\n", i);
//     // fscanf(fptr,"%d", &i);
//     // printf("%d\n", i);
//     // fscanf(fptr,"%d",&i);
//     // printf("%d\n", i);
//     // fscanf(fptr,"%d", &i);
//     // printf("%d\n", i);
//     // fscanf(fptr,"%d", &i);
//     // printf("%d\n", i);

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt","w");

//     // char name[50];
//     // int age;
//     // float cgpa;

//     // printf("Enter name: ");
//     // scanf("%s", name);
//     // printf("Enter age: ");
//     // scanf("%d", &age);
//     // printf("Enter cgpa: ");
//     // scanf("%f", &cgpa);

//     // fprintf(fptr,"Student Name: %s\n", name);
//     // fprintf(fptr,"Student Age : %d\n", age);
//     // fprintf(fptr,"Student CGPA: %.1f", cgpa);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "w");

//     // int i, n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);

//     // for(i=1; i<=n; i++) {
//     //     if(i % 2 != 0) {
//     //         fprintf(fptr,"%d\n", i);
//     //     }
//     // }

//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "r");

//     // int a;
//     // fscanf(fptr,"%d", &a);
//     // int b;
//     // fscanf(fptr, "%d", &b);

//     // fclose(fptr);

//     // fptr = fopen("program.txt", "w");
//     // fprintf(fptr,"%d + %d = %d", a, b,  a + b);

//     // fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     // int *ptr;
//     // ptr = (int *)malloc(5 * sizeof(int));

//     // ptr[0] = 2;
//     // ptr[1] = 4;
//     // ptr[2] = 6;
//     // ptr[3] = 8;
//     // ptr[4] = 10;

//     // for(int i=0; i<5; i++) {
//     //     printf("%d\n", ptr[i]);
//     // }

//     // float *ptr;
//     // ptr = (float *)malloc(5 * sizeof(float));

//     // ptr[0] = 100.0;
//     // ptr[1] = 200.0;
//     // ptr[2] = 300.0;
//     // ptr[3] = 400.0;
//     // ptr[4] = 500.0;

//     // for(int i=0; i<5; i++) {
//     //     printf("%.1f\n", ptr[i]);
//     // }

//     // float *ptr;
//     // ptr = (float *)calloc(5, sizeof(float));

//     // for(int i=0; i<5; i++) {
//     //     printf("%.1f\n", ptr[i]);
//     // }

//     // float *ptr;
//     // ptr = (float *)calloc(5, sizeof(float));

//     // for(int i=0; i<5; i++) {
//     //     printf("%.1f\n", ptr[i]);
//     // }

//     // char *ptr, n;
//     // printf("Enter Value of N: ");
//     // scanf("%d", &n);
//     // ptr = (char *)calloc(n, sizeof(char));

//     // ptr[0] = 'R';
//     // ptr[1] = 'O';
//     // ptr[2] = 'H';
//     // ptr[3] = 'I';
//     // ptr[4] = 'T';

//     // for(int i=0; i<n; i++) {
//     //     printf("%c", ptr[i]);
//     // }

//     // int *ptr, n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);
//     // ptr = (int *) calloc(n, sizeof(int));

//     // ptr[0] = 1;
//     // ptr[1] = 2;
//     // ptr[2] = 3;
//     // ptr[3] = 4;
//     // ptr[4] = 5;

//     // for(int i=0; i<n; i++) {
//     //     printf("%d\n", ptr[i]);
//     // }

//     // free(ptr);

//     // ptr = (int *) calloc(2, sizeof(int));

//     // for(int i=0; i<2; i++) {
//     //     printf("%d\n", ptr[i]);
//     // }

//     // int *ptr, n;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);
//     // ptr = (int *) calloc(n, sizeof(int));

//     // for(int i = 0; i<n; i++) {
//     //     printf("%d\n", ptr[i]);
//     // }

//     // free(ptr);

//     // ptr = (int *) calloc(2, sizeof(int));
//     // for(int i = 0; i<2; i++) {
//     //     printf("%d\n", ptr[i]);
//     // }

//     // int *ptr;
//     // ptr = (int *) calloc(5, sizeof(int));

//     // printf("Enter 5 number: ");
//     // for(int i=0; i<5; i++) {
//     //     scanf("%d", &ptr[i]);
//     // }

//     // ptr = realloc(ptr, 5);
//     // printf("Enter 8 number: ");
//     // for(int i=0; i<8; i++) {
//     //     scanf("%d", &ptr[i]);
//     // }

//     // for(int i=0; i<8; i++) {
//     //     printf("Number %d is %d\n", i, ptr[i]);
//     // }

//     // int *ptr;
//     // ptr = (int *) calloc(5, sizeof(int));

//     // printf("Enter a 5 number: ");
//     // for(int i=0; i<5; i++) {
//     //     scanf("%d", &ptr[i]);
//     // }
//     // for(int i=0; i<5; i++) {
//     //     printf("%d\t", ptr[i]);
//     // }

// //     int *ptr;
// //     ptr = (int *) calloc(5, sizeof(int));

// //     ptr[0] = 1;
// //     ptr[1] = 3;
// //     ptr[2] = 5;
// //     ptr[3] = 7;
// //     ptr[4] = 9;

// //     for(int i=0; i<5; i++) {
// //         printf("%d\t", ptr[i]);
// //     }

// // ptr = realloc(ptr, 6);

// // ptr[0] = 2;
// // ptr[1] = 4;
// // ptr[2] = 6;
// // ptr[3] = 8;
// // ptr[4] = 10;
// // ptr[5] = 12;

// // for(int i=0; i<6; i++) {
// //     printf("%d\t", ptr[i]);
// // }

// // int *ptr;
// // ptr = (int *) calloc(5, sizeof(int));

// // ptr[0] = 1;
// // ptr[1] = 3;
// // ptr[2] = 5;
// // ptr[3] = 7;
// // ptr[4] = 9;

// // for(int i=0; i<5; i++) {
// //     printf("%d\n", ptr[i]);
// // }

// // ptr = realloc(ptr, 6);

// // ptr[0] = 2;
// // ptr[1] = 4;
// // ptr[2] = 6;
// // ptr[3] = 8;
// // ptr[4] = 10;
// // ptr[5] = 12;

// // for(int i=0; i<6; i++) {
// //     printf("%d\n", ptr[i]);
// // }

// int a[5] = {1, 2, 3, 4, 5};
// printf("%d", *(a+2));
// getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     int c;

//     fptr = fopen(__FILE__, "r");

//     do{
//         c = getc(fptr);
//         putchar(c);
//     }while(c != EOF);

//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void isPalindrome(char *string) {
//     char *ptr, *rev;
//     ptr = string;
    
//     while(*ptr != '\0') {
//         ptr++;
//     }
//     ptr--;
//     for(rev = string; ptr>=rev;) {
//         if(*ptr == *rev) {
//             --ptr;
//             rev++;
//         }
//         else
//         break;
//     }
//     if(rev > ptr) {
//         printf("String is a Palindrome.");
//     }
//     else {
//         printf("String is not a Palindrome.");
//     }
// }
// void main() {
//     char str[100] = "madam";
//     isPalindrome(str); 
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void isPalindrome(char *string);
// void main() {
//     char str[100] = "madam";
//     isPalindrome(str);
//     getch();
// }

// void isPalindrome(char *string) {
//     char *ptr, *rev;

//     ptr = string;

//     while(*ptr != '\0') {
//         ptr++;   
//     }
//     ptr--;

//     for(rev = string; ptr>=rev;) {
//         if(*ptr == *rev) {
//             ptr--;
//             rev++;
//         }
//         else
//         break;
//     }
//     if(rev > ptr) {
//         printf("String is a Palindrome.");
//     }
//     else {
//         printf("String is not a Palindrome.");
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// int check_Neon_Number(int num) {
//     int square = num * num;
//     int n = square;
//     int digit;
//     int sum = 0;
//     while(n != 0) {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     if(sum == num) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
// void main() {
//     int num = 9;
//     int ans = check_Neon_Number(num);
//     if(ans == 1) {
//         printf("Ture");
//     }
//     else {
//         printf("False");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int check_Neon_Number(int num);
// void main() {
//     int num = 9;
//     int ans = check_Neon_Number(num);
//     if(ans == 1) {
//         printf("Ture");
//     }
//     else {
//         printf("False");
//     }
//     getch();
// }

// int check_Neon_Number(int num) {
//     int square = num * num;
//     int n = square;
//     int digit;
//     int sum = 0;
//     while(n != 0) {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     if(sum == num) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b);
// void main() {
//     int x = 10, y = 20;
//     swap(&x, &y);

//     printf("x = %d & y = %d\n", x, y);
//     getch();
// }

// void swap(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
//     printf("a = %d & b = %d\n", *a, *b);
// }

// #include<stdio.h>
// #include<conio.h>

// // function defniation
// void number(int n);
// void main() {

//     // actual parameters
//     int x = 4;
//     // calling function
//     number(x);

//     printf("Number : %d\n", x);
//     getch();
// }

// // call by value
// void number(int n) {
//     // formal parameters
//     n = n * n;
//     printf("Square : %d\n", n);
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b);
// void main() {
//     int x = 10, y = 20;
//     swap(&x, &y);
//     printf("X = %d & Y = %d\n", x, y);
//     getch();
// }

// void swap(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     char str[100], ch;
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a character find its frequency: ");
//     scanf("%c", &ch);
//     for(int i=0; str[i] != '\0'; i++) {
//         if(ch == str[i]) {
//             count++;
//         }
//     }

//     printf("Frequency of %c = %d\n", ch, count);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     int a, b, c;
//     float root1, root2, root_part;
//     printf("Enter a three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     root_part = b*b - 4*a*c;
//     if(root_part < 0) {
//         printf("Root Part are Imagnary part.\n");
//     }
//     else {
//         root1 = (-b + sqrt(root_part)) / (2.0 * a);
//         root2 = (-b - sqrt(root_part)) / (2.0 * a);
//         printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
//     }
//     getch();
// }

// #include <stdio.h>
// void solve() {
//     int a[] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for(int i = 0; i < 5; i++) {
//         if(i % 2 == 0) {
//             sum += *(a + i);
//         }
//         else {
//             sum -= *(a + i);
//         }
//     }
//     printf("%d", sum);
// }
// int main() {
// 	solve();
// 	return 0;
// }

// #include<stdio.h>

// void solve() {
//     int first = 10, second = 20;
//     int third = first + second;
//     {
//         int third = second - first;
//         printf("%d\n", third);
//     }

//     printf("%d\n", third);
// }
// int main() {
//     solve();
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// void solve() {
//     int x = 1, y = 2;
//     printf(x > y ? "Greater" : x == y ? "Equal" : "Leaser");
// }
// void main() {
//     solve();
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// typedef struct StudentData {
//     char name[100];
//     int roll;
//     int addmision_fee;
//     int libaray_fee;
//     int tuition_fee;
//     int laboratory_fee;
// }std;

// void printfee(std sd);
// void main() {
//     std sd[5];
//     printf("<----- Enter Student 1 Deital ----->\n");
//     printf("Student Name : ");
//     scanf("%s", sd[0].name);
//     printf("Enter Roll No: ");
//     scanf("%d", &sd[0].roll);
//     printf("Addmision Fee : ");
//     scanf("%d", &sd[0].addmision_fee);
//     printf("Libaray Fee : ");
//     scanf("%d", &sd[0].libaray_fee);
//     printf("Tuition Fee : ");
//     scanf("%d", &sd[0].tuition_fee);
//     printf("Laboratory Fee : ");
//     scanf("%d", &sd[0].laboratory_fee);
//     printf("Total collection of Fee is %d\n", (sd[0].addmision_fee+sd[0].libaray_fee+sd[0].tuition_fee+sd[0].laboratory_fee));

//     printf("<----- Enter Student 2 Deital ----->\n");
//     printf("Student Name : ");
//     scanf("%s", sd[1].name);
//     printf("Enter Roll No: ");
//     scanf("%d", &sd[1].roll);
//     printf("Addmision Fee : ");
//     scanf("%d", &sd[1].addmision_fee);
//     printf("Libaray Fee : ");
//     scanf("%d", &sd[1].libaray_fee);
//     printf("Tuition Fee : ");
//     scanf("%d", &sd[1].tuition_fee);
//     printf("Laboratory Fee : ");
//     scanf("%d", &sd[1].laboratory_fee);
//     printf("Total collection of Fee is %d\n", (sd[1].addmision_fee+sd[1].libaray_fee+sd[1].tuition_fee+sd[1].laboratory_fee));

//     printf("<----- Enter Student 3 Deital ----->\n");
//     printf("Student Name : ");
//     scanf("%s", sd[2].name);
//     printf("Enter Roll No: ");
//     scanf("%d", &sd[2].roll);
//     printf("Addmision Fee : ");
//     scanf("%d", &sd[2].addmision_fee);
//     printf("Libaray Fee : ");
//     scanf("%d", &sd[2].libaray_fee);
//     printf("Tuition Fee : ");
//     scanf("%d", &sd[2].tuition_fee);
//     printf("Laboratory Fee : ");
//     scanf("%d", &sd[2].laboratory_fee);
//     printf("Total collection of Fee is %d\n", (sd[2].addmision_fee+sd[2].libaray_fee+sd[2].tuition_fee+sd[2].laboratory_fee));

//     printf("<----- Enter Student 4 Deital ----->\n");
//     printf("Student Name : ");
//     scanf("%s", sd[3].name);
//     printf("Enter Roll No: ");
//     scanf("%d", &sd[3].roll);
//     printf("Addmision Fee : ");
//     scanf("%d", &sd[3].addmision_fee);
//     printf("Libaray Fee : ");
//     scanf("%d", &sd[3].libaray_fee);
//     printf("Tuition Fee : ");
//     scanf("%d", &sd[3].tuition_fee);
//     printf("Laboratory Fee : ");
//     scanf("%d", &sd[3].laboratory_fee);
//     printf("Total collection of Fee is %d\n", (sd[3].addmision_fee+sd[3].libaray_fee+sd[3].tuition_fee+sd[3].laboratory_fee));

//     printf("<----- Enter Student 5 Deital ----->\n");
//     printf("Student Name : ");
//     scanf("%s", sd[4].name);
//     printf("Enter Roll No: ");
//     scanf("%d", &sd[4].roll);
//     printf("Addmision Fee : ");
//     scanf("%d", &sd[4].addmision_fee);
//     printf("Libaray Fee : ");
//     scanf("%d", &sd[4].libaray_fee);
//     printf("Tuition Fee : ");
//     scanf("%d", &sd[4].tuition_fee);
//     printf("Laboratory Fee : ");
//     scanf("%d", &sd[4].laboratory_fee);
//     printf("Total collection of Fee is %d\n", (sd[4].addmision_fee+sd[4].libaray_fee+sd[4].tuition_fee+sd[4].laboratory_fee));
//     printf("\n");
//     printf("\n");

//     printfee(sd[0]);
//     printfee(sd[1]);
//     printfee(sd[2]);
//     printfee(sd[3]);
//     printfee(sd[4]);
//     getch();
// }

// void printfee(std sd) {
//     printf("<----- Student Deital Here ----->\n");
//     printf("Student Name is   : %s\n", sd.name);
//     printf("Student Roll No is: %d\n", sd.roll);
//     printf("Addmision Fee is  : %d\n", sd.addmision_fee);
//     printf("Libaray Fee is    : %d\n", sd.libaray_fee);
//     printf("Tutition Fee is   : %d\n", sd.tuition_fee);
//     printf("Laboratory Fee is : %d\n", sd.laboratory_fee);
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=rows; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a, b, n;
//     printf("Enter 1 or 2 or 3 or 4\n");
//     printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
//     printf("Enter Here: ");
//     scanf("%d", &n);
//     printf("Enter two oprands:\n");
//     scanf("%d %d", &a, &b);
//     switch(n) {
//         case 1: printf("%d + %d = %d\n", a, b, a + b);
//         break;
//         case 2: printf("%d - %d = %d\n", a, b, a - b);
//         break;
//         case 3: printf("%d x %d = %d\n", a, b, a * b);
//         break;
//         case 4: printf("%d / %d = %d\n", a, b, a / b);
//         break;
//         default : printf("<---------- Error!! ---------->\n");
//         printf("Please Enter Correct Number\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a[3][3], b[3][3], sum[3][3], i, j, r, c;
//     printf("Enter the number of rows and column: \n");
//     scanf("%d %d", &r, &c);
//     printf("Enter element of first Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter Element of a%d%d: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//      printf("Enter element of second Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("Enter Element of b%d%d: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }

//      printf("Enter element of first Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }

//      printf("Enter element of first Matrix:\n");
//     for(i=0; i<r; i++) {
//         for(j=0; j<c; j++) {
//             printf("%d  ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int a, b, c;
//     printf("Enter an any three number: \n");
//     scanf("%d %d %d", &a, &b, &c);
//     if(a > b) {
//         if(a > c) {
//             printf("A is Max : %d", a);
//         }
//     }
    
//     else if(b > c) {
//         printf("B is Max : %d", b);
//         }
//         else {
//             printf("C is Max : %d", c);
//             }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int i, j, rows;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=1; i<=rows; i++) {
//     //     for(j=1; j<=i; j++) {
//     //         printf("* ");
//     //     }
//     //     printf("\n");
//     // }

//     // int i, j, rows;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=1; i<=rows; i++) {
//     //     for(j=1; j<=i; j++) {
//     //         printf("%d ", j);
//     //     }
//     //     printf("\n");
//     // }

//     // int i, j;
//     // char input, alphabet = 'A';
//     // printf("Enter an uppercase & print the last rows: ");
//     // scanf("%c", &input);
//     // for(i = 1; i <= (input - 'A' + 1); i++) {
//     //     for(j = 1; j <= i; j++) {
//     //         printf("%c ", alphabet);
//     //     }
//     //     alphabet++;
//     //     printf("\n");
//     // }

//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(j=1; j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// // #include<string.h>
// void main() {
//     // char firstName[] = "Rohit ";
//     // char lastName[] = "Kumar";
//     // strcat(firstName, lastName);
//     // puts(firstName);
//     // char ch;
//     // printf("Enter a character: ");
//     // ch = getchar();
//     // printf("Your character is ");
//     // putchar(ch);

//     // FILE *fptr;
//     // fptr = fopen("program.txt", "r");
//     // char ch;
//     // for(int i=1; i<=5; i++) {
//     //     if(ch != EOF) {
//     //         fscanf(fptr, "%c", &ch);
//     //         printf("%c", ch);
//     //     }
//     // }

//     // int *(*p[5])(char *a);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void main() {
//     int val;
//     val = -10;
//     printf("Absolute value of %d and %d\n", val, val);
//     val = 10;
//     printf("Absolute value of %d and %d\n", val, val);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #define x 3.14
// void main() {
//     float radius;
//     radius = 3.0;
//     printf("Radius: %.2f\n", x*radius*radius);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int i, j, rows;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=rows; i>=1; i--) {
//     //     for(j=1; j<=i; j++) {
//     //         printf("* ");
//     //     }
//     //     printf("\n");
//     // }

//     // int i, j, rows;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=rows; i>=1; i--) {
//     //     for(j=1; j<=i; j++) {
//     //         printf("%d ", j);
//     //     }
//     //     printf("\n");
//     // }

//     // int i, space, rows, k=0;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=1; i<=rows; i++, k=0) {
//     //     for(space = 1; space <= rows - i; space++) {
//     //         printf("  ");
//     //     }
//     //     while(k != 2*i-1) {
//     //         printf("* ");
//     //         k++;
//     //     }
//     //     printf("\n");
//     // }

//     // int i, space, rows, k=0, count = 0, count1 = 0;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=1; i<=rows; i++) {
//     //     for(space=1; space <= rows - i; space++) {
//     //         printf("  ");
//     //         count++;
//     //     }
//     //     while(k != 2*i-1) {
//     //         if(count <= rows - 1) {
//     //             printf("%d ", i+k);
//     //             count++;
//     //         } else {
//     //             count1++;
//     //             printf("%d ", (i+k - 2*count1));
//     //         }
//     //         k++;
//     //     }
//     //     count1 = count = k = 0;
//     //     printf("\n");
//     // }

//     // int i, j, rows, space;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=rows; i>=1; i--) {
//     //     for(space = 0; space < rows - i; space++)
//     //     printf("  ");
//     //     for(j=i; j<=2*i-1; j++)
//     //     printf("* ");
//     //     for(j=0; j<i-1; j++)
//     //     printf("* ");
//     //     printf("\n");
//     // }

//     // int i, j, rows, space, coef = 1;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     // for(i=0; i<rows; i++) {
//     //     for(space = 1; space <= rows - i; space++)
//     //     printf("  ");
//     //     for(j=0; j<=i; j++) {
//     //         if(j==0||i==0)
//     //         coef = 1;
//     //         else
//     //     coef = coef * (i-j+1) / j;
//     //     printf("%4d", coef); 
//     //     } 
//     //     printf("\n");      
//     // }

//     int i, j, rows, number = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=i; j++) {
//             printf("%d ", number);
//             number++;
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printHello();
// void printGodbye();
// void main() {
//     printHello();
//     printGodbye();
//     getch();
// }

// void printHello() {
//     printf("Hello\n");
// }
// void printGodbye() {
//     printf("Good Bye :)\n");
// }

// #include<stdio.h>
// #include<conio.h>

// void printNamaste();
// void printBonjour();
// void main() {
//     char ch;
//     printf("Enter (i) for Indian & (f) for French: ");
//     scanf("%c", &ch);
//     if(ch == 'i' || ch == 'I') {
//         printNamaste();
//     }
//     else {
//         printBonjour();
//     }
//     getch();
// }

// void printNamaste() {
//     printf("Namaste\n");
// }
// void printBonjour() {
//     printf("Bonjour\n");
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int a, int b);
// void main() {
//     int x = 3, y = 2, sumN;
//     sumN = sum(x, y);
//     printf("Sum : %d\n", sumN);
//     getch();
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<stdio.h>
// #include<conio.h>

// void printTable(int n);
// void main() {
//     printTable(2);
//     getch();
// }

// void printTable(int n) {
//     for(int i=1; i<=10; i++) {
//         printf("%d X %d = %d\n", n, i, n*i);
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// void printPrice(float price);
// void main() {
//     printPrice(100.0);
//     getch();
// }

// void printPrice(float price) {
//     price = price + (price * 0.18);
//     printf("Final Price is %.2f\n", price);
// }

// #include<stdio.h>
// #include<conio.h>
// #define pi 3.14

// void printSquare(int side);
// void printCircle(float rad);
// void printRec(float len, float wid);
// void main() {
//     printSquare(4);
//     printCircle(3);
//     printRec(4, 3);
//     // int n;
//     // n = 2;
//     // int power = pow(n, 4);
//     // printf("Power is %d\n", power);
//     getch();
// }

// void printSquare(int side) {
//     printf("Square is %d\n", side * side);
// }
// void printCircle(float rad) {
//     printf("Radius is %.2f\n", pi * rad * rad);
// }
// void printRec(float len, float wid) {
//     printf("Rectangle is %.2f", len * wid);
// }

// #include<stdio.h>
// #include<conio.h>

// void printHello(int count);
// void main() {
//     printHello(5);
//     getch();
// }

// void printHello(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello World\n");
//     printHello(count - 1);
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int n);
// void main() {
//     int s = sum(5);
//     printf("Sum of First Natural number is %d\n", s);
//     getch();
// }

// int sum(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     int sumN = sum(n - 1);
//     int sumN1 = sumN + n;
//     return sumN1;
// }

// #include<stdio.h>
// #include<conio.h>

// int fact(int n);
// void main() {
//     int n = 5;
//     int factN = fact(n);
//     printf("%d! = %d\n", n, factN);
//     getch();
// }

// int fact(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int factN = fact(n - 1);
//     int factN1 = factN * n;  
// }

// #include<stdio.h>
// #include<conio.h>

// float convertTem(float celsius);
// void main() {
//     float far = convertTem(37.0);
//     printf("Fahrenheit is %.2f\n", far);
//     getch();
// }

// float convertTem(float celsius) {
//     float far = (celsius * (9.0/5.0) + 32);
//     return far;
// }

// #include<stdio.h>
// #include<conio.h>

// float convertTem(float Fahrenheit);
// void main() {
//     float tem = 32;
//     float cel = convertTem(tem);
//     printf("Celsius is %.2f\n", cel);
//     getch();
// }

// float convertTem(float Fahrenheit) {
//     float cel = (5.0/9.0 * (Fahrenheit - 32));
//     return cel;
// }

// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int n = 8;
//     printf("Fibonacci number %dth term is %d\n", n, fib(n));
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fibN1 = fib(n - 1);
//     int fibN2 = fib(n - 2);
//     int fibN = fibN1 + fibN2;
//     return fibN;
// }

// #include<stdio.h>
// #include<conio.h>

// int sumDigit(int sum);
// void main() {
//     int sum = 12345, digit = sumDigit(sum);
//     printf("Sum of Digit is %d = %d\n", sum, digit); 
//     getch();
// }

// int sumDigit(int sum) {
//     if(sum == 0) {
//         return 0;
//     }
//     return (sum % 10 + sumDigit(sum / 10));
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i = 3;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d\n", **pptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b);
// void main() {
//     int x = 3, y = 2;
//     swap(&x, &y);
//     printf("x = %d & y = %d\n", x, y);
//     getch();
// }

// void swap(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int arr[30], i, j;
//     printf("Enter an any five number: \n");
//     for(i=0; i<5; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<5; i++) {
//         for(j=i+1; j<5; j++) {
//             if(arr[i] < arr[j]) {
//                 arr[i] = arr[i] + arr[j];
//                 arr[j] = arr[i] - arr[j];
//                 arr[i] = arr[i] - arr[j];
//             }
//         }
//     }
//     printf("Assending order:\t");
//     for(i=0; i<5; i++) {
//         printf("%d\t", arr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     double arr[100];
//     for(int i=0; i<5; i++) {
//         printf("Enter element a%d: ", i+1);
//         scanf("%lf", &arr[i]);
//     }

//     for(int i=0; i<5; i++) {
//         if(arr[0] < arr[i]) {
//             arr[0] = arr[i];
//         }
//     }
//     printf("Largest is %.1lf", arr[0]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     char u, v = 'A';
//     char *pu, *pv = &v;
//     *pv = v + 1;
//     u = *pv + 1;
//     pu = &u;

//     printf("%p\n", &v);

//     printf("%p\n", pv);
//     printf("%c\n", *pv);
//     printf("%c\n", u);
//     printf("%c\n", pu);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void square(int side);
// void main() {
//     int value = 4;
//     square(value);
//     printf("value is %d\n", value);
//     getch();
// }

// // call by value
// void square(int side) {
//     int s = side * side;
//     printf("square is %d\n", s);
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b);
// void main() {
//     int x = 3, y = 2;
//     swap(&x, &y);
//     printf("X = %d & Y = %d\n", x, y);
//     getch();
// }

// // call by reference
// void swap(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
//     printf("a = %d & b = %d\n", *a, *b);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main() {
//     char str[20];
//     int i, lenght;
//     int flag = 0;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     lenght = strlen(str);
//     for(i=0; i<lenght; i++) {
//         if(str[i] != str[lenght - i - 1]) {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag) {
//         printf("%s is not a palindrome number.", str);
//     }
//     else {
//         printf("%s is a palindrome number.", str);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     int lenght = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0; i<lenght; i++) {
//         sum = sum + arr[i];
//     }
//     printf("sum of element of an integer array is %d\n", sum);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n1, n2, i, gcd;
//     printf("Enter two integers: ");
//     scanf("%d %d", &n1, &n2);

//     for(i=1; i<=n1 && i<=n2; i++) {
//         if(n1%i == 0 && n2%i == 0) {
//             gcd = i;
//         }
//     }

//     printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, n, m, flag = 0;
//     int a[10];

//     printf("How Many Enter an element for n: ");
//     scanf("%d", &n);
//     printf("Enter element of n:\n");
//     for(i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the element Your want to search n: ");
//     scanf("%d", &m);
//     for(i=0; i<=n; i++) {
//         if(a[i] == m) {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 0) {
//         printf("Not a Presnet\n");
//     }
//     else {
//         printf("Present\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void max3(int *x, int *y, int *z);
// void min3(int *x, int *y, int *z);

// void main() {
//     int a, b, c;
//     printf("Enter the value of x, y, z: ");
//     scanf("%d %d %d", &a, &b, &c);
//     max3(&a, &b, &c);
//     min3(&a, &b, &c);

//     getch();
// }

// void max3(int *x, int *y, int *z) {
//     if(*x > *y && *x > *z) {
//         printf("%d is a max number.\n", *x);
//     }
//     else if(*y >*z) {
//         printf("%d is a max number.\n", *y);
//     }
//     else {
//         printf("%d is a max number.\n", *z);
//     }
// }
// void min3(int *x, int *y, int *z) {
//     if(*x < *y && *x < *z) {
//         printf("%d is a min number.\n", *x);
//     }
//     else if(*y < *z) {
//         printf("%d is a min number.\n", *y);
//     }
//     else {
//         printf("%d is a min number.\n", *z);
//     } 
// }

// #include<stdio.h>
// #include<conio.h>

// int power(int n1, int n2);
// void main() {
//     int base, n, result;
//     printf("Enter a base: ");
//     scanf("%d", &base);
//     printf("Enter positive integer: ");
//     scanf("%d", &n);
//     result = power(base, n);
//     printf("%d^%d = %d", base, n, result);
//     getch();
// }

// int power(int base, int a) {
//     if(a != 0) {
//         return (base * power(base, a-1));
//     }
//     else 
//     return 1;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     int data, num = 0, digit;
//     printf("Enter a three-digit number and print into words: ");
//     scanf("%d", &data);
//     digit = (int) log10(data);

//     while(data != 0) {
//         num = (num * 10) + (data % 10);
//         data /= 10;
//     }

//     digit = digit - ((int) log10(num));
//     while(num != 0) {
//         switch(num % 10) {
//             case 0: 
//             printf("Zero ");
//             break;
//             case 1: 
//             printf("One ");
//             break;
//             case 2: 
//             printf("Two ");
//             break;
//             case 3: 
//             printf("Three ");
//             break;
//             case 4: 
//             printf("Four ");
//             break;
//             case 5: 
//             printf("Five ");
//             break;
//             case 6: 
//             printf("Six ");
//             break;
//             case 7: 
//             printf("Seven ");
//             break;
//             case 8: 
//             printf("Eight ");
//             break;
//             case 9: 
//             printf(" ");
//             break;
//         }
//         num /= 10;
//     }
//     while(digit) {
//         printf("Zero ");
//         digit--;
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int num1 = 1, num2 = 1, fib, n, i;
//     printf("Enter a nth number: ");
//     scanf("%d", &n);
//     for(i=2; i<=n; i++) {
//         printf("%d\t", num1);
//         fib = num1 + num2;
//         num1 = num2;
//         num2 = fib;
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int n, f;
//     printf("Enter a nth number: ");
//     scanf("%d", &n);
//     f = fib(n);
//     printf("Fiboonaci %dth number is %d\n", n, f);
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fibN1 = fib(n - 1);
//     int fibN2 = fib(n - 2);
//     int fibN = fibN1 + fibN2;
//     return fibN;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, n, flag = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if(n == 0 || n == 1) {
//         flag = 1;
//     }
//     for(i=2; i<=n/2; i++) {
//         if(n % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0) {
//         printf("%d is a prime number.", n);
//     }
//     else {
//         printf("%d is not a prime number.", n);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int checkPrimeNumber(int n);
// void main() {
//     int n1, n2, i, flag;
//     printf("Enter a two inteval number: ");
//     scanf("%d %d", &n1, &n2);
//     if(n1 > n2) {
//         n1 = n1 + n2;
//         n2 = n1 - n2;
//         n1 = n1 - n2;
//     }
//     printf("Prime number between %d and %d are:\t", n1, n2);
//     for(i=n1+1; i<n2; i++) {
//         flag = checkPrimeNumber(i);
//         if(flag == 1) {
//             printf("%d\t", i); 
//         }
//     }
//     getch();
// }

// int checkPrimeNumber(int n) {
//     int j, flag = 1;
//     for(j=2; j<=n/2; j++) {
//         if(n % j==0) {
//             flag = 0;
//             break;
//         }
//     }
//     return flag;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows, coef = 1, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=0; i<rows; i++) {
//         for(space = 1; space < rows - i; space++)
//         printf("  ");
//         for(j=0; j<=i; j++) {
//          if(j == 0 || i == 0)
//          coef = 1;
//          else 
//          coef = coef * (i-j+1) / j;
//          printf("%4d", coef);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int orgi, rem, num, res = 0;
//     printf("Enter three digit number: ");
//     scanf("%d", &num);
//     orgi = num;
//     while(orgi != 0) {
//         rem = orgi % 10;
//         res += rem * rem * rem;
//         orgi /= 10;
//     }
//     if(res == num) {
//         printf("%d is an Armstrong number.", res);
//     }
//     else {
//         printf("%d is not an Armstrong number.", res);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main() {
//     int low, high, rem, num, count = 0, orig;
//     double result = 0.0;
//     printf("Enter a two intrvals: ");
//     scanf("%d %d", &low, &high);

//     printf("Armstrong number is %d and %d are: ", low, high);
//     if(high < low) {
//         high = high + low;
//         low = high - low;
//         high = high - low;
//     }
//     for(num = low + 1; num < high; num++) {
//         orig = num;

//         while(orig != 0) {
//             orig /= 10;
//             count++;
//         }
//         orig = num;

//         while(orig != 0) {
//             rem = orig % 10;
//             result += pow(rem, count);
//             orig /= 10;
//         }

//         if((int) result == num) {
//             printf("%d\t", num);
//         }
//         count = 0;
//         result = 0;
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n, rem, rev = 0, orig;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     orig = n;
//     while(n != 0) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n /= 10;
//     }

//     if(orig == rev) {
//         printf("%d is a palindrom number.", orig);
//     }
//     else {
//         printf("%d is not a palindrom number.", orig);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int printLength(char arr[]);
// void main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Lenght is : %d\n", printLength(name));
//     getch();
// }

// int printLength(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++) {
//         count++;
//     }
//     return count - 1;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main() {
//     // char name[] = "Rohit Kumar";
//     // int length = strlen(name);
//     // printf("Length is : %d\n", length);

//     // char firstName[] = "Abhay";
//     // char secodName[] = "Rohit";
//     // strcpy(firstName, secodName);
//     // puts(firstName);

//     // char firstname[] = "Rohit ";
//     // char lastname[] = "sharma";

//     // strcat(firstname, lastname);
//     // puts(firstname);

//     // char firststr[] = "Apple";
//     // char secondstr[] = "Bpple";
//     // printf("%d\n", strcmp(firststr, secondstr));
//         getch();
// }

// #include<stdio.h>
// #include<conio.h>
// int countvowels(char str[]);
// void main() {
//     char str[] = "RohitKumarSharma";
//     printf("Count Vowels is %d\n", countvowels(str));
//     getch();
// }

// int countvowels(char str[]) {
//     int count = 0;
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         count++;
//     }
//     return count;
// }

// #include<stdio.h>
// #include<conio.h>

// void checkchar(char str[], char ch);
// void main() {
//     char str[] = "RohitKumarSharma";
//     char ch = 'S';
//     checkchar(str, ch);
//     getch();
// }

// void checkchar(char str[], char ch) {
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             printf("character is present!");
//             return;
//         }
//     }
//     printf("character is Not present!");
// }

// #include<stdio.h>
// #include<conio.h>

// void printarr(int arr[], int n);
// void rev(int arr[], int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     rev(arr, 5);
//     printarr(arr, 5);
//     getch();
// }

// void printarr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }
// void rev(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i] = secondval;
//         arr[n-i-1] = firstval;
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n;
//     printf("Enter a n(n>2): ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i = 2; i<n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d\t", fib[i]);
//     }
//     printf("\n");
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     int c;
//     fptr = fopen(__FILE__, "r");
//     do {
//         c = getc(fptr);
//         putchar(c);
//     }while(c != EOF);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void ispalindrome(char *string);
// void main() {
//     char str[100] = "wow";
//     ispalindrome(str);
//     getch();
// }

// void ispalindrome(char *string) {
//     char *ptr, *rev;
//     ptr = string;
//     while(*ptr != '\0') {
//         ptr++;
//     }
//     ptr--;
//     for(rev = string; ptr>=rev;) {
//         if(*ptr == *rev) {
//             ptr--;
//             rev++;
//         }
//         else 
//             break;
//     }

//         if(rev > ptr)
//             printf("String is a palindrome.");
//         else
//             printf("String is not a palindrome.");
// }

// #include<stdio.h>
// #include<conio.h>

// int checkNeo(int num);
// void main() {
//     int num = 9;
//     int ans = checkNeo(num);
//     if(ans == 1) {
//         printf("Ture");
//     }
//     else {
//         printf("False");
//     }
//     getch();
// }

// int checkNeo(int num) {
//     int square = num * num;
//     int n = square;
//     int digit;
//     int sum = 0;
//     while(n != 0) {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     if(sum == num) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, num = 1, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, space, rows, coef = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=0; i<rows; i++) {
//         for(space = 1; space <= rows - i; space++)
//         printf("  ");
//         for(j=0; j<=i; j++) {
//             if(j == 0 || i == 0)
//             coef = 1;
//             else 
//             coef = coef * (i - j + 1) / j;
//             printf("%4d", coef);
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int a[] = {10, 20, 30, 40, 50};
//     // printf("%d", *(a+2));

//     int i, n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(i=1; i<=10; i++) {
//         printf("%d X %d = %d\n", n, i, n*i);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, n, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         fact *= i;
//     }
//     printf("%d! = %d", n, fact);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i;
//     for(i=-4; i<=4; i++){
//         if(i%2==0)
//         printf("%d\t", i);
//     }
//     getch();
// }

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Stack data structure
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push element.\n");
        return;
    }

    stack->data[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop element.\n");
        return -1; // Returning -1 for simplicity, you can handle the underflow case differently if needed
    }

    return stack->data[stack->top--];
}

// Function to get the top element of the stack without removing it
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek.\n");
        return -1; // Returning -1 for simplicity, you can handle the empty stack case differently if needed
    }

    return stack->data[stack->top];
}

// Function to display the contents of the stack
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

// Main function
int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);

    printf("Top element: %d\n", peek(&stack));

    int popped = pop(&stack);
    printf("Popped element: %d\n", popped);

    display(&stack);

    return 0;
}
