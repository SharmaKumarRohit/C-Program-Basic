// #include<stdio.h>
// #include<math.h>

// int main() {
    // int a, b;
    // printf("Enter a two number : ");
    // scanf("%d %d", &a, &b);
    // printf("Sum is : %d\n", a + b);

    // float num1, num2, num3, num4, num5;
    // printf("Enter a five number : ");
    // scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    // printf("Five numbers average is : %.2f\n", (num1 + num2 + num3 + num4 + num5) / 5);

    // int principle, rate, year;
    // float SI;
    // printf("Enter a principle : ");
    // scanf("%d", &principle);
    // printf("Enter a rate : ");
    // scanf("%d", &rate);
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // SI = (principle * rate * year) / 100;
    // printf("Simple Interest is : %.2f\n", SI);

    // int Base, height;
    // float Triangle;
    // printf("Enter triangle base : ");
    // scanf("%d", &Base);
    // printf("Enter triangle height : ");
    // scanf("%d", &height);
    // Triangle = (Base * height) / 2;
    // printf("Area of a triangle is : %.2f\n", Triangle);

    // int a, b, c;
    // float S, Area;
    // printf("Enter a, b & c : ");
    // scanf("%d %d %d", &a, &b, &c);
    // S = (a + b + c) /2;
    // Area = sqrt(S * (S-a) * (S-b) * (S-c));
    // printf("Area of a scalene triangle is : %.2f\n", Area);

    // int a, b, c, two = 2;
    // float root1, root2, root_part, two_a;

    // printf("Enter a three numbers : ");
    // scanf("%d %d %d", &a, &b, &c);

    // root_part = sqrt((b*b)-(4*a*c));
    // two_a = two * a;
    
    // root1 = (-b - root_part) / two_a;
    // root2 = (-b - root_part) / two_a;

    // printf("Root one = %f\n Root two = %f\n", root1, root2);

    // int principle, rate , year;
    // float SI;
    // printf("Enter a principle : ");
    // scanf("%d", &principle);
    // printf("Enter a rate : ");
    // scanf("%d", &rate);
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // SI = (principle * rate * year) / 100;
    // printf("Simple Interest = %.2f\n", SI);

    // int base, height;
    // float triangle;
    // printf("Enter a base : ");
    // scanf("%d", &base);
    // printf("Enter a height : ");
    // scanf("%d", &height);
    // triangle = (base * height) / 2;
    // printf("Area of a triangle is : %.2f\n", triangle);

    // int a, b, c;
    // float s, Area;
    // printf("Enter a, b & c : ");
    // scanf("%d %d %d", &a, &b, &c);
    // s = (a + b +c) /2;
    // Area = sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("Area of a sclene triangle is : %.2f\n", Area);

    // int a, b, c;
    // float root1, root2, root_part, two_a;
    // printf("Enter a three number : ");
    // scanf("%d %d %d", &a, &b, &c);
    // root_part = ((b*b)-(4*a*c));
    // two_a = 2 * a;
    // root1 = (-b + root_part) / two_a;
    // root2 = (-b - root_part) / two_a;
    // printf("Root one = %f\nRoot two = %f\n", root1, root2);
//     return 0;
// }

#include<stdio.h>

int main() {
    int a, b, sum;
    printf("Enter a first number : ");
    scanf("%d", &a);
    printf("Enter a second number : ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is : %d\n", sum);
    return 0;
}