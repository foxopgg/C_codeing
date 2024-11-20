#include <stdio.h>

int main() {
    printf("Multiples of 3 (excluding multiples of 5) from 1 to 30: ");
    for (int i = 1; i <= 30; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
