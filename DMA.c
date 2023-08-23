#include<stdio.h>
#include<stdlib.h>

int main() {
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));

    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));

    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    // for(int i=0; i<5; i++) {
    //     printf("%d\n", ptr[i]);
    // }

    // float *ptr;
    // ptr = (float *) malloc(5 * sizeof(float));

    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    // for(int i=0; i<5; i++) {
    //     printf("%.2f\n", ptr[i]);
    // }

    // float *ptr;
    // ptr = (float *) calloc(5, sizeof(float));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3] = 4;
    // ptr[4] = 5;

    // for(int i=0; i<5; i++) {
    //     printf("%f\n", ptr[i]);
    // }

    // int *ptr;
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // ptr = (int *) calloc(n, sizeof(int));

    // for(int i=0; i<n; i++) {
    //     printf("%d\n", ptr[i]);
    // }

    // int *ptr;
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // ptr = (int *) calloc(n, sizeof(int));

    // for(int i=0; i<n; i++) {
    //     printf("%d\n", ptr[i]);
    // }
    // free(ptr);

    // ptr = (int *) calloc(2, sizeof(int));

    // for(int i=0; i<2; i++) {
    //     printf("%d\n", ptr[i]);
    // }

//     // float *ptr;
//     // ptr = (float *) malloc(5 * sizeof(float));

//     // ptr[0] = 1;
//     // ptr[1] = 2;
//     // ptr[2] = 3;
//     // ptr[3] = 4;
//     // ptr[4] = 5;

//     // for(int i=0; i<5; i++) {
//     //     printf("%f\n", ptr[i]);
//     // }

//     // free(ptr);

//     // printf("\n");
//     // ptr = (float *) calloc(3, sizeof(float));

//     // ptr[0] = 1;
//     // ptr[1] = 2;
//     // ptr[2] = 3;

//     // for(int i=0; i<3; i++) {
//     //     printf("%f\n", ptr[i]);
//     // }

// int *ptr;
// ptr = (int *) calloc(5, sizeof(int));

// printf("Enter a number(5) : ");
// for(int i=0; i<5; i++) {
//     scanf("%d", &ptr[i]);
// }

// realloc(ptr, 8);

// printf("Enter a number(8) : ");
// for(int i=0; i<8; i++) {
//     scanf("%d", &ptr[i]);
// }

// // print
// for(int i=0; i<8; i++) {
//     printf("Number is : ptr [%d] = %d \n", i, ptr[i]);
// }

// int *ptr;
// ptr = (int *) calloc(5, sizeof(int));

// printf("Enter a number(5) : ");
// for(int i=0; i<5; i++) {
//     scanf("%d", &ptr[i]);
// }
// // print
// for(int i=0; i<5; i++) {
//     printf("Number is : ptr[%d] = %d\n", i, ptr[i]);
// }

// int *ptr;
// ptr = (int *) calloc(5, sizeof(int));

// ptr[0] = 1;
// ptr[1] = 3;
// ptr[2] = 5;
// ptr[3] = 7;
// ptr[4] = 9;

// for(int i=0; i<5; i++) {
//     printf("Odd number is : ptr[%d] = %d\n", i, ptr[i]);
// }

// ptr = realloc(ptr, 6);
// printf("\n");
// ptr = (int *) calloc(6, sizeof(int));
// ptr[0] = 2;
// ptr[1] = 4;
// ptr[2] = 6;
// ptr[3] = 8;
// ptr[4] = 10;
// ptr[5] = 12;

// for(int i=0; i<6; i++) {
//     printf("Even number is : ptr[%d] = %d\n", i, ptr[i]);
// }
// free(ptr);
// int *ptr;
// ptr = (int *) malloc(5 * sizeof(int));
// printf("%d\n", sizeof(int));
// printf("%d\n", sizeof(float));
// printf("%d\n", sizeof(char));

// int *ptr;
// ptr = (int *) malloc(5 * sizeof(int));

// ptr[0] = 11;
// ptr[1] = 12;
// ptr[2] = 13;
// ptr[3] = 14;
// ptr[4] = 15;

// for(int i=0; i<5; i++) {
//     printf("%d\n", ptr[i]);
// }

// char *ptr;
// ptr = (char *) malloc('f' * sizeof(char));

// ptr['a'] = 'R';
// ptr['b'] = 'o';
// ptr['c'] = 'h';
// ptr['d'] = 'i';
// ptr['e'] = 't';

// for(char i='a'; i<'f'; i++) {
//     printf("%c", ptr[i]);
// }

/* Practice Qs 65
     Write a program to allocate memory to store 5 prices. */
    //  float *ptr;
    //  ptr = (float *) malloc(5 * sizeof(float));

    //  ptr[0] = 100;
    //  ptr[1] = 200;
    //  ptr[2] = 300;
    //  ptr[3] = 400;
    //  ptr[4] = 500;

    //  for(int j=0; j<5; j++) {
    //     printf("%.2f\n", ptr[j]);
    //  }

    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));

    // for(int i=0; i<5; i++) {
    //     printf("%d\n", ptr[i]);
    // }

    /* Practice Qs 66
        Write a program to allocate memory of size n, where n is entered by the user.  */
        // int *ptr;
        // int n;
        // printf("Enter any number : ");
        // scanf("%d", &n);
        // ptr = (int *) calloc(n, sizeof(int));
        
        // for(int i=0; i<n; i++) {
        //     printf("%d\n", ptr[i]);
        // }

        // int *ptr;
        // int n;
        // printf("Enter a number : ");
        // scanf("%d", &n);
        // ptr = (int *) calloc(n, sizeof(int));
        
        // for(int i=0; i<n; i++) {
        //     printf("%d\n", ptr[i]);
        // }
        // free(ptr);

        // ptr = (int *) calloc(2, sizeof(int));

        // for(int i=0; i<2; i++) {
        //     printf("%d\n", ptr[i]);
        // }

        /* Practice Qs 67
            In Qs 65, free the memory allocated with calloc.  */
            // float *ptr;
            // ptr = (float *) malloc(5 * sizeof(float));

            // ptr[0] = 100;
            // ptr[1] = 200;
            // ptr[2] = 300;
            // ptr[3] = 400;
            // ptr[4] = 500;

            // for(int i=0; i<5; i++) {
            //     printf("%.2f\n", ptr[i]);
            // }

            // free(ptr);

            // ptr = (float *) calloc(3, sizeof(float));

            // ptr[0] = 600;
            // ptr[1] = 700;
            // ptr[2] = 800;

            // for(int i=0; i<3; i++) {
            //     printf("%.2f\n", ptr[i]);
            // }

            /* Practice Qs 68
                Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers. */
                // int *ptr;
                // ptr = (int *) calloc(5, sizeof(int));

                // printf("Enter a number(5) : ");
                // for(int i=0; i<5; i++) {
                //    scanf("%d", &ptr[i]);
                // }

                // realloc(ptr, 8);

                // printf("Enter a number(8) : ");
                // for(int i=0; i<8; i++) {
                //     scanf("%d", &ptr[i]);
                // }

                // // print
                // printf("\n");
                // for(int i=0; i<8; i++) {
                //     printf("Number is %d = %d\n", i, ptr[i]);
                // }

                /* Practice Qs 69
                    Create an array of size 5 (using calloc) & enter its values from the user. */
                    // int *ptr;
                    // ptr = (int *) calloc(5, sizeof(int));

                    // printf("Enter a number(5) : ");
                    // for(int i=0; i<5; i++) {
                    //     scanf("%d", &ptr[i]);
                    // }

                    // // print

                    // for(int i=0; i<5; i++) {
                    //     printf("Number is %d = %d\n", i, ptr[i]);
                    // }

    /* Practice Qs 70
       Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number. */
       int *ptr;
       ptr = (int *) calloc(5, sizeof(int));

       ptr[0] = 1;
       ptr[1] = 3;
       ptr[2] = 5;
       ptr[3] = 7;
       ptr[4] = 9;

       for(int i=0; i<5; i++) {
        printf("Odd number is %d = %d\n", i, ptr[i]);
       }

       realloc(ptr, 6);
       printf("\n");

       ptr[0] = 2;
       ptr[1] = 4;
       ptr[2] = 6;
       ptr[3] = 8;
       ptr[4] = 10;
       ptr[5] = 12;

       for(int i=0; i<6; i++) {
        printf("Even number is %d = %d\n", i, ptr[i]);
       }
        
    return 0;
}