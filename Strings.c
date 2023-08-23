// #include<stdio.h>

// int main() {
//     char name[] = {'R','O','H','I','T','\0'};
//     char class[] = {'C','O','D','E','R','S','H','A','R','M','A','\0'};

//     char name[] = {'R','O','H','I','T','\0'};
//     char name[] = "ROHIT";

//     char class[] = {'C','O','D','E','R','S','H','A','R','M','A'};
//     char class[] = "CODER SHARMA";
//     return 0;
// }

/* Practice Qs 47
Create a string firstName & lastName to store details of user & print all the character
using a loop. */
// #include<stdio.h>

// void printString(char arr[]);
// int main() {
//     char firstName[] = "Rohit";
//     char lastName[] = "Sharma";

//     printString(firstName);
//     printString(lastName);
//     return 0;
// }
// void printString(char arr[]) {
//     for(int i=0; arr[i] != 0; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// int main() {
    // char name[] = "Rohit";
    // printf("%s", name);

    // char name[50];
    // printf("Enter your name : ");
    // scanf("%s", &name);
    // printf("Your name is %s", name);

    /* Practice Qs 48
     (i.) Ask the user to enter their firstName & print it back to them.
     (ii.) Also try this with their fullName. */
                //  (i.)
    // char firstName[50];
    // printf("Enter your first Name : ");
    // scanf("%s", &firstName);
    // printf("Your name is %s", firstName);
               // (ii.)
    // char fullName[100];
    // printf("Enter your full Name : ");
    // scanf("%s", &fullName);
    // printf("Your name is %s", fullName);  // // This program is incorrect.

    // char name[50];
    // gets(name);
    // puts(name);

    // char fullName[100];
    // fgets(fullName, 100, stdin);
    // puts(fullName);

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    // char *canChange = "Hello world";
    // puts(canChange);
    // canChange = "Hello";
    // puts(canChange);

    // char cannotChange[] = "Hello world";
    // puts(cannotChange);
//     return 0;
// }

/* Practice Qs 49
Make a program that inputs user's name & prints its length. */
// #include<stdio.h>

// int printlength(char arr[]);
// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Length is : %d", printlength(name));
//     return 0;
// }
// int printlength(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++) {
//         count++;
//     }
//     return count-1 ;
// }

// #include<stdio.h>
// #include<string.h>

// int main() {
    // char name[] = "Rohitkumarsharma";
    // int length = strlen(name);
    // printf("length is : %d", length);

    // char name[100];
    // fgets(name, 100, stdin);
    // int length = strlen(name);
    // printf("Length is : %d", length-1);

    // char firstName[] = "Abbay";
    // char secondName[] = "Rohit";
    // strcpy(firstName, secondName);
    // puts(firstName);

    // char Name[100] = "Rohit ";
    // char lastName[] = "Kumar";
    // strcat(Name, lastName);
    // puts(Name);

    // char firststr[] = "Apple";
    // char secstr[] = "Banana";
    // printf("%d\n", strcmp(firststr, secstr));

    // char firststr[] = "Banana";
    // char secstr[] = "Apple";
    // printf("%d\n", strcmp(firststr, secstr));

    // char firststr[] = "Program";
    // char secstr[] = "Program";
    // printf("%d\n", strcmp(firststr, secstr));

    /* Practice Qs 50
    Take a string input from the user using %c. */
    // char str[100];
    // char ch;
    // int i=0;
    // while(ch != '\n') {
    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    // str[i] = '\0';
    // puts(str);
//     return 0;
// }

/* Practice Qs 51
Salting 
       Find the salted form of a password entered by user if the salt "123" & added at 
       the end. */
    //    #include<stdio.h>
    //    #include<string.h>

    //    void salting(char password[]);
    //    int main() {
    //     char password[100];
    //     scanf("%s", password);

    //     salting(password);
    //     return 0;
    //    }
    //    void salting(char password[]) {
    //     char salt[] = "123@82";
    //     char newPass[200];

    //     strcpy(newPass, password);
    //     strcat(newPass, salt);
    //     puts(newPass);
    //    }

    /* Practice Qs 52
    Write a function named slice, which takes a string & returns a sliced string from 
    index n to m. */
    // #include<stdio.h>
    // #include<string.h>

    // void slice(char str[], int n, int m);
    // int main() {
    //     char str[] = "Rohitsharma";
    //     slice(str,3,6);
    //     return 0;
    // }
    // void slice(char str[], int n, int m) {
    //     char newstr[200];
    //     int j = 0;
    //     for(int i=n; i<=m; i++, j++) {
    //         newstr[j] = str[i];
    //     }
    //     newstr[j] = '\0';
    //     puts(newstr);
    // }

    /* Practice Qs 53
    Write a function to count the occurrence of vowels in a string. */
    // #include<stdio.h>
    // #include<string.h>

    // int countvowels(char str[]);
    // int main() {
    //     char str[] = "RohitSharma";
    //     printf("Vowels is : %d", countvowels(str));
    //     return 0;
    // }
    // int countvowels(char str[]) {
    //     int count = 0;
    //     for(int i=0; str[i] != '\0'; i++) {
    //         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    //         count++;
    //     }
    //     return count;
    // }

    /* Practice Qs 54
    Check if a given character is present in a string or not. */
    // #include<stdio.h>
    // #include<string.h>

    // void checkchar(char str[], char ch);
    // int main() {
    //     char str[] = "Rohitshara";
    //     char ch = 'R';
    //     checkchar(str, ch);
    //     return 0;
    // }
    // void checkchar(char str[], char ch) {
    //     for(int i=0; str[i] != '\0'; i++) {
    //         if(str[i] == ch) {
    //             printf("Character is persent!");
    //             return;
    //         }
    //     }
    //     printf("Character is Not persent!");
    // }

    // #include<stdio.h>

    // void printstring(char str[]);
    // int main() {
    //     char firstName[] = "Rohit ";
    //     char lastName[] = "Kumar";

    //     printstring(firstName);
    //     printstring(lastName);
    //     return 0;
    // }
    // void printstring(char str[]) {
    //     for(int i=0; str[i] != '\0'; i++) {
    //         printf("%c", str[i]);
    //     }
    //     printf("\n");
    // }

    // #include<stdio.h>

    // int main() {
        // char firstName[100];
        // printf("Enter your first name : ");
        // scanf("%s", firstName);
        // printf("Your name is %s", firstName); 

        // char fullName[100];
        // gets(fullName);      //  gets ----> Gets sntax is a dengeours
        // puts(fullName);

        // char fullName[100];
        // fgets(fullName, 100, stdin);
        // puts(fullName);

        // char *canChange = "Hello Rohit";
        // puts(canChange);
        // canChange = "Hello Rohit Kumar";
        // puts(canChange);

        // char cannotChange[] = "Hello Rohit";
        // puts(cannotChange);
        // cannotChange[50] = "Hello Rohit Kumar";
        // puts(cannotChange);
    //     return 0;
    // }

    // #include<stdio.h>

    // int printlength(char str[]);
    // int main() {
    //     char Name[100];
    //     fgets(Name, 100, stdin);
    //     printf("Your name length is : %d", printlength(Name));
    //     return 0;
    // }
    // int printlength(char str[]) {
    //     int count = 0;
    //     for(int i=0; str[i] != '\0'; i++) {
    //         count++;
    //     }
    //     return count-1;
    // }

    // #include<stdio.h>
    // #include<string.h>

    // int main() {
        // char length[] = "RohitKumar";
        // int Name = strlen(length);
        // printf("Length is : %d", Name);

        // char firstName[] = "Abbay";
        // char secondName[] = "Rohit";

        // strcpy(firstName, secondName);
        // puts(firstName);

        // char firstName[100] = "Rohit ";
        // char secondName[] = "Kumar";

        // strcat(firstName, secondName);
        // puts(firstName);

        // char str1[] = "Apple";
        // char str2[] = "Apple";
        // printf("%d\n", strcmp(str1, str2));

        // char strone[] = "Banana";
        // char strtwo[] = "Apple";
        // printf("%d\n", strcmp(strone, strtwo));

        // char stro[] = "Apple";
        // char strt[] = "Banana";
        // printf("%d\n", strcmp(stro, strt));

        // char character[100];
        // char ch;
        // int i = 0;
        // while(ch != '\n') {
        //     scanf("%c", &ch);
        //     character[i] = ch;
        //     i++;
        // }
        // character[i] = '\0';
        // puts(character);
    //     return 0;
    // }

    // #include<stdio.h>
    // #include<string.h>

    // void salting(char Password[]);
    // int main() {
    //     char password[100];
    //     scanf("%s", password);

    //     salting(password);
    //     return 0;
    // }
    // void salting(char Password[]) {
    //     char salt[] = "123";
    //     char newpass[200];

    //     strcpy(newpass, Password);
    //     strcat(newpass, salt);
    //     puts(newpass);

    // }

    // #include<stdio.h>
    // #include<string.h>

    // void slice(char arr[], int n, int m);
    // int main() {
    //     char Name[] = "RohitKumar";
    //     slice(Name, 3, 6);
    //     return 0;
    // }
    // void slice(char arr[], int n, int m) {
    //     char newarr[200];
    //     char j = 0;
    //     for(int i=n; i<=m; i++, j++) {
    //         newarr[j] = arr[i];
    //     }
    //     newarr[j] = '\0';
    //     puts(newarr);
    // }

    // #include<stdio.h>
    // #include<string.h>

    // int countvowel(char arr[]);
    // int main() {
    //     char Name[] = "Abbay sharma";
    //     printf("Vowels is : %d", countvowel(Name));
    //     return 0;
    // }
    // int countvowel(char arr[]) {
    //     int count = 0;
    //     for(int i=0; arr[i] != '\0'; i++) {
    //         if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
    //         arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
    //         count++;
    //     }
    //     return count;
    // }

    #include<stdio.h>
    #include<string.h>

    void checkchar(char arr[], char ch);
    int main() {
        char Name[] = "Rohit Kumar";
        char ch = 'R';
        checkchar(Name, ch);
        return 0;
    }
    void checkchar(char arr[], char ch) {
        for(int i=0; arr[i] != '\0'; i++) {
            if(arr[i] == ch){
                printf("character is persent!");
                return;
            }
        }
        printf("character is Not persent!");
    }