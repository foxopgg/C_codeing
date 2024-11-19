#include <stdio.h>
int main() {
    int age;
    double income;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%lf", &income);

    if (age >= 21 && age <= 60 && income > 30000) {
        printf("Output: Eligible\n");
    } else {
        printf("Output: Not Eligible\n");
    }
    return 0;
}
