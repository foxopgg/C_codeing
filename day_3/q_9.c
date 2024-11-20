#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "pass123";
    char enteredPassword[20];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", enteredPassword);

        if (strcmp(correctPassword, enteredPassword) == 0) {
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
