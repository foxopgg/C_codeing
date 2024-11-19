#include <stdio.h>

int main() {
    char password[50];
    int length = 0, hasUpper = 0, hasLower = 0, hasDigit = 0;
    printf("Enter password: ");
    scanf("%s", password);
    for (int i = 0; password[i] != '\0'; i++) {
        length++;  
        if (password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1; 
        if (password[i] >= 'a' && password[i] <= 'z') hasLower = 1;  
        if (password[i] >= '0' && password[i] <= '9') hasDigit = 1; 
    }
    if (length >= 8 && hasUpper && hasLower && hasDigit) {
        printf("Output: Strong Password\n");
    } else {
        printf("Output: Weak Password\n");
    }

    return 0;
}
