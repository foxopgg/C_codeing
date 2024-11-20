#include <stdio.h>

int main() {
    int numbers[10], sum = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] < 0) {
            continue; // Skip negative numbers
        }
        sum += numbers[i];
    }

    printf("The sum of positive numbers is: %d\n", sum);
    return 0;
}
