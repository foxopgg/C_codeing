#include <stdio.h>

int main() {
    int choice, num1, num2, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                }
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
