// #include<stdio.h>
// #include<string.h>

// struct student{
//     int rollNo;
//     float cgpa;
//     // char *name[100];
//     char name[100];
// };
// int main() {
//     struct student s1;
//     s1. rollNo = 166;
//     s1. cgpa = 6.2;
//     // char *name = "Rohit";
//     strcpy(s1. name, "Rohit");
    
//     printf("Student name = %s\n", s1. name);
//     // printf("Student name = %s\n", name);
//     printf("Student rool no = %d\n", s1. rollNo);
//     printf("Student cgpa = %.2f\n", s1. cgpa);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct student{
//     char Name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1;
//     strcpy(s1. Name, "Rohit Kumar");
//     s1. roll = 166;
//     s1. cgpa = 6.2;
//     printf("Student name = %s\n", s1. Name);
//     printf("Student roll no = %d\n", s1. roll);
//     printf("Student cgpa = %.2f\n", s1. cgpa);
//     printf("\n");

//     struct student s2;
//     strcpy(s2. Name, "Moun Kumar");
//     s2. roll = 142;
//     s2. cgpa = 7.0;
//     printf("student name = %s\n", s2. Name);
//     printf("Student roll no = %d\n", s2. roll);
//     printf("Student cgpa = %.2f\n", s2. cgpa);
//     printf("\n");

//     struct student s3;
//     strcpy(s3. Name, "Dheeraj Kumar");
//     s3. roll = 151;
//     s3. cgpa = 7.8;
//     printf("Student name = %s\n", s3. Name);
//     printf("Student roll no = %d\n", s3. roll);
//     printf("Student cgpa = %.2f\n", s3. cgpa);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student ECE[100];
//     ECE[0]. roll = 166;
//     ECE[0]. cgpa = 6.2;
//     strcpy(ECE[0]. name, "Rohit Kumar");

//     printf("student name = %s\n", ECE[0]. name);
//     printf("Student roll no = %d\n", ECE[0]. roll);
//     printf("Student cgpa = %.2f\n", ECE[0]. cgpa);

//     struct student COE[100];
//     COE[1]. roll = 142;
//     COE[1]. cgpa = 7.0;
//     strcpy(COE[1]. name, "Monu Kumar");

//     printf("student name = %s\n", COE[1]. name);
//     printf("Student roll no = %d\n", COE[1]. roll);
//     printf("Student cgpa = %.2f\n", COE[1]. cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1 = {"Rohit Kumar", 166, 6.2};
//     printf("Student name = %s\n", s1. name);
//     printf("Student roll no = %d\n", s1. roll);
//     printf("Student cgpa = %.2f\n", s1. cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1 = {"Rohit Kumar", 166, 6.2};
//     struct student *ptr = &s1;
//     printf("Student name = %s\n", (*ptr). name);
//     printf("Student roll = %d\n", (*ptr). roll);
//     printf("Student cgpa = %.2f\n", (*ptr). cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1 = {"Rohit Kumar", 166, 6.2};
//     struct student *ptr = &s1;
//     printf("Student name = %s\n", ptr->name);
//     printf("Student roll no = %d\n", ptr->roll);
//     printf("Student cgpa = %.2f\n", ptr->cgpa);
//     return 0;
// }

#include<stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// void printInfor(struct student s1);
// int main() {
//     struct student s1 = {"Rohit kumar", 166, 6.2};
//     printInfor(s1);
//     return 0;
// }
// void printInfor(struct student s1) {
//     printf("Student name = %s\n", s1. name);
//     printf("Student roll no = %d\n", s1. roll);
//     printf("Student cgpa = %.2f\n", s1. cgpa);
// }

// #include<stdio.h>
// #include<string.h>

// typedef struct computerEngineeringstudent{
//     char name[100];
//     int roll;
//     float cgpa;
// }coe;
// int main() {
//     coe s1;
//     strcpy(s1. name, "Rohit Kumar");
//     s1. roll = 166;
//     s1. cgpa = 6.2;
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no = %d\n", s1. roll);
//     printf("Student cgpa is %.2f\n", s1. cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct address{
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// void printAdd(struct address adds);
// int main() {
//     struct address adds[5];

//     printf("Enter Infor for person 1 : ");
//     scanf("%d", &adds[0]. houseNo);
//     scanf("%d", &adds[0]. block);
//     scanf("%s", adds[0]. city);
//     scanf("%s", adds[0]. state);

//     printf("Enter Infor for person 2 : ");
//     scanf("%d", &adds[1]. houseNo);
//     scanf("%d", &adds[1]. block);
//     scanf("%s", adds[1]. city);
//     scanf("%s", adds[1]. state);

//     printf("Enter Infor for person 3 : ");
//     scanf("%d", &adds[2]. houseNo);
//     scanf("%d", &adds[2]. block);
//     scanf("%s", adds[2]. city);
//     scanf("%s", adds[2]. state);

//     printf("Enter Infor for person 4 : ");
//     scanf("%d", &adds[3]. houseNo);
//     scanf("%d", &adds[3]. block);
//     scanf("%s", adds[3]. city);
//     scanf("%s", adds[3]. state);

//     printf("Enter Infor for person 5 : ");
//     scanf("%d", &adds[4]. houseNo);
//     scanf("%d", &adds[4]. block);
//     scanf("%s", adds[4]. city);
//     scanf("%s", adds[4]. state);

//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);
//     return 0;
// }
// void printAdd(struct address adds) {
//     printf("Address is : %d, %d, %s, %s\n", adds.houseNo, adds. block, adds. city, adds. state);
// }

// #include<stdio.h>

// struct vector {
//     int x;
//     int y;
// };
// void calcusum(struct vector v1, struct vector v2, struct vector sum);
// int main() {
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector sum = {0};

//     calcusum(v1, v2, sum);
//     return 0;
// }
// void calcusum(struct vector v1, struct vector v2, struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("Sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }

// #include<stdio.h>

// struct complex {
//     int real;
//     int img;
// };
// int main() {
//     struct complex n1 = {4, 5};
//     struct complex *ptr = &n1;

//     printf("Real part = %d\n", ptr->real);
//     printf("Img part = %d\n", ptr->img);
//     return 0;
// }

// #include<stdio.h>

// typedef struct BankAcconunt {
//     char name[100];
//     int accountNo;
// }acc ;
// int main() {
//     acc acc1 = {"Rohit Kumar", 12345};
//     acc acc2 = {"Monu Kumar", 54321};

//     printf("Account holder name = %s\n", acc1.name);
//     printf("Account number = %d\n", acc1.accountNo);
//     printf("\n");
//     printf("Account holder name = %s\n", acc2.name);
//     printf("Account number = %d\n", acc2.accountNo);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1;
//     strcpy(s1.name, "Rohit Kumar");
//     s1.roll = 166;
//     s1.cgpa = 6.2;
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no is %d\n", s1.roll);
//     printf("Student cgpa is %.2f\n", s1.cgpa);
//     return 0;
// }

/* Practice Qs 55
Write a program to store the data of 3 student. */
// #include<stdio.h>
// #include<string.h>

// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1;
//     strcpy(s1.name, "Rohit Kumar");
//     s1.roll = 166;
//     s1.cgpa = 6.2;
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no is %d\n", s1.roll);
//     printf("Student cgpa is %.2f\n", s1.cgpa);

//     struct student s2;
//     strcpy(s2.name, "Dheeraj Kumar");
//     s2.roll = 151;
//     s2.cgpa = 7.8;
//     printf("Student name is %s\n", s2.name);
//     printf("Student roll no is %d\n", s2.roll);
//     printf("Student cgpa is %.2f\n", s2.cgpa);

//     struct student s3;
//     strcpy(s3.name, "Kunal Kumar");
//     s3.roll = 132;
//     s3.cgpa = 6.0;
//     printf("Student name is %s\n", s3.name);
//     printf("Student roll no is %d\n", s3.roll);
//     printf("Student cgpa is %.2f\n", s3.cgpa);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student ECE[100];
//     printf("         Student data\n");
//     printf("Enter your name, roll no & cgpa : \n");
//     scanf("%s", ECE[0].name);
//     scanf("%d", &ECE[0].roll);
//     scanf("%f", &ECE[0].cgpa);
//     printf("Student name is %s\n", ECE[0].name);
//     printf("Student roll no is %d\n", ECE[0].roll);
//     printf("Student cgpa is %.2f\n", ECE[0].cgpa);
//     printf("\n");

//     strcpy(ECE[1].name, "Dheeraj Kumar");
//     ECE[1].roll = 151;
//     ECE[1].cgpa = 7.8;
//     printf("Student name is %s\n", ECE[1].name);
//     printf("Student roll no is %d\n", ECE[1].roll);
//     printf("Student cgpa is %.2f\n", ECE[1].cgpa);
//     printf("\n");

//     struct student COE[100];
//     strcpy(COE[0].name, "Rohit Kumar");
//     COE[0].roll = 166;
//     COE[0].cgpa = 7.6;
//     printf("Student name is %s\n", COE[0].name);
//     printf("Student roll no is %d\n", COE[0].roll);
//     printf("Student cgpa is %.2f\n", COE[0].cgpa);

//     struct student IT[100];
//     strcpy(IT[0].name, "Rohit Kumar");
//     IT[0].roll = 42;
//     IT[0].cgpa = 9.9;
//     printf("Student name is %s\n", IT[0].name);
//     printf("Student roll no is %d\n", IT[0].roll);
//     printf("Student cgpa is %.2f\n", IT[0].cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct BankAccount {
//     char name[100];
//     int acc;
// };
// int main() {
//     struct BankAccount b1 = {"Rohit Kumar", 12345};
//     printf("Bank holder name is %s\n", b1.name);
//     printf("Your account no is %d\n", b1.acc);
//     printf("\n");

//     struct BankAccount b2 = {"Dheeraj Kumar", 10100};
//     printf("Bank holder name is %s\n", b2.name);
//     printf("Your account no is %d\n", b2.acc);
//     return 0;
// }

// #include<stdio.h>

// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//     struct student s1 = {"Rohit Kumar", 166, 6.2};
//     struct student *ptr = &s1;
//     printf("Student name is %s\n", (*ptr).name);
//     printf("Student roll no is %d\n", (*ptr).roll);
//     printf("Student cgpa is %.2f\n", (*ptr).cgpa);
//     return 0;
// }

// #include<stdio.h>

// struct BankAccount {
//     char name[100];
//     int accNo;
// };
// int main() {
//     struct BankAccount acc = {"Rohit Kumar", 12345};
//     struct BankAccount *ptr = &acc;
//     printf("Bank holder name is %s\n", ptr->name);
//     printf("Your account no is %d\n", ptr->accNo);
//     return 0;
// }

// #include<stdio.h>

// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// void printInfor(struct student s1);
// int main() {
//     struct student s1 = {"Rohit Kumar", 166, 6.2};
//     printInfor(s1);
//     return 0;
// }
// void printInfor(struct student s1) {
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no is %d\n", s1.roll);
//     printf("Student name is %.2f\n", s1.cgpa);
// }

// #include<stdio.h>
// #include<string.h>

// typedef struct BankAccountdetail{
//     char name[100];
//     int accNo;
// } acc ;
// int main() {
//     acc a1;
//     strcpy(a1.name, "Rohit Kumar");
//     a1.accNo = 23456;
//     printf("Bank holder name %s\n", a1.name);
//     printf("Your account no %d\n", a1.accNo);
//     return 0;
// }

// #include<stdio.h>

// typedef struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// } st ;
// void printInfor( st s1);
// int main() {
//      st s1 = {"Rohit Kumar", 166, 6.2};
//      printInfor(s1);
//     return 0;
// }
// void printInfor( st s1) {
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no is %d\n", s1.roll);
//     printf("Student cgpa is %.2f\n", s1.cgpa);
// }

// #include<stdio.h>

// typedef struct computerEngineeringstudent{
//     char name[100];
//     int roll;
//     float cgpa;
// } coe;
// int main() {
//     coe s1 = {"Rohit Kumar", 166, 9.8};
//     printf("Student name is %s\n", s1.name);
//     printf("Student roll no is %d\n", s1.roll);
//     printf("Student cgpa is %.2f\n", s1.cgpa);
//     return 0;
// }

/* Practice 56
     Enter address (house no, block, city, state) of 5 people. */
// #include<stdio.h>

// struct address {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// int main() {
//     struct address add1 = {1, 3, "Jamui", "Bihar"};
//     printf("Your address is : %d, %d, %s, %s\n", add1.houseNo, add1.block, add1.city, add1.state);

//     struct address add2 = {2, 5, "Sikandra", "Bihar"};
//     printf("Your address is : %d, %d, %s, %s\n", add2.houseNo, add2.block, add2.city, add2.state);

//     struct address add3 = {4, 6, "Lakhaishari", "Bihar"};
//     printf("Your address is : %d, %d, %s, %s\n", add3.houseNo, add3.block, add3.city, add3.state);

//     struct address add4 = {7, 8, "Asonal", "West Bangle"};
//     printf("Your address is : %d, %d, %s, %s\n", add4.houseNo, add4.block, add4.city, add4.state);

//     struct address add5 = {9, 8, "Burnpur", "West Bangle"};
//     printf("Your address is : %d, %d, %s, %s\n", add5.houseNo, add5.block, add5.city, add5.state);
//     return 0;
// }

// #include<stdio.h>

// struct address {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// void printAdd(struct address add);
// int main() {
//     struct address add[5];
//     printf("Enter address for person 1 : \n");
//     scanf("%d", &add[0].houseNo);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("Enter address for person 2 : \n");
//     scanf("%d", &add[1].houseNo);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("Enter address for person 3 : \n");
//     scanf("%d", &add[2].houseNo);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("Enter addresss for person 4 : \n");
//     scanf("%d", &add[3].houseNo);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("Enter address for person 5 : \n");
//     scanf("%d", &add[4].houseNo);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     printAdd(add[0]);
//     printAdd(add[1]);
//     printAdd(add[2]);
//     printAdd(add[3]);
//     printAdd(add[4]);
//     return 0;
// }
// void printAdd(struct address add) {
//     printf("Address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
//     printf("\n");
// }

// #include<stdio.h>

// typedef struct vector{
//     int x;
//     int y;
// } vec;
// void calcusum(vec v1, vec v2, vec sum);
// int main() {
//     vec v1 = {5, 10};
//     vec v2 = {3, 7};
//     vec sum = {0};

//     calcusum(v1, v2, sum);
//     return 0;
// }
// void calcusum(vec v1,vec v2, vec sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("Sum of a x is : %d\n", sum.x);
//     printf("Sum of a y is : %d\n", sum.y);
// }

// #include<stdio.h>

// struct vector {
//     int x; 
//     int y;
// };
// void calcusum(struct vector v1, struct vector v2, struct vector sum);
// int main() {
//     struct vector v1 = {4, 3};
//     struct vector v2 = {7, 8};
//     struct vector sum = {0};

//     calcusum(v1, v2, sum);
//     return 0;
// }
// void calcusum(struct vector v1, struct vector v2, struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("Sum of a x is : %d\n", sum.x);
//     printf("Sum of a y is : %d\n", sum.y);
// }

/* Practice Qs 58
       Create a structures to store complex numbers. (Use arrow operator) */
    //    #include<stdio.h>

    //    struct complex {
    //     int real;
    //     int img;
    //    };
    //    int main() {
    //     struct complex c1 = {4, 3};
    //     struct complex *ptr = &c1;

    //     printf("Real part = %d\n", ptr->real);
    //     printf("Img part = %d\n", ptr->img);
    //     return 0;
    //    }

    /* Practice Qs 59
         You have to store the marks of 30 students in class. 
         what will you use ?
         a. array of 10 floats
         b. structures */
        //  #include<stdio.h>
        //  struct students{
        //     char name[100];
        //     int roll;
        //     float cgpa;
        //  };
        //  int main() {
        //     struct students s1 = {"Rohit Kumar", 166, 6.2};
        //     printf("Student name is %s\n", s1.name);
        //     printf("Student roll no is %d\n", s1.roll);
        //     printf("Student cgpa is %.2f\n", s1.cgpa);
        //     printf("\n");

        //     struct students s2 = {"Dheeraj Kumar", 165, 6.1};
        //     printf("Student name is %s\n", s2.name);
        //     printf("Student roll no is %d\n", s2.roll);
        //     printf("Student cgpa is %.2f\n", s2.cgpa);
        //     printf("\n");

        //     struct students s3 = {"Monu Kumar", 164, 6.0};
        //     printf("Student name is %s\n", s3.name);
        //     printf("Student roll no is %d\n", s3.roll);
        //     printf("Student cgpa is %.2f\n", s3.cgpa);
        //     printf("\n");

        //     struct students s4 = {"Shivam Kumar", 163, 5.9};
        //     printf("Student name is %s\n", s4.name);
        //     printf("Student roll no is %d\n", s4.roll);
        //     printf("Student cgpa is %.2f\n", s4.cgpa);
        //     printf("\n");

        //     struct students s5 = {"Kunal Kumar", 162, 5.8};
        //     printf("Student name is %s\n", s5.name);
        //     printf("Student roll no is %d\n", s5.roll);
        //     printf("Student cgpa is %.2f\n", s5.cgpa);
        //     printf("\n");

        //     struct students s6 = {"Satyam Kumar", 161, 5.7};
        //     printf("Student name is %s\n", s6.name);
        //     printf("Student roll no is %d\n", s6.roll);
        //     printf("Student cgpa is %.2f\n", s6.cgpa);
        //     printf("\n");

        //     struct students s7 = {"Abeshik Kumar", 160, 5.6};
        //     printf("Student name is %s\n", s7.name);
        //     printf("Student roll no is %d\n", s7.roll);
        //     printf("Student cgpa is %.2f\n", s7.cgpa);
        //     printf("\n");

        //     struct students s8 = {"Abenash Kumar", 159, 5.5};
        //     printf("Student name is %s\n", s8.name);
        //     printf("Student roll no is %d\n", s8.roll);
        //     printf("Student cgpa is %.2f\n", s8.cgpa);
        //     printf("\n");

        //     struct students s9 = {"Rakesh Kumar", 158, 5.4};
        //     printf("Student name is %s\n", s9.name);
        //     printf("Student roll no is %d\n", s9.roll);
        //     printf("Student cgpa is %.2f\n", s9.cgpa);
        //     printf("\n");

        //     struct students s10 = {"Ramesh Kumar", 157, 5.3};
        //     printf("Student name is %s\n", s10.name);
        //     printf("Student roll no is %d\n", s10.roll);
        //     printf("Student cgpa is %.2f\n", s10.cgpa);
        //     printf("\n");

        //     struct students s11 = {"Ram Kumar", 156, 5.2};
        //     printf("Student name is %s\n", s11.name);
        //     printf("Student roll no is %d\n", s11.roll);
        //     printf("Student cgpa is %.2f\n", s11.cgpa);
        //     printf("\n");

        //     struct students s12 = {"Ram davi", 155, 5.1};
        //     printf("Student name is %s\n", s12.name);
        //     printf("Student roll no is %d\n", s12.roll);
        //     printf("Student cgpa is %.2f\n", s12.cgpa);
        //     printf("\n");

        //     struct students s13 = {"Mohit Kumar", 154, 5.0};
        //     printf("Student name is %s\n", s13.name);
        //     printf("Student roll no is %d\n", s13.roll);
        //     printf("Student cgpa is %.2f\n", s13.cgpa);
        //     printf("\n");

        //     struct students s14 = {"Manmohan teivari", 154, 4.9};
        //     printf("Student name is %s\n", s14.name);
        //     printf("Student roll no is %d\n", s14.roll);
        //     printf("Student cgpa is %.2f\n", s14.cgpa);
        //     printf("\n");

        //     struct students s15 = {"Banglore Khapra", 153, 4.8};
        //     printf("Student name is %s\n", s15.name);
        //     printf("Student roll no is %d\n", s15.roll);
        //     printf("Student cgpa is %.2f\n", s15.cgpa);
        //     printf("\n");

        //     struct students s16 = {"Ramdian Kumar", 152, 4.7};
        //     printf("Student name is %s\n", s16.name);
        //     printf("Student roll no is %d\n", s16.roll);
        //     printf("Student cgpa is %.2f\n", s16.cgpa);
        //     printf("\n");

        //     struct students s17 = {"Sandir Kumar", 151, 5.6};
        //     printf("Student name is %s\n", s17.name);
        //     printf("Student roll no is %d\n", s17.roll);
        //     printf("Student cgpa is %.2f\n", s17.cgpa);
        //     printf("\n");

        //     struct students s18 = {"sonu Kumar", 150, 5.5};
        //     printf("Student name is %s\n", s18.name);
        //     printf("Student roll no is %d\n", s18.roll);
        //     printf("Student cgpa is %.2f\n", s18.cgpa);
        //     printf("\n");

        //     struct students s19 = {"Kashab Kumar", 149, 5.4};
        //     printf("Student name is %s\n", s19.name);
        //     printf("Student roll no is %d\n", s19.roll);
        //     printf("Student cgpa is %.2f\n", s19.cgpa);
        //     printf("\n");

        //     struct students s20 = {"Sandoman Kumar", 148, 5.3};
        //     printf("student name is %s\n", s20.name);
        //     printf("Student roll no is %d\n", s20.roll);
        //     printf("Student cgpa is %.2f\n", s20.cgpa);
        //     printf("\n");

        //     struct students s21 = {"Anant Kumar", 147, 5.2};
        //     printf("student name is %s\n", s21.name);
        //     printf("Student roll no is %d\n", s21.roll);
        //     printf("Student cgpa is %.2f\n", s21.cgpa);
        //     printf("\n");

        //     struct students s22 = {"Ranveir Kapur", 146, 5.1};
        //     printf("student name is %s\n", s22.name);
        //     printf("Student roll no is %d\n", s22.roll);
        //     printf("Student cgpa is %.2f\n", s22.cgpa);
        //     printf("\n");

        //     struct students s23 = {"Roman raieng", 145, 5.0};
        //     printf("student name is %s\n", s23.name);
        //     printf("Student roll no is %d\n", s23.roll);
        //     printf("Student cgpa is %.2f\n", s23.cgpa);
        //     printf("\n");

        //     struct students s24 = {"Broker lesnar", 144, 4.9};
        //     printf("student name is %s\n", s24.name);
        //     printf("Student roll no is %d\n", s24.roll);
        //     printf("Student cgpa is %.2f\n", s24.cgpa);
        //     printf("\n");

        //     struct students s25 = {"Under Taker", 143, 4.8};
        //     printf("student name is %s\n", s25.name);
        //     printf("Student roll no is %d\n", s25.roll);
        //     printf("Student cgpa is %.2f\n", s25.cgpa);
        //     printf("\n");

        //     struct students s26 = {"Jon Cena", 142, 4.7};
        //     printf("student name is %s\n", s26.name);
        //     printf("Student roll no is %d\n", s26.roll);
        //     printf("Student cgpa is %.2f\n", s26.cgpa);
        //     printf("\n");

        //     struct students s27 = {"Kean Kumar", 141, 4.7};
        //     printf("student name is %s\n", s27.name);
        //     printf("Student roll no is %d\n", s27.roll);
        //     printf("Student cgpa is %.2f\n", s27.cgpa);
        //     printf("\n");

        //     struct students s28 = {"Mosam Kumari", 140, 4.6};
        //     printf("student name is %s\n", s28.name);
        //     printf("Student roll no is %d\n", s28.roll);
        //     printf("Student cgpa is %.2f\n", s28.cgpa);
        //     printf("\n");

        //     struct students s29 = {"Rabindar Kumar", 139, 4.5};
        //     printf("student name is %s\n", s29.name);
        //     printf("Student roll no is %d\n", s29.roll);
        //     printf("Student cgpa is %.2f\n", s29.cgpa);
        //     printf("\n");

        //     struct students s30 = {"Abbay Kumar", 138, 4.4};
        //     printf("Student name is %s\n", s30.name);
        //     printf("Student roll no is %d\n", s30.roll);
        //     printf("Student cgpa is %.2f\n", s30.cgpa);
        //     return 0;
        //  }

        /*  Practice Qs 60
               Make a structures to store Bank Account Information of a customer of ABC Bank. Also, make an 
               alias for it. */
            //    #include<stdio.h>
            //    typedef struct Bank_Account_Information_of_a_customer{
            //     char name[100];
            //     int accNo;
            //    } acc;
            //    int main() {
            //     acc A = {"Rohit Kumar", 12345};
            //     printf("Bank holder name is %s\n", A.name);
            //     printf("Account number :- %d\n", A.accNo);
            //     printf("\n");

            //     acc B = {"Dheeraj Kumar", 10345};
            //     printf("Bank holder name is %s\n", B.name);
            //     printf("Account number :- %d\n", B.accNo);
            //     printf("\n");

            //     acc C = {"Monu Kumar", 10045};
            //     printf("Bank holder name is %s\n", C.name);
            //     printf("Account number :- %d\n", C.accNo);
            //     printf("\n");
            //     return 0;
            //    }

            /*  Passing structures in function & using typedef keyword -->  */
            #include<stdio.h>

            typedef struct student {
                char name[100];
                int roll;
                float cgpa;
            } s;
            void printMarks(s s1);
            int main() {
                s s1 = {"Rohit Kumar", 166, 6.2};
                printMarks(s1);
                return 0;
            }
            void printMarks(s s1) {
                printf("Student name is %s\n", s1.name);
                printf("Student roll no is %d\n", s1.roll);
                printf("Student cgpa is %.2f\n", s1.cgpa);
            }