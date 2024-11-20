#include <stdio.h>

int main() {
    int guess, number = 10;

    while (1) {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess == number) {
            printf("Correct! The number is %d.\n", number);
            break;
        } else {
            printf("Wrong guess. Try again.\n");
        }
    }
    return 0;
}
