#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
