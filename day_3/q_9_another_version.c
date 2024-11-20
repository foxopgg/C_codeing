#include <stdio.h>
/// this version is the same as the 9th one but without string lib 
int main() {
    char correctPassword[] = "pass123";
    char enteredPassword[20];
    int attempts = 0, isCorrect;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", enteredPassword);
        isCorrect = 1; 
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

    printf("Account Locked\n");
    return 0;
}
