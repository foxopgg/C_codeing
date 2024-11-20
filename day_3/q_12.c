#include <stdio.h>

int main() {
    int correctNumber = 4, guess, attempts = 0;

    printf("Guess the number (You have 5 attempts):\n");
    while (attempts < 5) {
        scanf("%d", &guess);
        attempts++;

        if (guess == correctNumber) {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            return 0;
        } else {
            printf("Wrong guess. Try again.\n");
        }
    }

    printf("You've used all attempts. Game over!\n");
    return 0;
}
