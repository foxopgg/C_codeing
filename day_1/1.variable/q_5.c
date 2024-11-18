#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    float distance;

    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate the square root manually using a simple iterative method (Newton's method)
    int dx = x2 - x1;
    int dy = y2 - y1;
    float sum_of_squares = (dx * dx) + (dy * dy);

    // Square root calculation (Newton's method)
    float approx = sum_of_squares / 2.0;
    float better_approx = (approx + (sum_of_squares / approx)) / 2.0;
    while (approx - better_approx > 0.00001 || better_approx - approx > 0.00001) {
        approx = better_approx;
        better_approx = (approx + (sum_of_squares / approx)) / 2.0;
    }
    distance = better_approx;

    printf("Distance = %.1f\n", distance);
    return 0;
}
