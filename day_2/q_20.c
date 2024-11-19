#include <stdio.h>
int main() {
    double purchase, discount;
    printf("Enter purchase amount: ");
    scanf("%lf", &purchase);

    if (purchase >= 5000) {
        discount = purchase * 0.20;
    } else if (purchase >= 2000) {
        discount = purchase * 0.10;
    } else {
        discount = 0;
    }
    printf("Output: Discount=₹%.2lf\n", discount);
    return 0;
}
