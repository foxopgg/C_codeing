#include <stdio.h>

int main() {
    int n, firstMultiple = -1;

    printf("Enter the size of the series: ");
    scanf("%d", &n);

    int series[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &series[i]);
        if (series[i] % 7 == 0) {
            firstMultiple = series[i];
            break;
        }
    }

    if (firstMultiple != -1) {
        printf("The first multiple of 7 is: %d\n", firstMultiple);
    } else {
        printf("No multiple of 7 found.\n");
    }

    return 0;
}
