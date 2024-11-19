#include <stdio.h>

int main() {
    int a, b, c, odd_sum = 0, even_sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 != 0) odd_sum += a; else even_sum += a;
    if (b % 2 != 0) odd_sum += b; else even_sum += b;
    if (c % 2 != 0) odd_sum += c; else even_sum += c;

    if (odd_sum > even_sum) {
        printf("Odd Sum Greater\n");
    } else {
        printf("Even Sum Greater\n");
    }
    return 0;
}
