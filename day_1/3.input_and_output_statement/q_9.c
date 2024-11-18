#include <stdio.h>

int main() {
    float usd, eur;
    const float exchange_rate = 0.85;

    printf("Enter amount in USD: ");
    scanf("%f", &usd);

    eur = usd * exchange_rate;
    printf("Equivalent in EUR: %.2f\n", eur);

    return 0;
}
