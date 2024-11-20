#include <stdio.h>

int main() {
    printf("Odd numbers from 1 to 20: ");
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
