#include <stdio.h>
int main() {
    double cp, sp;
    printf("Enter cost price: ");
    scanf("%lf", &cp);
    printf("Enter selling price: ");
    scanf("%lf", &sp);

    if (sp > cp) {
        printf("Output: Profit\n");
    } else {
        printf("Output: Loss\n");
    }
    return 0;
}
