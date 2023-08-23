// #include<stdio.h>

// int main()
// {
//   double n1, n2, n3;
//   printf("Enter a any three number : ");
//   scanf("%lf %lf %lf", &n1, &n2, &n3);
//   if(n1>n2)
//   {
//     if(n1>n3)
//     {
//     printf("%.2lf is greater number.", n1);
//     }
//   }
//   if(n2>n1)
//   {
//     if(n2>n3)
//     {
//       printf("%.2lf is greater number.", n2);
//     }
//   }
//   if(n3>n1)
//   {
//     if(n3>n2)
//     {
//     printf("%.2lf is greater number.", n3);
//     }
//   }
//   return 0;
// }

// #include<stdio.h>

// int main()
// {
//   int i, j;
//   char input, alphabet = 'A';
//   printf("Enter a upper case alphabet : ");
//   scanf("%c", &input);
//   for(i=1; (i <= input - 'A' + 1); ++i)
//   {
//     for(j=1; j<=i; ++j)
//     {
//       printf("%c ", alphabet);
//     }
//     ++alphabet;
//     printf("\n");
//   }
//   return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//   int intType;
//   float floatType;
//   char charType;
//   long lType;
//   long long llType;
//   double dType;
//   long double ldType;
//   printf("Size of int           = %zu bytes\n", sizeof(intType));
//   printf("Size of float         = %zu bytes\n", sizeof(floatType));
//   printf("Size of char          = %zu bytes\n", sizeof(charType));
//   printf("Size of long int      = %zu bytes\n", sizeof(lType));
//   printf("Size of long long int = %zu bytes\n", sizeof(llType));
//   printf("Size of double        = %zu bytes\n", sizeof(dType));
//   printf("Size of long double   = %zu bytes\n", sizeof(ldType));
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//   float fah, cel;
//   clrscr();
//   printf("Enter a temperature(cel) : ");
//   scanf("%f", &cel);
//   fah = ((cel * (9.0 / 5.0)) + 32);
//   printf("Fahrenheit is %f\n", fah);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//   int year;
//   clrscr();
//   printf("Enter a year : ");
//   scanf("%d", &year);
//   if(year % 400 == 0)
//   {
//     printf("%d is a leap year.\n", year);
//   }
//   else if(year % 100 == 0)
//   {
//     printf("%d is not a leap year.\n", year);
//   }
//   else if(year % 4 == 0)
//   {
//     printf("%d is a leap year.\n", year);
//   }
//   else
//   {
//     printf("%d is not a leap year.\n", year);
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main()
// {
//   double a, b, c, root1, root2, root_part;
//   clrscr();
//   printf("Enter a coefficients a, b, and c :\n");
//   scanf("%lf %lf %lf", &a, &b, &c);
//   root_part = (b*b - 4*a*c);
//   if(root_part > 0)
//   {
//     root1 = -b + sqrt(root_part) / 2.0 * a;
//     root2 = -b - sqrt(root_part) / 2.0 * a;
//     printf("Root1 = %lf\tRoot2 = %lf", root1, root2);
//   }
//   else
//   {
//     printf("Error!! IMAGINARY PART\n");
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int i, n;
//   clrscr();
//   int t1 = 0, t2 = 1;
//   int nextTerm = t1 + t2;
//   printf("Enter a number of term : ");
//   scanf("%d", &n);
//   printf("Fibonacci Series : %d, %d, ", t1, t2);
//   for(i=3; i<=n; i++)
//   {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int n, i, prime = 0;
//   clrscr();
//   printf("Enter a positive integer : ");
//   scanf("%d", &n);
//   if(n==0 || n==1)
//   {
//     prime = 1;
//   }
//   for(i=2; i<=n/2; i++)
//   {
//     if(n % i == 0)
//     {
//       prime = 1;
//       break;
//     }
//   }
//   if(prime == 0)
//   {
//     printf("%d is a prime number.", n);
//   }
//   else
//   {
//     printf("%d is not a prime number.", n);
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int num, originalnum, remainder, result = 0;
//   clrscr();
//   printf("Enter a three-digit number : ");
//   scanf("%d", &num);
//   originalnum = num;
//   while(originalnum != 0)
//   {
//     remainder = originalnum % 10;
//     result = result + remainder * remainder * remainder;
//     originalnum = originalnum / 10;
//   }
//   if(num == result)
// {
//   printf("%d is an Armstrong number.", num);
// }
// else
// {
//   printf("%d is not an Armstrong number.", num);
// }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int rows, i, j, space;
//   printf("Enter a number of rows : ");
//   scanf("%d", &rows);
//   for(i = rows; i >= 1; --i)
//   {
//     for(space = 0; space < rows - i; ++space)
//       printf("  ");
//     for(j = i; j <= 2 * i - 1; ++j)
//       printf("* ");
//     for(j = 0; j < i - 1; ++j)
//       printf("* ");
//     printf("\n");
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int i, j, rows, space;
//   clrscr();
//   printf("Enter the number of rows : ");
//   scanf("%d", &rows);
//   for(i=rows; i>=1; i--)
//   {
//     for(space = 0; space < rows - i; space++)
//     printf("  ");
//     for(j=i; j<=2*i-1; j++)
//     printf("* ");
//     for(j=0; j<i-1; j++)
//     printf("* ");
//     printf("\n");
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void Namaste();
// void Bonjour();
// void AnotherCountry();
// void main()
// {
//   char ch;
//   clrscr();
//   printf("Enter I for Indian & F for French : ");
//   scanf("%c", &ch);
//   if(ch == 'I')
//     Namaste();
//   else if(ch == 'F')
//     Bonjour();
//   else
//   printf("You are another country candidate.\n");
//   getch();
// }

// void Namaste() 
// {
//   printf("Namaste\n");
// }
// void Bonjour()
// {
//   printf("Bonjour\n");
// }

// #include<stdio.h>
// #include<conio.h>
// int CheckPrime(int n);
// void main()
// {
//   int a, b, prime, j;
//   clrscr();
//   printf("Enter a two positive integer :\n");
//   scanf("%d %d", &a, &b);
//   if(a>b)
//   {
//     a = a + b;
//     b = a - b;
//     a = a - b;
//   }
//   printf("Prime Numbers between %d and %d are : ", a, b);
//   for(j = a + 1; j < b; j++)
//   {
//     prime = CheckPrime(j);
//     if(prime == 1)
//     {
//       printf("%d, ", j);
//     }
//   }
//   getch();
// }

// int CheckPrime(int n)
// {
//   int i, prime = 1;
//   for(i=2; i<=n/2; i++)
//   {
//     if(n%i==0)
//     {
//       prime = 0;
//       break;
//     }
//   }
//   return prime;
// }

// #include<stdio.h>
// #include<conio.h>
// long long convert(int n);
// void main()
// {
//   int n, bin;
//   clrscr();
//   printf("Enter a decimal number : ");
//   scanf("%d", &n);
//   bin = convert(n);
//   printf("%d in decimal = %ld in binary", n, bin);
//   getch();
// }
// long long convert(int n)
// {
//   long long bin = 0;
//   int rem, i = 1;
//   while(n!=0)
//   {
//     rem = n % 2;
//     n /= 2;
//     bin += rem * i;
//     i *= 10;
//   }
//   return bin;
// }

// #include<stdio.h>
// #include<conio.h>
// int fact(int n);
// void main()
// {
//   int n;
//   clrscr();
//   printf("Enter a number : ");
//   scanf("%d", &n);
//   printf("Factorial is : %d\n", fact(n));
//   getch();
// }

// int fact(int n)
// {
//   if(n == 1)
//   {
//     return 1;
//   }
//   int factN1 = fact(n-1);
//   int factN = factN1 * n;
//   return factN;
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int n;
//   clrscr();
//   double arr[30];
//   printf("Enter the number of elements (1 to 30) : ");
//   scanf("%d", &n);
//   for(int i=0; i<n; i++)
//   {
//     printf("Enter number%d : ", i + 1);
//     scanf("%lf", &arr[i]);
//   }
//   for(int i=1; i<n; i++)
//   {
//     if(arr[0] < arr[i])
//     {
//       arr[0] = arr[i];
//     }
//   }
//   printf("Largest element = %.2lf", arr[0]);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int a[10][10], transpose[10][10], r, c;
//   clrscr();
//   printf("Enter rows and columns : \n");
//   scanf("%d %d", &r, &c);
//   printf("\nEnter Matrix element : \n");
//   for(int i=0; i<r; i++)
//     for(int j=0; j<c; j++)
//     {
//       printf("Enter element a%d%d: ", i+1, j+1);
//       scanf("%d", &a[i][j]);
//     }
//     printf("Entered Matrix: \n");
//     for(int i=0; i<r; i++)
//     for(int j=0; j<c; j++)
//     {
//       printf("%d  ", a[i][j]);
//       if(j == c-1)
//       printf("\n");
//     }
//     for(int i=0; i<r; i++)
//     for(int j=0; j<c; j++)
//     {
//       transpose[j][i] = a[i][j];
//     }
//     printf("\nTranspose of the Matrix : \n");
//     for(int i=0; i<c; i++)
//     for(int j=0; j<r; j++)
//     {
//       printf("%d  ", transpose[i][j]);
//       if(j==r-1)
//       printf("\n");
//     }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   int ap[5];
//   clrscr();
//   printf("Enter element :\n");
//   for(int i=0; i<5; i++)
//   {
//     scanf("%d", ap + i);
//   }
//   printf("You entered :\n");
//   for(int i=0; i<5; i++)
//   {
//     printf("%d\n", *(ap + i));
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// int doWork(int a, int b, int *sum, int *prod, int *avg);
// void main()
// {
//   int a = 5, b = 3, sum, prod, avg;
//   doWork(a, b, &sum, &prod, &avg);
//   printf("Sum : %d + %d = %d\nProduct : %d X %d = %d\nAverage : (%d + %d) / 2 = %d", a, b, sum, a, b, prod, a, b, avg);
//   getch();
// }
// int doWork(int a, int b, int *sum, int *prod, int*avg)
// {
//   *sum = a + b;
//   *prod = a * b;
//   *avg = (a + b) / 2;
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//   char str[100], ch;
//   clrscr();
//   int count = 0;
//   printf("Enter a String : ");
//   fgets(str, sizeof(str), stdin);

//   printf("Enter a character to find its frequency : ");
//   scanf("%c", &ch);
//   for(int i=0; str[i] != '\0'; i++)
//   {
//     if(ch == str[i])
//     {
//       count++;
//     }
//   }
//   printf("Frequency of %c = %d", ch, count);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void salting(char password[]);
// void main()
// {
//   char password[100];
//   clrscr();
//   printf("Enter here :---\n");
//   printf("Password : ");
//   scanf("%s", password);
//   salting(password);
//   getch();
// }
// void salting(char password[])
// {
//   char salt[] = "123";
//   char newPass[200];

//   strcpy(newPass, password);
//   strcat(newPass, salt);
//   puts(newPass);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main()
// {
//   int str[5][50], temp[50];
//   clrscr();
//   printf("Enter 5 Words : \n");
//   for(int i=0; i<5; i++)
//   {
//     fgets(str[i], sizeof(str[i]), stdin);
//   }
//   for(int i=0; i<5; i++) {
//   for(int j = i + 1; j<5; j++)
//   {
//     if(strcmp(str[i], str[j]) > 0)
//     {
//       strcpy(temp, str[i]);
//       strcpy(str[i], str[j]);
//       strcpy(str[j], temp);
//     }
//   }
//   }
//   printf("\nIn Lexicographical order : \n");
//   for(int i=0; i<5; i++)
//   {
//     fputs(str[i], stdout);
//   }
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int countVowels(char str[]);
// void main()
// {
//   char str[] = "RohitKumarSharma";
//   clrscr();
//   printf("Vowels is : %d ", countVowels(str));
//   getch();
// }
// int countVowels(char str[]) {
//   int count = 0;
//   for(int i=0; str[i] != '\0';i++) {
//   if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//     count++;
//   }
//   return count;
// }

// #include<stdio.h>

// int main()
// {
//   int i, j, rows, space;
//   printf("Enter the number of rows : ");
//   scanf("%d", &rows);
//   for(i=rows; i>=1; i--) {
//     for(space = 0; space < rows -i; space++)
//     printf("  ");
//     for(j=i; j<=2*i-1; j++)
//     printf("* ");
//     for(j=0; j<i-1; j++)
//     printf("* ");
//     printf("\n");
//   }
//   return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// struct student {
//   char name[50];
//   int roll;
//   float marks;
// } s;
// void main()
// {
//   clrscr();
//   printf("Enter Information :-\n");
//   printf("Enter name : ");
//   fgets(s.name, sizeof(s.name), stdin);
//   printf("Enter Roll Number : ");
//   scanf("%d", &s.roll);
//   printf("Enter marks : ");
//   scanf("%f", &s.marks);
//   printf("Displaying Information :-\n");
//   printf("Name : ");
//   printf("%s", s.name);
//   printf("Roll Number : %d\n", s.roll);
//   printf("Marks : %.1f\n", s.marks);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// struct address {
//   int houseNo;
//   int block;
//   char city[50];
//   char state[100];
// };
// void main()
// {
//   clrscr();
//   struct address add[1];
//   printf("1.HouseNo.\n2.BlockNo.\n3.City\n4.State\n");
//   printf("Enter Information for Person 1 :-\n");
//   printf("Enter Here :---\n");
//   scanf("%d", &add[0].houseNo);
//   scanf("%d", &add[0].block);
//   scanf("%s", &add[0].city);
//   scanf("%s", &add[0].state);
//   printf("Displaying Information Person 1 :-\n");
//   printf("Address :---\n");
//   printf("House No. : %d\n", add[0].houseNo);
//   printf("Block No. : %d\n", add[0].block);
//   printf("City : %s\n", add[0].city);
//   printf("State : %s", add[0].state);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// struct vector {
//   int x;
//   int y;
// };
// void calcuSum(struct vector v1, struct vector v2, struct vector sum);
// void main()
// {
//   clrscr();
//   struct vector v1 = {4, 3};
//   struct vector v2 = {3, 4};
//   struct vector sum = {0};
//   calcuSum(v1, v2, sum);
//   getch();
// }
// void calcuSum(struct vector v1, struct vector v2, struct vector sum) {
//   sum.x = v1.x + v2.x;
//   sum.y = v1.y + v2.y;
//   printf("Sum of x is : %d\n", sum.x);
//   printf("Sum of y is : %d\n", sum.y);
// }

// #include<stdio.h>
// #include<conio.h>
// typedef struct BankAccount {
//   char name[50];
//   int accountNo;
// } acc;
// void main()
// {
//   clrscr();
//   acc acc1 = {"Rohit Kumar Sharma", 12345};
//   acc acc2 = {"Santosh Burnwal", 54321};

//   printf("\n\nDisplaying Account Detail :---\n\n");
//   printf("Person 1 Detail Here :---\n");
//   printf("Account Holder Name : %s\n", acc1.name);
//   printf("Account No. : %d\n", acc1.accountNo);
//   printf("Person 2 Detail Here :---\n");
//   printf("Account Holder Name : %s\n", acc2.name);
//   printf("Account No. : %d\n", acc2.accountNo);
//   getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     char sentence[100];
//     clrscr();
//     FILE *fptr;
//     fptr = fopen("program.txt", "w");
//     if(fptr == NULL) {
//         printf("Error!");
//         // exit(1);
//     }
//     printf("Enter a sentence :\n");
//     fgets(sentence, sizeof(sentence), stdin);
//     fprintf(fptr, "%s", sentence);
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     char c[100];
//     clrscr();
//     FILE *fptr;
//     if((fptr = fopen("program.txt", "r")) == NULL) {
//         printf("Error! File cannot be opened.");
//         exit(1);
//     }
//         fscanf(fptr, "%[^\n]", c);
//         printf("Data for the file : \n%s", c);
//         fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     float *ptr;
//     clrscr();
//     ptr = (float*) malloc(5*sizeof(float));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i=0; i<5; i++) {
//         printf("%.1f, ", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     clrscr();
//     ptr = (int *) calloc(5, sizeof(int));
//     printf("Enter a five number :\n");
//     for(int i=0; i<5; i++) {
//         scanf("%d", &ptr[i]);
//     }
//     for(int i=0; i<5; i++) {
//         printf("Number %d is %d\n", i, ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=rows; j++) {
//             if(i==1 || i==rows || j==1 || j==rows) {
//                 printf("#  ");
//             }
//             else {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
    
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int i, j, rows;
//     printf("Enter number of rows : ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++)
//     {
//         for(j=1; j<=rows; j++)
//         {
//             if(i == 1 || i == rows || j == 1 || j == rows)
//             {
//                 printf("#  ");
//             }
//             else
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, rows, space;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);
//     for(i=rows; i>=1; i--) {
//         for(space = 0; space < rows - i; space++)
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
//     int i, j, rows;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++) {
//         for(j=1; j<=rows; j++) {
//             if(i == 1 || i == rows || j == 1 || j == rows) {
//                 printf("#  ");
//             }
//             else {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>

// int main() {
//     int i, j;
//     char input, alphabet = 'A';
//     printf("Enter an upper char: ");
//     scanf("%c", &input);
//     for(i=1; i<=(input-'A'+1); i++) {
//         for(j=1; j<=i; j++) {
//             printf("%c ", alphabet);
//         }
//         alphabet++;
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, space, rows, k=0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++, k=0) {
//         for(space=1; space<=rows-i;space++) {
//             printf("  ");
//         }
//         while(k!=2*i-1) {
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
//     int i, s, r, k=0, c=0, c1=0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     for(i=1; i<=r; i++) {
//         for(s=1; s<=r-i; s++) {
//             printf("  ");
//             c++;
//         }
//         while(k!=2*i-1) {
//             if(c<=r-1) {
//                 printf("%d ", i+k);
//                 c++;
//             }
//             else {
//                 c1++;
//                 printf("%d ", (i+k-2*c1));
//             }
//             k++;
//         }
//         c1=c=k=0;
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i, j, c = 0, s, r;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     for(i=0; i<r; i++) {
//         for(s=1; s<=r-i; s++) 
//             printf("  ");
//             for(j=0; j<=i; j++) {
//                 if(j==0||i==0)
//                 c=1;
//                 else
//                 c = c*(i-j+1)/j;
//                 printf("%4d", c);
//             }
//         printf("\n");
//     }
//     getch();
// }

// #include<stdio.h>

// int main() {
//     int i, j, s, r, c=0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("\n     Pascal's Triangle:- \n\n");
//     for(i=0; i<=r; i++) {
//         for(s=1; s<=r-i; s++)
//         printf("  ");
//         for(j=0; j<=i; j++) {
//             if(j==0 || i==0)
//             c = 1;
//             else
//             c = c*(i-j+1) / j;
//             printf("%4d", c);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

// #include<stdio.h>

// int main() {
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
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int n, rem, ori, rev = 0;
//     printf("Enter an integer : ");
//     scanf("%d", &n);
//     ori = n;
//     while(n != 0) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n /= 10;
//     }
//     if(ori == rev) {
//         printf("%d is a palindrome Number.\n", ori);
//     }
//     else {
//         printf("%d is not a palindrome Number.\n", ori);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int arr[30], i, j, n, t;
//     printf("Enter the value of N: ");
//     scanf("%d", &n);
//     printf("Enter the %d Number: \n", n);
//     for(i=0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<n; i++) {
//         for(j=i+1; j<n; j++) {
//             if(arr[i] > arr[j]) {
//                 t = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = t;
//             }
//         }
//     }
//     printf("Ascending Order :  ");
//     for(i=0; i<n; i++) {
//         printf("%d   ", arr[i]);
//     }
//     return 0;
// }