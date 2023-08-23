/*
                         project 1 : Number guessing game.
 Problem :--> This is going to be fun! we will write a program that generates a radom 
 number and asks the plyear to guess it. It the player's guess is highter than the actuall
 number the program displays "Lower number please!". Similarly displays user's guess is 
 too low, the program prints "Highter number please!".
  when the user guesses the correct number, the program displays the number of guesses
  the player used to arrive at the number.

  Hint -----> use loops
                        use a random number generates.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, nguesses = 1;
    srand(time(0));
    num = rand() % 100 + 1;     // Generates random number between 1 to 100.
    //printf("%d is a random number.\n", num);
    // Keep running the loop until the number is gussed.
    do{
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if(guess>num){
            printf("LOWER NUMBER PLEASE!\n");
        }
        else if(guess<num){
            printf("HIGHTER NUMBER PLEASE!\n");
        }
        else{
            printf("You are guess it in %d attempts.\n", nguesses);
        }
        nguesses++;
    }while(guess!=num);
    return 0;
}