#include <stdio.h>

int main() {
    double amount, eurRate = 0.85, gbpRate = 0.75, jpyRate = 110.0;
    printf("Enter amount in USD: ");
    scanf("%lf", &amount);

    printf("Converted amounts: %.2lf EUR, %.2lf GBP, %.2lf JPY\n", 
           amount * eurRate, amount * gbpRate, amount * jpyRate);
    return 0;
}
