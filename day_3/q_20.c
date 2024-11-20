#include <stdio.h>

int main() {
    char correctPassword[] = "correctPassword";
    char enteredPassword[20];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", enteredPassword);

        // Manual password comparison
        int isCorrect = 1;
        for (int i = 0; correctPassword[i] != '\0' || enteredPassword[i] != '\0'; i++) {
            if (correctPassword[i] != enteredPassword[i]) {
                isCorrect = 0;
                break;
            }
        }

        if (isCorrect) {
            printf("Access Granted\n");
            return 0;
        } else {
            printf("Incorrect password. Try again.\n");
        }
        attempts++;
    }

    printf("Access Denied. Too many attempts.\n");
    return 0;
}
