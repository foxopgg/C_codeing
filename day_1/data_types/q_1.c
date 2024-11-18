#include <stdio.h>

int main() {
    double principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);

    double simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2lf\n", simpleInterest);
    return 0;
}
