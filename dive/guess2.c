#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min_range = 1;
    int max_range = 100;
    int num_attempts = 0;
    int num_guesses = 0;
    int target_number = rand() % (max_range - min_range + 1) + min_range;
    int guess;

    printf("Welcome to the Challenging Guessing Game!\n");
    printf("I've picked a number between %d and %d. Try to guess it!\n", min_range, max_range);

    do {
        printf("Guess #%d (between %d and %d): ", ++num_guesses, min_range, max_range);
        scanf("%d", &guess);
        num_attempts++;

        if (guess < target_number) {
            printf("Too low! Try again.\n");
            min_range = guess + 1;
        } else if (guess > target_number) {
            printf("Too high! Try again.\n");
            max_range = guess - 1;
        }
    } while (guess != target_number);

    printf("Congratulations! You guessed the number %d correctly in %d attempts.\n", target_number, num_attempts);

    return 0;
}

