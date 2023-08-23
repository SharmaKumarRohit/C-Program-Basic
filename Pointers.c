// #include<stdio.h>

// int main(){
    // int age = 20;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d\n", _age);

    // int age = 22;
    // int *ptr = &age;

    // //      Address
    // // printf("%p\n", age);
    // printf("%u\n", &age);

    // // printf("%p\n", ptr);
    // printf("%u\n", ptr);

    // // printf("%p\n", &ptr);
    // printf("%u\n", &ptr);
    // printf("%u\n", *ptr);

    // int age = 20;
    // int *ptr = &age;

    // //  Value
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // int *ptr;
    // int x;
    // ptr = &x;
    // *ptr = 0;

    //                  Practice Qs 36
    //          Find out
    // printf("x = %d\n", x); // 0
    // printf("*ptr = %d\n", *ptr); // 0

    // *ptr += 5;
    // printf("x = %d\n", x);  // 5
    // printf("*ptr = %d\n", *ptr);  // 5

    // (*ptr)++;
    // printf("x = %d\n", x);  // 6
    // printf("*ptr = %d\n", *ptr);  // 6

    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // printf("%.2f\n", **pptr);

    //          Practice Qs 37
    //     Print the value of 'i' form its pointer to pointer.

    // int i = 2;
    // int *ptr = &i;
    // int **pptr = &ptr;

    // printf("%d\n", **pptr);
//     return 0;
// }

// #include<stdio.h>

// void square(int n);
// int main(){
//     int number;
//     printf("Enter a number : ");
//     scanf("%d", &number);
//     square(number);
//     printf("Number = %d\n", number);
//     return 0;
// }

// //      call by value
// void square(int n){
//     n = n * n;
//     printf("Square = %d\n", n);
// }

// #include<stdio.h>

// void square(int *n);
// int main(){
//     int number = 5;
//     square(&number);
//     printf("Number = %d\n", number);
//     return 0;
// }

// //      call by reference
// void square(int *n){
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }

// #include<stdio.h>

// void swap(int a, int b);
// int main(){
//     int x = 3, y = 2;
//     swap(x, y);
//     printf("x = %d y = %d \n", x, y);
//     return 0;
// }

// // call by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d b = %d \n", a, b);
// }

//          Practice Qs 38 
//      Swap 2 numbers , a & b.
// #include<stdio.h>

// void swap(int *a, int *b);
// int main(){
//     int x = 3, y = 2;
//     swap(&x, &y);
//     printf("x = %d y = %d \n", x, y);
//     return 0;
// }

// //  call by reference
// void swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

//          Practice Qs 39
//      Will the address output be same?

// #include<stdio.h>

// void printAddress(int *n);
// int main(){
//     int n = 4;
//     printf("%p\n", &n);
//     printAddress(&n);
//     return 0;
// }

// //      call by reference
// void printAddress(int *n){
//     printf("%p\n", n);
// }

// #include<stdio.h>

// void printAddress(int n);
// int main(){
//     int n = 2;
//     printAddress(n);
//     printf("%p\n", &n);
//     return 0;
// }

// void printAddress(int n){
//     printf("%p\n", &n);
// }

//                  Practice Qs 39
// Write a function to calculate the sum, product & average of 2 numbers. print that average in the main function.

// #include<stdio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 5, b = 3, sum, prod, avg;
//     doWork(a, b, &sum, &prod, &avg);
//     printf("Sum = %d , Produced = %d , Average = %d \n", sum, prod, avg);
//     return 0;
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg){
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b)/2;
// }

// #include<stdio.h>

// int main(){
    // int price = 100;
    // int *value = &price;
    // int _price = *value;
    // printf("%d\n", _price);

    // int age = 20;
    // int *ptr = &age;           // value of address
    // int _age = *ptr;
    // printf("%d\n", *ptr);

    // char star = '*';
    // char *light = &star;
    // char _star = *light;
    // printf("%c\n", _star);

    // float pi = 3.14;
    // float *value = &pi;
    // float _pi = *value;
    // printf("%.2f\n", _pi);

    // int age = 20;
    // int *ptr = &age;
    // // printf("%p\n", &age);
    // printf("%u\n", &age);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);

    // float pi = 3.14;
    // float *value = &pi;
    // printf("%u\n", &pi);
    // printf("%u\n", value);          // &address of operator
    // printf("%u\n", &value);

    // char star = '*';
    // char *light = &star;
    // printf("%u\n", &star);
    // printf("%u\n", light);
    // printf("%u\n", &light);

    // int age = 20;
    // int *ptr = &age;
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // float pi = 3.14;
    // float *value = &pi;
    // printf("%f\n", pi);
    // printf("%f\n", *value);
    // printf("%f\n", *(&value));

    // char star = '*';
    // char *light = &star;
    // printf("%c\n", star);
    // printf("%c\n", *light);
    // printf("%c\n", *(&light));

    // int *ptr;
    // int x;

    // ptr = &x;
    // *ptr = 1;
    // printf("X = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // *ptr += 5;
    // printf("X = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // (*ptr)++;
    // printf("X = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // char star = '*';
    // char *ptr = &star;
    // char **pptr = &ptr;
    // printf("%c\n", **pptr);

    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;
    // printf("%d\n", **pptr);
//     return 0;
// }

// #include<stdio.h>

// void square(int n);
// void _square(int *n);
// int main(){
//     int number = 5;
//     square(number);
//     printf("Number = %d\n", number);

//     _square(&number);
//     printf("_Number = %d\n", number);
//     return 0;
// }
// // call by value
// void square(int n){
//     printf("Square = %d\n", n * n);
// }
// // call by reference
// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("_Square = %d\n",*n);
// }

// #include<stdio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);
// int main(){
//     int x = 5, y = 3;
//     swap(x,y);
//     printf("x = %d , y = %d\n", x , y);

//     _swap(&x,&y);
//     printf("a = %d , b = %d\n", x , y);
//     return 0;
// }
// //  call by value
// void swap(int a, int b){
//     int i = a;
//     a = b;
//     b = i;
//     printf("a = %d , b = %d\n", a, b);
// }
// //  call by reference
// void _swap(int *a, int *b){
//     int i = *a;
//     *a = *b;
//     *b = i;
// }

// #include<stdio.h>

// void printAddress(int n);
// void _printAddress(int *n);
// int main(){
//     int n = 5;
//     printAddress(n);
//     printf("Print Address = %u\n", &n);

//     _printAddress(&n);
//     printf("Address print = %u\n", &n);
//     return 0;
// }

// void printAddress(int n){
//     printf("Address = %u\n", &n);
// }

// void _printAddress(int *n){
//     printf("Address = %u\n", n);
// }

// #include<stdio.h>

// void dowork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 5, b = 3;
//     int sum, prod, avg;
//     dowork(a, b, &sum, &prod, &avg);
//     printf("Sum = %d , Prod = %d , Avg = %d\n", sum, prod, avg);
//     return 0;
// }

// void dowork(int a, int b, int *sum, int *prod, int *avg){
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }

// #include<stdio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 5, b = 3;
//     int sum, prod, avg;
//     doWork(a, b, &sum, &prod, &avg);
//     printf("%d + %d = %d & %d * %d = %d & (%d + %d) / 2 = %d\n", a, b, sum, a, b, prod, a, b, avg);
//     return 0;
// }
// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }

// #include<stdio.h>

// int main(){
    // int age = 20;
    // int*ptr = &age;
    // int _age = *ptr;
    // printf("%d\n", _age);

    // float price = 100.00;
    // float *rupess = &price;
    // float _price = *rupess;
    // printf("%f\n", _price);

    // char hastage = '#';
    // char *sharp = &hastage;
    // char _hastage = *sharp;
    // printf("%c\n", _hastage);
    
    // int age = 20;
    // int *ptr = &age;
    // printf("%u\n", &age);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);
    // printf("%d\n", *ptr);
    // printf("\n");

    // float price = 100.00;
    // float *rupess = &price;
    // printf("%u\n", &price);
    // printf("%u\n", rupess);
    // printf("%u\n", &rupess);
    // printf("%f\n", *rupess);
    // printf("\n");

    // char addtheraid = '@';
    // char *character = &addtheraid;
    // printf("%u\n", &addtheraid);
    // printf("%u\n", character);
    // printf("%u\n", &character);
    // printf("%c\n", *character);

    // int age = 20;
    // int *ptr = &age;
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // float price = 100.00;
    // float *rupess = &price;
    // printf("%f\n", price);
    // printf("%f\n", *rupess);
    // printf("%f\n", *(&rupess));

    // char doller = '$';
    // char *money = &doller;
    // printf("%c\n", doller);
    // printf("%c\n", *money);
    // printf("%c\n", *(&money));

    // int *ptr;
    // int x;

    // ptr = &x;
    // *ptr = 0;
    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // *ptr += 5;
    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // (*ptr)++;
    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // int age = 20;
    // int *ptr = &age;
    // int **pptr = &ptr;
    // int _age = **pptr;
    // printf("%d\n", _age);
    // printf("\n");

    // float price = 100.00;
    // float *rupess = &price;
    // float **rrupess = &rupess;
    // float _price = **rrupess;
    // printf("%f\n", **rrupess);
    // printf("\n");

    // char ch = 'R';
    // char *name = &ch;
    // char **nname = &name;
    // char _ch = **nname;
    // printf("%c\n", **nname);

    // int age = 20;
    // int *ptr = &age;
    // int **pptr = &ptr;
    // printf("%d\n", **pptr);

    // float price = 100.00;
    // float *rupess = &price;
    // float **rrupess = &rupess;
    // printf("%f\n", **rrupess);

    // char name = 'R';
    // char *enginner = &name;
    // char **Enginners = &enginner;
    // printf("%c\n", **Enginners);

    // Print the value of 'i' from its pointer to pointer.
    // int i = 5;
    // int *number = &i;
    // int **numbers = &number;
    // printf("%d\n", **numbers);
//     return 0;
// }

// #include<stdio.h>

// void printnumber (int n);
// int main(){
//     int num = 5;
//     printnumber(num);
//     printf("Number = %d\n", num);
//     return 0;
// }
// // call by value
// void printnumber (int n) {
//     n = n * n;
//     printf("value = %d\n", n);
// }

// #include<stdio.h>

// void printnumber(int *n);
// int main(){
//     int num = 5;
//     printnumber(&num);
//     printf("Number = %d\n", num);
//     return 0;
// }
// // call by reference
// void printnumber(int *n){
//     *n = (*n) * (*n);
//     printf("value = %d\n", *n);
// }

// Swap 2 numbers, a & b
// #include<stdio.h>

// void swap(int *a, int *b);
// int main(){
//     int a = 5, b = 3;
//     swap(&a, &b);
//     printf("a = %d & b = %d\n", a, b);
//     return 0;
// }
// void swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// Will the address output be same ? 

// #include<stdio.h>

// void printAddress(int *n);
// int main(){
//     int n = 5;
//     printf("%d\n", &n);
//     printAddress(&n);
//     return 0;
// }
// void printAddress(int *n) {
//     printf("%d\n", &n);
// }

// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main fuction.
// #include<stdio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main(){
//     int a = 5, b = 3;
//     int sum, prod, avg;
//     doWork(a,b, &sum, &prod, &avg);
//     printf("Sum = %d & Product = %d & Average = %d\n", sum, prod, avg);
//     return 0;
// }
// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }

// Write a program in C to find the maximum number between two numbers using a pointers.
// #include<stdio.h>

// int main(){
//     int num1, num2;
//     int *ptr = &num1;
//     int *pptr = &num2;
//     printf("Pointer : Find the maximum number between two numbers.\n");
//     printf("------------------------------------------------------\n");
//     printf("Enter a number 1 : ");
//     scanf("%d", &num1);
//     printf("Enter a number 2 : ");
//     scanf("%d", &num2);

//     if(*ptr>*pptr){
//         printf("%d is the maximum number.\n", num1);
//     }
//     else {
//         printf("%d is the maximum number.\n", num2);
//     }
//     return 0;
// }

// #include <stdio.h>    
     
// int main()    
// {    
//     //Initialize array     
//     int arr[] = {1, 2, 3, 4, 5};     
        
//     //Calculate length of array arr    
//     int length = sizeof(arr)/sizeof(arr[0]);    
        
//     printf("Original array: \n");    
//     for (int i = 0; i < length; i++) {     
//         printf("%d ", arr[i]);     
//     }      
        
//     printf("\n");    
        
//     printf("Array in reverse order: \n");    
//     //Loop through the array in reverse order    
//     for (int i = length-1; i >= 0; i--) {     
//         printf("%d ", arr[i]);     
//     }     
//     return 0;    
// }

// Write a program in c to print all the letters in english alphabet using a pointer.
// #include<stdio.h>

// int main(){
//     char i = 'A';
//     char *ptr = &i;
//     while(*ptr<='Z'){
//         printf("%c\n", *ptr);
//         *ptr = *ptr + 1;
//     }
//     return 0;
// }

// #include<stdio.h>

// void printAddress(int *n);
// int main(){
//     int n = 4;
//     printAddress(&n);
//     printf("%d\n", &n);
//     return 0;
// }
// void printAddress(int *n) {
//     printf("%d\n", n);
// }

// #include<stdio.h>

// void printAddress(int n);
// int main(){
//     int number = 5;
//     printAddress(number);
//     printf("Address of n is : %d\n", &number);
//     return 0;
// }
// void printAddress(int n) {
//     printf("Address of n is : %d\n", &n);
// }

#include<stdio.h>

void printAddress(int *n);
int main(){
    int number = 5;
    printAddress(&number);
    printf("Address of n is : %d\n", &number);
    return 0;
}
void printAddress(int *n) {
    printf("Address of n is : %d\n", n);
}