#include <stdio.h>

int main() {
    char storedPassword[] = "1234";
    char enteredPassword[50];
    int isMatch = 1;  

    printf("Enter password: ");
    scanf("%s", enteredPassword);

    for (int i = 0; storedPassword[i] != '\0' || enteredPassword[i] != '\0'; i++) {
        if (storedPassword[i] != enteredPassword[i]) {
            isMatch = 0; 
            break;
        }
    }

    if (isMatch) {
        printf("Output: Access Granted\n");
    } else {
        printf("Output: Access Denied\n");
    }

    return 0;
}
