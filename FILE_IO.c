#include<stdio.h>

int main() {

    // FILE *fptr;
    // FILE *fptr;
    // fptr = fopen("Text.txt", "r");
//    FILE *fptr;
//    fptr = fopen("NewText.txt", "r");
//    if(fptr == NULL) {
//     printf("file doesn't exist\n");
//    }
//    else {
//     fclose(fptr);
//    }

// FILE *fptr;
// fptr = fopen("NewText.txt", "w");
// if(fptr == NULL) {
//     printf("File doesn't exist\n");
// }
// else {
//     fclose(fptr);
// }

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// char ch;
// fscanf(fptr, "%c", &ch);
// printf("character = %c\n", ch);
// fscanf(fptr, "%c", &ch);
// printf("Character = %c\n", ch);
// fscanf(fptr, "%c", &ch);
// printf("character = %c\n", ch);
// fscanf(fptr, "%c", &ch);
// printf("Character = %c\n", ch);
// fscanf(fptr, "%c", &ch);
// printf("character = %c\n", ch);
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// int i;
// fscanf(fptr, "%d", &i);
// printf("%d\n", i);
// fscanf(fptr, "%d", &i);
// printf("%d\n", i);
// fscanf(fptr, "%d", &i);
// printf("%d\n", i);
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "a");

// fprintf(fptr, "%c", 'B');
// fprintf(fptr, "%c", 'a');
// fprintf(fptr, "%c", 'n');
// fprintf(fptr, "%c", 'a');
// fprintf(fptr, "%c", 'n');
// fprintf(fptr, "%c", 'a');
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");

// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "w");

// fputc('A', fptr);
// fputc('P', fptr);
// fputc('P', fptr);
// fputc('L', fptr);
// fputc('E', fptr);
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// char ch;
// ch = fgetc(fptr);
// while(ch != EOF) {
//     printf("%c", ch);
//     ch = fgetc(fptr);
// }
// printf("\n");
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// int i;
// fscanf(fptr, "%d", &i);
// printf("Number = %d\n", i);
// fscanf(fptr, "%d", &i);
// printf("Number = %d\n", i);
// fscanf(fptr, "%d", &i);
// printf("Number = %d\n", i);
// fscanf(fptr, "%d", &i);
// printf("Number = %d\n", i);
// fscanf(fptr, "%d", &i);
// printf("Number = %d\n", i);
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Student.txt", "w");
// char name[100];
// int age;
// float cgpa;

// printf("Enter your name : ");
// scanf("%s", name);
// printf("Enter your age : ");
// scanf("%d", &age);
// printf("Enter your cgpa : ");
// scanf("%f", &cgpa);

// fprintf(fptr, "Student name is %s\n", name);
// fprintf(fptr, "Student age is %d\n", age);
// fprintf(fptr, "Student cgpa is %.2f", cgpa);

// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Odd.txt", "w");
// int n;
// printf("Enter any number : ");
// scanf("%d", &n);

// for(int i=1; i<=n; i++) {
//     if(i % 2 != 0) {
//         fprintf(fptr, "%d\n", i);
//     }
// }
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Sum.txt", "r");
// int a;
// fscanf(fptr, "%d", &a);
// int b;
// fscanf(fptr, "%d", &b);
// fclose(fptr);
// fptr = fopen("Sum.txt", "w");
// fprintf(fptr, "%d", a + b);
// fclose(fptr);

// FILE *fptr;
// fptr = fopen("Text.txt", "r");
// fclose(fptr);

/* Best practice 
         Check if a file exists before reading from it.  */
         // FILE *fptr;
         // fptr = fopen("Text.txt", "r");
         // if(fptr == NULL) {
         //    printf("File doesn't exist\n");
         // }
         // else {
         //    fclose(fptr);
         // }

         // FILE *fptr;
         // fptr = fopen("Text.txt", "r");
         // char ch;
         // fscanf(fptr, "%c", &ch);
         // printf("%c", ch);
         // fscanf(fptr, "%c", &ch);
         // printf("%c", ch);
         // fscanf(fptr, "%c", &ch);
         // printf("%c", ch);
         // fscanf(fptr, "%c", &ch);
         // printf("%c", ch);
         // fscanf(fptr, "%c", &ch);
         // printf("%c", ch);
         // printf("\n");

         // int i;
         // fscanf(fptr, "%d", &i);
         // printf("%d\n", i);
         // fscanf(fptr, "%d", &i);
         // printf("%d\n", i);
         // fscanf(fptr, "%d", &i);
         // printf("%d\n", i);
         // fclose(fptr);

         // FILE *fptr;
         // fptr = fopen("Text.txt", "w");
         // fprintf(fptr, "%c", 'A');
         // fprintf(fptr, "%c", 'P');
         // fprintf(fptr, "%c", 'P');
         // fprintf(fptr, "%c", 'L');
         // fprintf(fptr, "%c", 'E');
         // fclose(fptr);

         // FILE *fptr;
         // fptr = fopen("Text.txt", "r");
         // printf("%c", fgetc(fptr));
         // printf("%c", fgetc(fptr));
         // printf("%c", fgetc(fptr));
         // printf("%c", fgetc(fptr));
         // printf("%c", fgetc(fptr));
         // fclose(fptr);

         // FILE *fptr;
         // fptr = fopen("Text.txt", "w");
         // fputc('B', fptr);
         // fputc('a', fptr);
         // fputc('n', fptr);
         // fputc('a', fptr);
         // fputc('n', fptr);
         // fputc('a', fptr);
         // fclose(fptr);

         // FILE *fptr;
         // fptr = fopen("Text.txt", "r");
         // char ch;
         // ch = fgetc(fptr);
         // while(ch != EOF) {
         //    printf("%c", ch);
         //    ch = fgetc(fptr);
         // }
         // printf("\n");
         // fclose(fptr);

         /*  Practice Qs 61
             Make a program to read 5 integers from a file. */
            //  FILE *fptr;
            //  fptr = fopen("Text.txt", "r");
            //  int i;
            //  fscanf(fptr, "%d", &i);
            //  printf("%d\t", i);
            //  fscanf(fptr, "%d", &i);
            //  printf("%d\t", i);
            //  fscanf(fptr, "%d", &i);
            //  printf("%d\t", i);
            //  fscanf(fptr, "%d", &i);
            //  printf("%d\t", i);
            //  fscanf(fptr, "%d", &i);
            //  printf("%d\t", i);
            //  fclose(fptr);

/* Practice Qs 62
    Make a program to input student information from a user & enter it to a file. */
//                 FILE *fptr;
//                 fptr = fopen("Student.txt", "w");
//                 char name[100];
//                 int age;
//                 float cgpa;

//                 printf("Enter your name : ");
//                 scanf("%s", name);
//                 printf("Enter your age : ");
//                 scanf("%d", &age);
//                 printf("Enter your cgpa : ");
//                 scanf("%f", &cgpa);

//                 fprintf(fptr, "Student name is %s\n", name);
//                 fprintf(fptr, "Student age is %d\n", age);
//                 fprintf(fptr, "Student cgpa is %.2f\n", cgpa);
//                 fclose(fptr);

/* Practice Qs 63
     Write a progrma to write all the odd numbers from 1 to n in a file. */
   //   FILE *fptr;
   //   fptr = fopen("Odd.txt", "w");
   //   int n;
   //   printf("Enter any number : ");
   //   scanf("%d", &n);
   //   for(int i=1; i<=n; i++) {
   //    if(i % 2 != 0) {
   //       fprintf(fptr, "%d\t", i);
   //    }
   //   }
   //   fclose(fptr);

   /* Practice Qs 64
   2 number - a & b, are written in a file a program to replace them with their sum. */
//    FILE *fptr;
//    fptr = fopen("Sum.txt", "r");
//    int a;
//    fscanf(fptr, "%d", &a);
//    int b;
//    fscanf(fptr, "%d", &b);
//    fclose(fptr);

//    fptr = fopen("Sum.txt", "w");
//    fprintf(fptr, "Sum is : %d", a + b);

/* Best Practice Qs -->
     Check if a file exists before reading from it.  */
    //  FILE *fptr;
    //  fptr = fopen("Text.txt", "w");
    //  if(fptr == NULL)  {
    //     printf("file doesn't exist\n");
    //  }
    //  else {
    //     fclose(fptr);
    //  }

    // FILE *fptr;
    // fptr = fopen("Text.txt", "r");
    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF) {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");
    // fclose(fptr);

    /* Practice Qs 61 -->
          Make a program to read t integers from a file. */
        //  FILE *fptr;
        //  fptr = fopen("Text.txt", "r");
        //  int i;
        //  fscanf(fptr, "%d", &i);
        //  printf("%d\t", i);
        //  fscanf(fptr, "%d", &i);
        //  printf("%d\t", i);
        //  fscanf(fptr, "%d", &i);
        //  printf("%d\t", i);
        //  fscanf(fptr, "%d", &i);
        //  printf("%d\t", i);
        //  fscanf(fptr, "%d", &i);
        //  printf("%d\t", i);
        //  fclose(fptr);

        /* Practice Qs 62 -->
             Make a program to input student information from a user & enter it to a file. */
        // FILE *fptr;
        // fptr = fopen("Student.txt", "w");
        // char name[100];
        // int age;
        // float cgpa;

        // printf("Enter your name : ");
        // scanf("%s", name);
        // printf("Enter your age : ");
        // scanf("%d", &age);
        // printf("Enter your cgpa : ");
        // scanf("%f", &cgpa);

        // fprintf(fptr, "Student name is %s\n", name);
        // fprintf(fptr, "Student age is %d\n", age);
        // fprintf(fptr, "Student cgpa is %.2f", cgpa);
        // fclose(fptr);

        /* Practice Qs 63
            Write a program to write all the odd numbers from 1 to n in a file. */
            // FILE *fptr;
            // fptr = fopen("Odd.txt", "w");
            // int n;
            // printf("Enter a number : ");
            // scanf("%d", &n);
            // for(int i=1; i<=n; i++) {
            //     if(i % 2 != 0) {
            //         fprintf(fptr, "%d\t", i);
            //     }
            // }
            // fclose(fptr);

    /*  Practice Qs 64
         2 number - a & b, are written in a file. Write a program to replace them with their sum. */
         FILE *fptr;
         fptr = fopen("Sum.txt", "r");
         int a;
         fscanf(fptr, "%d", &a);
         int b;
         fscanf(fptr, "%d", &b);
         fclose(fptr);

         fptr = fopen("Sum.txt", "w");
         fprintf(fptr, "Sum is : %d", a + b);
    return 0;
}