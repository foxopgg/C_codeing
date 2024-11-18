#include <stdio.h>

int main() {
    int apples, bananas, oranges;
    int apples_sold, bananas_sold, oranges_sold;

    printf("Enter initial stock of apples, bananas, oranges: ");
    scanf("%d %d %d", &apples, &bananas, &oranges);
    
    printf("Enter sold quantities of apples, bananas, oranges: ");
    scanf("%d %d %d", &apples_sold, &bananas_sold, &oranges_sold);

    apples -= apples_sold;
    bananas -= bananas_sold;
    oranges -= oranges_sold;

    printf("Remaining stock (apples = %d, bananas = %d, oranges = %d)\n", apples, bananas, oranges);
    return 0;
}
