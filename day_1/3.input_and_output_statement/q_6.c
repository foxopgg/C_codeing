#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    return 0;
}
    