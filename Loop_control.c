#include<stdio.h>

// int main(){
    // (a.) Print the numbers from 0 to 10 :- 0 1 2 3 4 5 6 7 8 9 10.
                //  for ---> Loop control
    // for(int i=0; i<=10; i++){
    //     printf("%d ", i);
    // }
                //  while ----> Loop control
    // int i=0;
    // while(i<=10){
    //     printf("%d ", i);
    //     i++;
    // }
                // do while ----> Loop control
    // int i = 0;
    // do{
    //     printf("%d ", i);
    //     i++;
    // }while(i<=10);

    // (b.) Print the number from 0 to n, if n is given by user.
    //          for ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // for(int i=0; i<=n; i++){
    //     printf("%d ", i);
    // }
    //              while ----> Loop control
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int i = 0;
    // while(i<=n){
    //     printf("%d ", i);
    //     i++;
    // } 
    //              do while ----> Loop control
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int i = 0;
    // do{
    //     printf("%d ", i);
    //     i++;
    // }while(i<=n);

    // (c.) Print the sum of first n natural numbers.
    // n = 4
    //        Also, print them in reverse.
    //          for ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum = sum + i;
    // }
    // printf("Sum is : %d\n", sum);

    // Print them in reverse ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int sum = 0;
    // for(int i=n; i>=1; i--){
    //     sum = sum + i;
    // }
    // printf("Reverse sum is : %d\n", sum);

    //          while ----> Loop control
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int sum = 0;
    // int i=1;
    // while(i<=n){
    //     sum = sum + i;
    //     i++;
    // }
    // printf("Sum is : %d\n", sum);

    // Print them in reverse ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int sum = 0;
    // int i = n;
    // while(i>=1){
    //     sum = sum + i;
    //     i--;
    // }
    // printf("Reverse sum is : %d\n", sum);
    //              do while ----> Loop control
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int sum = 0;
    // int i=1;
    // do{
    //     sum = sum + i;
    //     i++;
    // }while(i<=n);
    // printf("Sum is : %d\n", sum);

    // Print them in reverse ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int sum = 0;
    // int i=n;
    // do{
    //     sum = sum + i;
    //     i--;
    // }while(i>=1);
    // printf("Reverse sum is : %d", sum);

    // (d.) Print the table of a number input by the user.
    // n=2
    //              for ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // for(int i=1; i<=10; i++){
    //     printf("%d\n", n*i);
    // }

    //              while ----> Loop control
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int i=1;
    // while(i<=10){
    //     printf("%d\n", n*i);
    //     i++;
    // }

    //              do while ----> Loop control

    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);

    // int i=1;
    // do{
    //     printf("%d\n", n*i);
    //     i++;
    // }while(i<=10);

    // break statement ----> exit the loop
    // Ex :- 
    //              for ----> Loop control
    // for(int i=1; i<=10; i++){
    //     if(i == 3){
    //         break;
    //     }
    //     printf("%d\n", i);
    // }

    //        while ----> Loop control
     
    //  int i=1;
    //  while(i<=5){
    //     if(i == 3){
    //         break;
    //     }
    //     printf("%d\n", i);
    //     i++;
    //  }

//          do while ----> Loop control
    //  int i=1;
    //  do{
    //     if(i == 3){
    //         break;
    //     }
    //     printf("%d\n", i);
    //     i++;
    //  }while(i<=5);
    //  printf("Thank you");

//   (e.) Keep taking numbers as input from user until enters an odd number :-
//                  for ----> Loop control

    //  int n;
    //  for( ; 1 ; ){
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 2 != 0){
    //         break;
    //     }
    //  }
    //  printf("Thank you");

    //              while ----> Loop control

    // int n;
    // while(1){
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 2 != 0){
    //         break;
    //     }
    // }
    // printf("Thank you");

    //              do while ----> Loop control

    // int n;
    // do{
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 2 != 0){
    //         break;
    //     }
    // }while(1);
    // printf("Thank you");

    // (f.) Keep taking numbers as input from user until user enters a numbers which is multiple of 7.
    //                  for ----> Loop control

    // int n;
    // for( ; 1 ; ){
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 7 == 0){
    //         break;
    //     }
    // }
    // printf("Thank you");

    //                  while ----> Loop control

    // int n;
    // while(1){
    //     printf("Enter number : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n % 7 == 0){
    //         break;
    //     }
    // }
    // printf("Thank you");

    //              do while ----> Loop control

//    int n;
//     do{
//         printf("Enter number : ");
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if(n % 7 == 0){
//             break;
//         }
//     }while (1);
    // printf("Thank you");

    // Continue statement ----> skip to next iteration
    //              for ----> Loop control

    // for(int i=1; i<=5; i++){
    //     if(i == 3){
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }
    // printf("Thank you");

    // while ----> Loop control
//    int i = 0;
//    while(i<6){
//     i++;
//     if(i == 3){
//         continue;
//     }
//     printf("%d\n", i);
//    }

//              do while ----> Loop control
// int i = 0;
// do{
//     i++;
//     if(i == 3){
//         continue;
//     }
//     printf("%d\n", i);
// }while(i<6);

// (g.) printf all number from 1 to 10 except for 6.
//              for ----> Loop control

// for(int i = 1; i<=10; i++){
//     if(i == 6){
//         continue;
//     }
//     printf("%d\n", i);
// }

//              while ----> Loop control
// int i = 0;
// while(i<10){
//     i++;
//     if(i == 6){
//         continue;
//     }
//     printf("%d\n", i);
// }

//                  do while ----> Loop control
// int i = 0;
// do{
//     i++;
//     if(i == 6){
//         continue;
//     }
//     printf("%d\n", i);
// }while(i<10);

//  (h.) Print the all the odd numbers from 5 to 50.
//          for ----> Loop control

// for(int i = 5; i<=50; i++){
//     if(i % 2 != 0){
//        printf("%d\n", i);
//     }
// }
// printf("Thank you");

//          while ----> Loop control
// int i = 5;
// while(i<=50){
//     if(i % 2 != 0){
//         printf("%d\n", i);
//     }
//     i++;
// }

//              do while ----> Loop control
// int i = 5;
// do{
//     if(i % 2 != 0){
//         printf("%d\n", i);
//     }
//     i++;
// }while(i<=50);

// (i.) Print the factorial of a number n.
//          for ----> Loop control

// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// int fact = 1;
// for(int i = 1; i<=n; i++){
//     fact = fact * i;
// }
// printf("Fianl fact value is : %d\n", fact);
// printf("Thank you");

//         while ----> Loop control
// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// int i = 1;
// int fact = 1;
// while(i<=n){
//     fact = fact * i;
//     i++;
// }
// printf("Fianl factorial value is : %d\n", fact);

//          do while ----> Loop control
// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// int i = 1;
// int fact = 1;
// do{
//     fact = fact * i;
//     i++;
// }while(i<=n);
// printf("Final factorial value is : %d\n", fact);

// (j.) Print reverse of the table for a number.
//              for ----> Loop control

// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// for(int i = 10; i>=1; i--){
//     printf("%d\n", n * i);
// }

//              while ----> Loop control
// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// int i = 10;
// while(i>=1){
//     printf("%d\n", n * i);
//     i--;
// }

//              do while ----> Loop control
// int n;
// printf("Enter number : ");
// scanf("%d", &n);

// int i = 10;
// do{
//     printf("%d\n", n * i);
//     i--;
// }while(i>=1);

// (K.) Calculate the sum of all numbers between 5 to 50.
// (including 5 & 50)
//              for ----> Loop control

// int sum = 0;
// for(int i = 5;i<=50; i++){
//     sum = sum + i;
// }
// printf("Sum is : %d\n", sum);

//              while ----> Loop control
// int sum = 0;
// int i = 5;
// while(i<=50){
//     sum = sum + i;
//     i++;
// }
// printf("Sum is : %d\n", sum);

//                  do while ----> Loop control
// int sum = 0;
// int i = 5;
// do{
//     sum = sum + i;
//     i++;
// }while(i<=50);
// printf("Sum is : %d\n", sum);

// Search on what a "nested loop" is & print this pattern using it.
//                      *****
//                      *****
//                      *****
//                      *****

// for(int j=1; j<=4; j++){
//     for(int i=1; i<=5; i++){
//         printf("*");
//     }
//     printf("\n");
// }

// Write a program to check if a number is prime or not.

// int i, num, count = 0;
// printf("Enter an number : ");
// scanf("%d", &num);

// for(i = 1; i<=num; i++){
//     if(num % i == 0){
//         count++;
//     }
// }
// if(count == 2){
//     printf("%d is a Prime number.", num);
// }else{
//     printf("%d is not a Prime number.", num);
// }

// Write a program to print prime numbers in a range.

int isPrime(int n){

    for (int i = 2; i*i <= n; i++)

    {

        if (n%i == 0){

            return 0;

        }

    }

    return 1;

}int main(){

    int n1, n2;

    printf("Enter first number : ");

    scanf("%d", &n1);

    printf("Enter second number : ");

    scanf("%d", &n2);printf("The prime numbers between %d and %d are: ",n1, n2);

    for (int i = n1; i <= n2; i++)

    {

        if(isPrime(i)){

            printf("%d ", i);

        }

    }

    return 0;

}