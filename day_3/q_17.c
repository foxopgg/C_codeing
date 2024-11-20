#include <stdio.h>

int main() {
    int items = 0, limit = 10, add;

    while (items < limit) {
        printf("Enter the number of items to add: ");
        scanf("%d", &add);

        if (items + add > limit) {
            printf("Cannot add %d items. Cart is full.\n", add);
            break;
        }

        items += add;
        printf("Items in cart: %d\n", items);

        if (items == limit) {
            printf("Cart is full. Cannot add more items.\n");
            break;
        }
    }

    return 0;
}
