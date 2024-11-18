#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible: True\n");
    } else {
        printf("Eligible: False\n");
    }
    return 0;
}
