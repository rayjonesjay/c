#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    const int secret_number = rand() % 100 + 1; // Random number between 1 and 100
    int guess, num_attempts = 0;
    const int max_attempts = 7; // Maximum number of attempts allowed

    printf("Welcome to the Guessing Game!\n");
    printf("I've picked a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        num_attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly in %d attempts.\n", secret_number, num_attempts);
            return 0;
        }

    } while (num_attempts < max_attempts);

    printf("Sorry, you've used all your attempts. The number was %d.\n", secret_number);
    return 0;
}
