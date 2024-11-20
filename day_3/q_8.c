#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= number);

    printf("Factorial of %d is: %d\n", number, factorial);
    return 0;
}
