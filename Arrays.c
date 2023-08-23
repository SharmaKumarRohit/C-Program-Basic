// #include<stdio.h>

// int main() {
// int marks [3];
// printf("Enter phy marks : ");
// scanf("%d", &marks[0]);
// printf("Enter chem marks : ");
// scanf("%d", &marks[1]);
// printf("Enter math marks : ");
// scanf("%d", &marks[3]);
// printf("Physics = %d & chemistry = %d & Math = %d\n", marks[0], marks[1], marks[2]);

// 1. Write a program to enter price of 3 items & print their final cost with gst.
// float price [3] = {100.0,200.0,300.0};
// float price [3];
// printf("Enter three price : ");
// scanf("%f", &price[0]);
// scanf("%f", &price[1]);
// scanf("%f", &price[2]);
// printf("Total price 1 : %.2f\n", price[0] + (0.18 * price[0]));
// printf("Total price 2 : %.2f\n", price[1] + (0.18 * price[1]));
// printf("Total price 3 : %.2f\n", price[2] + (0.18 * price[2]));

// int age = 20;
// int *ptr = &age;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);

// float price = 20.00;
// float *ptr = &price;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);

// char star = '*';
// char *ptr = &star;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);

// int age = 20;
// int _age = 21;
// int *ptr = &age;
// int *_ptr = &_age;

// printf(" %u , %u, Defference = %u\n", ptr, _ptr, ptr - _ptr);
// _ptr = &age;
// printf("Comparsion = %u\n", ptr == _ptr);

// int aadhar[5];
// int *ptr = &aadhar[0];
// for(int i=0; i<5; i++) {
//     printf("%d index : ", i);
//     scanf("%d", &aadhar[i]);
// }
// for(int i=0; i<5; i++) {
//     printf("%d index : %d\n", i, aadhar[i]);
// }
//     return 0;
// }
// #include<stdio.h>

// void printNumber(int arr[], int n);
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     printNumber(arr,6);
//     return 0;
// }
// void printNumber(int arr[], int n) {
//     for(int i=0; i<=5; i++) {
//         printf("%d \t", i);
//     }
// }

// #include<stdio.h>

// void printNumber(int *arr, int n);
// int main(){
//     int arr[] = {0,1,2,3,4,5,6};
//     printNumber(arr,6);
//     return 0;
// }
// void printNumber(int *arr, int n) {
//     for(int i=0; i<=5; i++) {
//         printf("%d\n", i);
//     }
// }

// #include<stdio.h>

// int main(){
//     // 2 x 3
//     int marks[2][3];   // _ _ _ | _ _ _
//     marks[0][0] = 76;
//     marks[0][1] = 80;
//     marks[0][2] = 81;

//     marks[1][0] = 61;
//     marks[1][1] = 61;
//     marks[1][2] = 62;
//     printf("Marks = %d\n", marks[0][0]);
//     return 0;
// }

// 2. Write a function to count the number odd numbers in an arrys.
// #include<stdio.h>

// int  countodd(int arr[], int n);
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     printf("Total(1,2,3,4,5,6) odd number is : %d\n", countodd(arr,6));
//     return 0;
// }
// int countodd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0) {   // Odd numbers
//             count++;
//         }
//     }
//     return count;
// }

// #include<stdio.h>

// int main() {
//     int arr[] = {1,2,3,4,5};
//     printf("%d\n", *(arr+2));
//     printf("%d\n", *(arr+5));
//     return 0;
// }

// 3. Write a function to reverse an array.
// #include<stdio.h>

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);
// int main() {
//     int arr[] = {1,2,3,4,5};
//     reverse(arr,5);
//     printArr(arr,5);
//     return 0;
// }
// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }
// void reverse(int arr[], int n) {
//     for(int i = 0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i] = secondval;
//         arr[n-i-1] = firstval;
//     }
// }

// #include<stdio.h>

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);
// int main() {
//     int arr[] = {1,2,3,4,5};
//     reverse(arr, 5);
//     printArr(arr,5);
//     return 0;
// }

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }
// void reverse(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i] = secondval;
//         arr[n-i-1] = firstval;
//     }
// }

// 4. Write a program to store the first n fibonacci numbers.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Etner n(n>2) : ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i=2; i<n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t", fib[i]);
//     }
//     printf("\n");
//     return 0;
// }

// 5. Create a 2D array, storing the tables of 2 & 3.
// #include<stdio.h>

// void storeTable(int arr[][10], int n, int m, int number);
// int main() {
//     int tables[2][10];
//     storeTable(tables, 0, 10, 2);
//     storeTable(tables, 1, 10, 3);

//     for(int i=0; i<10; i++) {
//         printf("%d\t", tables[0][i]);
//     }
//     printf("\n");
//     for(int i=0; i<10; i++) {
//         printf("%d\t", tables[1][i]);
//     }
//     printf("\n");
//     return 0;
// }
// void storeTable(int arr[][10], int n, int m, int number) {
//     for(int i=0; i<m; i++) {  // 0 to 10
//         arr[n][i] = number * (i+1); // 2, 4, 6, 8, 10...
//     }
// }

// #include<stdio.h>

// int main() {
// int marks1 = 61;
// int marks2 = 61;
// int marks2 = 62;

// int marks[] = {61, 61, 62};
// printf("%d\t %d\t %d\t", marks[0], marks[1], marks[2]);
// printf("\n");

// float price[] = {100.0, 200.0, 300.0};
// printf("%.2f\t %.2f\t %.2f\t", price[0], price[1], price[2]);
// printf("\n");

// char character[] = {'*', '@', '#', '$'};
// printf("%c\t %c\t %c\t %c\t", character[0], character[1], character[2], character[3]);
// printf("\n");

// int marks[3];
// printf("Enter phy mark = ");
// scanf("%d", &marks[0]);
// printf("Enter chem mark = ");
// scanf("%d", &marks[1]);
// printf("Enter math mark = ");
// scanf("%d", &marks[2]);
// printf("Phy = %d\t Chem = %d\t Math = %d\t", marks[0], marks[1], marks[2]);
// printf("\n");

// float price[3];
// printf("Enter price one : ");
// scanf("%f", &price[0]);
// printf("Etner price two : ");
// scanf("%f", &price[1]);
// printf("Etner price three : ");
// scanf("%f", &price[2]);
// printf("Price one = %.2f\t Price two = %.2f\t Price three = %.2f\t", price[0], price[1], price[2]);
// printf("\n");

// char ch[] = {'*', '$', '@'};
// printf("character one = %c\t Character two = %c\t Character three = %c\t", ch[0], ch[1], ch[2]);

// 1. Write a program to enter price of 3 items of print their final cost with gst.
// float price[3] = {100, 200, 300};
// float price[3];
// printf("Enter price one = ");
// scanf("%f", &price[0]);
// printf("Etner price two = ");
// scanf("%f", &price[1]);
// printf("Enter price three = ");
// scanf("%f", &price[2]);
// printf("Total price one their final cost with gst : %.2f\n", price[0] + (0.18 * price[0]));
// printf("Total price two their final cost with gst : %.2f\n", price[1] + (0.18 * price[1]));
// printf("Total price three their final cost with gst : %.2f\n", price[2] + (0.18 * price[2]));

// int age = 20;
// int *ptr = &age;
// printf("%u\n", ptr);
// ptr++;
// printf("%u\n", ptr);
// ptr--;
// printf("%u\n", ptr);
// printf("\n");

// float price = 20.00;
// float *pptr = &price;
// printf("%u\n", pptr);
// pptr++;
// printf("%u\n", pptr);
// pptr--;
// printf("%u\n", pptr);
// printf("\n");

// char ch = '*';
// char *star = &ch;
// printf("%u\n", star);
// star++;
// printf("%u\n", star);
// star--;
// printf("%u\n", star);

// int age = 20;
// int *ptr = &age;
// int _age = 21;
// int *_ptr = &_age;

// printf(" %u & %u & Defference = %u\n", ptr, _ptr, ptr -_ptr);
// _ptr = &age;
// printf("Comparsion = %u\n", ptr == _ptr);

// int aadhar[5];

// // input
// int *ptr = &aadhar[0];
// for(int i=0; i<5; i++) {
//     printf("%d index : ", i);
//     scanf("%d", (ptr+i));
// }
// printf("\n");

// // output
// for(int i=0; i<5; i++) {
//     printf("%d index : %d\n", i, *(ptr+i));
// }

//     int aadhar[5];

//     // Input
//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index : ", i);
//         scanf("%d", &aadhar[i]);
//     }
//     printf("\n");

//     // Output
//     for(int i=0; i<5; i++) {
//         printf("%d index : %d\n", i, aadhar[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void printNumbers(int arr[], int n);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printNumbers(arr, 5);
//     return 0;
// }
// void printNumbers(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// void printNumbers(int *arr, int n);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     return 0;
// }
// void printNumbers(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// int main() {
// 3 x 3
// int marks[3][3]; // _ _ _ | _ _ _
// marks[0][0] = 61;
// marks[0][1] = 61;
// marks[0][2] = 62;

// marks[1][0] = 80;
// marks[1][1] = 80;
// marks[1][2] = 81;

// marks[2][0] = 331;
// marks[2][1] = 386;
// marks[2][2] = 450;

// printf("%d\n", marks[2][1]);

// 2 x 3;
//     int marks[2][3];
//     marks[0][0] = 61;
//     marks[0][1] = 61;
//     marks[0][2] = 62;

//     marks[1][0] = 80;
//     marks[1][1] = 80;
//     marks[1][2] = 81;

//     printf("%d\n", marks[1][0]);
//     return 0;
// }

// #include<stdio.h>

// int countOdd(int arr[], int n);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("Total numbers of odd is : %d \n", countOdd(arr, 6));
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

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d\n", *(arr + 2));
//     printf("%d\n", *(arr + 5));
//     return 0;
// }

// #include<stdio.h>

// void reverseNumber(int arr[], int n);
// void printvalue(int arr[], int n);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     reverseNumber(arr, 6);
//     printvalue(arr, 6);
//     return 0;
// }

// void printvalue(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
// }
// void reverseNumber(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i] = secondval;
//         arr[n-i-1] = firstval;
//     }
// }

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     int fib[n];

//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i=2; i<n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t", fib[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void printTable(int arr[][10], int n, int m, int number);
// int main() {
//     int arr[2][10];
//     printTable(arr, 0, 10, 2);
//     printTable(arr, 1, 10, 3);

//     for(int i=0; i<10; i++) {
//         printf("%d\t", arr[0][i]);
//     }
//     printf("\n");
//     for(int i=0; i<10; i++) {
//         printf("%d\t", arr[1][i]);
//     }
//     return 0;
// }
// void printTable(int arr[][10], int n, int m, int number) {
//     for(int i=0; i<m; i++) {
//         arr [n][i] = number * (i + 1);
//     }
// }

// #include<stdio.h>

// void printTable(int arr[][10], int n, int m, int number);
// int main() {
//     int Table[2][10];
//     printTable(Table, 0, 10, 5);
//     printTable(Table, 1, 10, 8);

//     for(int i=0; i<10; i++) {
//         printf("%d\t", Table[0][i]);
//     }
//     printf("\n");

//     for(int i=0; i<10; i++) {
//         printf("%d\t", Table[1][i]);
//     }
//     return 0;
// }
// void printTable(int arr[][10], int n, int m, int number) {
//     for(int i=0; i<m; i++) {
//         arr[n][i] = number * (i + 1);
//     }
// }

// #include<stdio.h>

// int main()
// {
// int marks[3];
// printf("Enter a Phy marks : ");
// scanf("%d", &marks[0]);
// printf("Enter a Chem marks : ");
// scanf("%d", &marks[1]);
// printf("Enter a Math marks : ");
// scanf("%d", &marks[2]);
// printf("Phy = %d Chem = %d Math = %d", marks[0], marks[1], marks[2]);

// float price[] = {100.0, 200.0, 300.0};
// printf("Enter 3 price : \n");
// scanf("%f %f %f", &price[0], &price[1], &price[2]);
// printf("Total price 1 with GST is : %f\n", price[0] + (0.18 * price[0]));
// printf("Total price 2 with GST is : %f\n", price[1] + (0.18 * price[1]));
// printf("Total price 3 with GST is : %f\n", price[2] + (0.18 * price[2]));

// int i, marks[9], sum = 0, Avg;
// printf("Enter the marks of Physics : \n");
// for(i=0; i<10; i++)
// {
//     scanf("%d", &marks[i]);
// }
// printf("The marks taken as input : ");
// for(i=0; i<10; i++)
// {
//     printf("%d\t", marks[i]);
// }
// for(i=0; i<10; i++)
// {
//     sum = sum + marks[i];
// }
// printf("\n");
// printf("Sum = %d\n", sum);
// Avg = sum % 10;
// printf("Average = %d\n", Avg);

// printf("________________________________________________________\n");
// printf("    Roll No.   Sub1    sub2    sub3    Total Marks\n");
// printf("________________________________________________________\n");
// int marks[] = {1, 61, 61, 62, 184};
// printf("\t%d\t %d\t %d\t %d\t  %d\t", marks[0], marks[1], marks[2], marks[3], marks[4]);
//     return 0;
// }
// #include<stdio.h>

// int main()
// {
//     int marks[2][3];
//     marks[0][0] = 61;
//     marks[0][1] = 61;
//     marks[0][2] = 62;

//     marks[1][0] = 98;
//     marks[1][1] = 89;
//     marks[1][2] = 97;

//     printf("My math marks : %d", marks[0][2]);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     char name[10][30];
//     int roll[10];
//     float marks[10];
//     int num;
//     printf("How Many Data You want to store?\n");
//     scanf("%d", &num);
//     for(int i=0; i<=num-1; i++)
//     {
//         printf("Enter Student %d info\n", i+1);
//         printf("Enter student Name : ");
//         scanf("%s", &name[i]);
//         printf("Enter student Roll No. : ");
//         scanf("%d", &roll[i]);
//         printf("Enter student marks : ");
//         scanf("%f", &marks[i]);
//     }
//     printf("Name\tRoll No.\tMarks\n");
//     for(int j=0; j<=num-1; j++)
//     {
//         printf("%s\t%d\t\t%.2f\n", name[j], roll[j], marks[j]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int roll[10];
//     int sub1[10];
//     int sub2[10];
//     int sub3[10];
//     // float tmarks[10];
//     int num;
//     printf("How Many Data You Want to Store?\n");
//     scanf("%d", &num);
//     for(int i=0; i<=num-1; i++)
//     {
//         printf("Enter Student %d info :- \n", i+1);
//         printf("Enter Roll No. : ");
//         scanf("%d", &roll[i]);
//         printf("Enter Sub1 marks : ");
//         scanf("%d", &sub1[i]);
//         printf("Enter Sub2 marks : ");
//         scanf("%d", &sub2[i]);
//         printf("Enter Sub3 marks : ");
//         scanf("%d", &sub3[i]);
//         // printf("Enter Total marks : ");
//         // scanf("%f", &tmarks[i]);
//     }
//     printf("_______________________________________\n");
//     printf("Roll No.\tSub1\tSub2\tSub3\n");
//     printf("_______________________________________\n");
//     for(int j=0; j<=num-1; j++)
//     {
//         printf("%d\t\t%d\t%d\t%d\t\n", roll[j], sub1[j], sub2[j], sub3[j]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10], i, j, t;
    printf("Enter Any Ten Number :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1;j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("Ascending number : \t");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
}