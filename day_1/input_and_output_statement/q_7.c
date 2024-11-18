#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("Time: %d hours and %d minutes\n", hours, remaining_minutes);
    return 0;
}
