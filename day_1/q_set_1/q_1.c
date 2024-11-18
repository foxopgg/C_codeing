#include <stdio.h>

int main() {
    float temperatures[7], total = 0, average;
    printf("Enter temperatures for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%f", &temperatures[i]);
        total += temperatures[i];
    }
    average = total / 7;
    printf("Average temperature = %.2f\n", average);
    return 0;
}
