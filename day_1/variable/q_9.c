#include <stdio.h>

int main() {
    int startingTime, interval = 60;
    printf("Enter starting time in seconds: ");
    scanf("%d", &startingTime);

    printf("Timer values: ");
    for (int i = startingTime; i >= 0; i -= interval) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
