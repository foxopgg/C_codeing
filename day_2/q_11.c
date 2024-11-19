#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Division by Zero Error\n");
            }
            break;
        default: printf("Invalid Operator\n"); break;
    }
    return 0;
}
