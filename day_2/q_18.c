#include <stdio.h>
int main() {
    float bmi;
    printf("Enter BMI: ");
    scanf("%f", &bmi);

    if (bmi < 18.5) {
        printf("Output: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Output: Normal weight\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Output: Overweight\n");
    } else {
        printf("Output: Obese\n");
    }
    return 0;
}
