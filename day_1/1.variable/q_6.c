#include <stdio.h>

int main() {
    int n, highest;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter the scores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if (i == 0 || scores[i] > highest) {
            highest = scores[i];
        }
    }
    printf("Highest score = %d\n", highest);
    return 0;
}
