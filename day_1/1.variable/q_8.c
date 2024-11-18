#include <stdio.h>

int main() {
    double initialBalance, deposit, withdrawal;
    printf("Enter initial balance: ");
    scanf("%lf", &initialBalance);
    printf("Enter deposit amount: ");
    scanf("%lf", &deposit);
    printf("Enter withdrawal amount: ");
    scanf("%lf", &withdrawal);

    double finalBalance = initialBalance + deposit - withdrawal;
    printf("Final balance = %.2lf\n", finalBalance);
    return 0;
}
