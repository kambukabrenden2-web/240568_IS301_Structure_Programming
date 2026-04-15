/*
Author: Brenden Kambuka
Student ID: 240568
Date: 17/03/2026
Lab 2 - IS301 Structured Programming
Algorithm included at the top
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess();
void printSuccess();
void printFailure();
void printSorry(int number);

int main() {
    int randomNumber, guess;
    int maxAttempts = 5;
    int i;

    // Initialize random number generator
    srand(time(0));
    randomNumber = rand() % 20 + 1; // Random number between 1 and 20

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // Loop for 5 attempts
    for(i = 0; i < maxAttempts; i++) {
        guess = getGuess();

        if(guess == randomNumber) {
            printSuccess();
            return 0; // Terminate program on success
        } 
        else if(guess < randomNumber) {
            printf("Your guess is low. Try again:\n");
        } 
        else {
            printf("Your guess is high. Try again:\n");
        }
    }

    // If user failed after 5 attempts
    printSorry(randomNumber);

    return 0;
}

// Function to get the user's guess
int getGuess() {
    int input;
    printf("Enter your guess: ");
    scanf("%d", &input);
    return input;
}

// Function to print success message
void printSuccess() {
    printf("Congratulations! You did it.\n");
}

// Function to print failure hint (optional)
void printFailure() {
    printf("Incorrect guess. Try again.\n");
}

// Function to print sorry message
void printSorry(int number) {
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}