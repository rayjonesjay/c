#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, tries = 0;
    const int max_tries = 3;

    // Seed random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number (between 1 and 100):\n");

    while (tries < max_tries) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == number) {
            printf("Congratulations! You guessed the number.\n");
            return 0;
        } else {
            printf("Wrong guess. Try again.\n");
        }

        tries++;
    }

    printf("Sorry, you've used all your tries. The number was %d.\n", number);
    return 0;
}
